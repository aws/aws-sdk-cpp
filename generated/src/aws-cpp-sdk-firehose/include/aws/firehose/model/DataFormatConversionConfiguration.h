/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/SchemaConfiguration.h>
#include <aws/firehose/model/InputFormatConfiguration.h>
#include <aws/firehose/model/OutputFormatConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Firehose
{
namespace Model
{

  /**
   * <p>Specifies that you want Firehose to convert data from the JSON format to the
   * Parquet or ORC format before writing it to Amazon S3. Firehose uses the
   * serializer and deserializer that you specify, in addition to the column
   * information from the Amazon Web Services Glue table, to deserialize your input
   * data from JSON and then serialize it to the Parquet or ORC format. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/firehose/latest/dev/record-format-conversion.html">Firehose
   * Record Format Conversion</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DataFormatConversionConfiguration">AWS
   * API Reference</a></p>
   */
  class DataFormatConversionConfiguration
  {
  public:
    AWS_FIREHOSE_API DataFormatConversionConfiguration() = default;
    AWS_FIREHOSE_API DataFormatConversionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DataFormatConversionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the Amazon Web Services Glue Data Catalog table that contains the
     * column information. This parameter is required if <code>Enabled</code> is set to
     * true.</p>
     */
    inline const SchemaConfiguration& GetSchemaConfiguration() const { return m_schemaConfiguration; }
    inline bool SchemaConfigurationHasBeenSet() const { return m_schemaConfigurationHasBeenSet; }
    template<typename SchemaConfigurationT = SchemaConfiguration>
    void SetSchemaConfiguration(SchemaConfigurationT&& value) { m_schemaConfigurationHasBeenSet = true; m_schemaConfiguration = std::forward<SchemaConfigurationT>(value); }
    template<typename SchemaConfigurationT = SchemaConfiguration>
    DataFormatConversionConfiguration& WithSchemaConfiguration(SchemaConfigurationT&& value) { SetSchemaConfiguration(std::forward<SchemaConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the deserializer that you want Firehose to use to convert the
     * format of your data from JSON. This parameter is required if
     * <code>Enabled</code> is set to true.</p>
     */
    inline const InputFormatConfiguration& GetInputFormatConfiguration() const { return m_inputFormatConfiguration; }
    inline bool InputFormatConfigurationHasBeenSet() const { return m_inputFormatConfigurationHasBeenSet; }
    template<typename InputFormatConfigurationT = InputFormatConfiguration>
    void SetInputFormatConfiguration(InputFormatConfigurationT&& value) { m_inputFormatConfigurationHasBeenSet = true; m_inputFormatConfiguration = std::forward<InputFormatConfigurationT>(value); }
    template<typename InputFormatConfigurationT = InputFormatConfiguration>
    DataFormatConversionConfiguration& WithInputFormatConfiguration(InputFormatConfigurationT&& value) { SetInputFormatConfiguration(std::forward<InputFormatConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the serializer that you want Firehose to use to convert the format
     * of your data to the Parquet or ORC format. This parameter is required if
     * <code>Enabled</code> is set to true.</p>
     */
    inline const OutputFormatConfiguration& GetOutputFormatConfiguration() const { return m_outputFormatConfiguration; }
    inline bool OutputFormatConfigurationHasBeenSet() const { return m_outputFormatConfigurationHasBeenSet; }
    template<typename OutputFormatConfigurationT = OutputFormatConfiguration>
    void SetOutputFormatConfiguration(OutputFormatConfigurationT&& value) { m_outputFormatConfigurationHasBeenSet = true; m_outputFormatConfiguration = std::forward<OutputFormatConfigurationT>(value); }
    template<typename OutputFormatConfigurationT = OutputFormatConfiguration>
    DataFormatConversionConfiguration& WithOutputFormatConfiguration(OutputFormatConfigurationT&& value) { SetOutputFormatConfiguration(std::forward<OutputFormatConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defaults to <code>true</code>. Set it to <code>false</code> if you want to
     * disable format conversion while preserving the configuration details.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline DataFormatConversionConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    SchemaConfiguration m_schemaConfiguration;
    bool m_schemaConfigurationHasBeenSet = false;

    InputFormatConfiguration m_inputFormatConfiguration;
    bool m_inputFormatConfigurationHasBeenSet = false;

    OutputFormatConfiguration m_outputFormatConfiguration;
    bool m_outputFormatConfigurationHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws

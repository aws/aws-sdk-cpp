/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/JSONMappingParameters.h>
#include <aws/kinesisanalyticsv2/model/CSVMappingParameters.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>When you configure a SQL-based Kinesis Data Analytics application's input at
   * the time of creating or updating an application, provides additional mapping
   * information specific to the record format (such as JSON, CSV, or record fields
   * delimited by some delimiter) on the streaming source.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/MappingParameters">AWS
   * API Reference</a></p>
   */
  class MappingParameters
  {
  public:
    AWS_KINESISANALYTICSV2_API MappingParameters();
    AWS_KINESISANALYTICSV2_API MappingParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API MappingParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides additional mapping information when JSON is the record format on the
     * streaming source.</p>
     */
    inline const JSONMappingParameters& GetJSONMappingParameters() const{ return m_jSONMappingParameters; }

    /**
     * <p>Provides additional mapping information when JSON is the record format on the
     * streaming source.</p>
     */
    inline bool JSONMappingParametersHasBeenSet() const { return m_jSONMappingParametersHasBeenSet; }

    /**
     * <p>Provides additional mapping information when JSON is the record format on the
     * streaming source.</p>
     */
    inline void SetJSONMappingParameters(const JSONMappingParameters& value) { m_jSONMappingParametersHasBeenSet = true; m_jSONMappingParameters = value; }

    /**
     * <p>Provides additional mapping information when JSON is the record format on the
     * streaming source.</p>
     */
    inline void SetJSONMappingParameters(JSONMappingParameters&& value) { m_jSONMappingParametersHasBeenSet = true; m_jSONMappingParameters = std::move(value); }

    /**
     * <p>Provides additional mapping information when JSON is the record format on the
     * streaming source.</p>
     */
    inline MappingParameters& WithJSONMappingParameters(const JSONMappingParameters& value) { SetJSONMappingParameters(value); return *this;}

    /**
     * <p>Provides additional mapping information when JSON is the record format on the
     * streaming source.</p>
     */
    inline MappingParameters& WithJSONMappingParameters(JSONMappingParameters&& value) { SetJSONMappingParameters(std::move(value)); return *this;}


    /**
     * <p>Provides additional mapping information when the record format uses
     * delimiters (for example, CSV).</p>
     */
    inline const CSVMappingParameters& GetCSVMappingParameters() const{ return m_cSVMappingParameters; }

    /**
     * <p>Provides additional mapping information when the record format uses
     * delimiters (for example, CSV).</p>
     */
    inline bool CSVMappingParametersHasBeenSet() const { return m_cSVMappingParametersHasBeenSet; }

    /**
     * <p>Provides additional mapping information when the record format uses
     * delimiters (for example, CSV).</p>
     */
    inline void SetCSVMappingParameters(const CSVMappingParameters& value) { m_cSVMappingParametersHasBeenSet = true; m_cSVMappingParameters = value; }

    /**
     * <p>Provides additional mapping information when the record format uses
     * delimiters (for example, CSV).</p>
     */
    inline void SetCSVMappingParameters(CSVMappingParameters&& value) { m_cSVMappingParametersHasBeenSet = true; m_cSVMappingParameters = std::move(value); }

    /**
     * <p>Provides additional mapping information when the record format uses
     * delimiters (for example, CSV).</p>
     */
    inline MappingParameters& WithCSVMappingParameters(const CSVMappingParameters& value) { SetCSVMappingParameters(value); return *this;}

    /**
     * <p>Provides additional mapping information when the record format uses
     * delimiters (for example, CSV).</p>
     */
    inline MappingParameters& WithCSVMappingParameters(CSVMappingParameters&& value) { SetCSVMappingParameters(std::move(value)); return *this;}

  private:

    JSONMappingParameters m_jSONMappingParameters;
    bool m_jSONMappingParametersHasBeenSet = false;

    CSVMappingParameters m_cSVMappingParameters;
    bool m_cSVMappingParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws

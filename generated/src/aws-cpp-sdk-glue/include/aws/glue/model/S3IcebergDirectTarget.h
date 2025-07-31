/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/TargetFormat.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/DirectSchemaChangePolicy.h>
#include <aws/glue/model/AutoDataQuality.h>
#include <aws/glue/model/IcebergTargetCompressionType.h>
#include <aws/glue/model/GlueSchema.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a target that writes to an Iceberg data source in Amazon
   * S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3IcebergDirectTarget">AWS
   * API Reference</a></p>
   */
  class S3IcebergDirectTarget
  {
  public:
    AWS_GLUE_API S3IcebergDirectTarget() = default;
    AWS_GLUE_API S3IcebergDirectTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3IcebergDirectTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the unique identifier for the Iceberg target node in your data
     * pipeline.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    S3IcebergDirectTarget& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the single input source that provides data to this Iceberg
     * target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<Aws::String>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<Aws::String>>
    S3IcebergDirectTarget& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Aws::String>
    S3IcebergDirectTarget& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the columns used to partition the Iceberg table data in S3.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetPartitionKeys() const { return m_partitionKeys; }
    inline bool PartitionKeysHasBeenSet() const { return m_partitionKeysHasBeenSet; }
    template<typename PartitionKeysT = Aws::Vector<Aws::Vector<Aws::String>>>
    void SetPartitionKeys(PartitionKeysT&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = std::forward<PartitionKeysT>(value); }
    template<typename PartitionKeysT = Aws::Vector<Aws::Vector<Aws::String>>>
    S3IcebergDirectTarget& WithPartitionKeys(PartitionKeysT&& value) { SetPartitionKeys(std::forward<PartitionKeysT>(value)); return *this;}
    template<typename PartitionKeysT = Aws::Vector<Aws::String>>
    S3IcebergDirectTarget& AddPartitionKeys(PartitionKeysT&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.emplace_back(std::forward<PartitionKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines the S3 location where the Iceberg table data will be stored.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    S3IcebergDirectTarget& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the file format used for storing Iceberg table data (e.g., Parquet,
     * ORC).</p>
     */
    inline TargetFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(TargetFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline S3IcebergDirectTarget& WithFormat(TargetFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides additional configuration options for customizing the Iceberg table
     * behavior.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalOptions() const { return m_additionalOptions; }
    inline bool AdditionalOptionsHasBeenSet() const { return m_additionalOptionsHasBeenSet; }
    template<typename AdditionalOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetAdditionalOptions(AdditionalOptionsT&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = std::forward<AdditionalOptionsT>(value); }
    template<typename AdditionalOptionsT = Aws::Map<Aws::String, Aws::String>>
    S3IcebergDirectTarget& WithAdditionalOptions(AdditionalOptionsT&& value) { SetAdditionalOptions(std::forward<AdditionalOptionsT>(value)); return *this;}
    template<typename AdditionalOptionsKeyT = Aws::String, typename AdditionalOptionsValueT = Aws::String>
    S3IcebergDirectTarget& AddAdditionalOptions(AdditionalOptionsKeyT&& key, AdditionalOptionsValueT&& value) {
      m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(std::forward<AdditionalOptionsKeyT>(key), std::forward<AdditionalOptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Defines how schema changes are handled when writing data to the Iceberg
     * table.</p>
     */
    inline const DirectSchemaChangePolicy& GetSchemaChangePolicy() const { return m_schemaChangePolicy; }
    inline bool SchemaChangePolicyHasBeenSet() const { return m_schemaChangePolicyHasBeenSet; }
    template<typename SchemaChangePolicyT = DirectSchemaChangePolicy>
    void SetSchemaChangePolicy(SchemaChangePolicyT&& value) { m_schemaChangePolicyHasBeenSet = true; m_schemaChangePolicy = std::forward<SchemaChangePolicyT>(value); }
    template<typename SchemaChangePolicyT = DirectSchemaChangePolicy>
    S3IcebergDirectTarget& WithSchemaChangePolicy(SchemaChangePolicyT&& value) { SetSchemaChangePolicy(std::forward<SchemaChangePolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AutoDataQuality& GetAutoDataQuality() const { return m_autoDataQuality; }
    inline bool AutoDataQualityHasBeenSet() const { return m_autoDataQualityHasBeenSet; }
    template<typename AutoDataQualityT = AutoDataQuality>
    void SetAutoDataQuality(AutoDataQualityT&& value) { m_autoDataQualityHasBeenSet = true; m_autoDataQuality = std::forward<AutoDataQualityT>(value); }
    template<typename AutoDataQualityT = AutoDataQuality>
    S3IcebergDirectTarget& WithAutoDataQuality(AutoDataQualityT&& value) { SetAutoDataQuality(std::forward<AutoDataQualityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the compression codec used for Iceberg table files in S3.</p>
     */
    inline IcebergTargetCompressionType GetCompression() const { return m_compression; }
    inline bool CompressionHasBeenSet() const { return m_compressionHasBeenSet; }
    inline void SetCompression(IcebergTargetCompressionType value) { m_compressionHasBeenSet = true; m_compression = value; }
    inline S3IcebergDirectTarget& WithCompression(IcebergTargetCompressionType value) { SetCompression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the number of target partitions for distributing Iceberg table files
     * across S3.</p>
     */
    inline const Aws::String& GetNumberTargetPartitions() const { return m_numberTargetPartitions; }
    inline bool NumberTargetPartitionsHasBeenSet() const { return m_numberTargetPartitionsHasBeenSet; }
    template<typename NumberTargetPartitionsT = Aws::String>
    void SetNumberTargetPartitions(NumberTargetPartitionsT&& value) { m_numberTargetPartitionsHasBeenSet = true; m_numberTargetPartitions = std::forward<NumberTargetPartitionsT>(value); }
    template<typename NumberTargetPartitionsT = Aws::String>
    S3IcebergDirectTarget& WithNumberTargetPartitions(NumberTargetPartitionsT&& value) { SetNumberTargetPartitions(std::forward<NumberTargetPartitionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the data schema for the S3 Iceberg direct target.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const { return m_outputSchemas; }
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    void SetOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::forward<OutputSchemasT>(value); }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    S3IcebergDirectTarget& WithOutputSchemas(OutputSchemasT&& value) { SetOutputSchemas(std::forward<OutputSchemasT>(value)); return *this;}
    template<typename OutputSchemasT = GlueSchema>
    S3IcebergDirectTarget& AddOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.emplace_back(std::forward<OutputSchemasT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_partitionKeys;
    bool m_partitionKeysHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    TargetFormat m_format{TargetFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalOptions;
    bool m_additionalOptionsHasBeenSet = false;

    DirectSchemaChangePolicy m_schemaChangePolicy;
    bool m_schemaChangePolicyHasBeenSet = false;

    AutoDataQuality m_autoDataQuality;
    bool m_autoDataQualityHasBeenSet = false;

    IcebergTargetCompressionType m_compression{IcebergTargetCompressionType::NOT_SET};
    bool m_compressionHasBeenSet = false;

    Aws::String m_numberTargetPartitions;
    bool m_numberTargetPartitionsHasBeenSet = false;

    Aws::Vector<GlueSchema> m_outputSchemas;
    bool m_outputSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

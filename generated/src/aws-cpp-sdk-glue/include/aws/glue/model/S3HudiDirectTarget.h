/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/HudiTargetCompressionType.h>
#include <aws/glue/model/TargetFormat.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/DirectSchemaChangePolicy.h>
#include <aws/glue/model/AutoDataQuality.h>
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
   * <p>Specifies a target that writes to a Hudi data source in Amazon
   * S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3HudiDirectTarget">AWS
   * API Reference</a></p>
   */
  class S3HudiDirectTarget
  {
  public:
    AWS_GLUE_API S3HudiDirectTarget() = default;
    AWS_GLUE_API S3HudiDirectTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3HudiDirectTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data target.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    S3HudiDirectTarget& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<Aws::String>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<Aws::String>>
    S3HudiDirectTarget& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Aws::String>
    S3HudiDirectTarget& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path of your Hudi data source to write to.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    S3HudiDirectTarget& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how the data is compressed. This is generally not necessary if the
     * data has a standard file extension. Possible values are <code>"gzip"</code> and
     * <code>"bzip"</code>).</p>
     */
    inline HudiTargetCompressionType GetCompression() const { return m_compression; }
    inline bool CompressionHasBeenSet() const { return m_compressionHasBeenSet; }
    inline void SetCompression(HudiTargetCompressionType value) { m_compressionHasBeenSet = true; m_compression = value; }
    inline S3HudiDirectTarget& WithCompression(HudiTargetCompressionType value) { SetCompression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of target partitions for distributing Hudi dataset files
     * across Amazon S3.</p>
     */
    inline const Aws::String& GetNumberTargetPartitions() const { return m_numberTargetPartitions; }
    inline bool NumberTargetPartitionsHasBeenSet() const { return m_numberTargetPartitionsHasBeenSet; }
    template<typename NumberTargetPartitionsT = Aws::String>
    void SetNumberTargetPartitions(NumberTargetPartitionsT&& value) { m_numberTargetPartitionsHasBeenSet = true; m_numberTargetPartitions = std::forward<NumberTargetPartitionsT>(value); }
    template<typename NumberTargetPartitionsT = Aws::String>
    S3HudiDirectTarget& WithNumberTargetPartitions(NumberTargetPartitionsT&& value) { SetNumberTargetPartitions(std::forward<NumberTargetPartitionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetPartitionKeys() const { return m_partitionKeys; }
    inline bool PartitionKeysHasBeenSet() const { return m_partitionKeysHasBeenSet; }
    template<typename PartitionKeysT = Aws::Vector<Aws::Vector<Aws::String>>>
    void SetPartitionKeys(PartitionKeysT&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = std::forward<PartitionKeysT>(value); }
    template<typename PartitionKeysT = Aws::Vector<Aws::Vector<Aws::String>>>
    S3HudiDirectTarget& WithPartitionKeys(PartitionKeysT&& value) { SetPartitionKeys(std::forward<PartitionKeysT>(value)); return *this;}
    template<typename PartitionKeysT = Aws::Vector<Aws::String>>
    S3HudiDirectTarget& AddPartitionKeys(PartitionKeysT&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.emplace_back(std::forward<PartitionKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the data output format for the target.</p>
     */
    inline TargetFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(TargetFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline S3HudiDirectTarget& WithFormat(TargetFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalOptions() const { return m_additionalOptions; }
    inline bool AdditionalOptionsHasBeenSet() const { return m_additionalOptionsHasBeenSet; }
    template<typename AdditionalOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetAdditionalOptions(AdditionalOptionsT&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = std::forward<AdditionalOptionsT>(value); }
    template<typename AdditionalOptionsT = Aws::Map<Aws::String, Aws::String>>
    S3HudiDirectTarget& WithAdditionalOptions(AdditionalOptionsT&& value) { SetAdditionalOptions(std::forward<AdditionalOptionsT>(value)); return *this;}
    template<typename AdditionalOptionsKeyT = Aws::String, typename AdditionalOptionsValueT = Aws::String>
    S3HudiDirectTarget& AddAdditionalOptions(AdditionalOptionsKeyT&& key, AdditionalOptionsValueT&& value) {
      m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(std::forward<AdditionalOptionsKeyT>(key), std::forward<AdditionalOptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A policy that specifies update behavior for the crawler.</p>
     */
    inline const DirectSchemaChangePolicy& GetSchemaChangePolicy() const { return m_schemaChangePolicy; }
    inline bool SchemaChangePolicyHasBeenSet() const { return m_schemaChangePolicyHasBeenSet; }
    template<typename SchemaChangePolicyT = DirectSchemaChangePolicy>
    void SetSchemaChangePolicy(SchemaChangePolicyT&& value) { m_schemaChangePolicyHasBeenSet = true; m_schemaChangePolicy = std::forward<SchemaChangePolicyT>(value); }
    template<typename SchemaChangePolicyT = DirectSchemaChangePolicy>
    S3HudiDirectTarget& WithSchemaChangePolicy(SchemaChangePolicyT&& value) { SetSchemaChangePolicy(std::forward<SchemaChangePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to automatically enable data quality evaluation for the S3
     * Hudi direct target. When set to <code>true</code>, data quality checks are
     * performed automatically during the write operation.</p>
     */
    inline const AutoDataQuality& GetAutoDataQuality() const { return m_autoDataQuality; }
    inline bool AutoDataQualityHasBeenSet() const { return m_autoDataQualityHasBeenSet; }
    template<typename AutoDataQualityT = AutoDataQuality>
    void SetAutoDataQuality(AutoDataQualityT&& value) { m_autoDataQualityHasBeenSet = true; m_autoDataQuality = std::forward<AutoDataQualityT>(value); }
    template<typename AutoDataQualityT = AutoDataQuality>
    S3HudiDirectTarget& WithAutoDataQuality(AutoDataQualityT&& value) { SetAutoDataQuality(std::forward<AutoDataQualityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    HudiTargetCompressionType m_compression{HudiTargetCompressionType::NOT_SET};
    bool m_compressionHasBeenSet = false;

    Aws::String m_numberTargetPartitions;
    bool m_numberTargetPartitionsHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_partitionKeys;
    bool m_partitionKeysHasBeenSet = false;

    TargetFormat m_format{TargetFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalOptions;
    bool m_additionalOptionsHasBeenSet = false;

    DirectSchemaChangePolicy m_schemaChangePolicy;
    bool m_schemaChangePolicyHasBeenSet = false;

    AutoDataQuality m_autoDataQuality;
    bool m_autoDataQualityHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

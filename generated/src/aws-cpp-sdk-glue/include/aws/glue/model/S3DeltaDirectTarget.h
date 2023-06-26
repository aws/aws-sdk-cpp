/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/DeltaTargetCompressionType.h>
#include <aws/glue/model/TargetFormat.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/DirectSchemaChangePolicy.h>
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
   * <p>Specifies a target that writes to a Delta Lake data source in Amazon
   * S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3DeltaDirectTarget">AWS
   * API Reference</a></p>
   */
  class S3DeltaDirectTarget
  {
  public:
    AWS_GLUE_API S3DeltaDirectTarget();
    AWS_GLUE_API S3DeltaDirectTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3DeltaDirectTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data target.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data target.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data target.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data target.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data target.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data target.</p>
     */
    inline S3DeltaDirectTarget& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data target.</p>
     */
    inline S3DeltaDirectTarget& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data target.</p>
     */
    inline S3DeltaDirectTarget& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline S3DeltaDirectTarget& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline S3DeltaDirectTarget& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline S3DeltaDirectTarget& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline S3DeltaDirectTarget& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline S3DeltaDirectTarget& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }


    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetPartitionKeys() const{ return m_partitionKeys; }

    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline bool PartitionKeysHasBeenSet() const { return m_partitionKeysHasBeenSet; }

    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline void SetPartitionKeys(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = value; }

    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline void SetPartitionKeys(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = std::move(value); }

    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline S3DeltaDirectTarget& WithPartitionKeys(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetPartitionKeys(value); return *this;}

    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline S3DeltaDirectTarget& WithPartitionKeys(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetPartitionKeys(std::move(value)); return *this;}

    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline S3DeltaDirectTarget& AddPartitionKeys(const Aws::Vector<Aws::String>& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.push_back(value); return *this; }

    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline S3DeltaDirectTarget& AddPartitionKeys(Aws::Vector<Aws::String>&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon S3 path of your Delta Lake data source to write to.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The Amazon S3 path of your Delta Lake data source to write to.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The Amazon S3 path of your Delta Lake data source to write to.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The Amazon S3 path of your Delta Lake data source to write to.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The Amazon S3 path of your Delta Lake data source to write to.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The Amazon S3 path of your Delta Lake data source to write to.</p>
     */
    inline S3DeltaDirectTarget& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The Amazon S3 path of your Delta Lake data source to write to.</p>
     */
    inline S3DeltaDirectTarget& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 path of your Delta Lake data source to write to.</p>
     */
    inline S3DeltaDirectTarget& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>Specifies how the data is compressed. This is generally not necessary if the
     * data has a standard file extension. Possible values are <code>"gzip"</code> and
     * <code>"bzip"</code>).</p>
     */
    inline const DeltaTargetCompressionType& GetCompression() const{ return m_compression; }

    /**
     * <p>Specifies how the data is compressed. This is generally not necessary if the
     * data has a standard file extension. Possible values are <code>"gzip"</code> and
     * <code>"bzip"</code>).</p>
     */
    inline bool CompressionHasBeenSet() const { return m_compressionHasBeenSet; }

    /**
     * <p>Specifies how the data is compressed. This is generally not necessary if the
     * data has a standard file extension. Possible values are <code>"gzip"</code> and
     * <code>"bzip"</code>).</p>
     */
    inline void SetCompression(const DeltaTargetCompressionType& value) { m_compressionHasBeenSet = true; m_compression = value; }

    /**
     * <p>Specifies how the data is compressed. This is generally not necessary if the
     * data has a standard file extension. Possible values are <code>"gzip"</code> and
     * <code>"bzip"</code>).</p>
     */
    inline void SetCompression(DeltaTargetCompressionType&& value) { m_compressionHasBeenSet = true; m_compression = std::move(value); }

    /**
     * <p>Specifies how the data is compressed. This is generally not necessary if the
     * data has a standard file extension. Possible values are <code>"gzip"</code> and
     * <code>"bzip"</code>).</p>
     */
    inline S3DeltaDirectTarget& WithCompression(const DeltaTargetCompressionType& value) { SetCompression(value); return *this;}

    /**
     * <p>Specifies how the data is compressed. This is generally not necessary if the
     * data has a standard file extension. Possible values are <code>"gzip"</code> and
     * <code>"bzip"</code>).</p>
     */
    inline S3DeltaDirectTarget& WithCompression(DeltaTargetCompressionType&& value) { SetCompression(std::move(value)); return *this;}


    /**
     * <p>Specifies the data output format for the target.</p>
     */
    inline const TargetFormat& GetFormat() const{ return m_format; }

    /**
     * <p>Specifies the data output format for the target.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>Specifies the data output format for the target.</p>
     */
    inline void SetFormat(const TargetFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>Specifies the data output format for the target.</p>
     */
    inline void SetFormat(TargetFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>Specifies the data output format for the target.</p>
     */
    inline S3DeltaDirectTarget& WithFormat(const TargetFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>Specifies the data output format for the target.</p>
     */
    inline S3DeltaDirectTarget& WithFormat(TargetFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalOptions() const{ return m_additionalOptions; }

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline bool AdditionalOptionsHasBeenSet() const { return m_additionalOptionsHasBeenSet; }

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline void SetAdditionalOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = value; }

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline void SetAdditionalOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = std::move(value); }

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline S3DeltaDirectTarget& WithAdditionalOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalOptions(value); return *this;}

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline S3DeltaDirectTarget& WithAdditionalOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalOptions(std::move(value)); return *this;}

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline S3DeltaDirectTarget& AddAdditionalOptions(const Aws::String& key, const Aws::String& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(key, value); return *this; }

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline S3DeltaDirectTarget& AddAdditionalOptions(Aws::String&& key, const Aws::String& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline S3DeltaDirectTarget& AddAdditionalOptions(const Aws::String& key, Aws::String&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline S3DeltaDirectTarget& AddAdditionalOptions(Aws::String&& key, Aws::String&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline S3DeltaDirectTarget& AddAdditionalOptions(const char* key, Aws::String&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline S3DeltaDirectTarget& AddAdditionalOptions(Aws::String&& key, const char* value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies additional connection options for the connector.</p>
     */
    inline S3DeltaDirectTarget& AddAdditionalOptions(const char* key, const char* value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(key, value); return *this; }


    /**
     * <p>A policy that specifies update behavior for the crawler.</p>
     */
    inline const DirectSchemaChangePolicy& GetSchemaChangePolicy() const{ return m_schemaChangePolicy; }

    /**
     * <p>A policy that specifies update behavior for the crawler.</p>
     */
    inline bool SchemaChangePolicyHasBeenSet() const { return m_schemaChangePolicyHasBeenSet; }

    /**
     * <p>A policy that specifies update behavior for the crawler.</p>
     */
    inline void SetSchemaChangePolicy(const DirectSchemaChangePolicy& value) { m_schemaChangePolicyHasBeenSet = true; m_schemaChangePolicy = value; }

    /**
     * <p>A policy that specifies update behavior for the crawler.</p>
     */
    inline void SetSchemaChangePolicy(DirectSchemaChangePolicy&& value) { m_schemaChangePolicyHasBeenSet = true; m_schemaChangePolicy = std::move(value); }

    /**
     * <p>A policy that specifies update behavior for the crawler.</p>
     */
    inline S3DeltaDirectTarget& WithSchemaChangePolicy(const DirectSchemaChangePolicy& value) { SetSchemaChangePolicy(value); return *this;}

    /**
     * <p>A policy that specifies update behavior for the crawler.</p>
     */
    inline S3DeltaDirectTarget& WithSchemaChangePolicy(DirectSchemaChangePolicy&& value) { SetSchemaChangePolicy(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_partitionKeys;
    bool m_partitionKeysHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    DeltaTargetCompressionType m_compression;
    bool m_compressionHasBeenSet = false;

    TargetFormat m_format;
    bool m_formatHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalOptions;
    bool m_additionalOptionsHasBeenSet = false;

    DirectSchemaChangePolicy m_schemaChangePolicy;
    bool m_schemaChangePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

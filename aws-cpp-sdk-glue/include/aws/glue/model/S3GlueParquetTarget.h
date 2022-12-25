/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/ParquetCompressionType.h>
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
   * <p>Specifies a data target that writes to Amazon S3 in Apache Parquet columnar
   * storage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3GlueParquetTarget">AWS
   * API Reference</a></p>
   */
  class S3GlueParquetTarget
  {
  public:
    AWS_GLUE_API S3GlueParquetTarget();
    AWS_GLUE_API S3GlueParquetTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3GlueParquetTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline S3GlueParquetTarget& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data target.</p>
     */
    inline S3GlueParquetTarget& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data target.</p>
     */
    inline S3GlueParquetTarget& WithName(const char* value) { SetName(value); return *this;}


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
    inline S3GlueParquetTarget& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline S3GlueParquetTarget& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline S3GlueParquetTarget& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline S3GlueParquetTarget& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline S3GlueParquetTarget& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }


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
    inline S3GlueParquetTarget& WithPartitionKeys(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetPartitionKeys(value); return *this;}

    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline S3GlueParquetTarget& WithPartitionKeys(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetPartitionKeys(std::move(value)); return *this;}

    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline S3GlueParquetTarget& AddPartitionKeys(const Aws::Vector<Aws::String>& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.push_back(value); return *this; }

    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline S3GlueParquetTarget& AddPartitionKeys(Aws::Vector<Aws::String>&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>A single Amazon S3 path to write to.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>A single Amazon S3 path to write to.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>A single Amazon S3 path to write to.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>A single Amazon S3 path to write to.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>A single Amazon S3 path to write to.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>A single Amazon S3 path to write to.</p>
     */
    inline S3GlueParquetTarget& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>A single Amazon S3 path to write to.</p>
     */
    inline S3GlueParquetTarget& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>A single Amazon S3 path to write to.</p>
     */
    inline S3GlueParquetTarget& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>Specifies how the data is compressed. This is generally not necessary if the
     * data has a standard file extension. Possible values are <code>"gzip"</code> and
     * <code>"bzip"</code>).</p>
     */
    inline const ParquetCompressionType& GetCompression() const{ return m_compression; }

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
    inline void SetCompression(const ParquetCompressionType& value) { m_compressionHasBeenSet = true; m_compression = value; }

    /**
     * <p>Specifies how the data is compressed. This is generally not necessary if the
     * data has a standard file extension. Possible values are <code>"gzip"</code> and
     * <code>"bzip"</code>).</p>
     */
    inline void SetCompression(ParquetCompressionType&& value) { m_compressionHasBeenSet = true; m_compression = std::move(value); }

    /**
     * <p>Specifies how the data is compressed. This is generally not necessary if the
     * data has a standard file extension. Possible values are <code>"gzip"</code> and
     * <code>"bzip"</code>).</p>
     */
    inline S3GlueParquetTarget& WithCompression(const ParquetCompressionType& value) { SetCompression(value); return *this;}

    /**
     * <p>Specifies how the data is compressed. This is generally not necessary if the
     * data has a standard file extension. Possible values are <code>"gzip"</code> and
     * <code>"bzip"</code>).</p>
     */
    inline S3GlueParquetTarget& WithCompression(ParquetCompressionType&& value) { SetCompression(std::move(value)); return *this;}


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
    inline S3GlueParquetTarget& WithSchemaChangePolicy(const DirectSchemaChangePolicy& value) { SetSchemaChangePolicy(value); return *this;}

    /**
     * <p>A policy that specifies update behavior for the crawler.</p>
     */
    inline S3GlueParquetTarget& WithSchemaChangePolicy(DirectSchemaChangePolicy&& value) { SetSchemaChangePolicy(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_partitionKeys;
    bool m_partitionKeysHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    ParquetCompressionType m_compression;
    bool m_compressionHasBeenSet = false;

    DirectSchemaChangePolicy m_schemaChangePolicy;
    bool m_schemaChangePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

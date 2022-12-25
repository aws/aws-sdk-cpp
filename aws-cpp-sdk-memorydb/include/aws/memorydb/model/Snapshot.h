/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/memorydb/model/ClusterConfiguration.h>
#include <aws/memorydb/model/DataTieringStatus.h>
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
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>Represents a copy of an entire cluster as of the time when the snapshot was
   * taken.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/Snapshot">AWS
   * API Reference</a></p>
   */
  class Snapshot
  {
  public:
    AWS_MEMORYDB_API Snapshot();
    AWS_MEMORYDB_API Snapshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Snapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the snapshot</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the snapshot</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the snapshot</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the snapshot</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the snapshot</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the snapshot</p>
     */
    inline Snapshot& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the snapshot</p>
     */
    inline Snapshot& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the snapshot</p>
     */
    inline Snapshot& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the snapshot. Valid values: creating | available | restoring |
     * copying | deleting.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the snapshot. Valid values: creating | available | restoring |
     * copying | deleting.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the snapshot. Valid values: creating | available | restoring |
     * copying | deleting.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the snapshot. Valid values: creating | available | restoring |
     * copying | deleting.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the snapshot. Valid values: creating | available | restoring |
     * copying | deleting.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the snapshot. Valid values: creating | available | restoring |
     * copying | deleting.</p>
     */
    inline Snapshot& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the snapshot. Valid values: creating | available | restoring |
     * copying | deleting.</p>
     */
    inline Snapshot& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the snapshot. Valid values: creating | available | restoring |
     * copying | deleting.</p>
     */
    inline Snapshot& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Indicates whether the snapshot is from an automatic backup (automated) or was
     * created manually (manual).</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>Indicates whether the snapshot is from an automatic backup (automated) or was
     * created manually (manual).</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>Indicates whether the snapshot is from an automatic backup (automated) or was
     * created manually (manual).</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>Indicates whether the snapshot is from an automatic backup (automated) or was
     * created manually (manual).</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>Indicates whether the snapshot is from an automatic backup (automated) or was
     * created manually (manual).</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>Indicates whether the snapshot is from an automatic backup (automated) or was
     * created manually (manual).</p>
     */
    inline Snapshot& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>Indicates whether the snapshot is from an automatic backup (automated) or was
     * created manually (manual).</p>
     */
    inline Snapshot& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>Indicates whether the snapshot is from an automatic backup (automated) or was
     * created manually (manual).</p>
     */
    inline Snapshot& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The ID of the KMS key used to encrypt the snapshot.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the KMS key used to encrypt the snapshot.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the KMS key used to encrypt the snapshot.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of the KMS key used to encrypt the snapshot.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the KMS key used to encrypt the snapshot.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the KMS key used to encrypt the snapshot.</p>
     */
    inline Snapshot& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the KMS key used to encrypt the snapshot.</p>
     */
    inline Snapshot& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the KMS key used to encrypt the snapshot.</p>
     */
    inline Snapshot& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) of the snapshot.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The ARN (Amazon Resource Name) of the snapshot.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) of the snapshot.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the snapshot.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the snapshot.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the snapshot.</p>
     */
    inline Snapshot& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the snapshot.</p>
     */
    inline Snapshot& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the snapshot.</p>
     */
    inline Snapshot& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The configuration of the cluster from which the snapshot was taken</p>
     */
    inline const ClusterConfiguration& GetClusterConfiguration() const{ return m_clusterConfiguration; }

    /**
     * <p>The configuration of the cluster from which the snapshot was taken</p>
     */
    inline bool ClusterConfigurationHasBeenSet() const { return m_clusterConfigurationHasBeenSet; }

    /**
     * <p>The configuration of the cluster from which the snapshot was taken</p>
     */
    inline void SetClusterConfiguration(const ClusterConfiguration& value) { m_clusterConfigurationHasBeenSet = true; m_clusterConfiguration = value; }

    /**
     * <p>The configuration of the cluster from which the snapshot was taken</p>
     */
    inline void SetClusterConfiguration(ClusterConfiguration&& value) { m_clusterConfigurationHasBeenSet = true; m_clusterConfiguration = std::move(value); }

    /**
     * <p>The configuration of the cluster from which the snapshot was taken</p>
     */
    inline Snapshot& WithClusterConfiguration(const ClusterConfiguration& value) { SetClusterConfiguration(value); return *this;}

    /**
     * <p>The configuration of the cluster from which the snapshot was taken</p>
     */
    inline Snapshot& WithClusterConfiguration(ClusterConfiguration&& value) { SetClusterConfiguration(std::move(value)); return *this;}


    /**
     * <p>Enables data tiering. Data tiering is only supported for clusters using the
     * r6gd node type. This parameter must be set when using r6gd nodes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline const DataTieringStatus& GetDataTiering() const{ return m_dataTiering; }

    /**
     * <p>Enables data tiering. Data tiering is only supported for clusters using the
     * r6gd node type. This parameter must be set when using r6gd nodes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline bool DataTieringHasBeenSet() const { return m_dataTieringHasBeenSet; }

    /**
     * <p>Enables data tiering. Data tiering is only supported for clusters using the
     * r6gd node type. This parameter must be set when using r6gd nodes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline void SetDataTiering(const DataTieringStatus& value) { m_dataTieringHasBeenSet = true; m_dataTiering = value; }

    /**
     * <p>Enables data tiering. Data tiering is only supported for clusters using the
     * r6gd node type. This parameter must be set when using r6gd nodes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline void SetDataTiering(DataTieringStatus&& value) { m_dataTieringHasBeenSet = true; m_dataTiering = std::move(value); }

    /**
     * <p>Enables data tiering. Data tiering is only supported for clusters using the
     * r6gd node type. This parameter must be set when using r6gd nodes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline Snapshot& WithDataTiering(const DataTieringStatus& value) { SetDataTiering(value); return *this;}

    /**
     * <p>Enables data tiering. Data tiering is only supported for clusters using the
     * r6gd node type. This parameter must be set when using r6gd nodes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline Snapshot& WithDataTiering(DataTieringStatus&& value) { SetDataTiering(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    ClusterConfiguration m_clusterConfiguration;
    bool m_clusterConfigurationHasBeenSet = false;

    DataTieringStatus m_dataTiering;
    bool m_dataTieringHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws

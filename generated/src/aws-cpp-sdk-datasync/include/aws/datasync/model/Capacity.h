/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>

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
namespace DataSync
{
namespace Model
{

  /**
   * <p>The storage capacity of an on-premises storage system resource (for example,
   * a volume).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/Capacity">AWS
   * API Reference</a></p>
   */
  class Capacity
  {
  public:
    AWS_DATASYNC_API Capacity();
    AWS_DATASYNC_API Capacity(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Capacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of space that's being used in a storage system resource.</p>
     */
    inline long long GetUsed() const{ return m_used; }

    /**
     * <p>The amount of space that's being used in a storage system resource.</p>
     */
    inline bool UsedHasBeenSet() const { return m_usedHasBeenSet; }

    /**
     * <p>The amount of space that's being used in a storage system resource.</p>
     */
    inline void SetUsed(long long value) { m_usedHasBeenSet = true; m_used = value; }

    /**
     * <p>The amount of space that's being used in a storage system resource.</p>
     */
    inline Capacity& WithUsed(long long value) { SetUsed(value); return *this;}


    /**
     * <p>The total amount of space available in a storage system resource.</p>
     */
    inline long long GetProvisioned() const{ return m_provisioned; }

    /**
     * <p>The total amount of space available in a storage system resource.</p>
     */
    inline bool ProvisionedHasBeenSet() const { return m_provisionedHasBeenSet; }

    /**
     * <p>The total amount of space available in a storage system resource.</p>
     */
    inline void SetProvisioned(long long value) { m_provisionedHasBeenSet = true; m_provisioned = value; }

    /**
     * <p>The total amount of space available in a storage system resource.</p>
     */
    inline Capacity& WithProvisioned(long long value) { SetProvisioned(value); return *this;}


    /**
     * <p>The amount of space that's being used in a storage system resource without
     * accounting for compression or deduplication.</p>
     */
    inline long long GetLogicalUsed() const{ return m_logicalUsed; }

    /**
     * <p>The amount of space that's being used in a storage system resource without
     * accounting for compression or deduplication.</p>
     */
    inline bool LogicalUsedHasBeenSet() const { return m_logicalUsedHasBeenSet; }

    /**
     * <p>The amount of space that's being used in a storage system resource without
     * accounting for compression or deduplication.</p>
     */
    inline void SetLogicalUsed(long long value) { m_logicalUsedHasBeenSet = true; m_logicalUsed = value; }

    /**
     * <p>The amount of space that's being used in a storage system resource without
     * accounting for compression or deduplication.</p>
     */
    inline Capacity& WithLogicalUsed(long long value) { SetLogicalUsed(value); return *this;}


    /**
     * <p>The amount of space in the cluster that's in cloud storage (for example, if
     * you're using data tiering).</p>
     */
    inline long long GetClusterCloudStorageUsed() const{ return m_clusterCloudStorageUsed; }

    /**
     * <p>The amount of space in the cluster that's in cloud storage (for example, if
     * you're using data tiering).</p>
     */
    inline bool ClusterCloudStorageUsedHasBeenSet() const { return m_clusterCloudStorageUsedHasBeenSet; }

    /**
     * <p>The amount of space in the cluster that's in cloud storage (for example, if
     * you're using data tiering).</p>
     */
    inline void SetClusterCloudStorageUsed(long long value) { m_clusterCloudStorageUsedHasBeenSet = true; m_clusterCloudStorageUsed = value; }

    /**
     * <p>The amount of space in the cluster that's in cloud storage (for example, if
     * you're using data tiering).</p>
     */
    inline Capacity& WithClusterCloudStorageUsed(long long value) { SetClusterCloudStorageUsed(value); return *this;}

  private:

    long long m_used;
    bool m_usedHasBeenSet = false;

    long long m_provisioned;
    bool m_provisionedHasBeenSet = false;

    long long m_logicalUsed;
    bool m_logicalUsedHasBeenSet = false;

    long long m_clusterCloudStorageUsed;
    bool m_clusterCloudStorageUsedHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws

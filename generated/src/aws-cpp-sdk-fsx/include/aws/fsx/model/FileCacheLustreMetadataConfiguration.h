/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>

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
namespace FSx
{
namespace Model
{

  /**
   * <p>The configuration for a Lustre MDT (Metadata Target) storage volume. The
   * metadata on Amazon File Cache is managed by a Lustre Metadata Server (MDS) while
   * the actual metadata is persisted on an MDT.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/FileCacheLustreMetadataConfiguration">AWS
   * API Reference</a></p>
   */
  class FileCacheLustreMetadataConfiguration
  {
  public:
    AWS_FSX_API FileCacheLustreMetadataConfiguration();
    AWS_FSX_API FileCacheLustreMetadataConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API FileCacheLustreMetadataConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The storage capacity of the Lustre MDT (Metadata Target) storage volume in
     * gibibytes (GiB). The only supported value is <code>2400</code> GiB.</p>
     */
    inline int GetStorageCapacity() const{ return m_storageCapacity; }

    /**
     * <p>The storage capacity of the Lustre MDT (Metadata Target) storage volume in
     * gibibytes (GiB). The only supported value is <code>2400</code> GiB.</p>
     */
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }

    /**
     * <p>The storage capacity of the Lustre MDT (Metadata Target) storage volume in
     * gibibytes (GiB). The only supported value is <code>2400</code> GiB.</p>
     */
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }

    /**
     * <p>The storage capacity of the Lustre MDT (Metadata Target) storage volume in
     * gibibytes (GiB). The only supported value is <code>2400</code> GiB.</p>
     */
    inline FileCacheLustreMetadataConfiguration& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}

  private:

    int m_storageCapacity;
    bool m_storageCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/DirectoryListingOptimization.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>The Amazon S3 storage options that are configured for your
   * server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/S3StorageOptions">AWS
   * API Reference</a></p>
   */
  class S3StorageOptions
  {
  public:
    AWS_TRANSFER_API S3StorageOptions();
    AWS_TRANSFER_API S3StorageOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API S3StorageOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether or not performance for your Amazon S3 directories is
     * optimized. This is disabled by default.</p> <p>By default, home directory
     * mappings have a <code>TYPE</code> of <code>DIRECTORY</code>. If you enable this
     * option, you would then need to explicitly set the
     * <code>HomeDirectoryMapEntry</code> <code>Type</code> to <code>FILE</code> if you
     * want a mapping to have a file target.</p>
     */
    inline const DirectoryListingOptimization& GetDirectoryListingOptimization() const{ return m_directoryListingOptimization; }

    /**
     * <p>Specifies whether or not performance for your Amazon S3 directories is
     * optimized. This is disabled by default.</p> <p>By default, home directory
     * mappings have a <code>TYPE</code> of <code>DIRECTORY</code>. If you enable this
     * option, you would then need to explicitly set the
     * <code>HomeDirectoryMapEntry</code> <code>Type</code> to <code>FILE</code> if you
     * want a mapping to have a file target.</p>
     */
    inline bool DirectoryListingOptimizationHasBeenSet() const { return m_directoryListingOptimizationHasBeenSet; }

    /**
     * <p>Specifies whether or not performance for your Amazon S3 directories is
     * optimized. This is disabled by default.</p> <p>By default, home directory
     * mappings have a <code>TYPE</code> of <code>DIRECTORY</code>. If you enable this
     * option, you would then need to explicitly set the
     * <code>HomeDirectoryMapEntry</code> <code>Type</code> to <code>FILE</code> if you
     * want a mapping to have a file target.</p>
     */
    inline void SetDirectoryListingOptimization(const DirectoryListingOptimization& value) { m_directoryListingOptimizationHasBeenSet = true; m_directoryListingOptimization = value; }

    /**
     * <p>Specifies whether or not performance for your Amazon S3 directories is
     * optimized. This is disabled by default.</p> <p>By default, home directory
     * mappings have a <code>TYPE</code> of <code>DIRECTORY</code>. If you enable this
     * option, you would then need to explicitly set the
     * <code>HomeDirectoryMapEntry</code> <code>Type</code> to <code>FILE</code> if you
     * want a mapping to have a file target.</p>
     */
    inline void SetDirectoryListingOptimization(DirectoryListingOptimization&& value) { m_directoryListingOptimizationHasBeenSet = true; m_directoryListingOptimization = std::move(value); }

    /**
     * <p>Specifies whether or not performance for your Amazon S3 directories is
     * optimized. This is disabled by default.</p> <p>By default, home directory
     * mappings have a <code>TYPE</code> of <code>DIRECTORY</code>. If you enable this
     * option, you would then need to explicitly set the
     * <code>HomeDirectoryMapEntry</code> <code>Type</code> to <code>FILE</code> if you
     * want a mapping to have a file target.</p>
     */
    inline S3StorageOptions& WithDirectoryListingOptimization(const DirectoryListingOptimization& value) { SetDirectoryListingOptimization(value); return *this;}

    /**
     * <p>Specifies whether or not performance for your Amazon S3 directories is
     * optimized. This is disabled by default.</p> <p>By default, home directory
     * mappings have a <code>TYPE</code> of <code>DIRECTORY</code>. If you enable this
     * option, you would then need to explicitly set the
     * <code>HomeDirectoryMapEntry</code> <code>Type</code> to <code>FILE</code> if you
     * want a mapping to have a file target.</p>
     */
    inline S3StorageOptions& WithDirectoryListingOptimization(DirectoryListingOptimization&& value) { SetDirectoryListingOptimization(std::move(value)); return *this;}

  private:

    DirectoryListingOptimization m_directoryListingOptimization;
    bool m_directoryListingOptimizationHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws

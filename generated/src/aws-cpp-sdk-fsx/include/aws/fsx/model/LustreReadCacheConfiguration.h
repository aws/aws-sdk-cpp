/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/LustreReadCacheSizingMode.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p> The configuration for the optional provisioned SSD read cache on Amazon FSx
   * for Lustre file systems that use the Intelligent-Tiering storage class.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/LustreReadCacheConfiguration">AWS
   * API Reference</a></p>
   */
  class LustreReadCacheConfiguration
  {
  public:
    AWS_FSX_API LustreReadCacheConfiguration() = default;
    AWS_FSX_API LustreReadCacheConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API LustreReadCacheConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies how the provisioned SSD read cache is sized, as follows: </p> <ul>
     * <li> <p>Set to <code>NO_CACHE</code> if you do not want to use an SSD read cache
     * with your Intelligent-Tiering file system.</p> </li> <li> <p>Set to
     * <code>USER_PROVISIONED</code> to specify the exact size of your SSD read
     * cache.</p> </li> <li> <p>Set to <code>PROPORTIONAL_TO_THROUGHPUT_CAPACITY</code>
     * to have your SSD read cache automatically sized based on your throughput
     * capacity.</p> </li> </ul>
     */
    inline LustreReadCacheSizingMode GetSizingMode() const { return m_sizingMode; }
    inline bool SizingModeHasBeenSet() const { return m_sizingModeHasBeenSet; }
    inline void SetSizingMode(LustreReadCacheSizingMode value) { m_sizingModeHasBeenSet = true; m_sizingMode = value; }
    inline LustreReadCacheConfiguration& WithSizingMode(LustreReadCacheSizingMode value) { SetSizingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Required if <code>SizingMode</code> is set to <code>USER_PROVISIONED</code>.
     * Specifies the size of the file system's SSD read cache, in gibibytes (GiB). </p>
     * <p>The SSD read cache size is distributed across provisioned file servers in
     * your file system. Intelligent-Tiering file systems support a minimum of 32 GiB
     * and maximum of 131072 GiB for SSD read cache size for every 4,000 MB/s of
     * throughput capacity provisioned.</p>
     */
    inline int GetSizeGiB() const { return m_sizeGiB; }
    inline bool SizeGiBHasBeenSet() const { return m_sizeGiBHasBeenSet; }
    inline void SetSizeGiB(int value) { m_sizeGiBHasBeenSet = true; m_sizeGiB = value; }
    inline LustreReadCacheConfiguration& WithSizeGiB(int value) { SetSizeGiB(value); return *this;}
    ///@}
  private:

    LustreReadCacheSizingMode m_sizingMode{LustreReadCacheSizingMode::NOT_SET};
    bool m_sizingModeHasBeenSet = false;

    int m_sizeGiB{0};
    bool m_sizeGiBHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/CachediSCSIVolume.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>A JSON object containing the following fields:</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeCachediSCSIVolumesOutput">AWS
   * API Reference</a></p>
   */
  class DescribeCachediSCSIVolumesResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeCachediSCSIVolumesResult();
    AWS_STORAGEGATEWAY_API DescribeCachediSCSIVolumesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeCachediSCSIVolumesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects where each object contains metadata about one cached
     * volume.</p>
     */
    inline const Aws::Vector<CachediSCSIVolume>& GetCachediSCSIVolumes() const{ return m_cachediSCSIVolumes; }

    /**
     * <p>An array of objects where each object contains metadata about one cached
     * volume.</p>
     */
    inline void SetCachediSCSIVolumes(const Aws::Vector<CachediSCSIVolume>& value) { m_cachediSCSIVolumes = value; }

    /**
     * <p>An array of objects where each object contains metadata about one cached
     * volume.</p>
     */
    inline void SetCachediSCSIVolumes(Aws::Vector<CachediSCSIVolume>&& value) { m_cachediSCSIVolumes = std::move(value); }

    /**
     * <p>An array of objects where each object contains metadata about one cached
     * volume.</p>
     */
    inline DescribeCachediSCSIVolumesResult& WithCachediSCSIVolumes(const Aws::Vector<CachediSCSIVolume>& value) { SetCachediSCSIVolumes(value); return *this;}

    /**
     * <p>An array of objects where each object contains metadata about one cached
     * volume.</p>
     */
    inline DescribeCachediSCSIVolumesResult& WithCachediSCSIVolumes(Aws::Vector<CachediSCSIVolume>&& value) { SetCachediSCSIVolumes(std::move(value)); return *this;}

    /**
     * <p>An array of objects where each object contains metadata about one cached
     * volume.</p>
     */
    inline DescribeCachediSCSIVolumesResult& AddCachediSCSIVolumes(const CachediSCSIVolume& value) { m_cachediSCSIVolumes.push_back(value); return *this; }

    /**
     * <p>An array of objects where each object contains metadata about one cached
     * volume.</p>
     */
    inline DescribeCachediSCSIVolumesResult& AddCachediSCSIVolumes(CachediSCSIVolume&& value) { m_cachediSCSIVolumes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CachediSCSIVolume> m_cachediSCSIVolumes;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

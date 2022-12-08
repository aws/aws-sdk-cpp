/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisvideo/model/ResourceEndpointListItem.h>
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
namespace KinesisVideo
{
namespace Model
{
  class GetSignalingChannelEndpointResult
  {
  public:
    AWS_KINESISVIDEO_API GetSignalingChannelEndpointResult();
    AWS_KINESISVIDEO_API GetSignalingChannelEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API GetSignalingChannelEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of endpoints for the specified signaling channel.</p>
     */
    inline const Aws::Vector<ResourceEndpointListItem>& GetResourceEndpointList() const{ return m_resourceEndpointList; }

    /**
     * <p>A list of endpoints for the specified signaling channel.</p>
     */
    inline void SetResourceEndpointList(const Aws::Vector<ResourceEndpointListItem>& value) { m_resourceEndpointList = value; }

    /**
     * <p>A list of endpoints for the specified signaling channel.</p>
     */
    inline void SetResourceEndpointList(Aws::Vector<ResourceEndpointListItem>&& value) { m_resourceEndpointList = std::move(value); }

    /**
     * <p>A list of endpoints for the specified signaling channel.</p>
     */
    inline GetSignalingChannelEndpointResult& WithResourceEndpointList(const Aws::Vector<ResourceEndpointListItem>& value) { SetResourceEndpointList(value); return *this;}

    /**
     * <p>A list of endpoints for the specified signaling channel.</p>
     */
    inline GetSignalingChannelEndpointResult& WithResourceEndpointList(Aws::Vector<ResourceEndpointListItem>&& value) { SetResourceEndpointList(std::move(value)); return *this;}

    /**
     * <p>A list of endpoints for the specified signaling channel.</p>
     */
    inline GetSignalingChannelEndpointResult& AddResourceEndpointList(const ResourceEndpointListItem& value) { m_resourceEndpointList.push_back(value); return *this; }

    /**
     * <p>A list of endpoints for the specified signaling channel.</p>
     */
    inline GetSignalingChannelEndpointResult& AddResourceEndpointList(ResourceEndpointListItem&& value) { m_resourceEndpointList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ResourceEndpointListItem> m_resourceEndpointList;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws

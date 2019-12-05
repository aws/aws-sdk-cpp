/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_KINESISVIDEO_API GetSignalingChannelEndpointResult
  {
  public:
    GetSignalingChannelEndpointResult();
    GetSignalingChannelEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSignalingChannelEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

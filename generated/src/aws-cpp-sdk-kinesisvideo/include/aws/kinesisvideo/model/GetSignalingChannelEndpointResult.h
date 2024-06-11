﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    ///@{
    /**
     * <p>A list of endpoints for the specified signaling channel.</p>
     */
    inline const Aws::Vector<ResourceEndpointListItem>& GetResourceEndpointList() const{ return m_resourceEndpointList; }
    inline void SetResourceEndpointList(const Aws::Vector<ResourceEndpointListItem>& value) { m_resourceEndpointList = value; }
    inline void SetResourceEndpointList(Aws::Vector<ResourceEndpointListItem>&& value) { m_resourceEndpointList = std::move(value); }
    inline GetSignalingChannelEndpointResult& WithResourceEndpointList(const Aws::Vector<ResourceEndpointListItem>& value) { SetResourceEndpointList(value); return *this;}
    inline GetSignalingChannelEndpointResult& WithResourceEndpointList(Aws::Vector<ResourceEndpointListItem>&& value) { SetResourceEndpointList(std::move(value)); return *this;}
    inline GetSignalingChannelEndpointResult& AddResourceEndpointList(const ResourceEndpointListItem& value) { m_resourceEndpointList.push_back(value); return *this; }
    inline GetSignalingChannelEndpointResult& AddResourceEndpointList(ResourceEndpointListItem&& value) { m_resourceEndpointList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSignalingChannelEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSignalingChannelEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSignalingChannelEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceEndpointListItem> m_resourceEndpointList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws

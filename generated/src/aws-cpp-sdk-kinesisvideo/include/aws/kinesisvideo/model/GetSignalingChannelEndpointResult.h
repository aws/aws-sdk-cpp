/**
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
    AWS_KINESISVIDEO_API GetSignalingChannelEndpointResult() = default;
    AWS_KINESISVIDEO_API GetSignalingChannelEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API GetSignalingChannelEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of endpoints for the specified signaling channel.</p>
     */
    inline const Aws::Vector<ResourceEndpointListItem>& GetResourceEndpointList() const { return m_resourceEndpointList; }
    template<typename ResourceEndpointListT = Aws::Vector<ResourceEndpointListItem>>
    void SetResourceEndpointList(ResourceEndpointListT&& value) { m_resourceEndpointListHasBeenSet = true; m_resourceEndpointList = std::forward<ResourceEndpointListT>(value); }
    template<typename ResourceEndpointListT = Aws::Vector<ResourceEndpointListItem>>
    GetSignalingChannelEndpointResult& WithResourceEndpointList(ResourceEndpointListT&& value) { SetResourceEndpointList(std::forward<ResourceEndpointListT>(value)); return *this;}
    template<typename ResourceEndpointListT = ResourceEndpointListItem>
    GetSignalingChannelEndpointResult& AddResourceEndpointList(ResourceEndpointListT&& value) { m_resourceEndpointListHasBeenSet = true; m_resourceEndpointList.emplace_back(std::forward<ResourceEndpointListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSignalingChannelEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceEndpointListItem> m_resourceEndpointList;
    bool m_resourceEndpointListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws

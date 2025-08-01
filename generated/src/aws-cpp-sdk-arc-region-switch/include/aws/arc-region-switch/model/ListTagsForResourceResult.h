/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ARCRegionswitch
{
namespace Model
{
  class ListTagsForResourceResult
  {
  public:
    AWS_ARCREGIONSWITCH_API ListTagsForResourceResult() = default;
    AWS_ARCREGIONSWITCH_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARCREGIONSWITCH_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The tags for a resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResourceTags() const { return m_resourceTags; }
    template<typename ResourceTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::forward<ResourceTagsT>(value); }
    template<typename ResourceTagsT = Aws::Map<Aws::String, Aws::String>>
    ListTagsForResourceResult& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsKeyT = Aws::String, typename ResourceTagsValueT = Aws::String>
    ListTagsForResourceResult& AddResourceTags(ResourceTagsKeyT&& key, ResourceTagsValueT&& value) {
      m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::forward<ResourceTagsKeyT>(key), std::forward<ResourceTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTagsForResourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws

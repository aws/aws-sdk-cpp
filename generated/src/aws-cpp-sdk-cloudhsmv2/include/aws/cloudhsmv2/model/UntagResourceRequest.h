/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/CloudHSMV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public CloudHSMV2Request
  {
  public:
    AWS_CLOUDHSMV2_API UntagResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_CLOUDHSMV2_API Aws::String SerializePayload() const override;

    AWS_CLOUDHSMV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The cluster identifier (ID) for the cluster whose tags you are removing. To
     * find the cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    UntagResourceRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more tag keys for the tags that you are removing. Specify
     * only the tag keys, not the tag values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeyList() const { return m_tagKeyList; }
    inline bool TagKeyListHasBeenSet() const { return m_tagKeyListHasBeenSet; }
    template<typename TagKeyListT = Aws::Vector<Aws::String>>
    void SetTagKeyList(TagKeyListT&& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList = std::forward<TagKeyListT>(value); }
    template<typename TagKeyListT = Aws::Vector<Aws::String>>
    UntagResourceRequest& WithTagKeyList(TagKeyListT&& value) { SetTagKeyList(std::forward<TagKeyListT>(value)); return *this;}
    template<typename TagKeyListT = Aws::String>
    UntagResourceRequest& AddTagKeyList(TagKeyListT&& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList.emplace_back(std::forward<TagKeyListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeyList;
    bool m_tagKeyListHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws

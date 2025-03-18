/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public KinesisVideoRequest
  {
  public:
    AWS_KINESISVIDEO_API UntagResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the signaling channel from which you want
     * to remove tags.</p>
     */
    inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    template<typename ResourceARNT = Aws::String>
    void SetResourceARN(ResourceARNT&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::forward<ResourceARNT>(value); }
    template<typename ResourceARNT = Aws::String>
    UntagResourceRequest& WithResourceARN(ResourceARNT&& value) { SetResourceARN(std::forward<ResourceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the keys of the tags that you want to remove.</p>
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

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeyList;
    bool m_tagKeyListHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws

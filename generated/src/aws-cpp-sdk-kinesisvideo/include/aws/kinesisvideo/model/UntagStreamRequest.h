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
  class UntagStreamRequest : public KinesisVideoRequest
  {
  public:
    AWS_KINESISVIDEO_API UntagStreamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagStream"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to remove tags
     * from.</p>
     */
    inline const Aws::String& GetStreamARN() const { return m_streamARN; }
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
    template<typename StreamARNT = Aws::String>
    void SetStreamARN(StreamARNT&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::forward<StreamARNT>(value); }
    template<typename StreamARNT = Aws::String>
    UntagStreamRequest& WithStreamARN(StreamARNT&& value) { SetStreamARN(std::forward<StreamARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stream that you want to remove tags from.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    UntagStreamRequest& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
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
    UntagStreamRequest& WithTagKeyList(TagKeyListT&& value) { SetTagKeyList(std::forward<TagKeyListT>(value)); return *this;}
    template<typename TagKeyListT = Aws::String>
    UntagStreamRequest& AddTagKeyList(TagKeyListT&& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList.emplace_back(std::forward<TagKeyListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeyList;
    bool m_tagKeyListHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws

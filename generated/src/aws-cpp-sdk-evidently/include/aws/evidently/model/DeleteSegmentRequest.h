/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   */
  class DeleteSegmentRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API DeleteSegmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSegment"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies the segment to delete.</p>
     */
    inline const Aws::String& GetSegment() const { return m_segment; }
    inline bool SegmentHasBeenSet() const { return m_segmentHasBeenSet; }
    template<typename SegmentT = Aws::String>
    void SetSegment(SegmentT&& value) { m_segmentHasBeenSet = true; m_segment = std::forward<SegmentT>(value); }
    template<typename SegmentT = Aws::String>
    DeleteSegmentRequest& WithSegment(SegmentT&& value) { SetSegment(std::forward<SegmentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_segment;
    bool m_segmentHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws

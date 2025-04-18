﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Kinesis
{
namespace Model
{

  /**
   * <p>Represents the input for <code>ListTagsForStream</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/ListTagsForStreamInput">AWS
   * API Reference</a></p>
   */
  class ListTagsForStreamRequest : public KinesisRequest
  {
  public:
    AWS_KINESIS_API ListTagsForStreamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForStream"; }

    AWS_KINESIS_API Aws::String SerializePayload() const override;

    AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_KINESIS_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The name of the stream.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    ListTagsForStreamRequest& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key to use as the starting point for the list of tags. If this parameter
     * is set, <code>ListTagsForStream</code> gets all tags that occur after
     * <code>ExclusiveStartTagKey</code>. </p>
     */
    inline const Aws::String& GetExclusiveStartTagKey() const { return m_exclusiveStartTagKey; }
    inline bool ExclusiveStartTagKeyHasBeenSet() const { return m_exclusiveStartTagKeyHasBeenSet; }
    template<typename ExclusiveStartTagKeyT = Aws::String>
    void SetExclusiveStartTagKey(ExclusiveStartTagKeyT&& value) { m_exclusiveStartTagKeyHasBeenSet = true; m_exclusiveStartTagKey = std::forward<ExclusiveStartTagKeyT>(value); }
    template<typename ExclusiveStartTagKeyT = Aws::String>
    ListTagsForStreamRequest& WithExclusiveStartTagKey(ExclusiveStartTagKeyT&& value) { SetExclusiveStartTagKey(std::forward<ExclusiveStartTagKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tags to return. If this number is less than the total number of
     * tags associated with the stream, <code>HasMoreTags</code> is set to
     * <code>true</code>. To list additional tags, set
     * <code>ExclusiveStartTagKey</code> to the last key in the response.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListTagsForStreamRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the stream.</p>
     */
    inline const Aws::String& GetStreamARN() const { return m_streamARN; }
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
    template<typename StreamARNT = Aws::String>
    void SetStreamARN(StreamARNT&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::forward<StreamARNT>(value); }
    template<typename StreamARNT = Aws::String>
    ListTagsForStreamRequest& WithStreamARN(StreamARNT&& value) { SetStreamARN(std::forward<StreamARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_exclusiveStartTagKey;
    bool m_exclusiveStartTagKeyHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws

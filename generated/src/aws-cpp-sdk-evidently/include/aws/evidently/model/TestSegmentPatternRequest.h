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
  class TestSegmentPatternRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API TestSegmentPatternRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestSegmentPattern"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    /**
     * <p>The pattern to test.</p>
     */
    inline const Aws::String& GetPattern() const{ return m_pattern; }

    /**
     * <p>The pattern to test.</p>
     */
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }

    /**
     * <p>The pattern to test.</p>
     */
    inline void SetPattern(const Aws::String& value) { m_patternHasBeenSet = true; m_pattern = value; }

    /**
     * <p>The pattern to test.</p>
     */
    inline void SetPattern(Aws::String&& value) { m_patternHasBeenSet = true; m_pattern = std::move(value); }

    /**
     * <p>The pattern to test.</p>
     */
    inline void SetPattern(const char* value) { m_patternHasBeenSet = true; m_pattern.assign(value); }

    /**
     * <p>The pattern to test.</p>
     */
    inline TestSegmentPatternRequest& WithPattern(const Aws::String& value) { SetPattern(value); return *this;}

    /**
     * <p>The pattern to test.</p>
     */
    inline TestSegmentPatternRequest& WithPattern(Aws::String&& value) { SetPattern(std::move(value)); return *this;}

    /**
     * <p>The pattern to test.</p>
     */
    inline TestSegmentPatternRequest& WithPattern(const char* value) { SetPattern(value); return *this;}


    /**
     * <p>A sample <code>evaluationContext</code> JSON block to test against the
     * specified pattern.</p>
     */
    inline const Aws::String& GetPayload() const{ return m_payload; }

    /**
     * <p>A sample <code>evaluationContext</code> JSON block to test against the
     * specified pattern.</p>
     */
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    /**
     * <p>A sample <code>evaluationContext</code> JSON block to test against the
     * specified pattern.</p>
     */
    inline void SetPayload(const Aws::String& value) { m_payloadHasBeenSet = true; m_payload = value; }

    /**
     * <p>A sample <code>evaluationContext</code> JSON block to test against the
     * specified pattern.</p>
     */
    inline void SetPayload(Aws::String&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }

    /**
     * <p>A sample <code>evaluationContext</code> JSON block to test against the
     * specified pattern.</p>
     */
    inline void SetPayload(const char* value) { m_payloadHasBeenSet = true; m_payload.assign(value); }

    /**
     * <p>A sample <code>evaluationContext</code> JSON block to test against the
     * specified pattern.</p>
     */
    inline TestSegmentPatternRequest& WithPayload(const Aws::String& value) { SetPayload(value); return *this;}

    /**
     * <p>A sample <code>evaluationContext</code> JSON block to test against the
     * specified pattern.</p>
     */
    inline TestSegmentPatternRequest& WithPayload(Aws::String&& value) { SetPayload(std::move(value)); return *this;}

    /**
     * <p>A sample <code>evaluationContext</code> JSON block to test against the
     * specified pattern.</p>
     */
    inline TestSegmentPatternRequest& WithPayload(const char* value) { SetPayload(value); return *this;}

  private:

    Aws::String m_pattern;
    bool m_patternHasBeenSet = false;

    Aws::String m_payload;
    bool m_payloadHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws

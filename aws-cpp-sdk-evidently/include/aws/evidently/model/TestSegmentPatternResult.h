/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>

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
namespace CloudWatchEvidently
{
namespace Model
{
  class TestSegmentPatternResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API TestSegmentPatternResult();
    AWS_CLOUDWATCHEVIDENTLY_API TestSegmentPatternResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API TestSegmentPatternResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns <code>true</code> if the pattern matches the payload.</p>
     */
    inline bool GetMatch() const{ return m_match; }

    /**
     * <p>Returns <code>true</code> if the pattern matches the payload.</p>
     */
    inline void SetMatch(bool value) { m_match = value; }

    /**
     * <p>Returns <code>true</code> if the pattern matches the payload.</p>
     */
    inline TestSegmentPatternResult& WithMatch(bool value) { SetMatch(value); return *this;}

  private:

    bool m_match;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws

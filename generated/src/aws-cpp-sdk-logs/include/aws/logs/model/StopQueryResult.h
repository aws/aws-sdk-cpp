/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

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
namespace CloudWatchLogs
{
namespace Model
{
  class StopQueryResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API StopQueryResult();
    AWS_CLOUDWATCHLOGS_API StopQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API StopQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This is true if the query was stopped by the <code>StopQuery</code>
     * operation.</p>
     */
    inline bool GetSuccess() const{ return m_success; }

    /**
     * <p>This is true if the query was stopped by the <code>StopQuery</code>
     * operation.</p>
     */
    inline void SetSuccess(bool value) { m_success = value; }

    /**
     * <p>This is true if the query was stopped by the <code>StopQuery</code>
     * operation.</p>
     */
    inline StopQueryResult& WithSuccess(bool value) { SetSuccess(value); return *this;}

  private:

    bool m_success;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

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
  class DeleteQueryDefinitionResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DeleteQueryDefinitionResult();
    AWS_CLOUDWATCHLOGS_API DeleteQueryDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DeleteQueryDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A value of TRUE indicates that the operation succeeded. FALSE indicates that
     * the operation failed.</p>
     */
    inline bool GetSuccess() const{ return m_success; }

    /**
     * <p>A value of TRUE indicates that the operation succeeded. FALSE indicates that
     * the operation failed.</p>
     */
    inline void SetSuccess(bool value) { m_success = value; }

    /**
     * <p>A value of TRUE indicates that the operation succeeded. FALSE indicates that
     * the operation failed.</p>
     */
    inline DeleteQueryDefinitionResult& WithSuccess(bool value) { SetSuccess(value); return *this;}

  private:

    bool m_success;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

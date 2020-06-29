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
  class AWS_CLOUDWATCHLOGS_API DeleteQueryDefinitionResult
  {
  public:
    DeleteQueryDefinitionResult();
    DeleteQueryDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteQueryDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline bool GetSuccess() const{ return m_success; }

    
    inline void SetSuccess(bool value) { m_success = value; }

    
    inline DeleteQueryDefinitionResult& WithSuccess(bool value) { SetSuccess(value); return *this;}

  private:

    bool m_success;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

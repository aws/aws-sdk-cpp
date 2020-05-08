/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

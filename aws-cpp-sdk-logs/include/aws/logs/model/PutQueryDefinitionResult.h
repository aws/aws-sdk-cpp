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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
  class AWS_CLOUDWATCHLOGS_API PutQueryDefinitionResult
  {
  public:
    PutQueryDefinitionResult();
    PutQueryDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutQueryDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetQueryDefinitionId() const{ return m_queryDefinitionId; }

    
    inline void SetQueryDefinitionId(const Aws::String& value) { m_queryDefinitionId = value; }

    
    inline void SetQueryDefinitionId(Aws::String&& value) { m_queryDefinitionId = std::move(value); }

    
    inline void SetQueryDefinitionId(const char* value) { m_queryDefinitionId.assign(value); }

    
    inline PutQueryDefinitionResult& WithQueryDefinitionId(const Aws::String& value) { SetQueryDefinitionId(value); return *this;}

    
    inline PutQueryDefinitionResult& WithQueryDefinitionId(Aws::String&& value) { SetQueryDefinitionId(std::move(value)); return *this;}

    
    inline PutQueryDefinitionResult& WithQueryDefinitionId(const char* value) { SetQueryDefinitionId(value); return *this;}

  private:

    Aws::String m_queryDefinitionId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

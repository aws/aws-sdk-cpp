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
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHLOGS_API DeleteQueryDefinitionRequest : public CloudWatchLogsRequest
  {
  public:
    DeleteQueryDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteQueryDefinition"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetQueryDefinitionId() const{ return m_queryDefinitionId; }

    
    inline bool QueryDefinitionIdHasBeenSet() const { return m_queryDefinitionIdHasBeenSet; }

    
    inline void SetQueryDefinitionId(const Aws::String& value) { m_queryDefinitionIdHasBeenSet = true; m_queryDefinitionId = value; }

    
    inline void SetQueryDefinitionId(Aws::String&& value) { m_queryDefinitionIdHasBeenSet = true; m_queryDefinitionId = std::move(value); }

    
    inline void SetQueryDefinitionId(const char* value) { m_queryDefinitionIdHasBeenSet = true; m_queryDefinitionId.assign(value); }

    
    inline DeleteQueryDefinitionRequest& WithQueryDefinitionId(const Aws::String& value) { SetQueryDefinitionId(value); return *this;}

    
    inline DeleteQueryDefinitionRequest& WithQueryDefinitionId(Aws::String&& value) { SetQueryDefinitionId(std::move(value)); return *this;}

    
    inline DeleteQueryDefinitionRequest& WithQueryDefinitionId(const char* value) { SetQueryDefinitionId(value); return *this;}

  private:

    Aws::String m_queryDefinitionId;
    bool m_queryDefinitionIdHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
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

  class AWS_CLOUDWATCHLOGS_API SubscriptionFilter
  {
  public:
    SubscriptionFilter();
    SubscriptionFilter(const Aws::Utils::Json::JsonValue& jsonValue);
    SubscriptionFilter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetFilterName() const{ return m_filterName; }

    
    inline void SetFilterName(const Aws::String& value) { m_filterNameHasBeenSet = true; m_filterName = value; }

    
    inline void SetFilterName(Aws::String&& value) { m_filterNameHasBeenSet = true; m_filterName = value; }

    
    inline void SetFilterName(const char* value) { m_filterNameHasBeenSet = true; m_filterName.assign(value); }

    
    inline SubscriptionFilter& WithFilterName(const Aws::String& value) { SetFilterName(value); return *this;}

    
    inline SubscriptionFilter& WithFilterName(Aws::String&& value) { SetFilterName(value); return *this;}

    
    inline SubscriptionFilter& WithFilterName(const char* value) { SetFilterName(value); return *this;}

    
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    
    inline SubscriptionFilter& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    
    inline SubscriptionFilter& WithLogGroupName(Aws::String&& value) { SetLogGroupName(value); return *this;}

    
    inline SubscriptionFilter& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

    
    inline const Aws::String& GetFilterPattern() const{ return m_filterPattern; }

    
    inline void SetFilterPattern(const Aws::String& value) { m_filterPatternHasBeenSet = true; m_filterPattern = value; }

    
    inline void SetFilterPattern(Aws::String&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = value; }

    
    inline void SetFilterPattern(const char* value) { m_filterPatternHasBeenSet = true; m_filterPattern.assign(value); }

    
    inline SubscriptionFilter& WithFilterPattern(const Aws::String& value) { SetFilterPattern(value); return *this;}

    
    inline SubscriptionFilter& WithFilterPattern(Aws::String&& value) { SetFilterPattern(value); return *this;}

    
    inline SubscriptionFilter& WithFilterPattern(const char* value) { SetFilterPattern(value); return *this;}

    
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    
    inline SubscriptionFilter& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    
    inline SubscriptionFilter& WithDestinationArn(Aws::String&& value) { SetDestinationArn(value); return *this;}

    
    inline SubscriptionFilter& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}

    
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    
    inline SubscriptionFilter& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    
    inline SubscriptionFilter& WithRoleArn(Aws::String&& value) { SetRoleArn(value); return *this;}

    
    inline SubscriptionFilter& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

    
    inline long long GetCreationTime() const{ return m_creationTime; }

    
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    
    inline SubscriptionFilter& WithCreationTime(long long value) { SetCreationTime(value); return *this;}

  private:
    Aws::String m_filterName;
    bool m_filterNameHasBeenSet;
    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;
    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet;
    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet;
    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
    long long m_creationTime;
    bool m_creationTimeHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

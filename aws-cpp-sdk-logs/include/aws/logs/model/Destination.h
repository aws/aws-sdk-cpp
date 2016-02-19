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

  class AWS_CLOUDWATCHLOGS_API Destination
  {
  public:
    Destination();
    Destination(const Aws::Utils::Json::JsonValue& jsonValue);
    Destination& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }

    
    inline void SetDestinationName(const Aws::String& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }

    
    inline void SetDestinationName(Aws::String&& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }

    
    inline void SetDestinationName(const char* value) { m_destinationNameHasBeenSet = true; m_destinationName.assign(value); }

    
    inline Destination& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}

    
    inline Destination& WithDestinationName(Aws::String&& value) { SetDestinationName(value); return *this;}

    
    inline Destination& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}

    
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    
    inline Destination& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    
    inline Destination& WithTargetArn(Aws::String&& value) { SetTargetArn(value); return *this;}

    
    inline Destination& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}

    
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    
    inline Destination& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    
    inline Destination& WithRoleArn(Aws::String&& value) { SetRoleArn(value); return *this;}

    
    inline Destination& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

    
    inline const Aws::String& GetAccessPolicy() const{ return m_accessPolicy; }

    
    inline void SetAccessPolicy(const Aws::String& value) { m_accessPolicyHasBeenSet = true; m_accessPolicy = value; }

    
    inline void SetAccessPolicy(Aws::String&& value) { m_accessPolicyHasBeenSet = true; m_accessPolicy = value; }

    
    inline void SetAccessPolicy(const char* value) { m_accessPolicyHasBeenSet = true; m_accessPolicy.assign(value); }

    
    inline Destination& WithAccessPolicy(const Aws::String& value) { SetAccessPolicy(value); return *this;}

    
    inline Destination& WithAccessPolicy(Aws::String&& value) { SetAccessPolicy(value); return *this;}

    
    inline Destination& WithAccessPolicy(const char* value) { SetAccessPolicy(value); return *this;}

    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    
    inline Destination& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline Destination& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    
    inline Destination& WithArn(const char* value) { SetArn(value); return *this;}

    
    inline long long GetCreationTime() const{ return m_creationTime; }

    
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    
    inline Destination& WithCreationTime(long long value) { SetCreationTime(value); return *this;}

  private:
    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet;
    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet;
    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
    Aws::String m_accessPolicy;
    bool m_accessPolicyHasBeenSet;
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    long long m_creationTime;
    bool m_creationTimeHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

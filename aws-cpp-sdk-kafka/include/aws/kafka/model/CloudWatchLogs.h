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
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Kafka
{
namespace Model
{

  class AWS_KAFKA_API CloudWatchLogs
  {
  public:
    CloudWatchLogs();
    CloudWatchLogs(Aws::Utils::Json::JsonView jsonValue);
    CloudWatchLogs& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline bool GetEnabled() const{ return m_enabled; }

    
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    
    inline CloudWatchLogs& WithEnabled(bool value) { SetEnabled(value); return *this;}


    
    inline const Aws::String& GetLogGroup() const{ return m_logGroup; }

    
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }

    
    inline void SetLogGroup(const Aws::String& value) { m_logGroupHasBeenSet = true; m_logGroup = value; }

    
    inline void SetLogGroup(Aws::String&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::move(value); }

    
    inline void SetLogGroup(const char* value) { m_logGroupHasBeenSet = true; m_logGroup.assign(value); }

    
    inline CloudWatchLogs& WithLogGroup(const Aws::String& value) { SetLogGroup(value); return *this;}

    
    inline CloudWatchLogs& WithLogGroup(Aws::String&& value) { SetLogGroup(std::move(value)); return *this;}

    
    inline CloudWatchLogs& WithLogGroup(const char* value) { SetLogGroup(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws

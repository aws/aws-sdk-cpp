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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/LogicalOperator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/JobRunState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  class AWS_GLUE_API Condition
  {
  public:
    Condition();
    Condition(const Aws::Utils::Json::JsonValue& jsonValue);
    Condition& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const LogicalOperator& GetLogicalOperator() const{ return m_logicalOperator; }

    
    inline void SetLogicalOperator(const LogicalOperator& value) { m_logicalOperatorHasBeenSet = true; m_logicalOperator = value; }

    
    inline void SetLogicalOperator(LogicalOperator&& value) { m_logicalOperatorHasBeenSet = true; m_logicalOperator = std::move(value); }

    
    inline Condition& WithLogicalOperator(const LogicalOperator& value) { SetLogicalOperator(value); return *this;}

    
    inline Condition& WithLogicalOperator(LogicalOperator&& value) { SetLogicalOperator(std::move(value)); return *this;}


    
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    
    inline Condition& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    
    inline Condition& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    
    inline Condition& WithJobName(const char* value) { SetJobName(value); return *this;}


    
    inline const JobRunState& GetState() const{ return m_state; }

    
    inline void SetState(const JobRunState& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(JobRunState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    
    inline Condition& WithState(const JobRunState& value) { SetState(value); return *this;}

    
    inline Condition& WithState(JobRunState&& value) { SetState(std::move(value)); return *this;}

  private:

    LogicalOperator m_logicalOperator;
    bool m_logicalOperatorHasBeenSet;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    JobRunState m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

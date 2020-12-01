/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/InsightHealth.h>
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
namespace DevOpsGuru
{
namespace Model
{

  class AWS_DEVOPSGURU_API CloudFormationHealth
  {
  public:
    CloudFormationHealth();
    CloudFormationHealth(Aws::Utils::Json::JsonView jsonValue);
    CloudFormationHealth& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const InsightHealth& GetInsight() const{ return m_insight; }

    
    inline bool InsightHasBeenSet() const { return m_insightHasBeenSet; }

    
    inline void SetInsight(const InsightHealth& value) { m_insightHasBeenSet = true; m_insight = value; }

    
    inline void SetInsight(InsightHealth&& value) { m_insightHasBeenSet = true; m_insight = std::move(value); }

    
    inline CloudFormationHealth& WithInsight(const InsightHealth& value) { SetInsight(value); return *this;}

    
    inline CloudFormationHealth& WithInsight(InsightHealth&& value) { SetInsight(std::move(value)); return *this;}


    
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    
    inline CloudFormationHealth& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    
    inline CloudFormationHealth& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    
    inline CloudFormationHealth& WithStackName(const char* value) { SetStackName(value); return *this;}

  private:

    InsightHealth m_insight;
    bool m_insightHasBeenSet;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws

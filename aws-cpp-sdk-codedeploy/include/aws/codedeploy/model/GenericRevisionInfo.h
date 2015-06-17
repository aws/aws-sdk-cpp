/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/codedeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace codedeploy
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_CODEDEPLOY_API GenericRevisionInfo
  {
  public:
    GenericRevisionInfo();
    GenericRevisionInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    GenericRevisionInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetDescription() const{ return m_description; }
    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline GenericRevisionInfo&  WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline GenericRevisionInfo& WithDescription(const char* value) { SetDescription(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetDeploymentGroups() const{ return m_deploymentGroups; }
    
    inline void SetDeploymentGroups(const Aws::Vector<Aws::String>& value) { m_deploymentGroupsHasBeenSet = true; m_deploymentGroups = value; }

    
    inline GenericRevisionInfo&  WithDeploymentGroups(const Aws::Vector<Aws::String>& value) { SetDeploymentGroups(value); return *this;}

    
    inline GenericRevisionInfo& AddDeploymentGroups(const Aws::String& value) { m_deploymentGroupsHasBeenSet = true; m_deploymentGroups.push_back(value); return *this; }

    
    inline GenericRevisionInfo& AddDeploymentGroups(const char* value) { m_deploymentGroupsHasBeenSet = true; m_deploymentGroups.push_back(value); return *this; }

    
    inline double GetFirstUsedTime() const{ return m_firstUsedTime; }
    
    inline void SetFirstUsedTime(double value) { m_firstUsedTimeHasBeenSet = true; m_firstUsedTime = value; }

    
    inline GenericRevisionInfo&  WithFirstUsedTime(double value) { SetFirstUsedTime(value); return *this;}

    
    inline double GetLastUsedTime() const{ return m_lastUsedTime; }
    
    inline void SetLastUsedTime(double value) { m_lastUsedTimeHasBeenSet = true; m_lastUsedTime = value; }

    
    inline GenericRevisionInfo&  WithLastUsedTime(double value) { SetLastUsedTime(value); return *this;}

    
    inline double GetRegisterTime() const{ return m_registerTime; }
    
    inline void SetRegisterTime(double value) { m_registerTimeHasBeenSet = true; m_registerTime = value; }

    
    inline GenericRevisionInfo&  WithRegisterTime(double value) { SetRegisterTime(value); return *this;}

  private:
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::Vector<Aws::String> m_deploymentGroups;
    bool m_deploymentGroupsHasBeenSet;
    double m_firstUsedTime;
    bool m_firstUsedTimeHasBeenSet;
    double m_lastUsedTime;
    bool m_lastUsedTimeHasBeenSet;
    double m_registerTime;
    bool m_registerTimeHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws

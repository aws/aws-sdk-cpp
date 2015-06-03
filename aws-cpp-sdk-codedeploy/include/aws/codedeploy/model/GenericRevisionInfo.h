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
    <p>Information about an application revision.</p>
  */
  class AWS_CODEDEPLOY_API GenericRevisionInfo
  {
  public:
    GenericRevisionInfo();
    GenericRevisionInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    GenericRevisionInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>A comment about the revision.</p>
    */
    inline const Aws::String& GetDescription() const{ return m_description; }
    /*
     <p>A comment about the revision.</p>
    */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /*
     <p>A comment about the revision.</p>
    */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /*
     <p>A comment about the revision.</p>
    */
    inline GenericRevisionInfo&  WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /*
     <p>A comment about the revision.</p>
    */
    inline GenericRevisionInfo& WithDescription(const char* value) { SetDescription(value); return *this;}

    /*
     <p>A list of deployment groups that use this revision.</p>
    */
    inline const Aws::Vector<Aws::String>& GetDeploymentGroups() const{ return m_deploymentGroups; }
    /*
     <p>A list of deployment groups that use this revision.</p>
    */
    inline void SetDeploymentGroups(const Aws::Vector<Aws::String>& value) { m_deploymentGroupsHasBeenSet = true; m_deploymentGroups = value; }

    /*
     <p>A list of deployment groups that use this revision.</p>
    */
    inline GenericRevisionInfo&  WithDeploymentGroups(const Aws::Vector<Aws::String>& value) { SetDeploymentGroups(value); return *this;}

    /*
     <p>A list of deployment groups that use this revision.</p>
    */
    inline GenericRevisionInfo& AddDeploymentGroups(const Aws::String& value) { m_deploymentGroupsHasBeenSet = true; m_deploymentGroups.push_back(value); return *this; }

    /*
     <p>A list of deployment groups that use this revision.</p>
    */
    inline GenericRevisionInfo& AddDeploymentGroups(const char* value) { m_deploymentGroupsHasBeenSet = true; m_deploymentGroups.push_back(value); return *this; }

    /*
     <p>When the revision was first used by AWS CodeDeploy.</p>
    */
    inline double GetFirstUsedTime() const{ return m_firstUsedTime; }
    /*
     <p>When the revision was first used by AWS CodeDeploy.</p>
    */
    inline void SetFirstUsedTime(double value) { m_firstUsedTimeHasBeenSet = true; m_firstUsedTime = value; }

    /*
     <p>When the revision was first used by AWS CodeDeploy.</p>
    */
    inline GenericRevisionInfo&  WithFirstUsedTime(double value) { SetFirstUsedTime(value); return *this;}

    /*
     <p>When the revision was last used by AWS CodeDeploy.</p>
    */
    inline double GetLastUsedTime() const{ return m_lastUsedTime; }
    /*
     <p>When the revision was last used by AWS CodeDeploy.</p>
    */
    inline void SetLastUsedTime(double value) { m_lastUsedTimeHasBeenSet = true; m_lastUsedTime = value; }

    /*
     <p>When the revision was last used by AWS CodeDeploy.</p>
    */
    inline GenericRevisionInfo&  WithLastUsedTime(double value) { SetLastUsedTime(value); return *this;}

    /*
     <p>When the revision was registered with AWS CodeDeploy.</p>
    */
    inline double GetRegisterTime() const{ return m_registerTime; }
    /*
     <p>When the revision was registered with AWS CodeDeploy.</p>
    */
    inline void SetRegisterTime(double value) { m_registerTimeHasBeenSet = true; m_registerTime = value; }

    /*
     <p>When the revision was registered with AWS CodeDeploy.</p>
    */
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

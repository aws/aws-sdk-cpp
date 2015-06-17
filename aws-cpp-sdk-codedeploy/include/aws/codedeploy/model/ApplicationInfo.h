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
  class AWS_CODEDEPLOY_API ApplicationInfo
  {
  public:
    ApplicationInfo();
    ApplicationInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    ApplicationInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    
    inline ApplicationInfo&  WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    
    inline ApplicationInfo& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}

    
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    
    inline ApplicationInfo&  WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    
    inline ApplicationInfo& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    
    inline double GetCreateTime() const{ return m_createTime; }
    
    inline void SetCreateTime(double value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    
    inline ApplicationInfo&  WithCreateTime(double value) { SetCreateTime(value); return *this;}

    
    inline bool GetLinkedToGitHub() const{ return m_linkedToGitHub; }
    
    inline void SetLinkedToGitHub(bool value) { m_linkedToGitHubHasBeenSet = true; m_linkedToGitHub = value; }

    
    inline ApplicationInfo&  WithLinkedToGitHub(bool value) { SetLinkedToGitHub(value); return *this;}

  private:
    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    double m_createTime;
    bool m_createTimeHasBeenSet;
    bool m_linkedToGitHub;
    bool m_linkedToGitHubHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws

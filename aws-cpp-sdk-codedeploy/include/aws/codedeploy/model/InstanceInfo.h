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
#include <aws/codedeploy/model/Tag.h>

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
  class AWS_CODEDEPLOY_API InstanceInfo
  {
  public:
    InstanceInfo();
    InstanceInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    InstanceInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }
    
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    
    inline InstanceInfo&  WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    
    inline InstanceInfo& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}

    
    inline const Aws::String& GetIamUserArn() const{ return m_iamUserArn; }
    
    inline void SetIamUserArn(const Aws::String& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = value; }

    
    inline void SetIamUserArn(const char* value) { m_iamUserArnHasBeenSet = true; m_iamUserArn.assign(value); }

    
    inline InstanceInfo&  WithIamUserArn(const Aws::String& value) { SetIamUserArn(value); return *this;}

    
    inline InstanceInfo& WithIamUserArn(const char* value) { SetIamUserArn(value); return *this;}

    
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }
    
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }

    
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }

    
    inline InstanceInfo&  WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}

    
    inline InstanceInfo& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}

    
    inline double GetRegisterTime() const{ return m_registerTime; }
    
    inline void SetRegisterTime(double value) { m_registerTimeHasBeenSet = true; m_registerTime = value; }

    
    inline InstanceInfo&  WithRegisterTime(double value) { SetRegisterTime(value); return *this;}

    
    inline double GetDeregisterTime() const{ return m_deregisterTime; }
    
    inline void SetDeregisterTime(double value) { m_deregisterTimeHasBeenSet = true; m_deregisterTime = value; }

    
    inline InstanceInfo&  WithDeregisterTime(double value) { SetDeregisterTime(value); return *this;}

    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline InstanceInfo&  WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline InstanceInfo& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet;
    Aws::String m_iamUserArn;
    bool m_iamUserArnHasBeenSet;
    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet;
    double m_registerTime;
    bool m_registerTimeHasBeenSet;
    double m_deregisterTime;
    bool m_deregisterTimeHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws

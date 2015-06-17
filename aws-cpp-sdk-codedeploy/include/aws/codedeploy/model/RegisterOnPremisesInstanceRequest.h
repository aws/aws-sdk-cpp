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
#include <aws/codedeploy/codedeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace codedeploy
{
namespace Model
{

  /*
  */
  class AWS_CODEDEPLOY_API RegisterOnPremisesInstanceRequest : public codedeployRequest
  {
  public:
    RegisterOnPremisesInstanceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }
    
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    
    inline RegisterOnPremisesInstanceRequest&  WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    
    inline RegisterOnPremisesInstanceRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}

    
    inline const Aws::String& GetIamUserArn() const{ return m_iamUserArn; }
    
    inline void SetIamUserArn(const Aws::String& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = value; }

    
    inline void SetIamUserArn(const char* value) { m_iamUserArnHasBeenSet = true; m_iamUserArn.assign(value); }

    
    inline RegisterOnPremisesInstanceRequest&  WithIamUserArn(const Aws::String& value) { SetIamUserArn(value); return *this;}

    
    inline RegisterOnPremisesInstanceRequest& WithIamUserArn(const char* value) { SetIamUserArn(value); return *this;}

  private:
    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet;
    Aws::String m_iamUserArn;
    bool m_iamUserArnHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws

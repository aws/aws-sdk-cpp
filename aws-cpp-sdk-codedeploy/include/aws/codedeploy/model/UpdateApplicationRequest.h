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
  class AWS_CODEDEPLOY_API UpdateApplicationRequest : public codedeployRequest
  {
  public:
    UpdateApplicationRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    
    inline UpdateApplicationRequest&  WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    
    inline UpdateApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    
    inline const Aws::String& GetNewApplicationName() const{ return m_newApplicationName; }
    
    inline void SetNewApplicationName(const Aws::String& value) { m_newApplicationNameHasBeenSet = true; m_newApplicationName = value; }

    
    inline void SetNewApplicationName(const char* value) { m_newApplicationNameHasBeenSet = true; m_newApplicationName.assign(value); }

    
    inline UpdateApplicationRequest&  WithNewApplicationName(const Aws::String& value) { SetNewApplicationName(value); return *this;}

    
    inline UpdateApplicationRequest& WithNewApplicationName(const char* value) { SetNewApplicationName(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::String m_newApplicationName;
    bool m_newApplicationNameHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws

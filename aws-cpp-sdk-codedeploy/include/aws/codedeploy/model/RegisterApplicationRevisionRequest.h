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
#include <aws/codedeploy/model/RevisionLocation.h>

namespace Aws
{
namespace codedeploy
{
namespace Model
{

  /*
  */
  class AWS_CODEDEPLOY_API RegisterApplicationRevisionRequest : public codedeployRequest
  {
  public:
    RegisterApplicationRevisionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    
    inline RegisterApplicationRevisionRequest&  WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    
    inline RegisterApplicationRevisionRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    
    inline const Aws::String& GetDescription() const{ return m_description; }
    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline RegisterApplicationRevisionRequest&  WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline RegisterApplicationRevisionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    
    inline const RevisionLocation& GetRevision() const{ return m_revision; }
    
    inline void SetRevision(const RevisionLocation& value) { m_revisionHasBeenSet = true; m_revision = value; }

    
    inline RegisterApplicationRevisionRequest&  WithRevision(const RevisionLocation& value) { SetRevision(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    RevisionLocation m_revision;
    bool m_revisionHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws

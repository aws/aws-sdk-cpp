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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/RevisionLocation.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a RegisterApplicationRevision
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RegisterApplicationRevisionInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API RegisterApplicationRevisionRequest : public CodeDeployRequest
  {
  public:
    RegisterApplicationRevisionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterApplicationRevision"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline RegisterApplicationRevisionRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline RegisterApplicationRevisionRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline RegisterApplicationRevisionRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>A comment about the revision.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A comment about the revision.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A comment about the revision.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A comment about the revision.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A comment about the revision.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A comment about the revision.</p>
     */
    inline RegisterApplicationRevisionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A comment about the revision.</p>
     */
    inline RegisterApplicationRevisionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A comment about the revision.</p>
     */
    inline RegisterApplicationRevisionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information about the application revision to register, including type and
     * location.</p>
     */
    inline const RevisionLocation& GetRevision() const{ return m_revision; }

    /**
     * <p>Information about the application revision to register, including type and
     * location.</p>
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * <p>Information about the application revision to register, including type and
     * location.</p>
     */
    inline void SetRevision(const RevisionLocation& value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>Information about the application revision to register, including type and
     * location.</p>
     */
    inline void SetRevision(RevisionLocation&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }

    /**
     * <p>Information about the application revision to register, including type and
     * location.</p>
     */
    inline RegisterApplicationRevisionRequest& WithRevision(const RevisionLocation& value) { SetRevision(value); return *this;}

    /**
     * <p>Information about the application revision to register, including type and
     * location.</p>
     */
    inline RegisterApplicationRevisionRequest& WithRevision(RevisionLocation&& value) { SetRevision(std::move(value)); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    RevisionLocation m_revision;
    bool m_revisionHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws

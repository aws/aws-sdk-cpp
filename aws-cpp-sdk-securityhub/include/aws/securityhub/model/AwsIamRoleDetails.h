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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains information about an IAM role, including all of the role's
   * policies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsIamRoleDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsIamRoleDetails
  {
  public:
    AwsIamRoleDetails();
    AwsIamRoleDetails(Aws::Utils::Json::JsonView jsonValue);
    AwsIamRoleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The trust policy that grants permission to assume the role.</p>
     */
    inline const Aws::String& GetAssumeRolePolicyDocument() const{ return m_assumeRolePolicyDocument; }

    /**
     * <p>The trust policy that grants permission to assume the role.</p>
     */
    inline bool AssumeRolePolicyDocumentHasBeenSet() const { return m_assumeRolePolicyDocumentHasBeenSet; }

    /**
     * <p>The trust policy that grants permission to assume the role.</p>
     */
    inline void SetAssumeRolePolicyDocument(const Aws::String& value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument = value; }

    /**
     * <p>The trust policy that grants permission to assume the role.</p>
     */
    inline void SetAssumeRolePolicyDocument(Aws::String&& value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument = std::move(value); }

    /**
     * <p>The trust policy that grants permission to assume the role.</p>
     */
    inline void SetAssumeRolePolicyDocument(const char* value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument.assign(value); }

    /**
     * <p>The trust policy that grants permission to assume the role.</p>
     */
    inline AwsIamRoleDetails& WithAssumeRolePolicyDocument(const Aws::String& value) { SetAssumeRolePolicyDocument(value); return *this;}

    /**
     * <p>The trust policy that grants permission to assume the role.</p>
     */
    inline AwsIamRoleDetails& WithAssumeRolePolicyDocument(Aws::String&& value) { SetAssumeRolePolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The trust policy that grants permission to assume the role.</p>
     */
    inline AwsIamRoleDetails& WithAssumeRolePolicyDocument(const char* value) { SetAssumeRolePolicyDocument(value); return *this;}


    /**
     * <p>The date and time, in ISO 8601 date-time format, when the role was
     * created.</p>
     */
    inline const Aws::String& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time, in ISO 8601 date-time format, when the role was
     * created.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date and time, in ISO 8601 date-time format, when the role was
     * created.</p>
     */
    inline void SetCreateDate(const Aws::String& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time, in ISO 8601 date-time format, when the role was
     * created.</p>
     */
    inline void SetCreateDate(Aws::String&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date and time, in ISO 8601 date-time format, when the role was
     * created.</p>
     */
    inline void SetCreateDate(const char* value) { m_createDateHasBeenSet = true; m_createDate.assign(value); }

    /**
     * <p>The date and time, in ISO 8601 date-time format, when the role was
     * created.</p>
     */
    inline AwsIamRoleDetails& WithCreateDate(const Aws::String& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time, in ISO 8601 date-time format, when the role was
     * created.</p>
     */
    inline AwsIamRoleDetails& WithCreateDate(Aws::String&& value) { SetCreateDate(std::move(value)); return *this;}

    /**
     * <p>The date and time, in ISO 8601 date-time format, when the role was
     * created.</p>
     */
    inline AwsIamRoleDetails& WithCreateDate(const char* value) { SetCreateDate(value); return *this;}


    /**
     * <p>The stable and unique string identifying the role.</p>
     */
    inline const Aws::String& GetRoleId() const{ return m_roleId; }

    /**
     * <p>The stable and unique string identifying the role.</p>
     */
    inline bool RoleIdHasBeenSet() const { return m_roleIdHasBeenSet; }

    /**
     * <p>The stable and unique string identifying the role.</p>
     */
    inline void SetRoleId(const Aws::String& value) { m_roleIdHasBeenSet = true; m_roleId = value; }

    /**
     * <p>The stable and unique string identifying the role.</p>
     */
    inline void SetRoleId(Aws::String&& value) { m_roleIdHasBeenSet = true; m_roleId = std::move(value); }

    /**
     * <p>The stable and unique string identifying the role.</p>
     */
    inline void SetRoleId(const char* value) { m_roleIdHasBeenSet = true; m_roleId.assign(value); }

    /**
     * <p>The stable and unique string identifying the role.</p>
     */
    inline AwsIamRoleDetails& WithRoleId(const Aws::String& value) { SetRoleId(value); return *this;}

    /**
     * <p>The stable and unique string identifying the role.</p>
     */
    inline AwsIamRoleDetails& WithRoleId(Aws::String&& value) { SetRoleId(std::move(value)); return *this;}

    /**
     * <p>The stable and unique string identifying the role.</p>
     */
    inline AwsIamRoleDetails& WithRoleId(const char* value) { SetRoleId(value); return *this;}


    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline AwsIamRoleDetails& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline AwsIamRoleDetails& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline AwsIamRoleDetails& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    /**
     * <p>The maximum session duration (in seconds) that you want to set for the
     * specified role.</p>
     */
    inline int GetMaxSessionDuration() const{ return m_maxSessionDuration; }

    /**
     * <p>The maximum session duration (in seconds) that you want to set for the
     * specified role.</p>
     */
    inline bool MaxSessionDurationHasBeenSet() const { return m_maxSessionDurationHasBeenSet; }

    /**
     * <p>The maximum session duration (in seconds) that you want to set for the
     * specified role.</p>
     */
    inline void SetMaxSessionDuration(int value) { m_maxSessionDurationHasBeenSet = true; m_maxSessionDuration = value; }

    /**
     * <p>The maximum session duration (in seconds) that you want to set for the
     * specified role.</p>
     */
    inline AwsIamRoleDetails& WithMaxSessionDuration(int value) { SetMaxSessionDuration(value); return *this;}


    /**
     * <p>The path to the role.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path to the role.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path to the role.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to the role.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path to the role.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path to the role.</p>
     */
    inline AwsIamRoleDetails& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the role.</p>
     */
    inline AwsIamRoleDetails& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path to the role.</p>
     */
    inline AwsIamRoleDetails& WithPath(const char* value) { SetPath(value); return *this;}

  private:

    Aws::String m_assumeRolePolicyDocument;
    bool m_assumeRolePolicyDocumentHasBeenSet;

    Aws::String m_createDate;
    bool m_createDateHasBeenSet;

    Aws::String m_roleId;
    bool m_roleIdHasBeenSet;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet;

    int m_maxSessionDuration;
    bool m_maxSessionDurationHasBeenSet;

    Aws::String m_path;
    bool m_pathHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

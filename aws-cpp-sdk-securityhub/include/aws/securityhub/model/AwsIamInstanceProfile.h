/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsIamInstanceProfileRole.h>
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
   * <p>Information about an instance profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsIamInstanceProfile">AWS
   * API Reference</a></p>
   */
  class AwsIamInstanceProfile
  {
  public:
    AWS_SECURITYHUB_API AwsIamInstanceProfile();
    AWS_SECURITYHUB_API AwsIamInstanceProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamInstanceProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the instance profile.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the instance profile.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the instance profile.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the instance profile.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the instance profile.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the instance profile.</p>
     */
    inline AwsIamInstanceProfile& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the instance profile.</p>
     */
    inline AwsIamInstanceProfile& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the instance profile.</p>
     */
    inline AwsIamInstanceProfile& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Indicates when the instance profile was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>Indicates when the instance profile was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>Indicates when the instance profile was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreateDate(const Aws::String& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>Indicates when the instance profile was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreateDate(Aws::String&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>Indicates when the instance profile was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreateDate(const char* value) { m_createDateHasBeenSet = true; m_createDate.assign(value); }

    /**
     * <p>Indicates when the instance profile was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsIamInstanceProfile& WithCreateDate(const Aws::String& value) { SetCreateDate(value); return *this;}

    /**
     * <p>Indicates when the instance profile was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsIamInstanceProfile& WithCreateDate(Aws::String&& value) { SetCreateDate(std::move(value)); return *this;}

    /**
     * <p>Indicates when the instance profile was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsIamInstanceProfile& WithCreateDate(const char* value) { SetCreateDate(value); return *this;}


    /**
     * <p>The identifier of the instance profile.</p>
     */
    inline const Aws::String& GetInstanceProfileId() const{ return m_instanceProfileId; }

    /**
     * <p>The identifier of the instance profile.</p>
     */
    inline bool InstanceProfileIdHasBeenSet() const { return m_instanceProfileIdHasBeenSet; }

    /**
     * <p>The identifier of the instance profile.</p>
     */
    inline void SetInstanceProfileId(const Aws::String& value) { m_instanceProfileIdHasBeenSet = true; m_instanceProfileId = value; }

    /**
     * <p>The identifier of the instance profile.</p>
     */
    inline void SetInstanceProfileId(Aws::String&& value) { m_instanceProfileIdHasBeenSet = true; m_instanceProfileId = std::move(value); }

    /**
     * <p>The identifier of the instance profile.</p>
     */
    inline void SetInstanceProfileId(const char* value) { m_instanceProfileIdHasBeenSet = true; m_instanceProfileId.assign(value); }

    /**
     * <p>The identifier of the instance profile.</p>
     */
    inline AwsIamInstanceProfile& WithInstanceProfileId(const Aws::String& value) { SetInstanceProfileId(value); return *this;}

    /**
     * <p>The identifier of the instance profile.</p>
     */
    inline AwsIamInstanceProfile& WithInstanceProfileId(Aws::String&& value) { SetInstanceProfileId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the instance profile.</p>
     */
    inline AwsIamInstanceProfile& WithInstanceProfileId(const char* value) { SetInstanceProfileId(value); return *this;}


    /**
     * <p>The name of the instance profile.</p>
     */
    inline const Aws::String& GetInstanceProfileName() const{ return m_instanceProfileName; }

    /**
     * <p>The name of the instance profile.</p>
     */
    inline bool InstanceProfileNameHasBeenSet() const { return m_instanceProfileNameHasBeenSet; }

    /**
     * <p>The name of the instance profile.</p>
     */
    inline void SetInstanceProfileName(const Aws::String& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = value; }

    /**
     * <p>The name of the instance profile.</p>
     */
    inline void SetInstanceProfileName(Aws::String&& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = std::move(value); }

    /**
     * <p>The name of the instance profile.</p>
     */
    inline void SetInstanceProfileName(const char* value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName.assign(value); }

    /**
     * <p>The name of the instance profile.</p>
     */
    inline AwsIamInstanceProfile& WithInstanceProfileName(const Aws::String& value) { SetInstanceProfileName(value); return *this;}

    /**
     * <p>The name of the instance profile.</p>
     */
    inline AwsIamInstanceProfile& WithInstanceProfileName(Aws::String&& value) { SetInstanceProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the instance profile.</p>
     */
    inline AwsIamInstanceProfile& WithInstanceProfileName(const char* value) { SetInstanceProfileName(value); return *this;}


    /**
     * <p>The path to the instance profile.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path to the instance profile.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path to the instance profile.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to the instance profile.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path to the instance profile.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path to the instance profile.</p>
     */
    inline AwsIamInstanceProfile& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the instance profile.</p>
     */
    inline AwsIamInstanceProfile& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path to the instance profile.</p>
     */
    inline AwsIamInstanceProfile& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The roles associated with the instance profile.</p>
     */
    inline const Aws::Vector<AwsIamInstanceProfileRole>& GetRoles() const{ return m_roles; }

    /**
     * <p>The roles associated with the instance profile.</p>
     */
    inline bool RolesHasBeenSet() const { return m_rolesHasBeenSet; }

    /**
     * <p>The roles associated with the instance profile.</p>
     */
    inline void SetRoles(const Aws::Vector<AwsIamInstanceProfileRole>& value) { m_rolesHasBeenSet = true; m_roles = value; }

    /**
     * <p>The roles associated with the instance profile.</p>
     */
    inline void SetRoles(Aws::Vector<AwsIamInstanceProfileRole>&& value) { m_rolesHasBeenSet = true; m_roles = std::move(value); }

    /**
     * <p>The roles associated with the instance profile.</p>
     */
    inline AwsIamInstanceProfile& WithRoles(const Aws::Vector<AwsIamInstanceProfileRole>& value) { SetRoles(value); return *this;}

    /**
     * <p>The roles associated with the instance profile.</p>
     */
    inline AwsIamInstanceProfile& WithRoles(Aws::Vector<AwsIamInstanceProfileRole>&& value) { SetRoles(std::move(value)); return *this;}

    /**
     * <p>The roles associated with the instance profile.</p>
     */
    inline AwsIamInstanceProfile& AddRoles(const AwsIamInstanceProfileRole& value) { m_rolesHasBeenSet = true; m_roles.push_back(value); return *this; }

    /**
     * <p>The roles associated with the instance profile.</p>
     */
    inline AwsIamInstanceProfile& AddRoles(AwsIamInstanceProfileRole&& value) { m_rolesHasBeenSet = true; m_roles.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::String m_instanceProfileId;
    bool m_instanceProfileIdHasBeenSet = false;

    Aws::String m_instanceProfileName;
    bool m_instanceProfileNameHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::Vector<AwsIamInstanceProfileRole> m_roles;
    bool m_rolesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

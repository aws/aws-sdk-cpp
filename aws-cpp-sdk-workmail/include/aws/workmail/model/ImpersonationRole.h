/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/ImpersonationRoleType.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>An impersonation role for the given WorkMail organization.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ImpersonationRole">AWS
   * API Reference</a></p>
   */
  class ImpersonationRole
  {
  public:
    AWS_WORKMAIL_API ImpersonationRole();
    AWS_WORKMAIL_API ImpersonationRole(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API ImpersonationRole& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the impersonation role.</p>
     */
    inline const Aws::String& GetImpersonationRoleId() const{ return m_impersonationRoleId; }

    /**
     * <p>The identifier of the impersonation role.</p>
     */
    inline bool ImpersonationRoleIdHasBeenSet() const { return m_impersonationRoleIdHasBeenSet; }

    /**
     * <p>The identifier of the impersonation role.</p>
     */
    inline void SetImpersonationRoleId(const Aws::String& value) { m_impersonationRoleIdHasBeenSet = true; m_impersonationRoleId = value; }

    /**
     * <p>The identifier of the impersonation role.</p>
     */
    inline void SetImpersonationRoleId(Aws::String&& value) { m_impersonationRoleIdHasBeenSet = true; m_impersonationRoleId = std::move(value); }

    /**
     * <p>The identifier of the impersonation role.</p>
     */
    inline void SetImpersonationRoleId(const char* value) { m_impersonationRoleIdHasBeenSet = true; m_impersonationRoleId.assign(value); }

    /**
     * <p>The identifier of the impersonation role.</p>
     */
    inline ImpersonationRole& WithImpersonationRoleId(const Aws::String& value) { SetImpersonationRoleId(value); return *this;}

    /**
     * <p>The identifier of the impersonation role.</p>
     */
    inline ImpersonationRole& WithImpersonationRoleId(Aws::String&& value) { SetImpersonationRoleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the impersonation role.</p>
     */
    inline ImpersonationRole& WithImpersonationRoleId(const char* value) { SetImpersonationRoleId(value); return *this;}


    /**
     * <p>The impersonation role name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The impersonation role name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The impersonation role name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The impersonation role name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The impersonation role name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The impersonation role name.</p>
     */
    inline ImpersonationRole& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The impersonation role name.</p>
     */
    inline ImpersonationRole& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The impersonation role name.</p>
     */
    inline ImpersonationRole& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The impersonation role type.</p>
     */
    inline const ImpersonationRoleType& GetType() const{ return m_type; }

    /**
     * <p>The impersonation role type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The impersonation role type.</p>
     */
    inline void SetType(const ImpersonationRoleType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The impersonation role type.</p>
     */
    inline void SetType(ImpersonationRoleType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The impersonation role type.</p>
     */
    inline ImpersonationRole& WithType(const ImpersonationRoleType& value) { SetType(value); return *this;}

    /**
     * <p>The impersonation role type.</p>
     */
    inline ImpersonationRole& WithType(ImpersonationRoleType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The date when the impersonation role was created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The date when the impersonation role was created.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The date when the impersonation role was created.</p>
     */
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The date when the impersonation role was created.</p>
     */
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The date when the impersonation role was created.</p>
     */
    inline ImpersonationRole& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The date when the impersonation role was created.</p>
     */
    inline ImpersonationRole& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}


    /**
     * <p>The date when the impersonation role was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetDateModified() const{ return m_dateModified; }

    /**
     * <p>The date when the impersonation role was last modified.</p>
     */
    inline bool DateModifiedHasBeenSet() const { return m_dateModifiedHasBeenSet; }

    /**
     * <p>The date when the impersonation role was last modified.</p>
     */
    inline void SetDateModified(const Aws::Utils::DateTime& value) { m_dateModifiedHasBeenSet = true; m_dateModified = value; }

    /**
     * <p>The date when the impersonation role was last modified.</p>
     */
    inline void SetDateModified(Aws::Utils::DateTime&& value) { m_dateModifiedHasBeenSet = true; m_dateModified = std::move(value); }

    /**
     * <p>The date when the impersonation role was last modified.</p>
     */
    inline ImpersonationRole& WithDateModified(const Aws::Utils::DateTime& value) { SetDateModified(value); return *this;}

    /**
     * <p>The date when the impersonation role was last modified.</p>
     */
    inline ImpersonationRole& WithDateModified(Aws::Utils::DateTime&& value) { SetDateModified(std::move(value)); return *this;}

  private:

    Aws::String m_impersonationRoleId;
    bool m_impersonationRoleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ImpersonationRoleType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateModified;
    bool m_dateModifiedHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws

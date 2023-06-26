/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/Identity.h>
#include <aws/iotsitewise/model/Resource.h>
#include <aws/iotsitewise/model/Permission.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains an access policy that defines an identity's access to an IoT
   * SiteWise Monitor resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AccessPolicySummary">AWS
   * API Reference</a></p>
   */
  class AccessPolicySummary
  {
  public:
    AWS_IOTSITEWISE_API AccessPolicySummary();
    AWS_IOTSITEWISE_API AccessPolicySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AccessPolicySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the access policy.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the access policy.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the access policy.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the access policy.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the access policy.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the access policy.</p>
     */
    inline AccessPolicySummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the access policy.</p>
     */
    inline AccessPolicySummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the access policy.</p>
     */
    inline AccessPolicySummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The identity (an IAM Identity Center user, an IAM Identity Center group, or
     * an IAM user).</p>
     */
    inline const Identity& GetIdentity() const{ return m_identity; }

    /**
     * <p>The identity (an IAM Identity Center user, an IAM Identity Center group, or
     * an IAM user).</p>
     */
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }

    /**
     * <p>The identity (an IAM Identity Center user, an IAM Identity Center group, or
     * an IAM user).</p>
     */
    inline void SetIdentity(const Identity& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>The identity (an IAM Identity Center user, an IAM Identity Center group, or
     * an IAM user).</p>
     */
    inline void SetIdentity(Identity&& value) { m_identityHasBeenSet = true; m_identity = std::move(value); }

    /**
     * <p>The identity (an IAM Identity Center user, an IAM Identity Center group, or
     * an IAM user).</p>
     */
    inline AccessPolicySummary& WithIdentity(const Identity& value) { SetIdentity(value); return *this;}

    /**
     * <p>The identity (an IAM Identity Center user, an IAM Identity Center group, or
     * an IAM user).</p>
     */
    inline AccessPolicySummary& WithIdentity(Identity&& value) { SetIdentity(std::move(value)); return *this;}


    /**
     * <p>The IoT SiteWise Monitor resource (a portal or project).</p>
     */
    inline const Resource& GetResource() const{ return m_resource; }

    /**
     * <p>The IoT SiteWise Monitor resource (a portal or project).</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The IoT SiteWise Monitor resource (a portal or project).</p>
     */
    inline void SetResource(const Resource& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The IoT SiteWise Monitor resource (a portal or project).</p>
     */
    inline void SetResource(Resource&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The IoT SiteWise Monitor resource (a portal or project).</p>
     */
    inline AccessPolicySummary& WithResource(const Resource& value) { SetResource(value); return *this;}

    /**
     * <p>The IoT SiteWise Monitor resource (a portal or project).</p>
     */
    inline AccessPolicySummary& WithResource(Resource&& value) { SetResource(std::move(value)); return *this;}


    /**
     * <p>The permissions for the access policy. Note that a project
     * <code>ADMINISTRATOR</code> is also known as a project owner.</p>
     */
    inline const Permission& GetPermission() const{ return m_permission; }

    /**
     * <p>The permissions for the access policy. Note that a project
     * <code>ADMINISTRATOR</code> is also known as a project owner.</p>
     */
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }

    /**
     * <p>The permissions for the access policy. Note that a project
     * <code>ADMINISTRATOR</code> is also known as a project owner.</p>
     */
    inline void SetPermission(const Permission& value) { m_permissionHasBeenSet = true; m_permission = value; }

    /**
     * <p>The permissions for the access policy. Note that a project
     * <code>ADMINISTRATOR</code> is also known as a project owner.</p>
     */
    inline void SetPermission(Permission&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }

    /**
     * <p>The permissions for the access policy. Note that a project
     * <code>ADMINISTRATOR</code> is also known as a project owner.</p>
     */
    inline AccessPolicySummary& WithPermission(const Permission& value) { SetPermission(value); return *this;}

    /**
     * <p>The permissions for the access policy. Note that a project
     * <code>ADMINISTRATOR</code> is also known as a project owner.</p>
     */
    inline AccessPolicySummary& WithPermission(Permission&& value) { SetPermission(std::move(value)); return *this;}


    /**
     * <p>The date the access policy was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the access policy was created, in Unix epoch time.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date the access policy was created, in Unix epoch time.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date the access policy was created, in Unix epoch time.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date the access policy was created, in Unix epoch time.</p>
     */
    inline AccessPolicySummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the access policy was created, in Unix epoch time.</p>
     */
    inline AccessPolicySummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date the access policy was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDate() const{ return m_lastUpdateDate; }

    /**
     * <p>The date the access policy was last updated, in Unix epoch time.</p>
     */
    inline bool LastUpdateDateHasBeenSet() const { return m_lastUpdateDateHasBeenSet; }

    /**
     * <p>The date the access policy was last updated, in Unix epoch time.</p>
     */
    inline void SetLastUpdateDate(const Aws::Utils::DateTime& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = value; }

    /**
     * <p>The date the access policy was last updated, in Unix epoch time.</p>
     */
    inline void SetLastUpdateDate(Aws::Utils::DateTime&& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = std::move(value); }

    /**
     * <p>The date the access policy was last updated, in Unix epoch time.</p>
     */
    inline AccessPolicySummary& WithLastUpdateDate(const Aws::Utils::DateTime& value) { SetLastUpdateDate(value); return *this;}

    /**
     * <p>The date the access policy was last updated, in Unix epoch time.</p>
     */
    inline AccessPolicySummary& WithLastUpdateDate(Aws::Utils::DateTime&& value) { SetLastUpdateDate(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Identity m_identity;
    bool m_identityHasBeenSet = false;

    Resource m_resource;
    bool m_resourceHasBeenSet = false;

    Permission m_permission;
    bool m_permissionHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateDate;
    bool m_lastUpdateDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws

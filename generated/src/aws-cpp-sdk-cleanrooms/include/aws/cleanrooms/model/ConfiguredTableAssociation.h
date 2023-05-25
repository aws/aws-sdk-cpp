/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>A configured table association links a configured table to a
   * collaboration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ConfiguredTableAssociation">AWS
   * API Reference</a></p>
   */
  class ConfiguredTableAssociation
  {
  public:
    AWS_CLEANROOMS_API ConfiguredTableAssociation();
    AWS_CLEANROOMS_API ConfiguredTableAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConfiguredTableAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ARN for the configured table association.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The unique ARN for the configured table association.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The unique ARN for the configured table association.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The unique ARN for the configured table association.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The unique ARN for the configured table association.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The unique ARN for the configured table association.</p>
     */
    inline ConfiguredTableAssociation& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The unique ARN for the configured table association.</p>
     */
    inline ConfiguredTableAssociation& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The unique ARN for the configured table association.</p>
     */
    inline ConfiguredTableAssociation& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The unique ID for the configured table association.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique ID for the configured table association.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique ID for the configured table association.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique ID for the configured table association.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique ID for the configured table association.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique ID for the configured table association.</p>
     */
    inline ConfiguredTableAssociation& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID for the configured table association.</p>
     */
    inline ConfiguredTableAssociation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the configured table association.</p>
     */
    inline ConfiguredTableAssociation& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The unique ID for the configured table that the association refers to.</p>
     */
    inline const Aws::String& GetConfiguredTableId() const{ return m_configuredTableId; }

    /**
     * <p>The unique ID for the configured table that the association refers to.</p>
     */
    inline bool ConfiguredTableIdHasBeenSet() const { return m_configuredTableIdHasBeenSet; }

    /**
     * <p>The unique ID for the configured table that the association refers to.</p>
     */
    inline void SetConfiguredTableId(const Aws::String& value) { m_configuredTableIdHasBeenSet = true; m_configuredTableId = value; }

    /**
     * <p>The unique ID for the configured table that the association refers to.</p>
     */
    inline void SetConfiguredTableId(Aws::String&& value) { m_configuredTableIdHasBeenSet = true; m_configuredTableId = std::move(value); }

    /**
     * <p>The unique ID for the configured table that the association refers to.</p>
     */
    inline void SetConfiguredTableId(const char* value) { m_configuredTableIdHasBeenSet = true; m_configuredTableId.assign(value); }

    /**
     * <p>The unique ID for the configured table that the association refers to.</p>
     */
    inline ConfiguredTableAssociation& WithConfiguredTableId(const Aws::String& value) { SetConfiguredTableId(value); return *this;}

    /**
     * <p>The unique ID for the configured table that the association refers to.</p>
     */
    inline ConfiguredTableAssociation& WithConfiguredTableId(Aws::String&& value) { SetConfiguredTableId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the configured table that the association refers to.</p>
     */
    inline ConfiguredTableAssociation& WithConfiguredTableId(const char* value) { SetConfiguredTableId(value); return *this;}


    /**
     * <p>The unique ARN for the configured table that the association refers to.</p>
     */
    inline const Aws::String& GetConfiguredTableArn() const{ return m_configuredTableArn; }

    /**
     * <p>The unique ARN for the configured table that the association refers to.</p>
     */
    inline bool ConfiguredTableArnHasBeenSet() const { return m_configuredTableArnHasBeenSet; }

    /**
     * <p>The unique ARN for the configured table that the association refers to.</p>
     */
    inline void SetConfiguredTableArn(const Aws::String& value) { m_configuredTableArnHasBeenSet = true; m_configuredTableArn = value; }

    /**
     * <p>The unique ARN for the configured table that the association refers to.</p>
     */
    inline void SetConfiguredTableArn(Aws::String&& value) { m_configuredTableArnHasBeenSet = true; m_configuredTableArn = std::move(value); }

    /**
     * <p>The unique ARN for the configured table that the association refers to.</p>
     */
    inline void SetConfiguredTableArn(const char* value) { m_configuredTableArnHasBeenSet = true; m_configuredTableArn.assign(value); }

    /**
     * <p>The unique ARN for the configured table that the association refers to.</p>
     */
    inline ConfiguredTableAssociation& WithConfiguredTableArn(const Aws::String& value) { SetConfiguredTableArn(value); return *this;}

    /**
     * <p>The unique ARN for the configured table that the association refers to.</p>
     */
    inline ConfiguredTableAssociation& WithConfiguredTableArn(Aws::String&& value) { SetConfiguredTableArn(std::move(value)); return *this;}

    /**
     * <p>The unique ARN for the configured table that the association refers to.</p>
     */
    inline ConfiguredTableAssociation& WithConfiguredTableArn(const char* value) { SetConfiguredTableArn(value); return *this;}


    /**
     * <p>The unique ID for the membership this configured table association belongs
     * to.</p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }

    /**
     * <p>The unique ID for the membership this configured table association belongs
     * to.</p>
     */
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }

    /**
     * <p>The unique ID for the membership this configured table association belongs
     * to.</p>
     */
    inline void SetMembershipId(const Aws::String& value) { m_membershipIdHasBeenSet = true; m_membershipId = value; }

    /**
     * <p>The unique ID for the membership this configured table association belongs
     * to.</p>
     */
    inline void SetMembershipId(Aws::String&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::move(value); }

    /**
     * <p>The unique ID for the membership this configured table association belongs
     * to.</p>
     */
    inline void SetMembershipId(const char* value) { m_membershipIdHasBeenSet = true; m_membershipId.assign(value); }

    /**
     * <p>The unique ID for the membership this configured table association belongs
     * to.</p>
     */
    inline ConfiguredTableAssociation& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}

    /**
     * <p>The unique ID for the membership this configured table association belongs
     * to.</p>
     */
    inline ConfiguredTableAssociation& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the membership this configured table association belongs
     * to.</p>
     */
    inline ConfiguredTableAssociation& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}


    /**
     * <p>The unique ARN for the membership this configured table association belongs
     * to.</p>
     */
    inline const Aws::String& GetMembershipArn() const{ return m_membershipArn; }

    /**
     * <p>The unique ARN for the membership this configured table association belongs
     * to.</p>
     */
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }

    /**
     * <p>The unique ARN for the membership this configured table association belongs
     * to.</p>
     */
    inline void SetMembershipArn(const Aws::String& value) { m_membershipArnHasBeenSet = true; m_membershipArn = value; }

    /**
     * <p>The unique ARN for the membership this configured table association belongs
     * to.</p>
     */
    inline void SetMembershipArn(Aws::String&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::move(value); }

    /**
     * <p>The unique ARN for the membership this configured table association belongs
     * to.</p>
     */
    inline void SetMembershipArn(const char* value) { m_membershipArnHasBeenSet = true; m_membershipArn.assign(value); }

    /**
     * <p>The unique ARN for the membership this configured table association belongs
     * to.</p>
     */
    inline ConfiguredTableAssociation& WithMembershipArn(const Aws::String& value) { SetMembershipArn(value); return *this;}

    /**
     * <p>The unique ARN for the membership this configured table association belongs
     * to.</p>
     */
    inline ConfiguredTableAssociation& WithMembershipArn(Aws::String&& value) { SetMembershipArn(std::move(value)); return *this;}

    /**
     * <p>The unique ARN for the membership this configured table association belongs
     * to.</p>
     */
    inline ConfiguredTableAssociation& WithMembershipArn(const char* value) { SetMembershipArn(value); return *this;}


    /**
     * <p>The service will assume this role to access catalog metadata and query the
     * table.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The service will assume this role to access catalog metadata and query the
     * table.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The service will assume this role to access catalog metadata and query the
     * table.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The service will assume this role to access catalog metadata and query the
     * table.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The service will assume this role to access catalog metadata and query the
     * table.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The service will assume this role to access catalog metadata and query the
     * table.</p>
     */
    inline ConfiguredTableAssociation& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The service will assume this role to access catalog metadata and query the
     * table.</p>
     */
    inline ConfiguredTableAssociation& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The service will assume this role to access catalog metadata and query the
     * table.</p>
     */
    inline ConfiguredTableAssociation& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The name of the configured table association, in lowercase. The table is
     * identified by this name when running protected queries against the underlying
     * data.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the configured table association, in lowercase. The table is
     * identified by this name when running protected queries against the underlying
     * data.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the configured table association, in lowercase. The table is
     * identified by this name when running protected queries against the underlying
     * data.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the configured table association, in lowercase. The table is
     * identified by this name when running protected queries against the underlying
     * data.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the configured table association, in lowercase. The table is
     * identified by this name when running protected queries against the underlying
     * data.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the configured table association, in lowercase. The table is
     * identified by this name when running protected queries against the underlying
     * data.</p>
     */
    inline ConfiguredTableAssociation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the configured table association, in lowercase. The table is
     * identified by this name when running protected queries against the underlying
     * data.</p>
     */
    inline ConfiguredTableAssociation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configured table association, in lowercase. The table is
     * identified by this name when running protected queries against the underlying
     * data.</p>
     */
    inline ConfiguredTableAssociation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the configured table association.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the configured table association.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the configured table association.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the configured table association.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the configured table association.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the configured table association.</p>
     */
    inline ConfiguredTableAssociation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the configured table association.</p>
     */
    inline ConfiguredTableAssociation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the configured table association.</p>
     */
    inline ConfiguredTableAssociation& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The time the configured table association was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time the configured table association was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time the configured table association was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time the configured table association was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time the configured table association was created.</p>
     */
    inline ConfiguredTableAssociation& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time the configured table association was created.</p>
     */
    inline ConfiguredTableAssociation& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The time the configured table association was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The time the configured table association was last updated.</p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>The time the configured table association was last updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The time the configured table association was last updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>The time the configured table association was last updated.</p>
     */
    inline ConfiguredTableAssociation& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The time the configured table association was last updated.</p>
     */
    inline ConfiguredTableAssociation& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_configuredTableId;
    bool m_configuredTableIdHasBeenSet = false;

    Aws::String m_configuredTableArn;
    bool m_configuredTableArnHasBeenSet = false;

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;

    Aws::String m_membershipArn;
    bool m_membershipArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

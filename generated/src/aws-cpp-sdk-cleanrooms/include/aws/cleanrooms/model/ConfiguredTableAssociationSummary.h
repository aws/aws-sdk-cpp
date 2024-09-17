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
   * <p>The configured table association summary for the objects listed by the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ConfiguredTableAssociationSummary">AWS
   * API Reference</a></p>
   */
  class ConfiguredTableAssociationSummary
  {
  public:
    AWS_CLEANROOMS_API ConfiguredTableAssociationSummary();
    AWS_CLEANROOMS_API ConfiguredTableAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConfiguredTableAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique configured table ID that this configured table association refers
     * to.</p>
     */
    inline const Aws::String& GetConfiguredTableId() const{ return m_configuredTableId; }
    inline bool ConfiguredTableIdHasBeenSet() const { return m_configuredTableIdHasBeenSet; }
    inline void SetConfiguredTableId(const Aws::String& value) { m_configuredTableIdHasBeenSet = true; m_configuredTableId = value; }
    inline void SetConfiguredTableId(Aws::String&& value) { m_configuredTableIdHasBeenSet = true; m_configuredTableId = std::move(value); }
    inline void SetConfiguredTableId(const char* value) { m_configuredTableIdHasBeenSet = true; m_configuredTableId.assign(value); }
    inline ConfiguredTableAssociationSummary& WithConfiguredTableId(const Aws::String& value) { SetConfiguredTableId(value); return *this;}
    inline ConfiguredTableAssociationSummary& WithConfiguredTableId(Aws::String&& value) { SetConfiguredTableId(std::move(value)); return *this;}
    inline ConfiguredTableAssociationSummary& WithConfiguredTableId(const char* value) { SetConfiguredTableId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for the membership that the configured table association
     * belongs to.</p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
    inline void SetMembershipId(const Aws::String& value) { m_membershipIdHasBeenSet = true; m_membershipId = value; }
    inline void SetMembershipId(Aws::String&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::move(value); }
    inline void SetMembershipId(const char* value) { m_membershipIdHasBeenSet = true; m_membershipId.assign(value); }
    inline ConfiguredTableAssociationSummary& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}
    inline ConfiguredTableAssociationSummary& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}
    inline ConfiguredTableAssociationSummary& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ARN for the membership that the configured table association
     * belongs to.</p>
     */
    inline const Aws::String& GetMembershipArn() const{ return m_membershipArn; }
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }
    inline void SetMembershipArn(const Aws::String& value) { m_membershipArnHasBeenSet = true; m_membershipArn = value; }
    inline void SetMembershipArn(Aws::String&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::move(value); }
    inline void SetMembershipArn(const char* value) { m_membershipArnHasBeenSet = true; m_membershipArn.assign(value); }
    inline ConfiguredTableAssociationSummary& WithMembershipArn(const Aws::String& value) { SetMembershipArn(value); return *this;}
    inline ConfiguredTableAssociationSummary& WithMembershipArn(Aws::String&& value) { SetMembershipArn(std::move(value)); return *this;}
    inline ConfiguredTableAssociationSummary& WithMembershipArn(const char* value) { SetMembershipArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configured table association. The table is identified by this
     * name when running Protected Queries against the underlying data.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ConfiguredTableAssociationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ConfiguredTableAssociationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ConfiguredTableAssociationSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the configured table association was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline ConfiguredTableAssociationSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline ConfiguredTableAssociationSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the configured table association was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline ConfiguredTableAssociationSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline ConfiguredTableAssociationSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for the configured table association.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ConfiguredTableAssociationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ConfiguredTableAssociationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ConfiguredTableAssociationSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ARN for the configured table association.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ConfiguredTableAssociationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ConfiguredTableAssociationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ConfiguredTableAssociationSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}
  private:

    Aws::String m_configuredTableId;
    bool m_configuredTableIdHasBeenSet = false;

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;

    Aws::String m_membershipArn;
    bool m_membershipArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

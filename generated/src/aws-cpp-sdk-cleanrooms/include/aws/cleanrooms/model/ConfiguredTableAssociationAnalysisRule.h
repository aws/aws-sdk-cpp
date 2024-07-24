/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/ConfiguredTableAssociationAnalysisRulePolicy.h>
#include <aws/cleanrooms/model/ConfiguredTableAssociationAnalysisRuleType.h>
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
   * <p>An analysis rule for a configured table association. This analysis rule
   * specifies how data from the table can be used within its associated
   * collaboration. In the console, the
   * <code>ConfiguredTableAssociationAnalysisRule</code> is referred to as the
   * <i>collaboration analysis rule</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ConfiguredTableAssociationAnalysisRule">AWS
   * API Reference</a></p>
   */
  class ConfiguredTableAssociationAnalysisRule
  {
  public:
    AWS_CLEANROOMS_API ConfiguredTableAssociationAnalysisRule();
    AWS_CLEANROOMS_API ConfiguredTableAssociationAnalysisRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConfiguredTableAssociationAnalysisRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The membership identifier for the configured table association analysis
     * rule.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline ConfiguredTableAssociationAnalysisRule& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline ConfiguredTableAssociationAnalysisRule& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline ConfiguredTableAssociationAnalysisRule& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the configured table association.</p>
     */
    inline const Aws::String& GetConfiguredTableAssociationId() const{ return m_configuredTableAssociationId; }
    inline bool ConfiguredTableAssociationIdHasBeenSet() const { return m_configuredTableAssociationIdHasBeenSet; }
    inline void SetConfiguredTableAssociationId(const Aws::String& value) { m_configuredTableAssociationIdHasBeenSet = true; m_configuredTableAssociationId = value; }
    inline void SetConfiguredTableAssociationId(Aws::String&& value) { m_configuredTableAssociationIdHasBeenSet = true; m_configuredTableAssociationId = std::move(value); }
    inline void SetConfiguredTableAssociationId(const char* value) { m_configuredTableAssociationIdHasBeenSet = true; m_configuredTableAssociationId.assign(value); }
    inline ConfiguredTableAssociationAnalysisRule& WithConfiguredTableAssociationId(const Aws::String& value) { SetConfiguredTableAssociationId(value); return *this;}
    inline ConfiguredTableAssociationAnalysisRule& WithConfiguredTableAssociationId(Aws::String&& value) { SetConfiguredTableAssociationId(std::move(value)); return *this;}
    inline ConfiguredTableAssociationAnalysisRule& WithConfiguredTableAssociationId(const char* value) { SetConfiguredTableAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the configured table association.</p>
     */
    inline const Aws::String& GetConfiguredTableAssociationArn() const{ return m_configuredTableAssociationArn; }
    inline bool ConfiguredTableAssociationArnHasBeenSet() const { return m_configuredTableAssociationArnHasBeenSet; }
    inline void SetConfiguredTableAssociationArn(const Aws::String& value) { m_configuredTableAssociationArnHasBeenSet = true; m_configuredTableAssociationArn = value; }
    inline void SetConfiguredTableAssociationArn(Aws::String&& value) { m_configuredTableAssociationArnHasBeenSet = true; m_configuredTableAssociationArn = std::move(value); }
    inline void SetConfiguredTableAssociationArn(const char* value) { m_configuredTableAssociationArnHasBeenSet = true; m_configuredTableAssociationArn.assign(value); }
    inline ConfiguredTableAssociationAnalysisRule& WithConfiguredTableAssociationArn(const Aws::String& value) { SetConfiguredTableAssociationArn(value); return *this;}
    inline ConfiguredTableAssociationAnalysisRule& WithConfiguredTableAssociationArn(Aws::String&& value) { SetConfiguredTableAssociationArn(std::move(value)); return *this;}
    inline ConfiguredTableAssociationAnalysisRule& WithConfiguredTableAssociationArn(const char* value) { SetConfiguredTableAssociationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The policy of the configured table association analysis rule.</p>
     */
    inline const ConfiguredTableAssociationAnalysisRulePolicy& GetPolicy() const{ return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    inline void SetPolicy(const ConfiguredTableAssociationAnalysisRulePolicy& value) { m_policyHasBeenSet = true; m_policy = value; }
    inline void SetPolicy(ConfiguredTableAssociationAnalysisRulePolicy&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }
    inline ConfiguredTableAssociationAnalysisRule& WithPolicy(const ConfiguredTableAssociationAnalysisRulePolicy& value) { SetPolicy(value); return *this;}
    inline ConfiguredTableAssociationAnalysisRule& WithPolicy(ConfiguredTableAssociationAnalysisRulePolicy&& value) { SetPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the configured table association analysis rule.</p>
     */
    inline const ConfiguredTableAssociationAnalysisRuleType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ConfiguredTableAssociationAnalysisRuleType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ConfiguredTableAssociationAnalysisRuleType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ConfiguredTableAssociationAnalysisRule& WithType(const ConfiguredTableAssociationAnalysisRuleType& value) { SetType(value); return *this;}
    inline ConfiguredTableAssociationAnalysisRule& WithType(ConfiguredTableAssociationAnalysisRuleType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The creation time of the configured table association analysis rule.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline ConfiguredTableAssociationAnalysisRule& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline ConfiguredTableAssociationAnalysisRule& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The update time of the configured table association analysis rule.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline ConfiguredTableAssociationAnalysisRule& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline ConfiguredTableAssociationAnalysisRule& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_configuredTableAssociationId;
    bool m_configuredTableAssociationIdHasBeenSet = false;

    Aws::String m_configuredTableAssociationArn;
    bool m_configuredTableAssociationArnHasBeenSet = false;

    ConfiguredTableAssociationAnalysisRulePolicy m_policy;
    bool m_policyHasBeenSet = false;

    ConfiguredTableAssociationAnalysisRuleType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

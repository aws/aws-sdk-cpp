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
    AWS_CLEANROOMS_API ConfiguredTableAssociationAnalysisRule() = default;
    AWS_CLEANROOMS_API ConfiguredTableAssociationAnalysisRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConfiguredTableAssociationAnalysisRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The membership identifier for the configured table association analysis
     * rule.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    ConfiguredTableAssociationAnalysisRule& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the configured table association.</p>
     */
    inline const Aws::String& GetConfiguredTableAssociationId() const { return m_configuredTableAssociationId; }
    inline bool ConfiguredTableAssociationIdHasBeenSet() const { return m_configuredTableAssociationIdHasBeenSet; }
    template<typename ConfiguredTableAssociationIdT = Aws::String>
    void SetConfiguredTableAssociationId(ConfiguredTableAssociationIdT&& value) { m_configuredTableAssociationIdHasBeenSet = true; m_configuredTableAssociationId = std::forward<ConfiguredTableAssociationIdT>(value); }
    template<typename ConfiguredTableAssociationIdT = Aws::String>
    ConfiguredTableAssociationAnalysisRule& WithConfiguredTableAssociationId(ConfiguredTableAssociationIdT&& value) { SetConfiguredTableAssociationId(std::forward<ConfiguredTableAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the configured table association.</p>
     */
    inline const Aws::String& GetConfiguredTableAssociationArn() const { return m_configuredTableAssociationArn; }
    inline bool ConfiguredTableAssociationArnHasBeenSet() const { return m_configuredTableAssociationArnHasBeenSet; }
    template<typename ConfiguredTableAssociationArnT = Aws::String>
    void SetConfiguredTableAssociationArn(ConfiguredTableAssociationArnT&& value) { m_configuredTableAssociationArnHasBeenSet = true; m_configuredTableAssociationArn = std::forward<ConfiguredTableAssociationArnT>(value); }
    template<typename ConfiguredTableAssociationArnT = Aws::String>
    ConfiguredTableAssociationAnalysisRule& WithConfiguredTableAssociationArn(ConfiguredTableAssociationArnT&& value) { SetConfiguredTableAssociationArn(std::forward<ConfiguredTableAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The policy of the configured table association analysis rule.</p>
     */
    inline const ConfiguredTableAssociationAnalysisRulePolicy& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = ConfiguredTableAssociationAnalysisRulePolicy>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = ConfiguredTableAssociationAnalysisRulePolicy>
    ConfiguredTableAssociationAnalysisRule& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the configured table association analysis rule.</p>
     */
    inline ConfiguredTableAssociationAnalysisRuleType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ConfiguredTableAssociationAnalysisRuleType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ConfiguredTableAssociationAnalysisRule& WithType(ConfiguredTableAssociationAnalysisRuleType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The creation time of the configured table association analysis rule.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    ConfiguredTableAssociationAnalysisRule& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The update time of the configured table association analysis rule.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    ConfiguredTableAssociationAnalysisRule& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
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

    ConfiguredTableAssociationAnalysisRuleType m_type{ConfiguredTableAssociationAnalysisRuleType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/ConfiguredTableAnalysisRulePolicy.h>
#include <aws/cleanrooms/model/ConfiguredTableAnalysisRuleType.h>
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
   * <p>A configured table analysis rule, which limits how data for this table can be
   * used.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ConfiguredTableAnalysisRule">AWS
   * API Reference</a></p>
   */
  class ConfiguredTableAnalysisRule
  {
  public:
    AWS_CLEANROOMS_API ConfiguredTableAnalysisRule() = default;
    AWS_CLEANROOMS_API ConfiguredTableAnalysisRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConfiguredTableAnalysisRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID for the configured table.</p>
     */
    inline const Aws::String& GetConfiguredTableId() const { return m_configuredTableId; }
    inline bool ConfiguredTableIdHasBeenSet() const { return m_configuredTableIdHasBeenSet; }
    template<typename ConfiguredTableIdT = Aws::String>
    void SetConfiguredTableId(ConfiguredTableIdT&& value) { m_configuredTableIdHasBeenSet = true; m_configuredTableId = std::forward<ConfiguredTableIdT>(value); }
    template<typename ConfiguredTableIdT = Aws::String>
    ConfiguredTableAnalysisRule& WithConfiguredTableId(ConfiguredTableIdT&& value) { SetConfiguredTableId(std::forward<ConfiguredTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ARN for the configured table.</p>
     */
    inline const Aws::String& GetConfiguredTableArn() const { return m_configuredTableArn; }
    inline bool ConfiguredTableArnHasBeenSet() const { return m_configuredTableArnHasBeenSet; }
    template<typename ConfiguredTableArnT = Aws::String>
    void SetConfiguredTableArn(ConfiguredTableArnT&& value) { m_configuredTableArnHasBeenSet = true; m_configuredTableArn = std::forward<ConfiguredTableArnT>(value); }
    template<typename ConfiguredTableArnT = Aws::String>
    ConfiguredTableAnalysisRule& WithConfiguredTableArn(ConfiguredTableArnT&& value) { SetConfiguredTableArn(std::forward<ConfiguredTableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy that controls SQL query rules.</p>
     */
    inline const ConfiguredTableAnalysisRulePolicy& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = ConfiguredTableAnalysisRulePolicy>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = ConfiguredTableAnalysisRulePolicy>
    ConfiguredTableAnalysisRule& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of configured table analysis rule.</p>
     */
    inline ConfiguredTableAnalysisRuleType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ConfiguredTableAnalysisRuleType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ConfiguredTableAnalysisRule& WithType(ConfiguredTableAnalysisRuleType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the configured table analysis rule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    ConfiguredTableAnalysisRule& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the configured table analysis rule was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    ConfiguredTableAnalysisRule& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configuredTableId;
    bool m_configuredTableIdHasBeenSet = false;

    Aws::String m_configuredTableArn;
    bool m_configuredTableArnHasBeenSet = false;

    ConfiguredTableAnalysisRulePolicy m_policy;
    bool m_policyHasBeenSet = false;

    ConfiguredTableAnalysisRuleType m_type{ConfiguredTableAnalysisRuleType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

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
    AWS_CLEANROOMS_API ConfiguredTableAnalysisRule();
    AWS_CLEANROOMS_API ConfiguredTableAnalysisRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConfiguredTableAnalysisRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID for the configured table.</p>
     */
    inline const Aws::String& GetConfiguredTableId() const{ return m_configuredTableId; }

    /**
     * <p>The unique ID for the configured table.</p>
     */
    inline bool ConfiguredTableIdHasBeenSet() const { return m_configuredTableIdHasBeenSet; }

    /**
     * <p>The unique ID for the configured table.</p>
     */
    inline void SetConfiguredTableId(const Aws::String& value) { m_configuredTableIdHasBeenSet = true; m_configuredTableId = value; }

    /**
     * <p>The unique ID for the configured table.</p>
     */
    inline void SetConfiguredTableId(Aws::String&& value) { m_configuredTableIdHasBeenSet = true; m_configuredTableId = std::move(value); }

    /**
     * <p>The unique ID for the configured table.</p>
     */
    inline void SetConfiguredTableId(const char* value) { m_configuredTableIdHasBeenSet = true; m_configuredTableId.assign(value); }

    /**
     * <p>The unique ID for the configured table.</p>
     */
    inline ConfiguredTableAnalysisRule& WithConfiguredTableId(const Aws::String& value) { SetConfiguredTableId(value); return *this;}

    /**
     * <p>The unique ID for the configured table.</p>
     */
    inline ConfiguredTableAnalysisRule& WithConfiguredTableId(Aws::String&& value) { SetConfiguredTableId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the configured table.</p>
     */
    inline ConfiguredTableAnalysisRule& WithConfiguredTableId(const char* value) { SetConfiguredTableId(value); return *this;}


    /**
     * <p>The unique ARN for the configured table.</p>
     */
    inline const Aws::String& GetConfiguredTableArn() const{ return m_configuredTableArn; }

    /**
     * <p>The unique ARN for the configured table.</p>
     */
    inline bool ConfiguredTableArnHasBeenSet() const { return m_configuredTableArnHasBeenSet; }

    /**
     * <p>The unique ARN for the configured table.</p>
     */
    inline void SetConfiguredTableArn(const Aws::String& value) { m_configuredTableArnHasBeenSet = true; m_configuredTableArn = value; }

    /**
     * <p>The unique ARN for the configured table.</p>
     */
    inline void SetConfiguredTableArn(Aws::String&& value) { m_configuredTableArnHasBeenSet = true; m_configuredTableArn = std::move(value); }

    /**
     * <p>The unique ARN for the configured table.</p>
     */
    inline void SetConfiguredTableArn(const char* value) { m_configuredTableArnHasBeenSet = true; m_configuredTableArn.assign(value); }

    /**
     * <p>The unique ARN for the configured table.</p>
     */
    inline ConfiguredTableAnalysisRule& WithConfiguredTableArn(const Aws::String& value) { SetConfiguredTableArn(value); return *this;}

    /**
     * <p>The unique ARN for the configured table.</p>
     */
    inline ConfiguredTableAnalysisRule& WithConfiguredTableArn(Aws::String&& value) { SetConfiguredTableArn(std::move(value)); return *this;}

    /**
     * <p>The unique ARN for the configured table.</p>
     */
    inline ConfiguredTableAnalysisRule& WithConfiguredTableArn(const char* value) { SetConfiguredTableArn(value); return *this;}


    /**
     * <p>The policy that controls SQL query rules.</p>
     */
    inline const ConfiguredTableAnalysisRulePolicy& GetPolicy() const{ return m_policy; }

    /**
     * <p>The policy that controls SQL query rules.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The policy that controls SQL query rules.</p>
     */
    inline void SetPolicy(const ConfiguredTableAnalysisRulePolicy& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The policy that controls SQL query rules.</p>
     */
    inline void SetPolicy(ConfiguredTableAnalysisRulePolicy&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The policy that controls SQL query rules.</p>
     */
    inline ConfiguredTableAnalysisRule& WithPolicy(const ConfiguredTableAnalysisRulePolicy& value) { SetPolicy(value); return *this;}

    /**
     * <p>The policy that controls SQL query rules.</p>
     */
    inline ConfiguredTableAnalysisRule& WithPolicy(ConfiguredTableAnalysisRulePolicy&& value) { SetPolicy(std::move(value)); return *this;}


    /**
     * <p>The type of configured table analysis rule.</p>
     */
    inline const ConfiguredTableAnalysisRuleType& GetType() const{ return m_type; }

    /**
     * <p>The type of configured table analysis rule.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of configured table analysis rule.</p>
     */
    inline void SetType(const ConfiguredTableAnalysisRuleType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of configured table analysis rule.</p>
     */
    inline void SetType(ConfiguredTableAnalysisRuleType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of configured table analysis rule.</p>
     */
    inline ConfiguredTableAnalysisRule& WithType(const ConfiguredTableAnalysisRuleType& value) { SetType(value); return *this;}

    /**
     * <p>The type of configured table analysis rule.</p>
     */
    inline ConfiguredTableAnalysisRule& WithType(ConfiguredTableAnalysisRuleType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The time the configured table analysis rule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time the configured table analysis rule was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time the configured table analysis rule was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time the configured table analysis rule was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time the configured table analysis rule was created.</p>
     */
    inline ConfiguredTableAnalysisRule& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time the configured table analysis rule was created.</p>
     */
    inline ConfiguredTableAnalysisRule& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The time the configured table analysis rule was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The time the configured table analysis rule was last updated.</p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>The time the configured table analysis rule was last updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The time the configured table analysis rule was last updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>The time the configured table analysis rule was last updated.</p>
     */
    inline ConfiguredTableAnalysisRule& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The time the configured table analysis rule was last updated.</p>
     */
    inline ConfiguredTableAnalysisRule& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_configuredTableId;
    bool m_configuredTableIdHasBeenSet = false;

    Aws::String m_configuredTableArn;
    bool m_configuredTableArnHasBeenSet = false;

    ConfiguredTableAnalysisRulePolicy m_policy;
    bool m_policyHasBeenSet = false;

    ConfiguredTableAnalysisRuleType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

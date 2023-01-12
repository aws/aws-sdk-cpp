/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/AnalysisMethod.h>
#include <aws/cleanrooms/model/ConfiguredTableAnalysisRuleType.h>
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
   * <p>The configured table summary for the objects listed by the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ConfiguredTableSummary">AWS
   * API Reference</a></p>
   */
  class ConfiguredTableSummary
  {
  public:
    AWS_CLEANROOMS_API ConfiguredTableSummary();
    AWS_CLEANROOMS_API ConfiguredTableSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConfiguredTableSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID of the configured table.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique ID of the configured table.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique ID of the configured table.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique ID of the configured table.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique ID of the configured table.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique ID of the configured table.</p>
     */
    inline ConfiguredTableSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID of the configured table.</p>
     */
    inline ConfiguredTableSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the configured table.</p>
     */
    inline ConfiguredTableSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The unique ARN of the configured table.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The unique ARN of the configured table.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The unique ARN of the configured table.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The unique ARN of the configured table.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The unique ARN of the configured table.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The unique ARN of the configured table.</p>
     */
    inline ConfiguredTableSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The unique ARN of the configured table.</p>
     */
    inline ConfiguredTableSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The unique ARN of the configured table.</p>
     */
    inline ConfiguredTableSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the configured table.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the configured table.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the configured table.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the configured table.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the configured table.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the configured table.</p>
     */
    inline ConfiguredTableSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the configured table.</p>
     */
    inline ConfiguredTableSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configured table.</p>
     */
    inline ConfiguredTableSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The time the configured table was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time the configured table was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time the configured table was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time the configured table was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time the configured table was created.</p>
     */
    inline ConfiguredTableSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time the configured table was created.</p>
     */
    inline ConfiguredTableSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The time the configured table was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The time the configured table was last updated.</p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>The time the configured table was last updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The time the configured table was last updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>The time the configured table was last updated.</p>
     */
    inline ConfiguredTableSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The time the configured table was last updated.</p>
     */
    inline ConfiguredTableSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The types of analysis rules associated with this configured table.</p>
     */
    inline const Aws::Vector<ConfiguredTableAnalysisRuleType>& GetAnalysisRuleTypes() const{ return m_analysisRuleTypes; }

    /**
     * <p>The types of analysis rules associated with this configured table.</p>
     */
    inline bool AnalysisRuleTypesHasBeenSet() const { return m_analysisRuleTypesHasBeenSet; }

    /**
     * <p>The types of analysis rules associated with this configured table.</p>
     */
    inline void SetAnalysisRuleTypes(const Aws::Vector<ConfiguredTableAnalysisRuleType>& value) { m_analysisRuleTypesHasBeenSet = true; m_analysisRuleTypes = value; }

    /**
     * <p>The types of analysis rules associated with this configured table.</p>
     */
    inline void SetAnalysisRuleTypes(Aws::Vector<ConfiguredTableAnalysisRuleType>&& value) { m_analysisRuleTypesHasBeenSet = true; m_analysisRuleTypes = std::move(value); }

    /**
     * <p>The types of analysis rules associated with this configured table.</p>
     */
    inline ConfiguredTableSummary& WithAnalysisRuleTypes(const Aws::Vector<ConfiguredTableAnalysisRuleType>& value) { SetAnalysisRuleTypes(value); return *this;}

    /**
     * <p>The types of analysis rules associated with this configured table.</p>
     */
    inline ConfiguredTableSummary& WithAnalysisRuleTypes(Aws::Vector<ConfiguredTableAnalysisRuleType>&& value) { SetAnalysisRuleTypes(std::move(value)); return *this;}

    /**
     * <p>The types of analysis rules associated with this configured table.</p>
     */
    inline ConfiguredTableSummary& AddAnalysisRuleTypes(const ConfiguredTableAnalysisRuleType& value) { m_analysisRuleTypesHasBeenSet = true; m_analysisRuleTypes.push_back(value); return *this; }

    /**
     * <p>The types of analysis rules associated with this configured table.</p>
     */
    inline ConfiguredTableSummary& AddAnalysisRuleTypes(ConfiguredTableAnalysisRuleType&& value) { m_analysisRuleTypesHasBeenSet = true; m_analysisRuleTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The analysis method for the configured tables. The only valid value is
     * currently `DIRECT_QUERY`.</p>
     */
    inline const AnalysisMethod& GetAnalysisMethod() const{ return m_analysisMethod; }

    /**
     * <p>The analysis method for the configured tables. The only valid value is
     * currently `DIRECT_QUERY`.</p>
     */
    inline bool AnalysisMethodHasBeenSet() const { return m_analysisMethodHasBeenSet; }

    /**
     * <p>The analysis method for the configured tables. The only valid value is
     * currently `DIRECT_QUERY`.</p>
     */
    inline void SetAnalysisMethod(const AnalysisMethod& value) { m_analysisMethodHasBeenSet = true; m_analysisMethod = value; }

    /**
     * <p>The analysis method for the configured tables. The only valid value is
     * currently `DIRECT_QUERY`.</p>
     */
    inline void SetAnalysisMethod(AnalysisMethod&& value) { m_analysisMethodHasBeenSet = true; m_analysisMethod = std::move(value); }

    /**
     * <p>The analysis method for the configured tables. The only valid value is
     * currently `DIRECT_QUERY`.</p>
     */
    inline ConfiguredTableSummary& WithAnalysisMethod(const AnalysisMethod& value) { SetAnalysisMethod(value); return *this;}

    /**
     * <p>The analysis method for the configured tables. The only valid value is
     * currently `DIRECT_QUERY`.</p>
     */
    inline ConfiguredTableSummary& WithAnalysisMethod(AnalysisMethod&& value) { SetAnalysisMethod(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    Aws::Vector<ConfiguredTableAnalysisRuleType> m_analysisRuleTypes;
    bool m_analysisRuleTypesHasBeenSet = false;

    AnalysisMethod m_analysisMethod;
    bool m_analysisMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

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
#include <aws/cleanrooms/model/SelectedAnalysisMethod.h>
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
    AWS_CLEANROOMS_API ConfiguredTableSummary() = default;
    AWS_CLEANROOMS_API ConfiguredTableSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConfiguredTableSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the configured table.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ConfiguredTableSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ARN of the configured table.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ConfiguredTableSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configured table.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ConfiguredTableSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the configured table was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    ConfiguredTableSummary& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the configured table was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    ConfiguredTableSummary& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of analysis rules associated with this configured table.</p>
     */
    inline const Aws::Vector<ConfiguredTableAnalysisRuleType>& GetAnalysisRuleTypes() const { return m_analysisRuleTypes; }
    inline bool AnalysisRuleTypesHasBeenSet() const { return m_analysisRuleTypesHasBeenSet; }
    template<typename AnalysisRuleTypesT = Aws::Vector<ConfiguredTableAnalysisRuleType>>
    void SetAnalysisRuleTypes(AnalysisRuleTypesT&& value) { m_analysisRuleTypesHasBeenSet = true; m_analysisRuleTypes = std::forward<AnalysisRuleTypesT>(value); }
    template<typename AnalysisRuleTypesT = Aws::Vector<ConfiguredTableAnalysisRuleType>>
    ConfiguredTableSummary& WithAnalysisRuleTypes(AnalysisRuleTypesT&& value) { SetAnalysisRuleTypes(std::forward<AnalysisRuleTypesT>(value)); return *this;}
    inline ConfiguredTableSummary& AddAnalysisRuleTypes(ConfiguredTableAnalysisRuleType value) { m_analysisRuleTypesHasBeenSet = true; m_analysisRuleTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The analysis method for the configured tables. </p> <p>
     * <code>DIRECT_QUERY</code> allows SQL queries to be run directly on this
     * table.</p> <p> <code>DIRECT_JOB</code> allows PySpark jobs to be run directly on
     * this table.</p> <p> <code>MULTIPLE</code> allows both SQL queries and PySpark
     * jobs to be run directly on this table.</p>
     */
    inline AnalysisMethod GetAnalysisMethod() const { return m_analysisMethod; }
    inline bool AnalysisMethodHasBeenSet() const { return m_analysisMethodHasBeenSet; }
    inline void SetAnalysisMethod(AnalysisMethod value) { m_analysisMethodHasBeenSet = true; m_analysisMethod = value; }
    inline ConfiguredTableSummary& WithAnalysisMethod(AnalysisMethod value) { SetAnalysisMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The selected analysis methods for the configured table summary.</p>
     */
    inline const Aws::Vector<SelectedAnalysisMethod>& GetSelectedAnalysisMethods() const { return m_selectedAnalysisMethods; }
    inline bool SelectedAnalysisMethodsHasBeenSet() const { return m_selectedAnalysisMethodsHasBeenSet; }
    template<typename SelectedAnalysisMethodsT = Aws::Vector<SelectedAnalysisMethod>>
    void SetSelectedAnalysisMethods(SelectedAnalysisMethodsT&& value) { m_selectedAnalysisMethodsHasBeenSet = true; m_selectedAnalysisMethods = std::forward<SelectedAnalysisMethodsT>(value); }
    template<typename SelectedAnalysisMethodsT = Aws::Vector<SelectedAnalysisMethod>>
    ConfiguredTableSummary& WithSelectedAnalysisMethods(SelectedAnalysisMethodsT&& value) { SetSelectedAnalysisMethods(std::forward<SelectedAnalysisMethodsT>(value)); return *this;}
    inline ConfiguredTableSummary& AddSelectedAnalysisMethods(SelectedAnalysisMethod value) { m_selectedAnalysisMethodsHasBeenSet = true; m_selectedAnalysisMethods.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::Vector<ConfiguredTableAnalysisRuleType> m_analysisRuleTypes;
    bool m_analysisRuleTypesHasBeenSet = false;

    AnalysisMethod m_analysisMethod{AnalysisMethod::NOT_SET};
    bool m_analysisMethodHasBeenSet = false;

    Aws::Vector<SelectedAnalysisMethod> m_selectedAnalysisMethods;
    bool m_selectedAnalysisMethodsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

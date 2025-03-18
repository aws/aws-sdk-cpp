/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/SchemaStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/AnalysisRuleType.h>
#include <aws/cleanrooms/model/AnalysisType.h>
#include <aws/cleanrooms/model/SchemaStatusReason.h>
#include <aws/cleanrooms/model/SchemaConfiguration.h>
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
   * <p>Information about the schema status.</p> <p>A status of <code>READY</code>
   * means that based on the schema analysis rule, queries of the given analysis rule
   * type are properly configured to run queries on this schema.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/SchemaStatusDetail">AWS
   * API Reference</a></p>
   */
  class SchemaStatusDetail
  {
  public:
    AWS_CLEANROOMS_API SchemaStatusDetail() = default;
    AWS_CLEANROOMS_API SchemaStatusDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API SchemaStatusDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the schema, indicating if it is ready to query.</p>
     */
    inline SchemaStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SchemaStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SchemaStatusDetail& WithStatus(SchemaStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reasons why the schema status is set to its current state.</p>
     */
    inline const Aws::Vector<SchemaStatusReason>& GetReasons() const { return m_reasons; }
    inline bool ReasonsHasBeenSet() const { return m_reasonsHasBeenSet; }
    template<typename ReasonsT = Aws::Vector<SchemaStatusReason>>
    void SetReasons(ReasonsT&& value) { m_reasonsHasBeenSet = true; m_reasons = std::forward<ReasonsT>(value); }
    template<typename ReasonsT = Aws::Vector<SchemaStatusReason>>
    SchemaStatusDetail& WithReasons(ReasonsT&& value) { SetReasons(std::forward<ReasonsT>(value)); return *this;}
    template<typename ReasonsT = SchemaStatusReason>
    SchemaStatusDetail& AddReasons(ReasonsT&& value) { m_reasonsHasBeenSet = true; m_reasons.emplace_back(std::forward<ReasonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The analysis rule type for which the schema status has been evaluated.</p>
     */
    inline AnalysisRuleType GetAnalysisRuleType() const { return m_analysisRuleType; }
    inline bool AnalysisRuleTypeHasBeenSet() const { return m_analysisRuleTypeHasBeenSet; }
    inline void SetAnalysisRuleType(AnalysisRuleType value) { m_analysisRuleTypeHasBeenSet = true; m_analysisRuleType = value; }
    inline SchemaStatusDetail& WithAnalysisRuleType(AnalysisRuleType value) { SetAnalysisRuleType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details of the schema analysis rule for the given type.</p>
     */
    inline const Aws::Vector<SchemaConfiguration>& GetConfigurations() const { return m_configurations; }
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }
    template<typename ConfigurationsT = Aws::Vector<SchemaConfiguration>>
    void SetConfigurations(ConfigurationsT&& value) { m_configurationsHasBeenSet = true; m_configurations = std::forward<ConfigurationsT>(value); }
    template<typename ConfigurationsT = Aws::Vector<SchemaConfiguration>>
    SchemaStatusDetail& WithConfigurations(ConfigurationsT&& value) { SetConfigurations(std::forward<ConfigurationsT>(value)); return *this;}
    inline SchemaStatusDetail& AddConfigurations(SchemaConfiguration value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of analysis that can be performed on the schema.</p> <p>A schema can
     * have an <code>analysisType</code> of <code>DIRECT_ANALYSIS</code>,
     * <code>ADDITIONAL_ANALYSIS_FOR_AUDIENCE_GENERATION</code>, or both.</p>
     */
    inline AnalysisType GetAnalysisType() const { return m_analysisType; }
    inline bool AnalysisTypeHasBeenSet() const { return m_analysisTypeHasBeenSet; }
    inline void SetAnalysisType(AnalysisType value) { m_analysisTypeHasBeenSet = true; m_analysisType = value; }
    inline SchemaStatusDetail& WithAnalysisType(AnalysisType value) { SetAnalysisType(value); return *this;}
    ///@}
  private:

    SchemaStatus m_status{SchemaStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<SchemaStatusReason> m_reasons;
    bool m_reasonsHasBeenSet = false;

    AnalysisRuleType m_analysisRuleType{AnalysisRuleType::NOT_SET};
    bool m_analysisRuleTypeHasBeenSet = false;

    Aws::Vector<SchemaConfiguration> m_configurations;
    bool m_configurationsHasBeenSet = false;

    AnalysisType m_analysisType{AnalysisType::NOT_SET};
    bool m_analysisTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

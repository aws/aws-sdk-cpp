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
    AWS_CLEANROOMS_API SchemaStatusDetail();
    AWS_CLEANROOMS_API SchemaStatusDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API SchemaStatusDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the schema, indicating if it is ready to query.</p>
     */
    inline const SchemaStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SchemaStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SchemaStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SchemaStatusDetail& WithStatus(const SchemaStatus& value) { SetStatus(value); return *this;}
    inline SchemaStatusDetail& WithStatus(SchemaStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reasons why the schema status is set to its current state.</p>
     */
    inline const Aws::Vector<SchemaStatusReason>& GetReasons() const{ return m_reasons; }
    inline bool ReasonsHasBeenSet() const { return m_reasonsHasBeenSet; }
    inline void SetReasons(const Aws::Vector<SchemaStatusReason>& value) { m_reasonsHasBeenSet = true; m_reasons = value; }
    inline void SetReasons(Aws::Vector<SchemaStatusReason>&& value) { m_reasonsHasBeenSet = true; m_reasons = std::move(value); }
    inline SchemaStatusDetail& WithReasons(const Aws::Vector<SchemaStatusReason>& value) { SetReasons(value); return *this;}
    inline SchemaStatusDetail& WithReasons(Aws::Vector<SchemaStatusReason>&& value) { SetReasons(std::move(value)); return *this;}
    inline SchemaStatusDetail& AddReasons(const SchemaStatusReason& value) { m_reasonsHasBeenSet = true; m_reasons.push_back(value); return *this; }
    inline SchemaStatusDetail& AddReasons(SchemaStatusReason&& value) { m_reasonsHasBeenSet = true; m_reasons.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The analysis rule type for which the schema status has been evaluated.</p>
     */
    inline const AnalysisRuleType& GetAnalysisRuleType() const{ return m_analysisRuleType; }
    inline bool AnalysisRuleTypeHasBeenSet() const { return m_analysisRuleTypeHasBeenSet; }
    inline void SetAnalysisRuleType(const AnalysisRuleType& value) { m_analysisRuleTypeHasBeenSet = true; m_analysisRuleType = value; }
    inline void SetAnalysisRuleType(AnalysisRuleType&& value) { m_analysisRuleTypeHasBeenSet = true; m_analysisRuleType = std::move(value); }
    inline SchemaStatusDetail& WithAnalysisRuleType(const AnalysisRuleType& value) { SetAnalysisRuleType(value); return *this;}
    inline SchemaStatusDetail& WithAnalysisRuleType(AnalysisRuleType&& value) { SetAnalysisRuleType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details of the schema analysis rule for the given type.</p>
     */
    inline const Aws::Vector<SchemaConfiguration>& GetConfigurations() const{ return m_configurations; }
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }
    inline void SetConfigurations(const Aws::Vector<SchemaConfiguration>& value) { m_configurationsHasBeenSet = true; m_configurations = value; }
    inline void SetConfigurations(Aws::Vector<SchemaConfiguration>&& value) { m_configurationsHasBeenSet = true; m_configurations = std::move(value); }
    inline SchemaStatusDetail& WithConfigurations(const Aws::Vector<SchemaConfiguration>& value) { SetConfigurations(value); return *this;}
    inline SchemaStatusDetail& WithConfigurations(Aws::Vector<SchemaConfiguration>&& value) { SetConfigurations(std::move(value)); return *this;}
    inline SchemaStatusDetail& AddConfigurations(const SchemaConfiguration& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }
    inline SchemaStatusDetail& AddConfigurations(SchemaConfiguration&& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of analysis that can be performed on the schema.</p> <p>A schema can
     * have an <code>analysisType</code> of <code>DIRECT_ANALYSIS</code>,
     * <code>ADDITIONAL_ANALYSIS_FOR_AUDIENCE_GENERATION</code>, or both.</p>
     */
    inline const AnalysisType& GetAnalysisType() const{ return m_analysisType; }
    inline bool AnalysisTypeHasBeenSet() const { return m_analysisTypeHasBeenSet; }
    inline void SetAnalysisType(const AnalysisType& value) { m_analysisTypeHasBeenSet = true; m_analysisType = value; }
    inline void SetAnalysisType(AnalysisType&& value) { m_analysisTypeHasBeenSet = true; m_analysisType = std::move(value); }
    inline SchemaStatusDetail& WithAnalysisType(const AnalysisType& value) { SetAnalysisType(value); return *this;}
    inline SchemaStatusDetail& WithAnalysisType(AnalysisType&& value) { SetAnalysisType(std::move(value)); return *this;}
    ///@}
  private:

    SchemaStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<SchemaStatusReason> m_reasons;
    bool m_reasonsHasBeenSet = false;

    AnalysisRuleType m_analysisRuleType;
    bool m_analysisRuleTypeHasBeenSet = false;

    Aws::Vector<SchemaConfiguration> m_configurations;
    bool m_configurationsHasBeenSet = false;

    AnalysisType m_analysisType;
    bool m_analysisTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

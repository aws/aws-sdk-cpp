/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/SchemaStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/AnalysisRuleType.h>
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


    /**
     * <p>The status of the schema.</p>
     */
    inline const SchemaStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the schema.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the schema.</p>
     */
    inline void SetStatus(const SchemaStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the schema.</p>
     */
    inline void SetStatus(SchemaStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the schema.</p>
     */
    inline SchemaStatusDetail& WithStatus(const SchemaStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the schema.</p>
     */
    inline SchemaStatusDetail& WithStatus(SchemaStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reasons why the schema status is set to its current state.</p>
     */
    inline const Aws::Vector<SchemaStatusReason>& GetReasons() const{ return m_reasons; }

    /**
     * <p>The reasons why the schema status is set to its current state.</p>
     */
    inline bool ReasonsHasBeenSet() const { return m_reasonsHasBeenSet; }

    /**
     * <p>The reasons why the schema status is set to its current state.</p>
     */
    inline void SetReasons(const Aws::Vector<SchemaStatusReason>& value) { m_reasonsHasBeenSet = true; m_reasons = value; }

    /**
     * <p>The reasons why the schema status is set to its current state.</p>
     */
    inline void SetReasons(Aws::Vector<SchemaStatusReason>&& value) { m_reasonsHasBeenSet = true; m_reasons = std::move(value); }

    /**
     * <p>The reasons why the schema status is set to its current state.</p>
     */
    inline SchemaStatusDetail& WithReasons(const Aws::Vector<SchemaStatusReason>& value) { SetReasons(value); return *this;}

    /**
     * <p>The reasons why the schema status is set to its current state.</p>
     */
    inline SchemaStatusDetail& WithReasons(Aws::Vector<SchemaStatusReason>&& value) { SetReasons(std::move(value)); return *this;}

    /**
     * <p>The reasons why the schema status is set to its current state.</p>
     */
    inline SchemaStatusDetail& AddReasons(const SchemaStatusReason& value) { m_reasonsHasBeenSet = true; m_reasons.push_back(value); return *this; }

    /**
     * <p>The reasons why the schema status is set to its current state.</p>
     */
    inline SchemaStatusDetail& AddReasons(SchemaStatusReason&& value) { m_reasonsHasBeenSet = true; m_reasons.push_back(std::move(value)); return *this; }


    /**
     * <p>The analysis rule type for which the schema status has been evaluated.</p>
     */
    inline const AnalysisRuleType& GetAnalysisRuleType() const{ return m_analysisRuleType; }

    /**
     * <p>The analysis rule type for which the schema status has been evaluated.</p>
     */
    inline bool AnalysisRuleTypeHasBeenSet() const { return m_analysisRuleTypeHasBeenSet; }

    /**
     * <p>The analysis rule type for which the schema status has been evaluated.</p>
     */
    inline void SetAnalysisRuleType(const AnalysisRuleType& value) { m_analysisRuleTypeHasBeenSet = true; m_analysisRuleType = value; }

    /**
     * <p>The analysis rule type for which the schema status has been evaluated.</p>
     */
    inline void SetAnalysisRuleType(AnalysisRuleType&& value) { m_analysisRuleTypeHasBeenSet = true; m_analysisRuleType = std::move(value); }

    /**
     * <p>The analysis rule type for which the schema status has been evaluated.</p>
     */
    inline SchemaStatusDetail& WithAnalysisRuleType(const AnalysisRuleType& value) { SetAnalysisRuleType(value); return *this;}

    /**
     * <p>The analysis rule type for which the schema status has been evaluated.</p>
     */
    inline SchemaStatusDetail& WithAnalysisRuleType(AnalysisRuleType&& value) { SetAnalysisRuleType(std::move(value)); return *this;}


    /**
     * <p>The configuration details of the schema analysis rule for the given type.</p>
     */
    inline const Aws::Vector<SchemaConfiguration>& GetConfigurations() const{ return m_configurations; }

    /**
     * <p>The configuration details of the schema analysis rule for the given type.</p>
     */
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }

    /**
     * <p>The configuration details of the schema analysis rule for the given type.</p>
     */
    inline void SetConfigurations(const Aws::Vector<SchemaConfiguration>& value) { m_configurationsHasBeenSet = true; m_configurations = value; }

    /**
     * <p>The configuration details of the schema analysis rule for the given type.</p>
     */
    inline void SetConfigurations(Aws::Vector<SchemaConfiguration>&& value) { m_configurationsHasBeenSet = true; m_configurations = std::move(value); }

    /**
     * <p>The configuration details of the schema analysis rule for the given type.</p>
     */
    inline SchemaStatusDetail& WithConfigurations(const Aws::Vector<SchemaConfiguration>& value) { SetConfigurations(value); return *this;}

    /**
     * <p>The configuration details of the schema analysis rule for the given type.</p>
     */
    inline SchemaStatusDetail& WithConfigurations(Aws::Vector<SchemaConfiguration>&& value) { SetConfigurations(std::move(value)); return *this;}

    /**
     * <p>The configuration details of the schema analysis rule for the given type.</p>
     */
    inline SchemaStatusDetail& AddConfigurations(const SchemaConfiguration& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }

    /**
     * <p>The configuration details of the schema analysis rule for the given type.</p>
     */
    inline SchemaStatusDetail& AddConfigurations(SchemaConfiguration&& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(std::move(value)); return *this; }

  private:

    SchemaStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<SchemaStatusReason> m_reasons;
    bool m_reasonsHasBeenSet = false;

    AnalysisRuleType m_analysisRuleType;
    bool m_analysisRuleTypeHasBeenSet = false;

    Aws::Vector<SchemaConfiguration> m_configurations;
    bool m_configurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

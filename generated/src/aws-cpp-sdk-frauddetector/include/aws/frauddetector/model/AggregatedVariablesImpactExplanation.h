/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p> The details of the impact of aggregated variables on the prediction score.
   * </p> <p>Account Takeover Insights (ATI) model uses the login data you provide to
   * continuously calculate a set of variables (aggregated variables) based on
   * historical events. For example, the model might calculate the number of times an
   * user has logged in using the same IP address. In this case, event variables used
   * to derive the aggregated variables are <code>IP address</code> and
   * <code>user</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/AggregatedVariablesImpactExplanation">AWS
   * API Reference</a></p>
   */
  class AggregatedVariablesImpactExplanation
  {
  public:
    AWS_FRAUDDETECTOR_API AggregatedVariablesImpactExplanation();
    AWS_FRAUDDETECTOR_API AggregatedVariablesImpactExplanation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API AggregatedVariablesImpactExplanation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The names of all the event variables that were used to derive the aggregated
     * variables. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEventVariableNames() const{ return m_eventVariableNames; }

    /**
     * <p> The names of all the event variables that were used to derive the aggregated
     * variables. </p>
     */
    inline bool EventVariableNamesHasBeenSet() const { return m_eventVariableNamesHasBeenSet; }

    /**
     * <p> The names of all the event variables that were used to derive the aggregated
     * variables. </p>
     */
    inline void SetEventVariableNames(const Aws::Vector<Aws::String>& value) { m_eventVariableNamesHasBeenSet = true; m_eventVariableNames = value; }

    /**
     * <p> The names of all the event variables that were used to derive the aggregated
     * variables. </p>
     */
    inline void SetEventVariableNames(Aws::Vector<Aws::String>&& value) { m_eventVariableNamesHasBeenSet = true; m_eventVariableNames = std::move(value); }

    /**
     * <p> The names of all the event variables that were used to derive the aggregated
     * variables. </p>
     */
    inline AggregatedVariablesImpactExplanation& WithEventVariableNames(const Aws::Vector<Aws::String>& value) { SetEventVariableNames(value); return *this;}

    /**
     * <p> The names of all the event variables that were used to derive the aggregated
     * variables. </p>
     */
    inline AggregatedVariablesImpactExplanation& WithEventVariableNames(Aws::Vector<Aws::String>&& value) { SetEventVariableNames(std::move(value)); return *this;}

    /**
     * <p> The names of all the event variables that were used to derive the aggregated
     * variables. </p>
     */
    inline AggregatedVariablesImpactExplanation& AddEventVariableNames(const Aws::String& value) { m_eventVariableNamesHasBeenSet = true; m_eventVariableNames.push_back(value); return *this; }

    /**
     * <p> The names of all the event variables that were used to derive the aggregated
     * variables. </p>
     */
    inline AggregatedVariablesImpactExplanation& AddEventVariableNames(Aws::String&& value) { m_eventVariableNamesHasBeenSet = true; m_eventVariableNames.push_back(std::move(value)); return *this; }

    /**
     * <p> The names of all the event variables that were used to derive the aggregated
     * variables. </p>
     */
    inline AggregatedVariablesImpactExplanation& AddEventVariableNames(const char* value) { m_eventVariableNamesHasBeenSet = true; m_eventVariableNames.push_back(value); return *this; }


    /**
     * <p> The relative impact of the aggregated variables in terms of magnitude on the
     * prediction scores. </p>
     */
    inline const Aws::String& GetRelativeImpact() const{ return m_relativeImpact; }

    /**
     * <p> The relative impact of the aggregated variables in terms of magnitude on the
     * prediction scores. </p>
     */
    inline bool RelativeImpactHasBeenSet() const { return m_relativeImpactHasBeenSet; }

    /**
     * <p> The relative impact of the aggregated variables in terms of magnitude on the
     * prediction scores. </p>
     */
    inline void SetRelativeImpact(const Aws::String& value) { m_relativeImpactHasBeenSet = true; m_relativeImpact = value; }

    /**
     * <p> The relative impact of the aggregated variables in terms of magnitude on the
     * prediction scores. </p>
     */
    inline void SetRelativeImpact(Aws::String&& value) { m_relativeImpactHasBeenSet = true; m_relativeImpact = std::move(value); }

    /**
     * <p> The relative impact of the aggregated variables in terms of magnitude on the
     * prediction scores. </p>
     */
    inline void SetRelativeImpact(const char* value) { m_relativeImpactHasBeenSet = true; m_relativeImpact.assign(value); }

    /**
     * <p> The relative impact of the aggregated variables in terms of magnitude on the
     * prediction scores. </p>
     */
    inline AggregatedVariablesImpactExplanation& WithRelativeImpact(const Aws::String& value) { SetRelativeImpact(value); return *this;}

    /**
     * <p> The relative impact of the aggregated variables in terms of magnitude on the
     * prediction scores. </p>
     */
    inline AggregatedVariablesImpactExplanation& WithRelativeImpact(Aws::String&& value) { SetRelativeImpact(std::move(value)); return *this;}

    /**
     * <p> The relative impact of the aggregated variables in terms of magnitude on the
     * prediction scores. </p>
     */
    inline AggregatedVariablesImpactExplanation& WithRelativeImpact(const char* value) { SetRelativeImpact(value); return *this;}


    /**
     * <p> The raw, uninterpreted value represented as log-odds of the fraud. These
     * values are usually between -10 to +10, but range from -infinity to
     * +infinity.</p> <ul> <li> <p>A positive value indicates that the variables drove
     * the risk score up.</p> </li> <li> <p>A negative value indicates that the
     * variables drove the risk score down.</p> </li> </ul>
     */
    inline double GetLogOddsImpact() const{ return m_logOddsImpact; }

    /**
     * <p> The raw, uninterpreted value represented as log-odds of the fraud. These
     * values are usually between -10 to +10, but range from -infinity to
     * +infinity.</p> <ul> <li> <p>A positive value indicates that the variables drove
     * the risk score up.</p> </li> <li> <p>A negative value indicates that the
     * variables drove the risk score down.</p> </li> </ul>
     */
    inline bool LogOddsImpactHasBeenSet() const { return m_logOddsImpactHasBeenSet; }

    /**
     * <p> The raw, uninterpreted value represented as log-odds of the fraud. These
     * values are usually between -10 to +10, but range from -infinity to
     * +infinity.</p> <ul> <li> <p>A positive value indicates that the variables drove
     * the risk score up.</p> </li> <li> <p>A negative value indicates that the
     * variables drove the risk score down.</p> </li> </ul>
     */
    inline void SetLogOddsImpact(double value) { m_logOddsImpactHasBeenSet = true; m_logOddsImpact = value; }

    /**
     * <p> The raw, uninterpreted value represented as log-odds of the fraud. These
     * values are usually between -10 to +10, but range from -infinity to
     * +infinity.</p> <ul> <li> <p>A positive value indicates that the variables drove
     * the risk score up.</p> </li> <li> <p>A negative value indicates that the
     * variables drove the risk score down.</p> </li> </ul>
     */
    inline AggregatedVariablesImpactExplanation& WithLogOddsImpact(double value) { SetLogOddsImpact(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_eventVariableNames;
    bool m_eventVariableNamesHasBeenSet = false;

    Aws::String m_relativeImpact;
    bool m_relativeImpactHasBeenSet = false;

    double m_logOddsImpact;
    bool m_logOddsImpactHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws

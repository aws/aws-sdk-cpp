/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/EvaluationResultQualifier.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Uniquely identifies an evaluation result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/EvaluationResultIdentifier">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API EvaluationResultIdentifier
  {
  public:
    EvaluationResultIdentifier();
    EvaluationResultIdentifier(Aws::Utils::Json::JsonView jsonValue);
    EvaluationResultIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifies an AWS Config rule used to evaluate an AWS resource, and provides
     * the type and ID of the evaluated resource.</p>
     */
    inline const EvaluationResultQualifier& GetEvaluationResultQualifier() const{ return m_evaluationResultQualifier; }

    /**
     * <p>Identifies an AWS Config rule used to evaluate an AWS resource, and provides
     * the type and ID of the evaluated resource.</p>
     */
    inline bool EvaluationResultQualifierHasBeenSet() const { return m_evaluationResultQualifierHasBeenSet; }

    /**
     * <p>Identifies an AWS Config rule used to evaluate an AWS resource, and provides
     * the type and ID of the evaluated resource.</p>
     */
    inline void SetEvaluationResultQualifier(const EvaluationResultQualifier& value) { m_evaluationResultQualifierHasBeenSet = true; m_evaluationResultQualifier = value; }

    /**
     * <p>Identifies an AWS Config rule used to evaluate an AWS resource, and provides
     * the type and ID of the evaluated resource.</p>
     */
    inline void SetEvaluationResultQualifier(EvaluationResultQualifier&& value) { m_evaluationResultQualifierHasBeenSet = true; m_evaluationResultQualifier = std::move(value); }

    /**
     * <p>Identifies an AWS Config rule used to evaluate an AWS resource, and provides
     * the type and ID of the evaluated resource.</p>
     */
    inline EvaluationResultIdentifier& WithEvaluationResultQualifier(const EvaluationResultQualifier& value) { SetEvaluationResultQualifier(value); return *this;}

    /**
     * <p>Identifies an AWS Config rule used to evaluate an AWS resource, and provides
     * the type and ID of the evaluated resource.</p>
     */
    inline EvaluationResultIdentifier& WithEvaluationResultQualifier(EvaluationResultQualifier&& value) { SetEvaluationResultQualifier(std::move(value)); return *this;}


    /**
     * <p>The time of the event that triggered the evaluation of your AWS resources.
     * The time can indicate when AWS Config delivered a configuration item change
     * notification, or it can indicate when AWS Config delivered the configuration
     * snapshot, depending on which event triggered the evaluation.</p>
     */
    inline const Aws::Utils::DateTime& GetOrderingTimestamp() const{ return m_orderingTimestamp; }

    /**
     * <p>The time of the event that triggered the evaluation of your AWS resources.
     * The time can indicate when AWS Config delivered a configuration item change
     * notification, or it can indicate when AWS Config delivered the configuration
     * snapshot, depending on which event triggered the evaluation.</p>
     */
    inline bool OrderingTimestampHasBeenSet() const { return m_orderingTimestampHasBeenSet; }

    /**
     * <p>The time of the event that triggered the evaluation of your AWS resources.
     * The time can indicate when AWS Config delivered a configuration item change
     * notification, or it can indicate when AWS Config delivered the configuration
     * snapshot, depending on which event triggered the evaluation.</p>
     */
    inline void SetOrderingTimestamp(const Aws::Utils::DateTime& value) { m_orderingTimestampHasBeenSet = true; m_orderingTimestamp = value; }

    /**
     * <p>The time of the event that triggered the evaluation of your AWS resources.
     * The time can indicate when AWS Config delivered a configuration item change
     * notification, or it can indicate when AWS Config delivered the configuration
     * snapshot, depending on which event triggered the evaluation.</p>
     */
    inline void SetOrderingTimestamp(Aws::Utils::DateTime&& value) { m_orderingTimestampHasBeenSet = true; m_orderingTimestamp = std::move(value); }

    /**
     * <p>The time of the event that triggered the evaluation of your AWS resources.
     * The time can indicate when AWS Config delivered a configuration item change
     * notification, or it can indicate when AWS Config delivered the configuration
     * snapshot, depending on which event triggered the evaluation.</p>
     */
    inline EvaluationResultIdentifier& WithOrderingTimestamp(const Aws::Utils::DateTime& value) { SetOrderingTimestamp(value); return *this;}

    /**
     * <p>The time of the event that triggered the evaluation of your AWS resources.
     * The time can indicate when AWS Config delivered a configuration item change
     * notification, or it can indicate when AWS Config delivered the configuration
     * snapshot, depending on which event triggered the evaluation.</p>
     */
    inline EvaluationResultIdentifier& WithOrderingTimestamp(Aws::Utils::DateTime&& value) { SetOrderingTimestamp(std::move(value)); return *this;}

  private:

    EvaluationResultQualifier m_evaluationResultQualifier;
    bool m_evaluationResultQualifierHasBeenSet;

    Aws::Utils::DateTime m_orderingTimestamp;
    bool m_orderingTimestampHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws

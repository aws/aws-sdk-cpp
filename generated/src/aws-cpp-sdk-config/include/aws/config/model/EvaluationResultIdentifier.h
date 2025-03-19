/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/EvaluationResultQualifier.h>
#include <aws/core/utils/DateTime.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Uniquely identifies an evaluation result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/EvaluationResultIdentifier">AWS
   * API Reference</a></p>
   */
  class EvaluationResultIdentifier
  {
  public:
    AWS_CONFIGSERVICE_API EvaluationResultIdentifier() = default;
    AWS_CONFIGSERVICE_API EvaluationResultIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API EvaluationResultIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifies an Config rule used to evaluate an Amazon Web Services resource,
     * and provides the type and ID of the evaluated resource.</p>
     */
    inline const EvaluationResultQualifier& GetEvaluationResultQualifier() const { return m_evaluationResultQualifier; }
    inline bool EvaluationResultQualifierHasBeenSet() const { return m_evaluationResultQualifierHasBeenSet; }
    template<typename EvaluationResultQualifierT = EvaluationResultQualifier>
    void SetEvaluationResultQualifier(EvaluationResultQualifierT&& value) { m_evaluationResultQualifierHasBeenSet = true; m_evaluationResultQualifier = std::forward<EvaluationResultQualifierT>(value); }
    template<typename EvaluationResultQualifierT = EvaluationResultQualifier>
    EvaluationResultIdentifier& WithEvaluationResultQualifier(EvaluationResultQualifierT&& value) { SetEvaluationResultQualifier(std::forward<EvaluationResultQualifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the event that triggered the evaluation of your Amazon Web
     * Services resources. The time can indicate when Config delivered a configuration
     * item change notification, or it can indicate when Config delivered the
     * configuration snapshot, depending on which event triggered the evaluation.</p>
     */
    inline const Aws::Utils::DateTime& GetOrderingTimestamp() const { return m_orderingTimestamp; }
    inline bool OrderingTimestampHasBeenSet() const { return m_orderingTimestampHasBeenSet; }
    template<typename OrderingTimestampT = Aws::Utils::DateTime>
    void SetOrderingTimestamp(OrderingTimestampT&& value) { m_orderingTimestampHasBeenSet = true; m_orderingTimestamp = std::forward<OrderingTimestampT>(value); }
    template<typename OrderingTimestampT = Aws::Utils::DateTime>
    EvaluationResultIdentifier& WithOrderingTimestamp(OrderingTimestampT&& value) { SetOrderingTimestamp(std::forward<OrderingTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Unique ID for an evaluation result.</p>
     */
    inline const Aws::String& GetResourceEvaluationId() const { return m_resourceEvaluationId; }
    inline bool ResourceEvaluationIdHasBeenSet() const { return m_resourceEvaluationIdHasBeenSet; }
    template<typename ResourceEvaluationIdT = Aws::String>
    void SetResourceEvaluationId(ResourceEvaluationIdT&& value) { m_resourceEvaluationIdHasBeenSet = true; m_resourceEvaluationId = std::forward<ResourceEvaluationIdT>(value); }
    template<typename ResourceEvaluationIdT = Aws::String>
    EvaluationResultIdentifier& WithResourceEvaluationId(ResourceEvaluationIdT&& value) { SetResourceEvaluationId(std::forward<ResourceEvaluationIdT>(value)); return *this;}
    ///@}
  private:

    EvaluationResultQualifier m_evaluationResultQualifier;
    bool m_evaluationResultQualifierHasBeenSet = false;

    Aws::Utils::DateTime m_orderingTimestamp{};
    bool m_orderingTimestampHasBeenSet = false;

    Aws::String m_resourceEvaluationId;
    bool m_resourceEvaluationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws

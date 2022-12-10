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
    AWS_CONFIGSERVICE_API EvaluationResultIdentifier();
    AWS_CONFIGSERVICE_API EvaluationResultIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API EvaluationResultIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifies an Config rule used to evaluate an Amazon Web Services resource,
     * and provides the type and ID of the evaluated resource.</p>
     */
    inline const EvaluationResultQualifier& GetEvaluationResultQualifier() const{ return m_evaluationResultQualifier; }

    /**
     * <p>Identifies an Config rule used to evaluate an Amazon Web Services resource,
     * and provides the type and ID of the evaluated resource.</p>
     */
    inline bool EvaluationResultQualifierHasBeenSet() const { return m_evaluationResultQualifierHasBeenSet; }

    /**
     * <p>Identifies an Config rule used to evaluate an Amazon Web Services resource,
     * and provides the type and ID of the evaluated resource.</p>
     */
    inline void SetEvaluationResultQualifier(const EvaluationResultQualifier& value) { m_evaluationResultQualifierHasBeenSet = true; m_evaluationResultQualifier = value; }

    /**
     * <p>Identifies an Config rule used to evaluate an Amazon Web Services resource,
     * and provides the type and ID of the evaluated resource.</p>
     */
    inline void SetEvaluationResultQualifier(EvaluationResultQualifier&& value) { m_evaluationResultQualifierHasBeenSet = true; m_evaluationResultQualifier = std::move(value); }

    /**
     * <p>Identifies an Config rule used to evaluate an Amazon Web Services resource,
     * and provides the type and ID of the evaluated resource.</p>
     */
    inline EvaluationResultIdentifier& WithEvaluationResultQualifier(const EvaluationResultQualifier& value) { SetEvaluationResultQualifier(value); return *this;}

    /**
     * <p>Identifies an Config rule used to evaluate an Amazon Web Services resource,
     * and provides the type and ID of the evaluated resource.</p>
     */
    inline EvaluationResultIdentifier& WithEvaluationResultQualifier(EvaluationResultQualifier&& value) { SetEvaluationResultQualifier(std::move(value)); return *this;}


    /**
     * <p>The time of the event that triggered the evaluation of your Amazon Web
     * Services resources. The time can indicate when Config delivered a configuration
     * item change notification, or it can indicate when Config delivered the
     * configuration snapshot, depending on which event triggered the evaluation.</p>
     */
    inline const Aws::Utils::DateTime& GetOrderingTimestamp() const{ return m_orderingTimestamp; }

    /**
     * <p>The time of the event that triggered the evaluation of your Amazon Web
     * Services resources. The time can indicate when Config delivered a configuration
     * item change notification, or it can indicate when Config delivered the
     * configuration snapshot, depending on which event triggered the evaluation.</p>
     */
    inline bool OrderingTimestampHasBeenSet() const { return m_orderingTimestampHasBeenSet; }

    /**
     * <p>The time of the event that triggered the evaluation of your Amazon Web
     * Services resources. The time can indicate when Config delivered a configuration
     * item change notification, or it can indicate when Config delivered the
     * configuration snapshot, depending on which event triggered the evaluation.</p>
     */
    inline void SetOrderingTimestamp(const Aws::Utils::DateTime& value) { m_orderingTimestampHasBeenSet = true; m_orderingTimestamp = value; }

    /**
     * <p>The time of the event that triggered the evaluation of your Amazon Web
     * Services resources. The time can indicate when Config delivered a configuration
     * item change notification, or it can indicate when Config delivered the
     * configuration snapshot, depending on which event triggered the evaluation.</p>
     */
    inline void SetOrderingTimestamp(Aws::Utils::DateTime&& value) { m_orderingTimestampHasBeenSet = true; m_orderingTimestamp = std::move(value); }

    /**
     * <p>The time of the event that triggered the evaluation of your Amazon Web
     * Services resources. The time can indicate when Config delivered a configuration
     * item change notification, or it can indicate when Config delivered the
     * configuration snapshot, depending on which event triggered the evaluation.</p>
     */
    inline EvaluationResultIdentifier& WithOrderingTimestamp(const Aws::Utils::DateTime& value) { SetOrderingTimestamp(value); return *this;}

    /**
     * <p>The time of the event that triggered the evaluation of your Amazon Web
     * Services resources. The time can indicate when Config delivered a configuration
     * item change notification, or it can indicate when Config delivered the
     * configuration snapshot, depending on which event triggered the evaluation.</p>
     */
    inline EvaluationResultIdentifier& WithOrderingTimestamp(Aws::Utils::DateTime&& value) { SetOrderingTimestamp(std::move(value)); return *this;}


    /**
     * <p>A Unique ID for an evaluation result.</p>
     */
    inline const Aws::String& GetResourceEvaluationId() const{ return m_resourceEvaluationId; }

    /**
     * <p>A Unique ID for an evaluation result.</p>
     */
    inline bool ResourceEvaluationIdHasBeenSet() const { return m_resourceEvaluationIdHasBeenSet; }

    /**
     * <p>A Unique ID for an evaluation result.</p>
     */
    inline void SetResourceEvaluationId(const Aws::String& value) { m_resourceEvaluationIdHasBeenSet = true; m_resourceEvaluationId = value; }

    /**
     * <p>A Unique ID for an evaluation result.</p>
     */
    inline void SetResourceEvaluationId(Aws::String&& value) { m_resourceEvaluationIdHasBeenSet = true; m_resourceEvaluationId = std::move(value); }

    /**
     * <p>A Unique ID for an evaluation result.</p>
     */
    inline void SetResourceEvaluationId(const char* value) { m_resourceEvaluationIdHasBeenSet = true; m_resourceEvaluationId.assign(value); }

    /**
     * <p>A Unique ID for an evaluation result.</p>
     */
    inline EvaluationResultIdentifier& WithResourceEvaluationId(const Aws::String& value) { SetResourceEvaluationId(value); return *this;}

    /**
     * <p>A Unique ID for an evaluation result.</p>
     */
    inline EvaluationResultIdentifier& WithResourceEvaluationId(Aws::String&& value) { SetResourceEvaluationId(std::move(value)); return *this;}

    /**
     * <p>A Unique ID for an evaluation result.</p>
     */
    inline EvaluationResultIdentifier& WithResourceEvaluationId(const char* value) { SetResourceEvaluationId(value); return *this;}

  private:

    EvaluationResultQualifier m_evaluationResultQualifier;
    bool m_evaluationResultQualifierHasBeenSet = false;

    Aws::Utils::DateTime m_orderingTimestamp;
    bool m_orderingTimestampHasBeenSet = false;

    Aws::String m_resourceEvaluationId;
    bool m_resourceEvaluationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ComplianceType.h>
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
   * <p>Identifies an Amazon Web Services resource and indicates whether it complies
   * with the Config rule that it was evaluated against.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/Evaluation">AWS
   * API Reference</a></p>
   */
  class Evaluation
  {
  public:
    AWS_CONFIGSERVICE_API Evaluation() = default;
    AWS_CONFIGSERVICE_API Evaluation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Evaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of Amazon Web Services resource that was evaluated.</p>
     */
    inline const Aws::String& GetComplianceResourceType() const { return m_complianceResourceType; }
    inline bool ComplianceResourceTypeHasBeenSet() const { return m_complianceResourceTypeHasBeenSet; }
    template<typename ComplianceResourceTypeT = Aws::String>
    void SetComplianceResourceType(ComplianceResourceTypeT&& value) { m_complianceResourceTypeHasBeenSet = true; m_complianceResourceType = std::forward<ComplianceResourceTypeT>(value); }
    template<typename ComplianceResourceTypeT = Aws::String>
    Evaluation& WithComplianceResourceType(ComplianceResourceTypeT&& value) { SetComplianceResourceType(std::forward<ComplianceResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline const Aws::String& GetComplianceResourceId() const { return m_complianceResourceId; }
    inline bool ComplianceResourceIdHasBeenSet() const { return m_complianceResourceIdHasBeenSet; }
    template<typename ComplianceResourceIdT = Aws::String>
    void SetComplianceResourceId(ComplianceResourceIdT&& value) { m_complianceResourceIdHasBeenSet = true; m_complianceResourceId = std::forward<ComplianceResourceIdT>(value); }
    template<typename ComplianceResourceIdT = Aws::String>
    Evaluation& WithComplianceResourceId(ComplianceResourceIdT&& value) { SetComplianceResourceId(std::forward<ComplianceResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the Amazon Web Services resource complies with the Config
     * rule that it was evaluated against.</p> <p>For the <code>Evaluation</code> data
     * type, Config supports only the <code>COMPLIANT</code>,
     * <code>NON_COMPLIANT</code>, and <code>NOT_APPLICABLE</code> values. Config does
     * not support the <code>INSUFFICIENT_DATA</code> value for this data type.</p>
     * <p>Similarly, Config does not accept <code>INSUFFICIENT_DATA</code> as the value
     * for <code>ComplianceType</code> from a <code>PutEvaluations</code> request. For
     * example, an Lambda function for a custom Config rule cannot pass an
     * <code>INSUFFICIENT_DATA</code> value to Config.</p>
     */
    inline ComplianceType GetComplianceType() const { return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    inline void SetComplianceType(ComplianceType value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }
    inline Evaluation& WithComplianceType(ComplianceType value) { SetComplianceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline const Aws::String& GetAnnotation() const { return m_annotation; }
    inline bool AnnotationHasBeenSet() const { return m_annotationHasBeenSet; }
    template<typename AnnotationT = Aws::String>
    void SetAnnotation(AnnotationT&& value) { m_annotationHasBeenSet = true; m_annotation = std::forward<AnnotationT>(value); }
    template<typename AnnotationT = Aws::String>
    Evaluation& WithAnnotation(AnnotationT&& value) { SetAnnotation(std::forward<AnnotationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the event in Config that triggered the evaluation. For
     * event-based evaluations, the time indicates when Config created the
     * configuration item that triggered the evaluation. For periodic evaluations, the
     * time indicates when Config triggered the evaluation at the frequency that you
     * specified (for example, every 24 hours).</p>
     */
    inline const Aws::Utils::DateTime& GetOrderingTimestamp() const { return m_orderingTimestamp; }
    inline bool OrderingTimestampHasBeenSet() const { return m_orderingTimestampHasBeenSet; }
    template<typename OrderingTimestampT = Aws::Utils::DateTime>
    void SetOrderingTimestamp(OrderingTimestampT&& value) { m_orderingTimestampHasBeenSet = true; m_orderingTimestamp = std::forward<OrderingTimestampT>(value); }
    template<typename OrderingTimestampT = Aws::Utils::DateTime>
    Evaluation& WithOrderingTimestamp(OrderingTimestampT&& value) { SetOrderingTimestamp(std::forward<OrderingTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_complianceResourceType;
    bool m_complianceResourceTypeHasBeenSet = false;

    Aws::String m_complianceResourceId;
    bool m_complianceResourceIdHasBeenSet = false;

    ComplianceType m_complianceType{ComplianceType::NOT_SET};
    bool m_complianceTypeHasBeenSet = false;

    Aws::String m_annotation;
    bool m_annotationHasBeenSet = false;

    Aws::Utils::DateTime m_orderingTimestamp{};
    bool m_orderingTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws

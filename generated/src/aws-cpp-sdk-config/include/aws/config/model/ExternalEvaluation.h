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
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ExternalEvaluation">AWS
   * API Reference</a></p>
   */
  class ExternalEvaluation
  {
  public:
    AWS_CONFIGSERVICE_API ExternalEvaluation() = default;
    AWS_CONFIGSERVICE_API ExternalEvaluation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ExternalEvaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The evaluated compliance resource type. Config accepts
     * <code>AWS::::Account</code> resource type.</p>
     */
    inline const Aws::String& GetComplianceResourceType() const { return m_complianceResourceType; }
    inline bool ComplianceResourceTypeHasBeenSet() const { return m_complianceResourceTypeHasBeenSet; }
    template<typename ComplianceResourceTypeT = Aws::String>
    void SetComplianceResourceType(ComplianceResourceTypeT&& value) { m_complianceResourceTypeHasBeenSet = true; m_complianceResourceType = std::forward<ComplianceResourceTypeT>(value); }
    template<typename ComplianceResourceTypeT = Aws::String>
    ExternalEvaluation& WithComplianceResourceType(ComplianceResourceTypeT&& value) { SetComplianceResourceType(std::forward<ComplianceResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The evaluated compliance resource ID. Config accepts only Amazon Web Services
     * account ID.</p>
     */
    inline const Aws::String& GetComplianceResourceId() const { return m_complianceResourceId; }
    inline bool ComplianceResourceIdHasBeenSet() const { return m_complianceResourceIdHasBeenSet; }
    template<typename ComplianceResourceIdT = Aws::String>
    void SetComplianceResourceId(ComplianceResourceIdT&& value) { m_complianceResourceIdHasBeenSet = true; m_complianceResourceId = std::forward<ComplianceResourceIdT>(value); }
    template<typename ComplianceResourceIdT = Aws::String>
    ExternalEvaluation& WithComplianceResourceId(ComplianceResourceIdT&& value) { SetComplianceResourceId(std::forward<ComplianceResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compliance of the Amazon Web Services resource. The valid values are
     * <code>COMPLIANT, NON_COMPLIANT, </code> and <code>NOT_APPLICABLE</code>.</p>
     */
    inline ComplianceType GetComplianceType() const { return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    inline void SetComplianceType(ComplianceType value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }
    inline ExternalEvaluation& WithComplianceType(ComplianceType value) { SetComplianceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supplementary information about the reason of compliance. For example, this
     * task was completed on a specific date.</p>
     */
    inline const Aws::String& GetAnnotation() const { return m_annotation; }
    inline bool AnnotationHasBeenSet() const { return m_annotationHasBeenSet; }
    template<typename AnnotationT = Aws::String>
    void SetAnnotation(AnnotationT&& value) { m_annotationHasBeenSet = true; m_annotation = std::forward<AnnotationT>(value); }
    template<typename AnnotationT = Aws::String>
    ExternalEvaluation& WithAnnotation(AnnotationT&& value) { SetAnnotation(std::forward<AnnotationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the compliance was recorded. </p>
     */
    inline const Aws::Utils::DateTime& GetOrderingTimestamp() const { return m_orderingTimestamp; }
    inline bool OrderingTimestampHasBeenSet() const { return m_orderingTimestampHasBeenSet; }
    template<typename OrderingTimestampT = Aws::Utils::DateTime>
    void SetOrderingTimestamp(OrderingTimestampT&& value) { m_orderingTimestampHasBeenSet = true; m_orderingTimestamp = std::forward<OrderingTimestampT>(value); }
    template<typename OrderingTimestampT = Aws::Utils::DateTime>
    ExternalEvaluation& WithOrderingTimestamp(OrderingTimestampT&& value) { SetOrderingTimestamp(std::forward<OrderingTimestampT>(value)); return *this;}
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

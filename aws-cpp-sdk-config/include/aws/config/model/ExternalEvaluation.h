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
    AWS_CONFIGSERVICE_API ExternalEvaluation();
    AWS_CONFIGSERVICE_API ExternalEvaluation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ExternalEvaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The evaluated compliance resource type. Config accepts
     * <code>AWS::::Account</code> resource type.</p>
     */
    inline const Aws::String& GetComplianceResourceType() const{ return m_complianceResourceType; }

    /**
     * <p>The evaluated compliance resource type. Config accepts
     * <code>AWS::::Account</code> resource type.</p>
     */
    inline bool ComplianceResourceTypeHasBeenSet() const { return m_complianceResourceTypeHasBeenSet; }

    /**
     * <p>The evaluated compliance resource type. Config accepts
     * <code>AWS::::Account</code> resource type.</p>
     */
    inline void SetComplianceResourceType(const Aws::String& value) { m_complianceResourceTypeHasBeenSet = true; m_complianceResourceType = value; }

    /**
     * <p>The evaluated compliance resource type. Config accepts
     * <code>AWS::::Account</code> resource type.</p>
     */
    inline void SetComplianceResourceType(Aws::String&& value) { m_complianceResourceTypeHasBeenSet = true; m_complianceResourceType = std::move(value); }

    /**
     * <p>The evaluated compliance resource type. Config accepts
     * <code>AWS::::Account</code> resource type.</p>
     */
    inline void SetComplianceResourceType(const char* value) { m_complianceResourceTypeHasBeenSet = true; m_complianceResourceType.assign(value); }

    /**
     * <p>The evaluated compliance resource type. Config accepts
     * <code>AWS::::Account</code> resource type.</p>
     */
    inline ExternalEvaluation& WithComplianceResourceType(const Aws::String& value) { SetComplianceResourceType(value); return *this;}

    /**
     * <p>The evaluated compliance resource type. Config accepts
     * <code>AWS::::Account</code> resource type.</p>
     */
    inline ExternalEvaluation& WithComplianceResourceType(Aws::String&& value) { SetComplianceResourceType(std::move(value)); return *this;}

    /**
     * <p>The evaluated compliance resource type. Config accepts
     * <code>AWS::::Account</code> resource type.</p>
     */
    inline ExternalEvaluation& WithComplianceResourceType(const char* value) { SetComplianceResourceType(value); return *this;}


    /**
     * <p>The evaluated compliance resource ID. Config accepts only Amazon Web Services
     * account ID.</p>
     */
    inline const Aws::String& GetComplianceResourceId() const{ return m_complianceResourceId; }

    /**
     * <p>The evaluated compliance resource ID. Config accepts only Amazon Web Services
     * account ID.</p>
     */
    inline bool ComplianceResourceIdHasBeenSet() const { return m_complianceResourceIdHasBeenSet; }

    /**
     * <p>The evaluated compliance resource ID. Config accepts only Amazon Web Services
     * account ID.</p>
     */
    inline void SetComplianceResourceId(const Aws::String& value) { m_complianceResourceIdHasBeenSet = true; m_complianceResourceId = value; }

    /**
     * <p>The evaluated compliance resource ID. Config accepts only Amazon Web Services
     * account ID.</p>
     */
    inline void SetComplianceResourceId(Aws::String&& value) { m_complianceResourceIdHasBeenSet = true; m_complianceResourceId = std::move(value); }

    /**
     * <p>The evaluated compliance resource ID. Config accepts only Amazon Web Services
     * account ID.</p>
     */
    inline void SetComplianceResourceId(const char* value) { m_complianceResourceIdHasBeenSet = true; m_complianceResourceId.assign(value); }

    /**
     * <p>The evaluated compliance resource ID. Config accepts only Amazon Web Services
     * account ID.</p>
     */
    inline ExternalEvaluation& WithComplianceResourceId(const Aws::String& value) { SetComplianceResourceId(value); return *this;}

    /**
     * <p>The evaluated compliance resource ID. Config accepts only Amazon Web Services
     * account ID.</p>
     */
    inline ExternalEvaluation& WithComplianceResourceId(Aws::String&& value) { SetComplianceResourceId(std::move(value)); return *this;}

    /**
     * <p>The evaluated compliance resource ID. Config accepts only Amazon Web Services
     * account ID.</p>
     */
    inline ExternalEvaluation& WithComplianceResourceId(const char* value) { SetComplianceResourceId(value); return *this;}


    /**
     * <p>The compliance of the Amazon Web Services resource. The valid values are
     * <code>COMPLIANT, NON_COMPLIANT, </code> and <code>NOT_APPLICABLE</code>.</p>
     */
    inline const ComplianceType& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p>The compliance of the Amazon Web Services resource. The valid values are
     * <code>COMPLIANT, NON_COMPLIANT, </code> and <code>NOT_APPLICABLE</code>.</p>
     */
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }

    /**
     * <p>The compliance of the Amazon Web Services resource. The valid values are
     * <code>COMPLIANT, NON_COMPLIANT, </code> and <code>NOT_APPLICABLE</code>.</p>
     */
    inline void SetComplianceType(const ComplianceType& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>The compliance of the Amazon Web Services resource. The valid values are
     * <code>COMPLIANT, NON_COMPLIANT, </code> and <code>NOT_APPLICABLE</code>.</p>
     */
    inline void SetComplianceType(ComplianceType&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

    /**
     * <p>The compliance of the Amazon Web Services resource. The valid values are
     * <code>COMPLIANT, NON_COMPLIANT, </code> and <code>NOT_APPLICABLE</code>.</p>
     */
    inline ExternalEvaluation& WithComplianceType(const ComplianceType& value) { SetComplianceType(value); return *this;}

    /**
     * <p>The compliance of the Amazon Web Services resource. The valid values are
     * <code>COMPLIANT, NON_COMPLIANT, </code> and <code>NOT_APPLICABLE</code>.</p>
     */
    inline ExternalEvaluation& WithComplianceType(ComplianceType&& value) { SetComplianceType(std::move(value)); return *this;}


    /**
     * <p>Supplementary information about the reason of compliance. For example, this
     * task was completed on a specific date.</p>
     */
    inline const Aws::String& GetAnnotation() const{ return m_annotation; }

    /**
     * <p>Supplementary information about the reason of compliance. For example, this
     * task was completed on a specific date.</p>
     */
    inline bool AnnotationHasBeenSet() const { return m_annotationHasBeenSet; }

    /**
     * <p>Supplementary information about the reason of compliance. For example, this
     * task was completed on a specific date.</p>
     */
    inline void SetAnnotation(const Aws::String& value) { m_annotationHasBeenSet = true; m_annotation = value; }

    /**
     * <p>Supplementary information about the reason of compliance. For example, this
     * task was completed on a specific date.</p>
     */
    inline void SetAnnotation(Aws::String&& value) { m_annotationHasBeenSet = true; m_annotation = std::move(value); }

    /**
     * <p>Supplementary information about the reason of compliance. For example, this
     * task was completed on a specific date.</p>
     */
    inline void SetAnnotation(const char* value) { m_annotationHasBeenSet = true; m_annotation.assign(value); }

    /**
     * <p>Supplementary information about the reason of compliance. For example, this
     * task was completed on a specific date.</p>
     */
    inline ExternalEvaluation& WithAnnotation(const Aws::String& value) { SetAnnotation(value); return *this;}

    /**
     * <p>Supplementary information about the reason of compliance. For example, this
     * task was completed on a specific date.</p>
     */
    inline ExternalEvaluation& WithAnnotation(Aws::String&& value) { SetAnnotation(std::move(value)); return *this;}

    /**
     * <p>Supplementary information about the reason of compliance. For example, this
     * task was completed on a specific date.</p>
     */
    inline ExternalEvaluation& WithAnnotation(const char* value) { SetAnnotation(value); return *this;}


    /**
     * <p>The time when the compliance was recorded. </p>
     */
    inline const Aws::Utils::DateTime& GetOrderingTimestamp() const{ return m_orderingTimestamp; }

    /**
     * <p>The time when the compliance was recorded. </p>
     */
    inline bool OrderingTimestampHasBeenSet() const { return m_orderingTimestampHasBeenSet; }

    /**
     * <p>The time when the compliance was recorded. </p>
     */
    inline void SetOrderingTimestamp(const Aws::Utils::DateTime& value) { m_orderingTimestampHasBeenSet = true; m_orderingTimestamp = value; }

    /**
     * <p>The time when the compliance was recorded. </p>
     */
    inline void SetOrderingTimestamp(Aws::Utils::DateTime&& value) { m_orderingTimestampHasBeenSet = true; m_orderingTimestamp = std::move(value); }

    /**
     * <p>The time when the compliance was recorded. </p>
     */
    inline ExternalEvaluation& WithOrderingTimestamp(const Aws::Utils::DateTime& value) { SetOrderingTimestamp(value); return *this;}

    /**
     * <p>The time when the compliance was recorded. </p>
     */
    inline ExternalEvaluation& WithOrderingTimestamp(Aws::Utils::DateTime&& value) { SetOrderingTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_complianceResourceType;
    bool m_complianceResourceTypeHasBeenSet = false;

    Aws::String m_complianceResourceId;
    bool m_complianceResourceIdHasBeenSet = false;

    ComplianceType m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    Aws::String m_annotation;
    bool m_annotationHasBeenSet = false;

    Aws::Utils::DateTime m_orderingTimestamp;
    bool m_orderingTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws

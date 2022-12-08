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
    AWS_CONFIGSERVICE_API Evaluation();
    AWS_CONFIGSERVICE_API Evaluation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Evaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of Amazon Web Services resource that was evaluated.</p>
     */
    inline const Aws::String& GetComplianceResourceType() const{ return m_complianceResourceType; }

    /**
     * <p>The type of Amazon Web Services resource that was evaluated.</p>
     */
    inline bool ComplianceResourceTypeHasBeenSet() const { return m_complianceResourceTypeHasBeenSet; }

    /**
     * <p>The type of Amazon Web Services resource that was evaluated.</p>
     */
    inline void SetComplianceResourceType(const Aws::String& value) { m_complianceResourceTypeHasBeenSet = true; m_complianceResourceType = value; }

    /**
     * <p>The type of Amazon Web Services resource that was evaluated.</p>
     */
    inline void SetComplianceResourceType(Aws::String&& value) { m_complianceResourceTypeHasBeenSet = true; m_complianceResourceType = std::move(value); }

    /**
     * <p>The type of Amazon Web Services resource that was evaluated.</p>
     */
    inline void SetComplianceResourceType(const char* value) { m_complianceResourceTypeHasBeenSet = true; m_complianceResourceType.assign(value); }

    /**
     * <p>The type of Amazon Web Services resource that was evaluated.</p>
     */
    inline Evaluation& WithComplianceResourceType(const Aws::String& value) { SetComplianceResourceType(value); return *this;}

    /**
     * <p>The type of Amazon Web Services resource that was evaluated.</p>
     */
    inline Evaluation& WithComplianceResourceType(Aws::String&& value) { SetComplianceResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of Amazon Web Services resource that was evaluated.</p>
     */
    inline Evaluation& WithComplianceResourceType(const char* value) { SetComplianceResourceType(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline const Aws::String& GetComplianceResourceId() const{ return m_complianceResourceId; }

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline bool ComplianceResourceIdHasBeenSet() const { return m_complianceResourceIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline void SetComplianceResourceId(const Aws::String& value) { m_complianceResourceIdHasBeenSet = true; m_complianceResourceId = value; }

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline void SetComplianceResourceId(Aws::String&& value) { m_complianceResourceIdHasBeenSet = true; m_complianceResourceId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline void SetComplianceResourceId(const char* value) { m_complianceResourceIdHasBeenSet = true; m_complianceResourceId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline Evaluation& WithComplianceResourceId(const Aws::String& value) { SetComplianceResourceId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline Evaluation& WithComplianceResourceId(Aws::String&& value) { SetComplianceResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services resource that was evaluated.</p>
     */
    inline Evaluation& WithComplianceResourceId(const char* value) { SetComplianceResourceId(value); return *this;}


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
    inline const ComplianceType& GetComplianceType() const{ return m_complianceType; }

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
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }

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
    inline void SetComplianceType(const ComplianceType& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

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
    inline void SetComplianceType(ComplianceType&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

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
    inline Evaluation& WithComplianceType(const ComplianceType& value) { SetComplianceType(value); return *this;}

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
    inline Evaluation& WithComplianceType(ComplianceType&& value) { SetComplianceType(std::move(value)); return *this;}


    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline const Aws::String& GetAnnotation() const{ return m_annotation; }

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline bool AnnotationHasBeenSet() const { return m_annotationHasBeenSet; }

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline void SetAnnotation(const Aws::String& value) { m_annotationHasBeenSet = true; m_annotation = value; }

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline void SetAnnotation(Aws::String&& value) { m_annotationHasBeenSet = true; m_annotation = std::move(value); }

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline void SetAnnotation(const char* value) { m_annotationHasBeenSet = true; m_annotation.assign(value); }

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline Evaluation& WithAnnotation(const Aws::String& value) { SetAnnotation(value); return *this;}

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline Evaluation& WithAnnotation(Aws::String&& value) { SetAnnotation(std::move(value)); return *this;}

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline Evaluation& WithAnnotation(const char* value) { SetAnnotation(value); return *this;}


    /**
     * <p>The time of the event in Config that triggered the evaluation. For
     * event-based evaluations, the time indicates when Config created the
     * configuration item that triggered the evaluation. For periodic evaluations, the
     * time indicates when Config triggered the evaluation at the frequency that you
     * specified (for example, every 24 hours).</p>
     */
    inline const Aws::Utils::DateTime& GetOrderingTimestamp() const{ return m_orderingTimestamp; }

    /**
     * <p>The time of the event in Config that triggered the evaluation. For
     * event-based evaluations, the time indicates when Config created the
     * configuration item that triggered the evaluation. For periodic evaluations, the
     * time indicates when Config triggered the evaluation at the frequency that you
     * specified (for example, every 24 hours).</p>
     */
    inline bool OrderingTimestampHasBeenSet() const { return m_orderingTimestampHasBeenSet; }

    /**
     * <p>The time of the event in Config that triggered the evaluation. For
     * event-based evaluations, the time indicates when Config created the
     * configuration item that triggered the evaluation. For periodic evaluations, the
     * time indicates when Config triggered the evaluation at the frequency that you
     * specified (for example, every 24 hours).</p>
     */
    inline void SetOrderingTimestamp(const Aws::Utils::DateTime& value) { m_orderingTimestampHasBeenSet = true; m_orderingTimestamp = value; }

    /**
     * <p>The time of the event in Config that triggered the evaluation. For
     * event-based evaluations, the time indicates when Config created the
     * configuration item that triggered the evaluation. For periodic evaluations, the
     * time indicates when Config triggered the evaluation at the frequency that you
     * specified (for example, every 24 hours).</p>
     */
    inline void SetOrderingTimestamp(Aws::Utils::DateTime&& value) { m_orderingTimestampHasBeenSet = true; m_orderingTimestamp = std::move(value); }

    /**
     * <p>The time of the event in Config that triggered the evaluation. For
     * event-based evaluations, the time indicates when Config created the
     * configuration item that triggered the evaluation. For periodic evaluations, the
     * time indicates when Config triggered the evaluation at the frequency that you
     * specified (for example, every 24 hours).</p>
     */
    inline Evaluation& WithOrderingTimestamp(const Aws::Utils::DateTime& value) { SetOrderingTimestamp(value); return *this;}

    /**
     * <p>The time of the event in Config that triggered the evaluation. For
     * event-based evaluations, the time indicates when Config created the
     * configuration item that triggered the evaluation. For periodic evaluations, the
     * time indicates when Config triggered the evaluation at the frequency that you
     * specified (for example, every 24 hours).</p>
     */
    inline Evaluation& WithOrderingTimestamp(Aws::Utils::DateTime&& value) { SetOrderingTimestamp(std::move(value)); return *this;}

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

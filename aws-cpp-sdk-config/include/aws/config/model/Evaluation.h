﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ComplianceType.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Identifies an AWS resource and indicates whether it complies with the AWS
   * Config rule that it was evaluated against.</p>
   */
  class AWS_CONFIGSERVICE_API Evaluation
  {
  public:
    Evaluation();
    Evaluation(const Aws::Utils::Json::JsonValue& jsonValue);
    Evaluation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The type of AWS resource that was evaluated.</p>
     */
    inline const Aws::String& GetComplianceResourceType() const{ return m_complianceResourceType; }

    /**
     * <p>The type of AWS resource that was evaluated.</p>
     */
    inline void SetComplianceResourceType(const Aws::String& value) { m_complianceResourceTypeHasBeenSet = true; m_complianceResourceType = value; }

    /**
     * <p>The type of AWS resource that was evaluated.</p>
     */
    inline void SetComplianceResourceType(Aws::String&& value) { m_complianceResourceTypeHasBeenSet = true; m_complianceResourceType = value; }

    /**
     * <p>The type of AWS resource that was evaluated.</p>
     */
    inline void SetComplianceResourceType(const char* value) { m_complianceResourceTypeHasBeenSet = true; m_complianceResourceType.assign(value); }

    /**
     * <p>The type of AWS resource that was evaluated.</p>
     */
    inline Evaluation& WithComplianceResourceType(const Aws::String& value) { SetComplianceResourceType(value); return *this;}

    /**
     * <p>The type of AWS resource that was evaluated.</p>
     */
    inline Evaluation& WithComplianceResourceType(Aws::String&& value) { SetComplianceResourceType(value); return *this;}

    /**
     * <p>The type of AWS resource that was evaluated.</p>
     */
    inline Evaluation& WithComplianceResourceType(const char* value) { SetComplianceResourceType(value); return *this;}

    /**
     * <p>The ID of the AWS resource that was evaluated.</p>
     */
    inline const Aws::String& GetComplianceResourceId() const{ return m_complianceResourceId; }

    /**
     * <p>The ID of the AWS resource that was evaluated.</p>
     */
    inline void SetComplianceResourceId(const Aws::String& value) { m_complianceResourceIdHasBeenSet = true; m_complianceResourceId = value; }

    /**
     * <p>The ID of the AWS resource that was evaluated.</p>
     */
    inline void SetComplianceResourceId(Aws::String&& value) { m_complianceResourceIdHasBeenSet = true; m_complianceResourceId = value; }

    /**
     * <p>The ID of the AWS resource that was evaluated.</p>
     */
    inline void SetComplianceResourceId(const char* value) { m_complianceResourceIdHasBeenSet = true; m_complianceResourceId.assign(value); }

    /**
     * <p>The ID of the AWS resource that was evaluated.</p>
     */
    inline Evaluation& WithComplianceResourceId(const Aws::String& value) { SetComplianceResourceId(value); return *this;}

    /**
     * <p>The ID of the AWS resource that was evaluated.</p>
     */
    inline Evaluation& WithComplianceResourceId(Aws::String&& value) { SetComplianceResourceId(value); return *this;}

    /**
     * <p>The ID of the AWS resource that was evaluated.</p>
     */
    inline Evaluation& WithComplianceResourceId(const char* value) { SetComplianceResourceId(value); return *this;}

    /**
     * <p>Indicates whether the AWS resource complies with the AWS Config rule that it
     * was evaluated against.</p> <p>For the <code>Evaluation</code> data type, AWS
     * Config supports only the <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code> values. AWS Config does not support the
     * <code>INSUFFICIENT_DATA</code> value for this data type.</p> <p>Similarly, AWS
     * Config does not accept <code>INSUFFICIENT_DATA</code> as the value for
     * <code>ComplianceType</code> from a <code>PutEvaluations</code> request. For
     * example, an AWS Lambda function for a custom Config rule cannot pass an
     * <code>INSUFFICIENT_DATA</code> value to AWS Config.</p>
     */
    inline const ComplianceType& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p>Indicates whether the AWS resource complies with the AWS Config rule that it
     * was evaluated against.</p> <p>For the <code>Evaluation</code> data type, AWS
     * Config supports only the <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code> values. AWS Config does not support the
     * <code>INSUFFICIENT_DATA</code> value for this data type.</p> <p>Similarly, AWS
     * Config does not accept <code>INSUFFICIENT_DATA</code> as the value for
     * <code>ComplianceType</code> from a <code>PutEvaluations</code> request. For
     * example, an AWS Lambda function for a custom Config rule cannot pass an
     * <code>INSUFFICIENT_DATA</code> value to AWS Config.</p>
     */
    inline void SetComplianceType(const ComplianceType& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>Indicates whether the AWS resource complies with the AWS Config rule that it
     * was evaluated against.</p> <p>For the <code>Evaluation</code> data type, AWS
     * Config supports only the <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code> values. AWS Config does not support the
     * <code>INSUFFICIENT_DATA</code> value for this data type.</p> <p>Similarly, AWS
     * Config does not accept <code>INSUFFICIENT_DATA</code> as the value for
     * <code>ComplianceType</code> from a <code>PutEvaluations</code> request. For
     * example, an AWS Lambda function for a custom Config rule cannot pass an
     * <code>INSUFFICIENT_DATA</code> value to AWS Config.</p>
     */
    inline void SetComplianceType(ComplianceType&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>Indicates whether the AWS resource complies with the AWS Config rule that it
     * was evaluated against.</p> <p>For the <code>Evaluation</code> data type, AWS
     * Config supports only the <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code> values. AWS Config does not support the
     * <code>INSUFFICIENT_DATA</code> value for this data type.</p> <p>Similarly, AWS
     * Config does not accept <code>INSUFFICIENT_DATA</code> as the value for
     * <code>ComplianceType</code> from a <code>PutEvaluations</code> request. For
     * example, an AWS Lambda function for a custom Config rule cannot pass an
     * <code>INSUFFICIENT_DATA</code> value to AWS Config.</p>
     */
    inline Evaluation& WithComplianceType(const ComplianceType& value) { SetComplianceType(value); return *this;}

    /**
     * <p>Indicates whether the AWS resource complies with the AWS Config rule that it
     * was evaluated against.</p> <p>For the <code>Evaluation</code> data type, AWS
     * Config supports only the <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code> values. AWS Config does not support the
     * <code>INSUFFICIENT_DATA</code> value for this data type.</p> <p>Similarly, AWS
     * Config does not accept <code>INSUFFICIENT_DATA</code> as the value for
     * <code>ComplianceType</code> from a <code>PutEvaluations</code> request. For
     * example, an AWS Lambda function for a custom Config rule cannot pass an
     * <code>INSUFFICIENT_DATA</code> value to AWS Config.</p>
     */
    inline Evaluation& WithComplianceType(ComplianceType&& value) { SetComplianceType(value); return *this;}

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline const Aws::String& GetAnnotation() const{ return m_annotation; }

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline void SetAnnotation(const Aws::String& value) { m_annotationHasBeenSet = true; m_annotation = value; }

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline void SetAnnotation(Aws::String&& value) { m_annotationHasBeenSet = true; m_annotation = value; }

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
    inline Evaluation& WithAnnotation(Aws::String&& value) { SetAnnotation(value); return *this;}

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline Evaluation& WithAnnotation(const char* value) { SetAnnotation(value); return *this;}

    /**
     * <p>The time of the event in AWS Config that triggered the evaluation. For
     * event-based evaluations, the time indicates when AWS Config created the
     * configuration item that triggered the evaluation. For periodic evaluations, the
     * time indicates when AWS Config delivered the configuration snapshot that
     * triggered the evaluation.</p>
     */
    inline const Aws::Utils::DateTime& GetOrderingTimestamp() const{ return m_orderingTimestamp; }

    /**
     * <p>The time of the event in AWS Config that triggered the evaluation. For
     * event-based evaluations, the time indicates when AWS Config created the
     * configuration item that triggered the evaluation. For periodic evaluations, the
     * time indicates when AWS Config delivered the configuration snapshot that
     * triggered the evaluation.</p>
     */
    inline void SetOrderingTimestamp(const Aws::Utils::DateTime& value) { m_orderingTimestampHasBeenSet = true; m_orderingTimestamp = value; }

    /**
     * <p>The time of the event in AWS Config that triggered the evaluation. For
     * event-based evaluations, the time indicates when AWS Config created the
     * configuration item that triggered the evaluation. For periodic evaluations, the
     * time indicates when AWS Config delivered the configuration snapshot that
     * triggered the evaluation.</p>
     */
    inline void SetOrderingTimestamp(Aws::Utils::DateTime&& value) { m_orderingTimestampHasBeenSet = true; m_orderingTimestamp = value; }

    /**
     * <p>The time of the event in AWS Config that triggered the evaluation. For
     * event-based evaluations, the time indicates when AWS Config created the
     * configuration item that triggered the evaluation. For periodic evaluations, the
     * time indicates when AWS Config delivered the configuration snapshot that
     * triggered the evaluation.</p>
     */
    inline Evaluation& WithOrderingTimestamp(const Aws::Utils::DateTime& value) { SetOrderingTimestamp(value); return *this;}

    /**
     * <p>The time of the event in AWS Config that triggered the evaluation. For
     * event-based evaluations, the time indicates when AWS Config created the
     * configuration item that triggered the evaluation. For periodic evaluations, the
     * time indicates when AWS Config delivered the configuration snapshot that
     * triggered the evaluation.</p>
     */
    inline Evaluation& WithOrderingTimestamp(Aws::Utils::DateTime&& value) { SetOrderingTimestamp(value); return *this;}

  private:
    Aws::String m_complianceResourceType;
    bool m_complianceResourceTypeHasBeenSet;
    Aws::String m_complianceResourceId;
    bool m_complianceResourceIdHasBeenSet;
    ComplianceType m_complianceType;
    bool m_complianceTypeHasBeenSet;
    Aws::String m_annotation;
    bool m_annotationHasBeenSet;
    Aws::Utils::DateTime m_orderingTimestamp;
    bool m_orderingTimestampHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws

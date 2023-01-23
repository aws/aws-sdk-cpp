/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> A system asset that's evaluated in an Audit Manager assessment.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_AUDITMANAGER_API Resource();
    AWS_AUDITMANAGER_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) for the resource. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) for the resource. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) for the resource. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) for the resource. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for the resource. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for the resource. </p>
     */
    inline Resource& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for the resource. </p>
     */
    inline Resource& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for the resource. </p>
     */
    inline Resource& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The value of the resource. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p> The value of the resource. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p> The value of the resource. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p> The value of the resource. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p> The value of the resource. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p> The value of the resource. </p>
     */
    inline Resource& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p> The value of the resource. </p>
     */
    inline Resource& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p> The value of the resource. </p>
     */
    inline Resource& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p> The evaluation status for a resource that was assessed when collecting
     * compliance check evidence. </p> <ul> <li> <p>Audit Manager classes the resource
     * as non-compliant if Security Hub reports a <i>Fail</i> result, or if Config
     * reports a <i>Non-compliant</i> result.</p> </li> <li> <p>Audit Manager classes
     * the resource as compliant if Security Hub reports a <i>Pass</i> result, or if
     * Config reports a <i>Compliant</i> result.</p> </li> <li> <p>If a compliance
     * check isn't available or applicable, then no compliance evaluation can be made
     * for that resource. This is the case if a resource assessment uses Config or
     * Security Hub as the underlying data source type, but those services aren't
     * enabled. This is also the case if the resource assessment uses an underlying
     * data source type that doesn't support compliance checks (such as manual
     * evidence, Amazon Web Services API calls, or CloudTrail). </p> </li> </ul>
     */
    inline const Aws::String& GetComplianceCheck() const{ return m_complianceCheck; }

    /**
     * <p> The evaluation status for a resource that was assessed when collecting
     * compliance check evidence. </p> <ul> <li> <p>Audit Manager classes the resource
     * as non-compliant if Security Hub reports a <i>Fail</i> result, or if Config
     * reports a <i>Non-compliant</i> result.</p> </li> <li> <p>Audit Manager classes
     * the resource as compliant if Security Hub reports a <i>Pass</i> result, or if
     * Config reports a <i>Compliant</i> result.</p> </li> <li> <p>If a compliance
     * check isn't available or applicable, then no compliance evaluation can be made
     * for that resource. This is the case if a resource assessment uses Config or
     * Security Hub as the underlying data source type, but those services aren't
     * enabled. This is also the case if the resource assessment uses an underlying
     * data source type that doesn't support compliance checks (such as manual
     * evidence, Amazon Web Services API calls, or CloudTrail). </p> </li> </ul>
     */
    inline bool ComplianceCheckHasBeenSet() const { return m_complianceCheckHasBeenSet; }

    /**
     * <p> The evaluation status for a resource that was assessed when collecting
     * compliance check evidence. </p> <ul> <li> <p>Audit Manager classes the resource
     * as non-compliant if Security Hub reports a <i>Fail</i> result, or if Config
     * reports a <i>Non-compliant</i> result.</p> </li> <li> <p>Audit Manager classes
     * the resource as compliant if Security Hub reports a <i>Pass</i> result, or if
     * Config reports a <i>Compliant</i> result.</p> </li> <li> <p>If a compliance
     * check isn't available or applicable, then no compliance evaluation can be made
     * for that resource. This is the case if a resource assessment uses Config or
     * Security Hub as the underlying data source type, but those services aren't
     * enabled. This is also the case if the resource assessment uses an underlying
     * data source type that doesn't support compliance checks (such as manual
     * evidence, Amazon Web Services API calls, or CloudTrail). </p> </li> </ul>
     */
    inline void SetComplianceCheck(const Aws::String& value) { m_complianceCheckHasBeenSet = true; m_complianceCheck = value; }

    /**
     * <p> The evaluation status for a resource that was assessed when collecting
     * compliance check evidence. </p> <ul> <li> <p>Audit Manager classes the resource
     * as non-compliant if Security Hub reports a <i>Fail</i> result, or if Config
     * reports a <i>Non-compliant</i> result.</p> </li> <li> <p>Audit Manager classes
     * the resource as compliant if Security Hub reports a <i>Pass</i> result, or if
     * Config reports a <i>Compliant</i> result.</p> </li> <li> <p>If a compliance
     * check isn't available or applicable, then no compliance evaluation can be made
     * for that resource. This is the case if a resource assessment uses Config or
     * Security Hub as the underlying data source type, but those services aren't
     * enabled. This is also the case if the resource assessment uses an underlying
     * data source type that doesn't support compliance checks (such as manual
     * evidence, Amazon Web Services API calls, or CloudTrail). </p> </li> </ul>
     */
    inline void SetComplianceCheck(Aws::String&& value) { m_complianceCheckHasBeenSet = true; m_complianceCheck = std::move(value); }

    /**
     * <p> The evaluation status for a resource that was assessed when collecting
     * compliance check evidence. </p> <ul> <li> <p>Audit Manager classes the resource
     * as non-compliant if Security Hub reports a <i>Fail</i> result, or if Config
     * reports a <i>Non-compliant</i> result.</p> </li> <li> <p>Audit Manager classes
     * the resource as compliant if Security Hub reports a <i>Pass</i> result, or if
     * Config reports a <i>Compliant</i> result.</p> </li> <li> <p>If a compliance
     * check isn't available or applicable, then no compliance evaluation can be made
     * for that resource. This is the case if a resource assessment uses Config or
     * Security Hub as the underlying data source type, but those services aren't
     * enabled. This is also the case if the resource assessment uses an underlying
     * data source type that doesn't support compliance checks (such as manual
     * evidence, Amazon Web Services API calls, or CloudTrail). </p> </li> </ul>
     */
    inline void SetComplianceCheck(const char* value) { m_complianceCheckHasBeenSet = true; m_complianceCheck.assign(value); }

    /**
     * <p> The evaluation status for a resource that was assessed when collecting
     * compliance check evidence. </p> <ul> <li> <p>Audit Manager classes the resource
     * as non-compliant if Security Hub reports a <i>Fail</i> result, or if Config
     * reports a <i>Non-compliant</i> result.</p> </li> <li> <p>Audit Manager classes
     * the resource as compliant if Security Hub reports a <i>Pass</i> result, or if
     * Config reports a <i>Compliant</i> result.</p> </li> <li> <p>If a compliance
     * check isn't available or applicable, then no compliance evaluation can be made
     * for that resource. This is the case if a resource assessment uses Config or
     * Security Hub as the underlying data source type, but those services aren't
     * enabled. This is also the case if the resource assessment uses an underlying
     * data source type that doesn't support compliance checks (such as manual
     * evidence, Amazon Web Services API calls, or CloudTrail). </p> </li> </ul>
     */
    inline Resource& WithComplianceCheck(const Aws::String& value) { SetComplianceCheck(value); return *this;}

    /**
     * <p> The evaluation status for a resource that was assessed when collecting
     * compliance check evidence. </p> <ul> <li> <p>Audit Manager classes the resource
     * as non-compliant if Security Hub reports a <i>Fail</i> result, or if Config
     * reports a <i>Non-compliant</i> result.</p> </li> <li> <p>Audit Manager classes
     * the resource as compliant if Security Hub reports a <i>Pass</i> result, or if
     * Config reports a <i>Compliant</i> result.</p> </li> <li> <p>If a compliance
     * check isn't available or applicable, then no compliance evaluation can be made
     * for that resource. This is the case if a resource assessment uses Config or
     * Security Hub as the underlying data source type, but those services aren't
     * enabled. This is also the case if the resource assessment uses an underlying
     * data source type that doesn't support compliance checks (such as manual
     * evidence, Amazon Web Services API calls, or CloudTrail). </p> </li> </ul>
     */
    inline Resource& WithComplianceCheck(Aws::String&& value) { SetComplianceCheck(std::move(value)); return *this;}

    /**
     * <p> The evaluation status for a resource that was assessed when collecting
     * compliance check evidence. </p> <ul> <li> <p>Audit Manager classes the resource
     * as non-compliant if Security Hub reports a <i>Fail</i> result, or if Config
     * reports a <i>Non-compliant</i> result.</p> </li> <li> <p>Audit Manager classes
     * the resource as compliant if Security Hub reports a <i>Pass</i> result, or if
     * Config reports a <i>Compliant</i> result.</p> </li> <li> <p>If a compliance
     * check isn't available or applicable, then no compliance evaluation can be made
     * for that resource. This is the case if a resource assessment uses Config or
     * Security Hub as the underlying data source type, but those services aren't
     * enabled. This is also the case if the resource assessment uses an underlying
     * data source type that doesn't support compliance checks (such as manual
     * evidence, Amazon Web Services API calls, or CloudTrail). </p> </li> </ul>
     */
    inline Resource& WithComplianceCheck(const char* value) { SetComplianceCheck(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_complianceCheck;
    bool m_complianceCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws

﻿/**
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
    AWS_AUDITMANAGER_API Resource() = default;
    AWS_AUDITMANAGER_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for the resource. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Resource& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The value of the resource. </p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Resource& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetComplianceCheck() const { return m_complianceCheck; }
    inline bool ComplianceCheckHasBeenSet() const { return m_complianceCheckHasBeenSet; }
    template<typename ComplianceCheckT = Aws::String>
    void SetComplianceCheck(ComplianceCheckT&& value) { m_complianceCheckHasBeenSet = true; m_complianceCheck = std::forward<ComplianceCheckT>(value); }
    template<typename ComplianceCheckT = Aws::String>
    Resource& WithComplianceCheck(ComplianceCheckT&& value) { SetComplianceCheck(std::forward<ComplianceCheckT>(value)); return *this;}
    ///@}
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

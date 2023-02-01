/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AuditManager
{
namespace Model
{
  class DisassociateAssessmentReportEvidenceFolderResult
  {
  public:
    AWS_AUDITMANAGER_API DisassociateAssessmentReportEvidenceFolderResult();
    AWS_AUDITMANAGER_API DisassociateAssessmentReportEvidenceFolderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API DisassociateAssessmentReportEvidenceFolderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws

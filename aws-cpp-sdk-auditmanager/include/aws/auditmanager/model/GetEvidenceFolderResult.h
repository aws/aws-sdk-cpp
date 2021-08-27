/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/AssessmentEvidenceFolder.h>
#include <utility>

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
  class AWS_AUDITMANAGER_API GetEvidenceFolderResult
  {
  public:
    GetEvidenceFolderResult();
    GetEvidenceFolderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetEvidenceFolderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The folder in which evidence is stored. </p>
     */
    inline const AssessmentEvidenceFolder& GetEvidenceFolder() const{ return m_evidenceFolder; }

    /**
     * <p> The folder in which evidence is stored. </p>
     */
    inline void SetEvidenceFolder(const AssessmentEvidenceFolder& value) { m_evidenceFolder = value; }

    /**
     * <p> The folder in which evidence is stored. </p>
     */
    inline void SetEvidenceFolder(AssessmentEvidenceFolder&& value) { m_evidenceFolder = std::move(value); }

    /**
     * <p> The folder in which evidence is stored. </p>
     */
    inline GetEvidenceFolderResult& WithEvidenceFolder(const AssessmentEvidenceFolder& value) { SetEvidenceFolder(value); return *this;}

    /**
     * <p> The folder in which evidence is stored. </p>
     */
    inline GetEvidenceFolderResult& WithEvidenceFolder(AssessmentEvidenceFolder&& value) { SetEvidenceFolder(std::move(value)); return *this;}

  private:

    AssessmentEvidenceFolder m_evidenceFolder;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws

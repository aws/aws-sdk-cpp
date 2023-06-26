﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/Evidence.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetEvidenceResult
  {
  public:
    AWS_AUDITMANAGER_API GetEvidenceResult();
    AWS_AUDITMANAGER_API GetEvidenceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetEvidenceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The evidence that the <code>GetEvidence</code> API returned. </p>
     */
    inline const Evidence& GetEvidence() const{ return m_evidence; }

    /**
     * <p> The evidence that the <code>GetEvidence</code> API returned. </p>
     */
    inline void SetEvidence(const Evidence& value) { m_evidence = value; }

    /**
     * <p> The evidence that the <code>GetEvidence</code> API returned. </p>
     */
    inline void SetEvidence(Evidence&& value) { m_evidence = std::move(value); }

    /**
     * <p> The evidence that the <code>GetEvidence</code> API returned. </p>
     */
    inline GetEvidenceResult& WithEvidence(const Evidence& value) { SetEvidence(value); return *this;}

    /**
     * <p> The evidence that the <code>GetEvidence</code> API returned. </p>
     */
    inline GetEvidenceResult& WithEvidence(Evidence&& value) { SetEvidence(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEvidenceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEvidenceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEvidenceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Evidence m_evidence;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws

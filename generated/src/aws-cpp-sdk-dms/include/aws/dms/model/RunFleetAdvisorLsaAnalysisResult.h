﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  class RunFleetAdvisorLsaAnalysisResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API RunFleetAdvisorLsaAnalysisResult();
    AWS_DATABASEMIGRATIONSERVICE_API RunFleetAdvisorLsaAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API RunFleetAdvisorLsaAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the LSA analysis run.</p>
     */
    inline const Aws::String& GetLsaAnalysisId() const{ return m_lsaAnalysisId; }
    inline void SetLsaAnalysisId(const Aws::String& value) { m_lsaAnalysisId = value; }
    inline void SetLsaAnalysisId(Aws::String&& value) { m_lsaAnalysisId = std::move(value); }
    inline void SetLsaAnalysisId(const char* value) { m_lsaAnalysisId.assign(value); }
    inline RunFleetAdvisorLsaAnalysisResult& WithLsaAnalysisId(const Aws::String& value) { SetLsaAnalysisId(value); return *this;}
    inline RunFleetAdvisorLsaAnalysisResult& WithLsaAnalysisId(Aws::String&& value) { SetLsaAnalysisId(std::move(value)); return *this;}
    inline RunFleetAdvisorLsaAnalysisResult& WithLsaAnalysisId(const char* value) { SetLsaAnalysisId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the LSA analysis, for example <code>COMPLETED</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline RunFleetAdvisorLsaAnalysisResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline RunFleetAdvisorLsaAnalysisResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline RunFleetAdvisorLsaAnalysisResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RunFleetAdvisorLsaAnalysisResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RunFleetAdvisorLsaAnalysisResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RunFleetAdvisorLsaAnalysisResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_lsaAnalysisId;

    Aws::String m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

/**
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


    /**
     * <p>The ID of the LSA analysis run.</p>
     */
    inline const Aws::String& GetLsaAnalysisId() const{ return m_lsaAnalysisId; }

    /**
     * <p>The ID of the LSA analysis run.</p>
     */
    inline void SetLsaAnalysisId(const Aws::String& value) { m_lsaAnalysisId = value; }

    /**
     * <p>The ID of the LSA analysis run.</p>
     */
    inline void SetLsaAnalysisId(Aws::String&& value) { m_lsaAnalysisId = std::move(value); }

    /**
     * <p>The ID of the LSA analysis run.</p>
     */
    inline void SetLsaAnalysisId(const char* value) { m_lsaAnalysisId.assign(value); }

    /**
     * <p>The ID of the LSA analysis run.</p>
     */
    inline RunFleetAdvisorLsaAnalysisResult& WithLsaAnalysisId(const Aws::String& value) { SetLsaAnalysisId(value); return *this;}

    /**
     * <p>The ID of the LSA analysis run.</p>
     */
    inline RunFleetAdvisorLsaAnalysisResult& WithLsaAnalysisId(Aws::String&& value) { SetLsaAnalysisId(std::move(value)); return *this;}

    /**
     * <p>The ID of the LSA analysis run.</p>
     */
    inline RunFleetAdvisorLsaAnalysisResult& WithLsaAnalysisId(const char* value) { SetLsaAnalysisId(value); return *this;}


    /**
     * <p>The status of the LSA analysis, for example <code>COMPLETED</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the LSA analysis, for example <code>COMPLETED</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The status of the LSA analysis, for example <code>COMPLETED</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the LSA analysis, for example <code>COMPLETED</code>.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The status of the LSA analysis, for example <code>COMPLETED</code>.</p>
     */
    inline RunFleetAdvisorLsaAnalysisResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the LSA analysis, for example <code>COMPLETED</code>.</p>
     */
    inline RunFleetAdvisorLsaAnalysisResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the LSA analysis, for example <code>COMPLETED</code>.</p>
     */
    inline RunFleetAdvisorLsaAnalysisResult& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_lsaAnalysisId;

    Aws::String m_status;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

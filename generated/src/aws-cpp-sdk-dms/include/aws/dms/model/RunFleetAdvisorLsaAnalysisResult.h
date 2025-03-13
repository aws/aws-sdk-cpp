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
    AWS_DATABASEMIGRATIONSERVICE_API RunFleetAdvisorLsaAnalysisResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API RunFleetAdvisorLsaAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API RunFleetAdvisorLsaAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the LSA analysis run.</p>
     */
    inline const Aws::String& GetLsaAnalysisId() const { return m_lsaAnalysisId; }
    template<typename LsaAnalysisIdT = Aws::String>
    void SetLsaAnalysisId(LsaAnalysisIdT&& value) { m_lsaAnalysisIdHasBeenSet = true; m_lsaAnalysisId = std::forward<LsaAnalysisIdT>(value); }
    template<typename LsaAnalysisIdT = Aws::String>
    RunFleetAdvisorLsaAnalysisResult& WithLsaAnalysisId(LsaAnalysisIdT&& value) { SetLsaAnalysisId(std::forward<LsaAnalysisIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the LSA analysis, for example <code>COMPLETED</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    RunFleetAdvisorLsaAnalysisResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RunFleetAdvisorLsaAnalysisResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lsaAnalysisId;
    bool m_lsaAnalysisIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Describes a large-scale assessment (LSA) analysis run by a Fleet Advisor
   * collector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/FleetAdvisorLsaAnalysisResponse">AWS
   * API Reference</a></p>
   */
  class FleetAdvisorLsaAnalysisResponse
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API FleetAdvisorLsaAnalysisResponse() = default;
    AWS_DATABASEMIGRATIONSERVICE_API FleetAdvisorLsaAnalysisResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API FleetAdvisorLsaAnalysisResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of an LSA analysis run by a Fleet Advisor collector.</p>
     */
    inline const Aws::String& GetLsaAnalysisId() const { return m_lsaAnalysisId; }
    inline bool LsaAnalysisIdHasBeenSet() const { return m_lsaAnalysisIdHasBeenSet; }
    template<typename LsaAnalysisIdT = Aws::String>
    void SetLsaAnalysisId(LsaAnalysisIdT&& value) { m_lsaAnalysisIdHasBeenSet = true; m_lsaAnalysisId = std::forward<LsaAnalysisIdT>(value); }
    template<typename LsaAnalysisIdT = Aws::String>
    FleetAdvisorLsaAnalysisResponse& WithLsaAnalysisId(LsaAnalysisIdT&& value) { SetLsaAnalysisId(std::forward<LsaAnalysisIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of an LSA analysis run by a Fleet Advisor collector.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    FleetAdvisorLsaAnalysisResponse& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lsaAnalysisId;
    bool m_lsaAnalysisIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

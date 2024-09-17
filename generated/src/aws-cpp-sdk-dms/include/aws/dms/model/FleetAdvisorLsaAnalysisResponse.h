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
    AWS_DATABASEMIGRATIONSERVICE_API FleetAdvisorLsaAnalysisResponse();
    AWS_DATABASEMIGRATIONSERVICE_API FleetAdvisorLsaAnalysisResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API FleetAdvisorLsaAnalysisResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of an LSA analysis run by a Fleet Advisor collector.</p>
     */
    inline const Aws::String& GetLsaAnalysisId() const{ return m_lsaAnalysisId; }
    inline bool LsaAnalysisIdHasBeenSet() const { return m_lsaAnalysisIdHasBeenSet; }
    inline void SetLsaAnalysisId(const Aws::String& value) { m_lsaAnalysisIdHasBeenSet = true; m_lsaAnalysisId = value; }
    inline void SetLsaAnalysisId(Aws::String&& value) { m_lsaAnalysisIdHasBeenSet = true; m_lsaAnalysisId = std::move(value); }
    inline void SetLsaAnalysisId(const char* value) { m_lsaAnalysisIdHasBeenSet = true; m_lsaAnalysisId.assign(value); }
    inline FleetAdvisorLsaAnalysisResponse& WithLsaAnalysisId(const Aws::String& value) { SetLsaAnalysisId(value); return *this;}
    inline FleetAdvisorLsaAnalysisResponse& WithLsaAnalysisId(Aws::String&& value) { SetLsaAnalysisId(std::move(value)); return *this;}
    inline FleetAdvisorLsaAnalysisResponse& WithLsaAnalysisId(const char* value) { SetLsaAnalysisId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of an LSA analysis run by a Fleet Advisor collector.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline FleetAdvisorLsaAnalysisResponse& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline FleetAdvisorLsaAnalysisResponse& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline FleetAdvisorLsaAnalysisResponse& WithStatus(const char* value) { SetStatus(value); return *this;}
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

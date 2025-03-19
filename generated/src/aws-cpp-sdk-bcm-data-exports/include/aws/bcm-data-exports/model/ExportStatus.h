/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bcm-data-exports/model/ExportStatusCode.h>
#include <aws/bcm-data-exports/model/ExecutionStatusReason.h>
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
namespace BCMDataExports
{
namespace Model
{

  /**
   * <p>The status of the data export.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/ExportStatus">AWS
   * API Reference</a></p>
   */
  class ExportStatus
  {
  public:
    AWS_BCMDATAEXPORTS_API ExportStatus() = default;
    AWS_BCMDATAEXPORTS_API ExportStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API ExportStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when the export was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ExportStatus& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the export was last generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshedAt() const { return m_lastRefreshedAt; }
    inline bool LastRefreshedAtHasBeenSet() const { return m_lastRefreshedAtHasBeenSet; }
    template<typename LastRefreshedAtT = Aws::Utils::DateTime>
    void SetLastRefreshedAt(LastRefreshedAtT&& value) { m_lastRefreshedAtHasBeenSet = true; m_lastRefreshedAt = std::forward<LastRefreshedAtT>(value); }
    template<typename LastRefreshedAtT = Aws::Utils::DateTime>
    ExportStatus& WithLastRefreshedAt(LastRefreshedAtT&& value) { SetLastRefreshedAt(std::forward<LastRefreshedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the export was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    ExportStatus& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status code for the request.</p>
     */
    inline ExportStatusCode GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(ExportStatusCode value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline ExportStatus& WithStatusCode(ExportStatusCode value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the status code.</p>
     */
    inline ExecutionStatusReason GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(ExecutionStatusReason value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline ExportStatus& WithStatusReason(ExecutionStatusReason value) { SetStatusReason(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshedAt{};
    bool m_lastRefreshedAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    ExportStatusCode m_statusCode{ExportStatusCode::NOT_SET};
    bool m_statusCodeHasBeenSet = false;

    ExecutionStatusReason m_statusReason{ExecutionStatusReason::NOT_SET};
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws

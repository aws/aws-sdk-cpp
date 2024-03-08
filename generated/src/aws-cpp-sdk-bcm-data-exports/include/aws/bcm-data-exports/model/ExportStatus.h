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
    AWS_BCMDATAEXPORTS_API ExportStatus();
    AWS_BCMDATAEXPORTS_API ExportStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API ExportStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp of when the export was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the export was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp of when the export was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp of when the export was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the export was created.</p>
     */
    inline ExportStatus& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the export was created.</p>
     */
    inline ExportStatus& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the export was last generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshedAt() const{ return m_lastRefreshedAt; }

    /**
     * <p>The timestamp of when the export was last generated.</p>
     */
    inline bool LastRefreshedAtHasBeenSet() const { return m_lastRefreshedAtHasBeenSet; }

    /**
     * <p>The timestamp of when the export was last generated.</p>
     */
    inline void SetLastRefreshedAt(const Aws::Utils::DateTime& value) { m_lastRefreshedAtHasBeenSet = true; m_lastRefreshedAt = value; }

    /**
     * <p>The timestamp of when the export was last generated.</p>
     */
    inline void SetLastRefreshedAt(Aws::Utils::DateTime&& value) { m_lastRefreshedAtHasBeenSet = true; m_lastRefreshedAt = std::move(value); }

    /**
     * <p>The timestamp of when the export was last generated.</p>
     */
    inline ExportStatus& WithLastRefreshedAt(const Aws::Utils::DateTime& value) { SetLastRefreshedAt(value); return *this;}

    /**
     * <p>The timestamp of when the export was last generated.</p>
     */
    inline ExportStatus& WithLastRefreshedAt(Aws::Utils::DateTime&& value) { SetLastRefreshedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the export was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The timestamp of when the export was updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The timestamp of when the export was updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The timestamp of when the export was updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the export was updated.</p>
     */
    inline ExportStatus& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the export was updated.</p>
     */
    inline ExportStatus& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The status code for the request.</p>
     */
    inline const ExportStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The status code for the request.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The status code for the request.</p>
     */
    inline void SetStatusCode(const ExportStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The status code for the request.</p>
     */
    inline void SetStatusCode(ExportStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The status code for the request.</p>
     */
    inline ExportStatus& WithStatusCode(const ExportStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The status code for the request.</p>
     */
    inline ExportStatus& WithStatusCode(ExportStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}


    /**
     * <p>The description for the status code.</p>
     */
    inline const ExecutionStatusReason& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The description for the status code.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The description for the status code.</p>
     */
    inline void SetStatusReason(const ExecutionStatusReason& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The description for the status code.</p>
     */
    inline void SetStatusReason(ExecutionStatusReason&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The description for the status code.</p>
     */
    inline ExportStatus& WithStatusReason(const ExecutionStatusReason& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The description for the status code.</p>
     */
    inline ExportStatus& WithStatusReason(ExecutionStatusReason&& value) { SetStatusReason(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshedAt;
    bool m_lastRefreshedAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    ExportStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    ExecutionStatusReason m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws

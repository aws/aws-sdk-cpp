/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cur/model/LastStatus.h>
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
namespace CostandUsageReportService
{
namespace Model
{

  /**
   * <p>A two element dictionary with a <code>lastDelivery</code> and
   * <code>lastStatus</code> key whose values describe the date and status of the
   * last delivered report for a particular report definition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/ReportStatus">AWS
   * API Reference</a></p>
   */
  class ReportStatus
  {
  public:
    AWS_COSTANDUSAGEREPORTSERVICE_API ReportStatus();
    AWS_COSTANDUSAGEREPORTSERVICE_API ReportStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTANDUSAGEREPORTSERVICE_API ReportStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTANDUSAGEREPORTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A timestamp that gives the date of a report delivery.</p>
     */
    inline const Aws::String& GetLastDelivery() const{ return m_lastDelivery; }

    /**
     * <p>A timestamp that gives the date of a report delivery.</p>
     */
    inline bool LastDeliveryHasBeenSet() const { return m_lastDeliveryHasBeenSet; }

    /**
     * <p>A timestamp that gives the date of a report delivery.</p>
     */
    inline void SetLastDelivery(const Aws::String& value) { m_lastDeliveryHasBeenSet = true; m_lastDelivery = value; }

    /**
     * <p>A timestamp that gives the date of a report delivery.</p>
     */
    inline void SetLastDelivery(Aws::String&& value) { m_lastDeliveryHasBeenSet = true; m_lastDelivery = std::move(value); }

    /**
     * <p>A timestamp that gives the date of a report delivery.</p>
     */
    inline void SetLastDelivery(const char* value) { m_lastDeliveryHasBeenSet = true; m_lastDelivery.assign(value); }

    /**
     * <p>A timestamp that gives the date of a report delivery.</p>
     */
    inline ReportStatus& WithLastDelivery(const Aws::String& value) { SetLastDelivery(value); return *this;}

    /**
     * <p>A timestamp that gives the date of a report delivery.</p>
     */
    inline ReportStatus& WithLastDelivery(Aws::String&& value) { SetLastDelivery(std::move(value)); return *this;}

    /**
     * <p>A timestamp that gives the date of a report delivery.</p>
     */
    inline ReportStatus& WithLastDelivery(const char* value) { SetLastDelivery(value); return *this;}


    /**
     * <p>An enum that gives the status of a report delivery.</p>
     */
    inline const LastStatus& GetLastStatus() const{ return m_lastStatus; }

    /**
     * <p>An enum that gives the status of a report delivery.</p>
     */
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }

    /**
     * <p>An enum that gives the status of a report delivery.</p>
     */
    inline void SetLastStatus(const LastStatus& value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }

    /**
     * <p>An enum that gives the status of a report delivery.</p>
     */
    inline void SetLastStatus(LastStatus&& value) { m_lastStatusHasBeenSet = true; m_lastStatus = std::move(value); }

    /**
     * <p>An enum that gives the status of a report delivery.</p>
     */
    inline ReportStatus& WithLastStatus(const LastStatus& value) { SetLastStatus(value); return *this;}

    /**
     * <p>An enum that gives the status of a report delivery.</p>
     */
    inline ReportStatus& WithLastStatus(LastStatus&& value) { SetLastStatus(std::move(value)); return *this;}

  private:

    Aws::String m_lastDelivery;
    bool m_lastDeliveryHasBeenSet = false;

    LastStatus m_lastStatus;
    bool m_lastStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws

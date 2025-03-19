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
    AWS_COSTANDUSAGEREPORTSERVICE_API ReportStatus() = default;
    AWS_COSTANDUSAGEREPORTSERVICE_API ReportStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTANDUSAGEREPORTSERVICE_API ReportStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTANDUSAGEREPORTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A timestamp that gives the date of a report delivery.</p>
     */
    inline const Aws::String& GetLastDelivery() const { return m_lastDelivery; }
    inline bool LastDeliveryHasBeenSet() const { return m_lastDeliveryHasBeenSet; }
    template<typename LastDeliveryT = Aws::String>
    void SetLastDelivery(LastDeliveryT&& value) { m_lastDeliveryHasBeenSet = true; m_lastDelivery = std::forward<LastDeliveryT>(value); }
    template<typename LastDeliveryT = Aws::String>
    ReportStatus& WithLastDelivery(LastDeliveryT&& value) { SetLastDelivery(std::forward<LastDeliveryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An enum that gives the status of a report delivery.</p>
     */
    inline LastStatus GetLastStatus() const { return m_lastStatus; }
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }
    inline void SetLastStatus(LastStatus value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }
    inline ReportStatus& WithLastStatus(LastStatus value) { SetLastStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_lastDelivery;
    bool m_lastDeliveryHasBeenSet = false;

    LastStatus m_lastStatus{LastStatus::NOT_SET};
    bool m_lastStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws

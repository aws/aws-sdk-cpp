﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/DataSourceStatus.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information on the status of DNS logs as a data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DNSLogsConfigurationResult">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API DNSLogsConfigurationResult
  {
  public:
    DNSLogsConfigurationResult();
    DNSLogsConfigurationResult(Aws::Utils::Json::JsonView jsonValue);
    DNSLogsConfigurationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Denotes whether DNS logs is enabled as a data source.</p>
     */
    inline const DataSourceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Denotes whether DNS logs is enabled as a data source.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Denotes whether DNS logs is enabled as a data source.</p>
     */
    inline void SetStatus(const DataSourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Denotes whether DNS logs is enabled as a data source.</p>
     */
    inline void SetStatus(DataSourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Denotes whether DNS logs is enabled as a data source.</p>
     */
    inline DNSLogsConfigurationResult& WithStatus(const DataSourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Denotes whether DNS logs is enabled as a data source.</p>
     */
    inline DNSLogsConfigurationResult& WithStatus(DataSourceStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    DataSourceStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

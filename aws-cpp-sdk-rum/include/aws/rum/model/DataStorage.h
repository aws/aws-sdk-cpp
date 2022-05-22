/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/model/CwLog.h>
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
namespace CloudWatchRUM
{
namespace Model
{

  /**
   * <p>A structure that contains information about whether this app monitor stores a
   * copy of the telemetry data that RUM collects using CloudWatch
   * Logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/DataStorage">AWS API
   * Reference</a></p>
   */
  class AWS_CLOUDWATCHRUM_API DataStorage
  {
  public:
    DataStorage();
    DataStorage(Aws::Utils::Json::JsonView jsonValue);
    DataStorage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A structure that contains the information about whether the app monitor
     * stores copies of the data that RUM collects in CloudWatch Logs. If it does, this
     * structure also contains the name of the log group.</p>
     */
    inline const CwLog& GetCwLog() const{ return m_cwLog; }

    /**
     * <p>A structure that contains the information about whether the app monitor
     * stores copies of the data that RUM collects in CloudWatch Logs. If it does, this
     * structure also contains the name of the log group.</p>
     */
    inline bool CwLogHasBeenSet() const { return m_cwLogHasBeenSet; }

    /**
     * <p>A structure that contains the information about whether the app monitor
     * stores copies of the data that RUM collects in CloudWatch Logs. If it does, this
     * structure also contains the name of the log group.</p>
     */
    inline void SetCwLog(const CwLog& value) { m_cwLogHasBeenSet = true; m_cwLog = value; }

    /**
     * <p>A structure that contains the information about whether the app monitor
     * stores copies of the data that RUM collects in CloudWatch Logs. If it does, this
     * structure also contains the name of the log group.</p>
     */
    inline void SetCwLog(CwLog&& value) { m_cwLogHasBeenSet = true; m_cwLog = std::move(value); }

    /**
     * <p>A structure that contains the information about whether the app monitor
     * stores copies of the data that RUM collects in CloudWatch Logs. If it does, this
     * structure also contains the name of the log group.</p>
     */
    inline DataStorage& WithCwLog(const CwLog& value) { SetCwLog(value); return *this;}

    /**
     * <p>A structure that contains the information about whether the app monitor
     * stores copies of the data that RUM collects in CloudWatch Logs. If it does, this
     * structure also contains the name of the log group.</p>
     */
    inline DataStorage& WithCwLog(CwLog&& value) { SetCwLog(std::move(value)); return *this;}

  private:

    CwLog m_cwLog;
    bool m_cwLogHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws

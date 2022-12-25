/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/DeltaTime.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Information that is used to filter message data, to segregate it according to
   * the timeframe in which it arrives.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/QueryFilter">AWS
   * API Reference</a></p>
   */
  class QueryFilter
  {
  public:
    AWS_IOTANALYTICS_API QueryFilter();
    AWS_IOTANALYTICS_API QueryFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API QueryFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Used to limit data to that which has arrived since the last execution of the
     * action.</p>
     */
    inline const DeltaTime& GetDeltaTime() const{ return m_deltaTime; }

    /**
     * <p>Used to limit data to that which has arrived since the last execution of the
     * action.</p>
     */
    inline bool DeltaTimeHasBeenSet() const { return m_deltaTimeHasBeenSet; }

    /**
     * <p>Used to limit data to that which has arrived since the last execution of the
     * action.</p>
     */
    inline void SetDeltaTime(const DeltaTime& value) { m_deltaTimeHasBeenSet = true; m_deltaTime = value; }

    /**
     * <p>Used to limit data to that which has arrived since the last execution of the
     * action.</p>
     */
    inline void SetDeltaTime(DeltaTime&& value) { m_deltaTimeHasBeenSet = true; m_deltaTime = std::move(value); }

    /**
     * <p>Used to limit data to that which has arrived since the last execution of the
     * action.</p>
     */
    inline QueryFilter& WithDeltaTime(const DeltaTime& value) { SetDeltaTime(value); return *this;}

    /**
     * <p>Used to limit data to that which has arrived since the last execution of the
     * action.</p>
     */
    inline QueryFilter& WithDeltaTime(DeltaTime&& value) { SetDeltaTime(std::move(value)); return *this;}

  private:

    DeltaTime m_deltaTime;
    bool m_deltaTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws

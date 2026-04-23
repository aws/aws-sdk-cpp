/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Information which is used to filter message data, to segregate it according
   * to the time frame in which it arrives.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/QueryFilter">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API QueryFilter
  {
  public:
    QueryFilter();
    QueryFilter(Aws::Utils::Json::JsonView jsonValue);
    QueryFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_deltaTimeHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws

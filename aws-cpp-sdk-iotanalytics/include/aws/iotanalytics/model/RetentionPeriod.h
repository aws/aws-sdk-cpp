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
   * <p>How long, in days, message data is kept.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/RetentionPeriod">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API RetentionPeriod
  {
  public:
    RetentionPeriod();
    RetentionPeriod(Aws::Utils::Json::JsonView jsonValue);
    RetentionPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If true, message data is kept indefinitely.</p>
     */
    inline bool GetUnlimited() const{ return m_unlimited; }

    /**
     * <p>If true, message data is kept indefinitely.</p>
     */
    inline bool UnlimitedHasBeenSet() const { return m_unlimitedHasBeenSet; }

    /**
     * <p>If true, message data is kept indefinitely.</p>
     */
    inline void SetUnlimited(bool value) { m_unlimitedHasBeenSet = true; m_unlimited = value; }

    /**
     * <p>If true, message data is kept indefinitely.</p>
     */
    inline RetentionPeriod& WithUnlimited(bool value) { SetUnlimited(value); return *this;}


    /**
     * <p>The number of days that message data is kept. The "unlimited" parameter must
     * be false.</p>
     */
    inline int GetNumberOfDays() const{ return m_numberOfDays; }

    /**
     * <p>The number of days that message data is kept. The "unlimited" parameter must
     * be false.</p>
     */
    inline bool NumberOfDaysHasBeenSet() const { return m_numberOfDaysHasBeenSet; }

    /**
     * <p>The number of days that message data is kept. The "unlimited" parameter must
     * be false.</p>
     */
    inline void SetNumberOfDays(int value) { m_numberOfDaysHasBeenSet = true; m_numberOfDays = value; }

    /**
     * <p>The number of days that message data is kept. The "unlimited" parameter must
     * be false.</p>
     */
    inline RetentionPeriod& WithNumberOfDays(int value) { SetNumberOfDays(value); return *this;}

  private:

    bool m_unlimited;
    bool m_unlimitedHasBeenSet;

    int m_numberOfDays;
    bool m_numberOfDaysHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws

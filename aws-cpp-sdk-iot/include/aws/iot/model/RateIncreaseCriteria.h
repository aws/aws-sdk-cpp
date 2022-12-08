/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>

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
namespace IoT
{
namespace Model
{

  /**
   * <p>Allows you to define a criteria to initiate the increase in rate of rollout
   * for a job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RateIncreaseCriteria">AWS
   * API Reference</a></p>
   */
  class RateIncreaseCriteria
  {
  public:
    AWS_IOT_API RateIncreaseCriteria();
    AWS_IOT_API RateIncreaseCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API RateIncreaseCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The threshold for number of notified things that will initiate the increase
     * in rate of rollout.</p>
     */
    inline int GetNumberOfNotifiedThings() const{ return m_numberOfNotifiedThings; }

    /**
     * <p>The threshold for number of notified things that will initiate the increase
     * in rate of rollout.</p>
     */
    inline bool NumberOfNotifiedThingsHasBeenSet() const { return m_numberOfNotifiedThingsHasBeenSet; }

    /**
     * <p>The threshold for number of notified things that will initiate the increase
     * in rate of rollout.</p>
     */
    inline void SetNumberOfNotifiedThings(int value) { m_numberOfNotifiedThingsHasBeenSet = true; m_numberOfNotifiedThings = value; }

    /**
     * <p>The threshold for number of notified things that will initiate the increase
     * in rate of rollout.</p>
     */
    inline RateIncreaseCriteria& WithNumberOfNotifiedThings(int value) { SetNumberOfNotifiedThings(value); return *this;}


    /**
     * <p>The threshold for number of succeeded things that will initiate the increase
     * in rate of rollout.</p>
     */
    inline int GetNumberOfSucceededThings() const{ return m_numberOfSucceededThings; }

    /**
     * <p>The threshold for number of succeeded things that will initiate the increase
     * in rate of rollout.</p>
     */
    inline bool NumberOfSucceededThingsHasBeenSet() const { return m_numberOfSucceededThingsHasBeenSet; }

    /**
     * <p>The threshold for number of succeeded things that will initiate the increase
     * in rate of rollout.</p>
     */
    inline void SetNumberOfSucceededThings(int value) { m_numberOfSucceededThingsHasBeenSet = true; m_numberOfSucceededThings = value; }

    /**
     * <p>The threshold for number of succeeded things that will initiate the increase
     * in rate of rollout.</p>
     */
    inline RateIncreaseCriteria& WithNumberOfSucceededThings(int value) { SetNumberOfSucceededThings(value); return *this;}

  private:

    int m_numberOfNotifiedThings;
    bool m_numberOfNotifiedThingsHasBeenSet = false;

    int m_numberOfSucceededThings;
    bool m_numberOfSucceededThingsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

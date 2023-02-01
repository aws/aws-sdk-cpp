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
   * <p>The criteria to initiate the increase in rate of rollout for a
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AwsJobRateIncreaseCriteria">AWS
   * API Reference</a></p>
   */
  class AwsJobRateIncreaseCriteria
  {
  public:
    AWS_IOT_API AwsJobRateIncreaseCriteria();
    AWS_IOT_API AwsJobRateIncreaseCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AwsJobRateIncreaseCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When this number of things have been notified, it will initiate an increase
     * in the rollout rate.</p>
     */
    inline int GetNumberOfNotifiedThings() const{ return m_numberOfNotifiedThings; }

    /**
     * <p>When this number of things have been notified, it will initiate an increase
     * in the rollout rate.</p>
     */
    inline bool NumberOfNotifiedThingsHasBeenSet() const { return m_numberOfNotifiedThingsHasBeenSet; }

    /**
     * <p>When this number of things have been notified, it will initiate an increase
     * in the rollout rate.</p>
     */
    inline void SetNumberOfNotifiedThings(int value) { m_numberOfNotifiedThingsHasBeenSet = true; m_numberOfNotifiedThings = value; }

    /**
     * <p>When this number of things have been notified, it will initiate an increase
     * in the rollout rate.</p>
     */
    inline AwsJobRateIncreaseCriteria& WithNumberOfNotifiedThings(int value) { SetNumberOfNotifiedThings(value); return *this;}


    /**
     * <p>When this number of things have succeeded in their job execution, it will
     * initiate an increase in the rollout rate.</p>
     */
    inline int GetNumberOfSucceededThings() const{ return m_numberOfSucceededThings; }

    /**
     * <p>When this number of things have succeeded in their job execution, it will
     * initiate an increase in the rollout rate.</p>
     */
    inline bool NumberOfSucceededThingsHasBeenSet() const { return m_numberOfSucceededThingsHasBeenSet; }

    /**
     * <p>When this number of things have succeeded in their job execution, it will
     * initiate an increase in the rollout rate.</p>
     */
    inline void SetNumberOfSucceededThings(int value) { m_numberOfSucceededThingsHasBeenSet = true; m_numberOfSucceededThings = value; }

    /**
     * <p>When this number of things have succeeded in their job execution, it will
     * initiate an increase in the rollout rate.</p>
     */
    inline AwsJobRateIncreaseCriteria& WithNumberOfSucceededThings(int value) { SetNumberOfSucceededThings(value); return *this;}

  private:

    int m_numberOfNotifiedThings;
    bool m_numberOfNotifiedThingsHasBeenSet = false;

    int m_numberOfSucceededThings;
    bool m_numberOfSucceededThingsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

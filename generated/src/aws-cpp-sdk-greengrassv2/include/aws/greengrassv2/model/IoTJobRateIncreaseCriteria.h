/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>

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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about criteria to meet before a job increases its
   * rollout rate. Specify either <code>numberOfNotifiedThings</code> or
   * <code>numberOfSucceededThings</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/IoTJobRateIncreaseCriteria">AWS
   * API Reference</a></p>
   */
  class IoTJobRateIncreaseCriteria
  {
  public:
    AWS_GREENGRASSV2_API IoTJobRateIncreaseCriteria();
    AWS_GREENGRASSV2_API IoTJobRateIncreaseCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API IoTJobRateIncreaseCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of devices to receive the job notification before the rollout rate
     * increases.</p>
     */
    inline int GetNumberOfNotifiedThings() const{ return m_numberOfNotifiedThings; }

    /**
     * <p>The number of devices to receive the job notification before the rollout rate
     * increases.</p>
     */
    inline bool NumberOfNotifiedThingsHasBeenSet() const { return m_numberOfNotifiedThingsHasBeenSet; }

    /**
     * <p>The number of devices to receive the job notification before the rollout rate
     * increases.</p>
     */
    inline void SetNumberOfNotifiedThings(int value) { m_numberOfNotifiedThingsHasBeenSet = true; m_numberOfNotifiedThings = value; }

    /**
     * <p>The number of devices to receive the job notification before the rollout rate
     * increases.</p>
     */
    inline IoTJobRateIncreaseCriteria& WithNumberOfNotifiedThings(int value) { SetNumberOfNotifiedThings(value); return *this;}


    /**
     * <p>The number of devices to successfully run the configuration job before the
     * rollout rate increases.</p>
     */
    inline int GetNumberOfSucceededThings() const{ return m_numberOfSucceededThings; }

    /**
     * <p>The number of devices to successfully run the configuration job before the
     * rollout rate increases.</p>
     */
    inline bool NumberOfSucceededThingsHasBeenSet() const { return m_numberOfSucceededThingsHasBeenSet; }

    /**
     * <p>The number of devices to successfully run the configuration job before the
     * rollout rate increases.</p>
     */
    inline void SetNumberOfSucceededThings(int value) { m_numberOfSucceededThingsHasBeenSet = true; m_numberOfSucceededThings = value; }

    /**
     * <p>The number of devices to successfully run the configuration job before the
     * rollout rate increases.</p>
     */
    inline IoTJobRateIncreaseCriteria& WithNumberOfSucceededThings(int value) { SetNumberOfSucceededThings(value); return *this;}

  private:

    int m_numberOfNotifiedThings;
    bool m_numberOfNotifiedThingsHasBeenSet = false;

    int m_numberOfSucceededThings;
    bool m_numberOfSucceededThingsHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws

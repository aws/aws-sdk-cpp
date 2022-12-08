/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>

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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Specifies the default alarm state. The configuration applies to all alarms
   * that were created based on this alarm model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/InitializationConfiguration">AWS
   * API Reference</a></p>
   */
  class InitializationConfiguration
  {
  public:
    AWS_IOTEVENTS_API InitializationConfiguration();
    AWS_IOTEVENTS_API InitializationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API InitializationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value must be <code>TRUE</code> or <code>FALSE</code>. If
     * <code>FALSE</code>, all alarm instances created based on the alarm model are
     * activated. The default value is <code>TRUE</code>.</p>
     */
    inline bool GetDisabledOnInitialization() const{ return m_disabledOnInitialization; }

    /**
     * <p>The value must be <code>TRUE</code> or <code>FALSE</code>. If
     * <code>FALSE</code>, all alarm instances created based on the alarm model are
     * activated. The default value is <code>TRUE</code>.</p>
     */
    inline bool DisabledOnInitializationHasBeenSet() const { return m_disabledOnInitializationHasBeenSet; }

    /**
     * <p>The value must be <code>TRUE</code> or <code>FALSE</code>. If
     * <code>FALSE</code>, all alarm instances created based on the alarm model are
     * activated. The default value is <code>TRUE</code>.</p>
     */
    inline void SetDisabledOnInitialization(bool value) { m_disabledOnInitializationHasBeenSet = true; m_disabledOnInitialization = value; }

    /**
     * <p>The value must be <code>TRUE</code> or <code>FALSE</code>. If
     * <code>FALSE</code>, all alarm instances created based on the alarm model are
     * activated. The default value is <code>TRUE</code>.</p>
     */
    inline InitializationConfiguration& WithDisabledOnInitialization(bool value) { SetDisabledOnInitialization(value); return *this;}

  private:

    bool m_disabledOnInitialization;
    bool m_disabledOnInitializationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws

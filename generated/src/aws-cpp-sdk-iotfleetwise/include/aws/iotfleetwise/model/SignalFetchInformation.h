/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/SignalFetchConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Information about the signal to be fetched.</p>  <p>Access to
   * certain Amazon Web Services IoT FleetWise features is currently gated. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/fleetwise-regions.html">Amazon
   * Web Services Region and feature availability</a> in the <i>Amazon Web Services
   * IoT FleetWise Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/SignalFetchInformation">AWS
   * API Reference</a></p>
   */
  class SignalFetchInformation
  {
  public:
    AWS_IOTFLEETWISE_API SignalFetchInformation();
    AWS_IOTFLEETWISE_API SignalFetchInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API SignalFetchInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fully qualified name of the signal to be fetched.</p>
     */
    inline const Aws::String& GetFullyQualifiedName() const{ return m_fullyQualifiedName; }
    inline bool FullyQualifiedNameHasBeenSet() const { return m_fullyQualifiedNameHasBeenSet; }
    inline void SetFullyQualifiedName(const Aws::String& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = value; }
    inline void SetFullyQualifiedName(Aws::String&& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = std::move(value); }
    inline void SetFullyQualifiedName(const char* value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName.assign(value); }
    inline SignalFetchInformation& WithFullyQualifiedName(const Aws::String& value) { SetFullyQualifiedName(value); return *this;}
    inline SignalFetchInformation& WithFullyQualifiedName(Aws::String&& value) { SetFullyQualifiedName(std::move(value)); return *this;}
    inline SignalFetchInformation& WithFullyQualifiedName(const char* value) { SetFullyQualifiedName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the signal fetch operation.</p>
     */
    inline const SignalFetchConfig& GetSignalFetchConfig() const{ return m_signalFetchConfig; }
    inline bool SignalFetchConfigHasBeenSet() const { return m_signalFetchConfigHasBeenSet; }
    inline void SetSignalFetchConfig(const SignalFetchConfig& value) { m_signalFetchConfigHasBeenSet = true; m_signalFetchConfig = value; }
    inline void SetSignalFetchConfig(SignalFetchConfig&& value) { m_signalFetchConfigHasBeenSet = true; m_signalFetchConfig = std::move(value); }
    inline SignalFetchInformation& WithSignalFetchConfig(const SignalFetchConfig& value) { SetSignalFetchConfig(value); return *this;}
    inline SignalFetchInformation& WithSignalFetchConfig(SignalFetchConfig&& value) { SetSignalFetchConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the condition language used.</p>
     */
    inline int GetConditionLanguageVersion() const{ return m_conditionLanguageVersion; }
    inline bool ConditionLanguageVersionHasBeenSet() const { return m_conditionLanguageVersionHasBeenSet; }
    inline void SetConditionLanguageVersion(int value) { m_conditionLanguageVersionHasBeenSet = true; m_conditionLanguageVersion = value; }
    inline SignalFetchInformation& WithConditionLanguageVersion(int value) { SetConditionLanguageVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions to be performed by the signal fetch.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<Aws::String>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<Aws::String>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline SignalFetchInformation& WithActions(const Aws::Vector<Aws::String>& value) { SetActions(value); return *this;}
    inline SignalFetchInformation& WithActions(Aws::Vector<Aws::String>&& value) { SetActions(std::move(value)); return *this;}
    inline SignalFetchInformation& AddActions(const Aws::String& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline SignalFetchInformation& AddActions(Aws::String&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    inline SignalFetchInformation& AddActions(const char* value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_fullyQualifiedName;
    bool m_fullyQualifiedNameHasBeenSet = false;

    SignalFetchConfig m_signalFetchConfig;
    bool m_signalFetchConfigHasBeenSet = false;

    int m_conditionLanguageVersion;
    bool m_conditionLanguageVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws

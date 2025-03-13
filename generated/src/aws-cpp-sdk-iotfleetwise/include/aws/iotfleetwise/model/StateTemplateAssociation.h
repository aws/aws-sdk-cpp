/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/StateTemplateUpdateStrategy.h>
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
   * <p>The state template associated with a vehicle. State templates contain state
   * properties, which are signals that belong to a signal catalog that is
   * synchronized between the Amazon Web Services IoT FleetWise Edge and the Amazon
   * Web Services Cloud.</p>  <p>Access to certain Amazon Web Services IoT
   * FleetWise features is currently gated. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/fleetwise-regions.html">Amazon
   * Web Services Region and feature availability</a> in the <i>Amazon Web Services
   * IoT FleetWise Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/StateTemplateAssociation">AWS
   * API Reference</a></p>
   */
  class StateTemplateAssociation
  {
  public:
    AWS_IOTFLEETWISE_API StateTemplateAssociation() = default;
    AWS_IOTFLEETWISE_API StateTemplateAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API StateTemplateAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the state template.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    StateTemplateAssociation& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const StateTemplateUpdateStrategy& GetStateTemplateUpdateStrategy() const { return m_stateTemplateUpdateStrategy; }
    inline bool StateTemplateUpdateStrategyHasBeenSet() const { return m_stateTemplateUpdateStrategyHasBeenSet; }
    template<typename StateTemplateUpdateStrategyT = StateTemplateUpdateStrategy>
    void SetStateTemplateUpdateStrategy(StateTemplateUpdateStrategyT&& value) { m_stateTemplateUpdateStrategyHasBeenSet = true; m_stateTemplateUpdateStrategy = std::forward<StateTemplateUpdateStrategyT>(value); }
    template<typename StateTemplateUpdateStrategyT = StateTemplateUpdateStrategy>
    StateTemplateAssociation& WithStateTemplateUpdateStrategy(StateTemplateUpdateStrategyT&& value) { SetStateTemplateUpdateStrategy(std::forward<StateTemplateUpdateStrategyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    StateTemplateUpdateStrategy m_stateTemplateUpdateStrategy;
    bool m_stateTemplateUpdateStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws

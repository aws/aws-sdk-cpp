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
    AWS_IOTFLEETWISE_API StateTemplateAssociation();
    AWS_IOTFLEETWISE_API StateTemplateAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API StateTemplateAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique, service-generated identifier.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline StateTemplateAssociation& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline StateTemplateAssociation& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline StateTemplateAssociation& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    
    inline const StateTemplateUpdateStrategy& GetStateTemplateUpdateStrategy() const{ return m_stateTemplateUpdateStrategy; }
    inline bool StateTemplateUpdateStrategyHasBeenSet() const { return m_stateTemplateUpdateStrategyHasBeenSet; }
    inline void SetStateTemplateUpdateStrategy(const StateTemplateUpdateStrategy& value) { m_stateTemplateUpdateStrategyHasBeenSet = true; m_stateTemplateUpdateStrategy = value; }
    inline void SetStateTemplateUpdateStrategy(StateTemplateUpdateStrategy&& value) { m_stateTemplateUpdateStrategyHasBeenSet = true; m_stateTemplateUpdateStrategy = std::move(value); }
    inline StateTemplateAssociation& WithStateTemplateUpdateStrategy(const StateTemplateUpdateStrategy& value) { SetStateTemplateUpdateStrategy(value); return *this;}
    inline StateTemplateAssociation& WithStateTemplateUpdateStrategy(StateTemplateUpdateStrategy&& value) { SetStateTemplateUpdateStrategy(std::move(value)); return *this;}
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

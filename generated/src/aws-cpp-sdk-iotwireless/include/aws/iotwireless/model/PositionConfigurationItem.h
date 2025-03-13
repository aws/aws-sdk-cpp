/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/PositionResourceType.h>
#include <aws/iotwireless/model/PositionSolverDetails.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>The wrapper for a position configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/PositionConfigurationItem">AWS
   * API Reference</a></p>
   */
  class PositionConfigurationItem
  {
  public:
    AWS_IOTWIRELESS_API PositionConfigurationItem() = default;
    AWS_IOTWIRELESS_API PositionConfigurationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API PositionConfigurationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Resource identifier for the position configuration.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    PositionConfigurationItem& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resource type of the resource for the position configuration.</p>
     */
    inline PositionResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(PositionResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline PositionConfigurationItem& WithResourceType(PositionResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the positioning solver object used to compute the
     * location.</p>
     */
    inline const PositionSolverDetails& GetSolvers() const { return m_solvers; }
    inline bool SolversHasBeenSet() const { return m_solversHasBeenSet; }
    template<typename SolversT = PositionSolverDetails>
    void SetSolvers(SolversT&& value) { m_solversHasBeenSet = true; m_solvers = std::forward<SolversT>(value); }
    template<typename SolversT = PositionSolverDetails>
    PositionConfigurationItem& WithSolvers(SolversT&& value) { SetSolvers(std::forward<SolversT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position data destination that describes the AWS IoT rule that processes
     * the device's position data for use by AWS IoT Core for LoRaWAN.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    PositionConfigurationItem& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    PositionResourceType m_resourceType{PositionResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    PositionSolverDetails m_solvers;
    bool m_solversHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

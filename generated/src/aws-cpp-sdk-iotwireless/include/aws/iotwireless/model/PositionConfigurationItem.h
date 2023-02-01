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
    AWS_IOTWIRELESS_API PositionConfigurationItem();
    AWS_IOTWIRELESS_API PositionConfigurationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API PositionConfigurationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Resource identifier for the position configuration.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>Resource identifier for the position configuration.</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>Resource identifier for the position configuration.</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>Resource identifier for the position configuration.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>Resource identifier for the position configuration.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>Resource identifier for the position configuration.</p>
     */
    inline PositionConfigurationItem& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>Resource identifier for the position configuration.</p>
     */
    inline PositionConfigurationItem& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>Resource identifier for the position configuration.</p>
     */
    inline PositionConfigurationItem& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}


    /**
     * <p>Resource type of the resource for the position configuration.</p>
     */
    inline const PositionResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Resource type of the resource for the position configuration.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Resource type of the resource for the position configuration.</p>
     */
    inline void SetResourceType(const PositionResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Resource type of the resource for the position configuration.</p>
     */
    inline void SetResourceType(PositionResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Resource type of the resource for the position configuration.</p>
     */
    inline PositionConfigurationItem& WithResourceType(const PositionResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>Resource type of the resource for the position configuration.</p>
     */
    inline PositionConfigurationItem& WithResourceType(PositionResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The details of the positioning solver object used to compute the
     * location.</p>
     */
    inline const PositionSolverDetails& GetSolvers() const{ return m_solvers; }

    /**
     * <p>The details of the positioning solver object used to compute the
     * location.</p>
     */
    inline bool SolversHasBeenSet() const { return m_solversHasBeenSet; }

    /**
     * <p>The details of the positioning solver object used to compute the
     * location.</p>
     */
    inline void SetSolvers(const PositionSolverDetails& value) { m_solversHasBeenSet = true; m_solvers = value; }

    /**
     * <p>The details of the positioning solver object used to compute the
     * location.</p>
     */
    inline void SetSolvers(PositionSolverDetails&& value) { m_solversHasBeenSet = true; m_solvers = std::move(value); }

    /**
     * <p>The details of the positioning solver object used to compute the
     * location.</p>
     */
    inline PositionConfigurationItem& WithSolvers(const PositionSolverDetails& value) { SetSolvers(value); return *this;}

    /**
     * <p>The details of the positioning solver object used to compute the
     * location.</p>
     */
    inline PositionConfigurationItem& WithSolvers(PositionSolverDetails&& value) { SetSolvers(std::move(value)); return *this;}


    /**
     * <p>The position data destination that describes the AWS IoT rule that processes
     * the device's position data for use by AWS IoT Core for LoRaWAN.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The position data destination that describes the AWS IoT rule that processes
     * the device's position data for use by AWS IoT Core for LoRaWAN.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The position data destination that describes the AWS IoT rule that processes
     * the device's position data for use by AWS IoT Core for LoRaWAN.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The position data destination that describes the AWS IoT rule that processes
     * the device's position data for use by AWS IoT Core for LoRaWAN.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The position data destination that describes the AWS IoT rule that processes
     * the device's position data for use by AWS IoT Core for LoRaWAN.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The position data destination that describes the AWS IoT rule that processes
     * the device's position data for use by AWS IoT Core for LoRaWAN.</p>
     */
    inline PositionConfigurationItem& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The position data destination that describes the AWS IoT rule that processes
     * the device's position data for use by AWS IoT Core for LoRaWAN.</p>
     */
    inline PositionConfigurationItem& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The position data destination that describes the AWS IoT rule that processes
     * the device's position data for use by AWS IoT Core for LoRaWAN.</p>
     */
    inline PositionConfigurationItem& WithDestination(const char* value) { SetDestination(value); return *this;}

  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    PositionResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    PositionSolverDetails m_solvers;
    bool m_solversHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/PositionResourceType.h>
#include <aws/iotwireless/model/PositionSolverConfigurations.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class AWS_IOTWIRELESS_API PutPositionConfigurationRequest : public IoTWirelessRequest
  {
  public:
    PutPositionConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutPositionConfiguration"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Resource identifier used to update the position configuration.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>Resource identifier used to update the position configuration.</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>Resource identifier used to update the position configuration.</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>Resource identifier used to update the position configuration.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>Resource identifier used to update the position configuration.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>Resource identifier used to update the position configuration.</p>
     */
    inline PutPositionConfigurationRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>Resource identifier used to update the position configuration.</p>
     */
    inline PutPositionConfigurationRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>Resource identifier used to update the position configuration.</p>
     */
    inline PutPositionConfigurationRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}


    /**
     * <p>Resource type of the resource for which you want to update the position
     * configuration.</p>
     */
    inline const PositionResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Resource type of the resource for which you want to update the position
     * configuration.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Resource type of the resource for which you want to update the position
     * configuration.</p>
     */
    inline void SetResourceType(const PositionResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Resource type of the resource for which you want to update the position
     * configuration.</p>
     */
    inline void SetResourceType(PositionResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Resource type of the resource for which you want to update the position
     * configuration.</p>
     */
    inline PutPositionConfigurationRequest& WithResourceType(const PositionResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>Resource type of the resource for which you want to update the position
     * configuration.</p>
     */
    inline PutPositionConfigurationRequest& WithResourceType(PositionResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The positioning solvers used to update the position configuration of the
     * resource.</p>
     */
    inline const PositionSolverConfigurations& GetSolvers() const{ return m_solvers; }

    /**
     * <p>The positioning solvers used to update the position configuration of the
     * resource.</p>
     */
    inline bool SolversHasBeenSet() const { return m_solversHasBeenSet; }

    /**
     * <p>The positioning solvers used to update the position configuration of the
     * resource.</p>
     */
    inline void SetSolvers(const PositionSolverConfigurations& value) { m_solversHasBeenSet = true; m_solvers = value; }

    /**
     * <p>The positioning solvers used to update the position configuration of the
     * resource.</p>
     */
    inline void SetSolvers(PositionSolverConfigurations&& value) { m_solversHasBeenSet = true; m_solvers = std::move(value); }

    /**
     * <p>The positioning solvers used to update the position configuration of the
     * resource.</p>
     */
    inline PutPositionConfigurationRequest& WithSolvers(const PositionSolverConfigurations& value) { SetSolvers(value); return *this;}

    /**
     * <p>The positioning solvers used to update the position configuration of the
     * resource.</p>
     */
    inline PutPositionConfigurationRequest& WithSolvers(PositionSolverConfigurations&& value) { SetSolvers(std::move(value)); return *this;}


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
    inline PutPositionConfigurationRequest& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The position data destination that describes the AWS IoT rule that processes
     * the device's position data for use by AWS IoT Core for LoRaWAN.</p>
     */
    inline PutPositionConfigurationRequest& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The position data destination that describes the AWS IoT rule that processes
     * the device's position data for use by AWS IoT Core for LoRaWAN.</p>
     */
    inline PutPositionConfigurationRequest& WithDestination(const char* value) { SetDestination(value); return *this;}

  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet;

    PositionResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    PositionSolverConfigurations m_solvers;
    bool m_solversHasBeenSet;

    Aws::String m_destination;
    bool m_destinationHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

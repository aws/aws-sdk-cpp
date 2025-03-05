/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gameliftstreams/model/LocationConfiguration.h>
#include <utility>

namespace Aws
{
namespace GameLiftStreams
{
namespace Model
{

  /**
   */
  class AddStreamGroupLocationsRequest : public GameLiftStreamsRequest
  {
  public:
    AWS_GAMELIFTSTREAMS_API AddStreamGroupLocationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddStreamGroupLocations"; }

    AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> A stream group to add the specified locations to. </p> <p>This value is a
     * Amazon Resource Name (ARN) that uniquely identifies the stream group resource.
     * Format example: <code>1AB2C3De4</code>. </p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline AddStreamGroupLocationsRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline AddStreamGroupLocationsRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline AddStreamGroupLocationsRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A set of one or more locations and the streaming capacity for each location.
     * </p>
     */
    inline const Aws::Vector<LocationConfiguration>& GetLocationConfigurations() const{ return m_locationConfigurations; }
    inline bool LocationConfigurationsHasBeenSet() const { return m_locationConfigurationsHasBeenSet; }
    inline void SetLocationConfigurations(const Aws::Vector<LocationConfiguration>& value) { m_locationConfigurationsHasBeenSet = true; m_locationConfigurations = value; }
    inline void SetLocationConfigurations(Aws::Vector<LocationConfiguration>&& value) { m_locationConfigurationsHasBeenSet = true; m_locationConfigurations = std::move(value); }
    inline AddStreamGroupLocationsRequest& WithLocationConfigurations(const Aws::Vector<LocationConfiguration>& value) { SetLocationConfigurations(value); return *this;}
    inline AddStreamGroupLocationsRequest& WithLocationConfigurations(Aws::Vector<LocationConfiguration>&& value) { SetLocationConfigurations(std::move(value)); return *this;}
    inline AddStreamGroupLocationsRequest& AddLocationConfigurations(const LocationConfiguration& value) { m_locationConfigurationsHasBeenSet = true; m_locationConfigurations.push_back(value); return *this; }
    inline AddStreamGroupLocationsRequest& AddLocationConfigurations(LocationConfiguration&& value) { m_locationConfigurationsHasBeenSet = true; m_locationConfigurations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<LocationConfiguration> m_locationConfigurations;
    bool m_locationConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws

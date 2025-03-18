﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GameLiftStreams
{
namespace Model
{

  /**
   */
  class RemoveStreamGroupLocationsRequest : public GameLiftStreamsRequest
  {
  public:
    AWS_GAMELIFTSTREAMS_API RemoveStreamGroupLocationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveStreamGroupLocations"; }

    AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;

    AWS_GAMELIFTSTREAMS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> A stream group to remove the specified locations from. </p> <p> This value
     * is a Amazon Resource Name (ARN) that uniquely identifies the stream group
     * resource. Format example: <code>1AB2C3De4</code>. <pre><code> &lt;/p&gt;
     * </code></pre>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    RemoveStreamGroupLocationsRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A set of locations to remove this stream group. </p> <p> A set of location
     * names. For example, <code>us-east-1</code>. For a complete list of locations
     * that Amazon GameLift Streams supports, see the Regions and quotas section in the
     * Amazon GameLift Streams Developer Guide . <pre><code> &lt;/p&gt; </code></pre>
     */
    inline const Aws::Vector<Aws::String>& GetLocations() const { return m_locations; }
    inline bool LocationsHasBeenSet() const { return m_locationsHasBeenSet; }
    template<typename LocationsT = Aws::Vector<Aws::String>>
    void SetLocations(LocationsT&& value) { m_locationsHasBeenSet = true; m_locations = std::forward<LocationsT>(value); }
    template<typename LocationsT = Aws::Vector<Aws::String>>
    RemoveStreamGroupLocationsRequest& WithLocations(LocationsT&& value) { SetLocations(std::forward<LocationsT>(value)); return *this;}
    template<typename LocationsT = Aws::String>
    RemoveStreamGroupLocationsRequest& AddLocations(LocationsT&& value) { m_locationsHasBeenSet = true; m_locations.emplace_back(std::forward<LocationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_locations;
    bool m_locationsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws

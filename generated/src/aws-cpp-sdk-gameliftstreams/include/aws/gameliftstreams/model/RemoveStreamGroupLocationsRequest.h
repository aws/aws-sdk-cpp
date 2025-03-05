/**
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
    AWS_GAMELIFTSTREAMS_API RemoveStreamGroupLocationsRequest();

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
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline RemoveStreamGroupLocationsRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline RemoveStreamGroupLocationsRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline RemoveStreamGroupLocationsRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A set of locations to remove this stream group. </p> <p> A set of location
     * names. For example, <code>us-east-1</code>. For a complete list of locations
     * that Amazon GameLift Streams supports, see the Regions and quotas section in the
     * Amazon GameLift Streams Developer Guide . <pre><code> &lt;/p&gt; </code></pre>
     */
    inline const Aws::Vector<Aws::String>& GetLocations() const{ return m_locations; }
    inline bool LocationsHasBeenSet() const { return m_locationsHasBeenSet; }
    inline void SetLocations(const Aws::Vector<Aws::String>& value) { m_locationsHasBeenSet = true; m_locations = value; }
    inline void SetLocations(Aws::Vector<Aws::String>&& value) { m_locationsHasBeenSet = true; m_locations = std::move(value); }
    inline RemoveStreamGroupLocationsRequest& WithLocations(const Aws::Vector<Aws::String>& value) { SetLocations(value); return *this;}
    inline RemoveStreamGroupLocationsRequest& WithLocations(Aws::Vector<Aws::String>&& value) { SetLocations(std::move(value)); return *this;}
    inline RemoveStreamGroupLocationsRequest& AddLocations(const Aws::String& value) { m_locationsHasBeenSet = true; m_locations.push_back(value); return *this; }
    inline RemoveStreamGroupLocationsRequest& AddLocations(Aws::String&& value) { m_locationsHasBeenSet = true; m_locations.push_back(std::move(value)); return *this; }
    inline RemoveStreamGroupLocationsRequest& AddLocations(const char* value) { m_locationsHasBeenSet = true; m_locations.push_back(value); return *this; }
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

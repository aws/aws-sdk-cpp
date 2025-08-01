/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>API Restrictions on the allowed actions, resources, and referers for an API
   * key resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ApiKeyRestrictions">AWS
   * API Reference</a></p>
   */
  class ApiKeyRestrictions
  {
  public:
    AWS_LOCATIONSERVICE_API ApiKeyRestrictions() = default;
    AWS_LOCATIONSERVICE_API ApiKeyRestrictions(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API ApiKeyRestrictions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of allowed actions that an API key resource grants permissions to
     * perform. You must have at least one action for each type of resource. For
     * example, if you have a place resource, you must include at least one place
     * action.</p> <p>The following are valid values for the actions.</p> <ul> <li> <p>
     * <b>Map actions</b> </p> <ul> <li> <p> <code>geo:GetMap*</code> - Allows all
     * actions needed for map rendering.</p> </li> <li> <p>
     * <code>geo-maps:GetTile</code> - Allows retrieving map tiles.</p> </li> <li> <p>
     * <code>geo-maps:GetStaticMap</code> - Allows retrieving static map images.</p>
     * </li> <li> <p> <code>geo-maps:*</code> - Allows all actions related to map
     * functionalities.</p> </li> </ul> </li> <li> <p> <b>Place actions</b> </p> <ul>
     * <li> <p> <code>geo:SearchPlaceIndexForText</code> - Allows geocoding.</p> </li>
     * <li> <p> <code>geo:SearchPlaceIndexForPosition</code> - Allows reverse
     * geocoding.</p> </li> <li> <p> <code>geo:SearchPlaceIndexForSuggestions</code> -
     * Allows generating suggestions from text.</p> </li> <li> <p>
     * <code>GetPlace</code> - Allows finding a place by place ID.</p> </li> <li> <p>
     * <code>geo-places:Geocode</code> - Allows geocoding using place information.</p>
     * </li> <li> <p> <code>geo-places:ReverseGeocode</code> - Allows reverse geocoding
     * from location coordinates.</p> </li> <li> <p>
     * <code>geo-places:SearchNearby</code> - Allows searching for places near a
     * location.</p> </li> <li> <p> <code>geo-places:SearchText</code> - Allows
     * searching for places based on text input.</p> </li> <li> <p>
     * <code>geo-places:Autocomplete</code> - Allows auto-completion of place names
     * based on text input.</p> </li> <li> <p> <code>geo-places:Suggest</code> - Allows
     * generating suggestions for places based on partial input.</p> </li> <li> <p>
     * <code>geo-places:GetPlace</code> - Allows finding a place by its ID.</p> </li>
     * <li> <p> <code>geo-places:*</code> - Allows all actions related to place
     * services.</p> </li> </ul> </li> <li> <p> <b>Route actions</b> </p> <ul> <li> <p>
     * <code>geo:CalculateRoute</code> - Allows point to point routing.</p> </li> <li>
     * <p> <code>geo:CalculateRouteMatrix</code> - Allows calculating a matrix of
     * routes.</p> </li> <li> <p> <code>geo-routes:CalculateRoutes</code> - Allows
     * calculating multiple routes between points.</p> </li> <li> <p>
     * <code>geo-routes:CalculateRouteMatrix</code> - Allows calculating a matrix of
     * routes between points.</p> </li> <li> <p>
     * <code>geo-routes:CalculateIsolines</code> - Allows calculating isolines for a
     * given area.</p> </li> <li> <p> <code>geo-routes:OptimizeWaypoints</code> -
     * Allows optimizing the order of waypoints in a route.</p> </li> <li> <p>
     * <code>geo-routes:SnapToRoads</code> - Allows snapping a route to the nearest
     * roads.</p> </li> <li> <p> <code>geo-routes:*</code> - Allows all actions related
     * to routing functionalities.</p> </li> </ul> </li> </ul>  <p>You must use
     * these strings exactly. For example, to provide access to map rendering, the only
     * valid action is <code>geo:GetMap*</code> as an input to the list.
     * <code>["geo:GetMap*"]</code> is valid but <code>["geo:GetMapTile"]</code> is
     * not. Similarly, you cannot use <code>["geo:SearchPlaceIndexFor*"]</code> - you
     * must list each of the Place actions separately.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetAllowActions() const { return m_allowActions; }
    inline bool AllowActionsHasBeenSet() const { return m_allowActionsHasBeenSet; }
    template<typename AllowActionsT = Aws::Vector<Aws::String>>
    void SetAllowActions(AllowActionsT&& value) { m_allowActionsHasBeenSet = true; m_allowActions = std::forward<AllowActionsT>(value); }
    template<typename AllowActionsT = Aws::Vector<Aws::String>>
    ApiKeyRestrictions& WithAllowActions(AllowActionsT&& value) { SetAllowActions(std::forward<AllowActionsT>(value)); return *this;}
    template<typename AllowActionsT = Aws::String>
    ApiKeyRestrictions& AddAllowActions(AllowActionsT&& value) { m_allowActionsHasBeenSet = true; m_allowActions.emplace_back(std::forward<AllowActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of allowed resource ARNs that a API key bearer can perform actions
     * on.</p> <ul> <li> <p>The ARN must be the correct ARN for a map, place, or route
     * ARN. You may include wildcards in the resource-id to match multiple resources of
     * the same type.</p> </li> <li> <p>The resources must be in the same
     * <code>partition</code>, <code>region</code>, and <code>account-id</code> as the
     * key that is being created.</p> </li> <li> <p>Other than wildcards, you must
     * include the full ARN, including the <code>arn</code>, <code>partition</code>,
     * <code>service</code>, <code>region</code>, <code>account-id</code> and
     * <code>resource-id</code> delimited by colons (:).</p> </li> <li> <p>No spaces
     * allowed, even with wildcards. For example,
     * <code>arn:aws:geo:region:<i>account-id</i>:map/ExampleMap*</code>.</p> </li>
     * </ul> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowResources() const { return m_allowResources; }
    inline bool AllowResourcesHasBeenSet() const { return m_allowResourcesHasBeenSet; }
    template<typename AllowResourcesT = Aws::Vector<Aws::String>>
    void SetAllowResources(AllowResourcesT&& value) { m_allowResourcesHasBeenSet = true; m_allowResources = std::forward<AllowResourcesT>(value); }
    template<typename AllowResourcesT = Aws::Vector<Aws::String>>
    ApiKeyRestrictions& WithAllowResources(AllowResourcesT&& value) { SetAllowResources(std::forward<AllowResourcesT>(value)); return *this;}
    template<typename AllowResourcesT = Aws::String>
    ApiKeyRestrictions& AddAllowResources(AllowResourcesT&& value) { m_allowResourcesHasBeenSet = true; m_allowResources.emplace_back(std::forward<AllowResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional list of allowed HTTP referers for which requests must originate
     * from. Requests using this API key from other domains will not be allowed.</p>
     * <p>Requirements:</p> <ul> <li> <p>Contain only alphanumeric characters (A–Z,
     * a–z, 0–9) or any symbols in this list <code>$\-._+!*`(),;/?:@=&amp;</code> </p>
     * </li> <li> <p>May contain a percent (%) if followed by 2 hexadecimal digits
     * (A-F, a-f, 0-9); this is used for URL encoding purposes.</p> </li> <li> <p>May
     * contain wildcard characters question mark (?) and asterisk (*).</p> <p>Question
     * mark (?) will replace any single character (including hexadecimal digits).</p>
     * <p>Asterisk (*) will replace any multiple characters (including multiple
     * hexadecimal digits).</p> </li> <li> <p>No spaces allowed. For example,
     * <code>https://example.com</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetAllowReferers() const { return m_allowReferers; }
    inline bool AllowReferersHasBeenSet() const { return m_allowReferersHasBeenSet; }
    template<typename AllowReferersT = Aws::Vector<Aws::String>>
    void SetAllowReferers(AllowReferersT&& value) { m_allowReferersHasBeenSet = true; m_allowReferers = std::forward<AllowReferersT>(value); }
    template<typename AllowReferersT = Aws::Vector<Aws::String>>
    ApiKeyRestrictions& WithAllowReferers(AllowReferersT&& value) { SetAllowReferers(std::forward<AllowReferersT>(value)); return *this;}
    template<typename AllowReferersT = Aws::String>
    ApiKeyRestrictions& AddAllowReferers(AllowReferersT&& value) { m_allowReferersHasBeenSet = true; m_allowReferers.emplace_back(std::forward<AllowReferersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_allowActions;
    bool m_allowActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowResources;
    bool m_allowResourcesHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowReferers;
    bool m_allowReferersHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws

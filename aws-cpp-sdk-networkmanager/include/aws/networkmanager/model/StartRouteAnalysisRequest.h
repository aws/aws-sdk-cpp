/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/RouteAnalysisEndpointOptionsSpecification.h>
#include <utility>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class StartRouteAnalysisRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API StartRouteAnalysisRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartRouteAnalysis"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline StartRouteAnalysisRequest& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline StartRouteAnalysisRequest& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline StartRouteAnalysisRequest& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>The source from which traffic originates.</p>
     */
    inline const RouteAnalysisEndpointOptionsSpecification& GetSource() const{ return m_source; }

    /**
     * <p>The source from which traffic originates.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source from which traffic originates.</p>
     */
    inline void SetSource(const RouteAnalysisEndpointOptionsSpecification& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source from which traffic originates.</p>
     */
    inline void SetSource(RouteAnalysisEndpointOptionsSpecification&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source from which traffic originates.</p>
     */
    inline StartRouteAnalysisRequest& WithSource(const RouteAnalysisEndpointOptionsSpecification& value) { SetSource(value); return *this;}

    /**
     * <p>The source from which traffic originates.</p>
     */
    inline StartRouteAnalysisRequest& WithSource(RouteAnalysisEndpointOptionsSpecification&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The destination.</p>
     */
    inline const RouteAnalysisEndpointOptionsSpecification& GetDestination() const{ return m_destination; }

    /**
     * <p>The destination.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The destination.</p>
     */
    inline void SetDestination(const RouteAnalysisEndpointOptionsSpecification& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The destination.</p>
     */
    inline void SetDestination(RouteAnalysisEndpointOptionsSpecification&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The destination.</p>
     */
    inline StartRouteAnalysisRequest& WithDestination(const RouteAnalysisEndpointOptionsSpecification& value) { SetDestination(value); return *this;}

    /**
     * <p>The destination.</p>
     */
    inline StartRouteAnalysisRequest& WithDestination(RouteAnalysisEndpointOptionsSpecification&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>Indicates whether to analyze the return path. The default is
     * <code>false</code>.</p>
     */
    inline bool GetIncludeReturnPath() const{ return m_includeReturnPath; }

    /**
     * <p>Indicates whether to analyze the return path. The default is
     * <code>false</code>.</p>
     */
    inline bool IncludeReturnPathHasBeenSet() const { return m_includeReturnPathHasBeenSet; }

    /**
     * <p>Indicates whether to analyze the return path. The default is
     * <code>false</code>.</p>
     */
    inline void SetIncludeReturnPath(bool value) { m_includeReturnPathHasBeenSet = true; m_includeReturnPath = value; }

    /**
     * <p>Indicates whether to analyze the return path. The default is
     * <code>false</code>.</p>
     */
    inline StartRouteAnalysisRequest& WithIncludeReturnPath(bool value) { SetIncludeReturnPath(value); return *this;}


    /**
     * <p>Indicates whether to include the location of middlebox appliances in the
     * route analysis. The default is <code>false</code>.</p>
     */
    inline bool GetUseMiddleboxes() const{ return m_useMiddleboxes; }

    /**
     * <p>Indicates whether to include the location of middlebox appliances in the
     * route analysis. The default is <code>false</code>.</p>
     */
    inline bool UseMiddleboxesHasBeenSet() const { return m_useMiddleboxesHasBeenSet; }

    /**
     * <p>Indicates whether to include the location of middlebox appliances in the
     * route analysis. The default is <code>false</code>.</p>
     */
    inline void SetUseMiddleboxes(bool value) { m_useMiddleboxesHasBeenSet = true; m_useMiddleboxes = value; }

    /**
     * <p>Indicates whether to include the location of middlebox appliances in the
     * route analysis. The default is <code>false</code>.</p>
     */
    inline StartRouteAnalysisRequest& WithUseMiddleboxes(bool value) { SetUseMiddleboxes(value); return *this;}

  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    RouteAnalysisEndpointOptionsSpecification m_source;
    bool m_sourceHasBeenSet = false;

    RouteAnalysisEndpointOptionsSpecification m_destination;
    bool m_destinationHasBeenSet = false;

    bool m_includeReturnPath;
    bool m_includeReturnPathHasBeenSet = false;

    bool m_useMiddleboxes;
    bool m_useMiddleboxesHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CloudFront
{
namespace Model
{

  /**
   */
  class GetConnectionGroupByRoutingEndpoint2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API GetConnectionGroupByRoutingEndpoint2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConnectionGroupByRoutingEndpoint"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The routing endpoint for the target connection group, such as
     * d111111abcdef8.cloudfront.net.</p>
     */
    inline const Aws::String& GetRoutingEndpoint() const { return m_routingEndpoint; }
    inline bool RoutingEndpointHasBeenSet() const { return m_routingEndpointHasBeenSet; }
    template<typename RoutingEndpointT = Aws::String>
    void SetRoutingEndpoint(RoutingEndpointT&& value) { m_routingEndpointHasBeenSet = true; m_routingEndpoint = std::forward<RoutingEndpointT>(value); }
    template<typename RoutingEndpointT = Aws::String>
    GetConnectionGroupByRoutingEndpoint2020_05_31Request& WithRoutingEndpoint(RoutingEndpointT&& value) { SetRoutingEndpoint(std::forward<RoutingEndpointT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_routingEndpoint;
    bool m_routingEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws

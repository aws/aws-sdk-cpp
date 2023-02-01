/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Request to list information about a collection of resources.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetResourcesRequest">AWS
   * API Reference</a></p>
   */
  class GetResourcesRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API GetResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResources"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;

    AWS_APIGATEWAY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline GetResourcesRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline GetResourcesRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline GetResourcesRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline const Aws::String& GetPosition() const{ return m_position; }

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline void SetPosition(const Aws::String& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline void SetPosition(Aws::String&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline void SetPosition(const char* value) { m_positionHasBeenSet = true; m_position.assign(value); }

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline GetResourcesRequest& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline GetResourcesRequest& WithPosition(Aws::String&& value) { SetPosition(std::move(value)); return *this;}

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline GetResourcesRequest& WithPosition(const char* value) { SetPosition(value); return *this;}


    /**
     * <p>The maximum number of returned results per page. The default value is 25 and
     * the maximum value is 500.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of returned results per page. The default value is 25 and
     * the maximum value is 500.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of returned results per page. The default value is 25 and
     * the maximum value is 500.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of returned results per page. The default value is 25 and
     * the maximum value is 500.</p>
     */
    inline GetResourcesRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>A query parameter used to retrieve the specified resources embedded in the
     * returned Resources resource in the response. This <code>embed</code> parameter
     * value is a list of comma-separated strings. Currently, the request supports only
     * retrieval of the embedded Method resources this way. The query parameter value
     * must be a single-valued list and contain the <code>"methods"</code> string. For
     * example, <code>GET /restapis/{restapi_id}/resources?embed=methods</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEmbed() const{ return m_embed; }

    /**
     * <p>A query parameter used to retrieve the specified resources embedded in the
     * returned Resources resource in the response. This <code>embed</code> parameter
     * value is a list of comma-separated strings. Currently, the request supports only
     * retrieval of the embedded Method resources this way. The query parameter value
     * must be a single-valued list and contain the <code>"methods"</code> string. For
     * example, <code>GET /restapis/{restapi_id}/resources?embed=methods</code>.</p>
     */
    inline bool EmbedHasBeenSet() const { return m_embedHasBeenSet; }

    /**
     * <p>A query parameter used to retrieve the specified resources embedded in the
     * returned Resources resource in the response. This <code>embed</code> parameter
     * value is a list of comma-separated strings. Currently, the request supports only
     * retrieval of the embedded Method resources this way. The query parameter value
     * must be a single-valued list and contain the <code>"methods"</code> string. For
     * example, <code>GET /restapis/{restapi_id}/resources?embed=methods</code>.</p>
     */
    inline void SetEmbed(const Aws::Vector<Aws::String>& value) { m_embedHasBeenSet = true; m_embed = value; }

    /**
     * <p>A query parameter used to retrieve the specified resources embedded in the
     * returned Resources resource in the response. This <code>embed</code> parameter
     * value is a list of comma-separated strings. Currently, the request supports only
     * retrieval of the embedded Method resources this way. The query parameter value
     * must be a single-valued list and contain the <code>"methods"</code> string. For
     * example, <code>GET /restapis/{restapi_id}/resources?embed=methods</code>.</p>
     */
    inline void SetEmbed(Aws::Vector<Aws::String>&& value) { m_embedHasBeenSet = true; m_embed = std::move(value); }

    /**
     * <p>A query parameter used to retrieve the specified resources embedded in the
     * returned Resources resource in the response. This <code>embed</code> parameter
     * value is a list of comma-separated strings. Currently, the request supports only
     * retrieval of the embedded Method resources this way. The query parameter value
     * must be a single-valued list and contain the <code>"methods"</code> string. For
     * example, <code>GET /restapis/{restapi_id}/resources?embed=methods</code>.</p>
     */
    inline GetResourcesRequest& WithEmbed(const Aws::Vector<Aws::String>& value) { SetEmbed(value); return *this;}

    /**
     * <p>A query parameter used to retrieve the specified resources embedded in the
     * returned Resources resource in the response. This <code>embed</code> parameter
     * value is a list of comma-separated strings. Currently, the request supports only
     * retrieval of the embedded Method resources this way. The query parameter value
     * must be a single-valued list and contain the <code>"methods"</code> string. For
     * example, <code>GET /restapis/{restapi_id}/resources?embed=methods</code>.</p>
     */
    inline GetResourcesRequest& WithEmbed(Aws::Vector<Aws::String>&& value) { SetEmbed(std::move(value)); return *this;}

    /**
     * <p>A query parameter used to retrieve the specified resources embedded in the
     * returned Resources resource in the response. This <code>embed</code> parameter
     * value is a list of comma-separated strings. Currently, the request supports only
     * retrieval of the embedded Method resources this way. The query parameter value
     * must be a single-valued list and contain the <code>"methods"</code> string. For
     * example, <code>GET /restapis/{restapi_id}/resources?embed=methods</code>.</p>
     */
    inline GetResourcesRequest& AddEmbed(const Aws::String& value) { m_embedHasBeenSet = true; m_embed.push_back(value); return *this; }

    /**
     * <p>A query parameter used to retrieve the specified resources embedded in the
     * returned Resources resource in the response. This <code>embed</code> parameter
     * value is a list of comma-separated strings. Currently, the request supports only
     * retrieval of the embedded Method resources this way. The query parameter value
     * must be a single-valued list and contain the <code>"methods"</code> string. For
     * example, <code>GET /restapis/{restapi_id}/resources?embed=methods</code>.</p>
     */
    inline GetResourcesRequest& AddEmbed(Aws::String&& value) { m_embedHasBeenSet = true; m_embed.push_back(std::move(value)); return *this; }

    /**
     * <p>A query parameter used to retrieve the specified resources embedded in the
     * returned Resources resource in the response. This <code>embed</code> parameter
     * value is a list of comma-separated strings. Currently, the request supports only
     * retrieval of the embedded Method resources this way. The query parameter value
     * must be a single-valued list and contain the <code>"methods"</code> string. For
     * example, <code>GET /restapis/{restapi_id}/resources?embed=methods</code>.</p>
     */
    inline GetResourcesRequest& AddEmbed(const char* value) { m_embedHasBeenSet = true; m_embed.push_back(value); return *this; }

  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_position;
    bool m_positionHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::Vector<Aws::String> m_embed;
    bool m_embedHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws

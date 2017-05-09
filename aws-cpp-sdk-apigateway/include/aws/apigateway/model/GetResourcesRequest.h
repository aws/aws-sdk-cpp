/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_APIGATEWAY_API GetResourcesRequest : public APIGatewayRequest
  {
  public:
    GetResourcesRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The <a>RestApi</a> identifier for the Resource.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The <a>RestApi</a> identifier for the Resource.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> identifier for the Resource.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }

    /**
     * <p>The <a>RestApi</a> identifier for the Resource.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The <a>RestApi</a> identifier for the Resource.</p>
     */
    inline GetResourcesRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier for the Resource.</p>
     */
    inline GetResourcesRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier for the Resource.</p>
     */
    inline GetResourcesRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline const Aws::String& GetPosition() const{ return m_position; }

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
     * <p>The maximum number of returned results per page. The value is 25 by default
     * and could be between 1 - 500.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of returned results per page. The value is 25 by default
     * and could be between 1 - 500.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of returned results per page. The value is 25 by default
     * and could be between 1 - 500.</p>
     */
    inline GetResourcesRequest& WithLimit(int value) { SetLimit(value); return *this;}

    /**
     * <p>A query parameter used to retrieve the specified resources embedded in the
     * returned <a>Resources</a> resource in the response. This <code>embed</code>
     * parameter value is a list of comma-separated strings. Currently, the request
     * supports only retrieval of the embedded <a>Method</a> resources this way. The
     * query parameter value must be a single-valued list and contain the
     * <code>"methods"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/resources?embed=methods</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEmbed() const{ return m_embed; }

    /**
     * <p>A query parameter used to retrieve the specified resources embedded in the
     * returned <a>Resources</a> resource in the response. This <code>embed</code>
     * parameter value is a list of comma-separated strings. Currently, the request
     * supports only retrieval of the embedded <a>Method</a> resources this way. The
     * query parameter value must be a single-valued list and contain the
     * <code>"methods"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/resources?embed=methods</code>.</p>
     */
    inline void SetEmbed(const Aws::Vector<Aws::String>& value) { m_embedHasBeenSet = true; m_embed = value; }

    /**
     * <p>A query parameter used to retrieve the specified resources embedded in the
     * returned <a>Resources</a> resource in the response. This <code>embed</code>
     * parameter value is a list of comma-separated strings. Currently, the request
     * supports only retrieval of the embedded <a>Method</a> resources this way. The
     * query parameter value must be a single-valued list and contain the
     * <code>"methods"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/resources?embed=methods</code>.</p>
     */
    inline void SetEmbed(Aws::Vector<Aws::String>&& value) { m_embedHasBeenSet = true; m_embed = std::move(value); }

    /**
     * <p>A query parameter used to retrieve the specified resources embedded in the
     * returned <a>Resources</a> resource in the response. This <code>embed</code>
     * parameter value is a list of comma-separated strings. Currently, the request
     * supports only retrieval of the embedded <a>Method</a> resources this way. The
     * query parameter value must be a single-valued list and contain the
     * <code>"methods"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/resources?embed=methods</code>.</p>
     */
    inline GetResourcesRequest& WithEmbed(const Aws::Vector<Aws::String>& value) { SetEmbed(value); return *this;}

    /**
     * <p>A query parameter used to retrieve the specified resources embedded in the
     * returned <a>Resources</a> resource in the response. This <code>embed</code>
     * parameter value is a list of comma-separated strings. Currently, the request
     * supports only retrieval of the embedded <a>Method</a> resources this way. The
     * query parameter value must be a single-valued list and contain the
     * <code>"methods"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/resources?embed=methods</code>.</p>
     */
    inline GetResourcesRequest& WithEmbed(Aws::Vector<Aws::String>&& value) { SetEmbed(std::move(value)); return *this;}

    /**
     * <p>A query parameter used to retrieve the specified resources embedded in the
     * returned <a>Resources</a> resource in the response. This <code>embed</code>
     * parameter value is a list of comma-separated strings. Currently, the request
     * supports only retrieval of the embedded <a>Method</a> resources this way. The
     * query parameter value must be a single-valued list and contain the
     * <code>"methods"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/resources?embed=methods</code>.</p>
     */
    inline GetResourcesRequest& AddEmbed(const Aws::String& value) { m_embedHasBeenSet = true; m_embed.push_back(value); return *this; }

    /**
     * <p>A query parameter used to retrieve the specified resources embedded in the
     * returned <a>Resources</a> resource in the response. This <code>embed</code>
     * parameter value is a list of comma-separated strings. Currently, the request
     * supports only retrieval of the embedded <a>Method</a> resources this way. The
     * query parameter value must be a single-valued list and contain the
     * <code>"methods"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/resources?embed=methods</code>.</p>
     */
    inline GetResourcesRequest& AddEmbed(Aws::String&& value) { m_embedHasBeenSet = true; m_embed.push_back(std::move(value)); return *this; }

    /**
     * <p>A query parameter used to retrieve the specified resources embedded in the
     * returned <a>Resources</a> resource in the response. This <code>embed</code>
     * parameter value is a list of comma-separated strings. Currently, the request
     * supports only retrieval of the embedded <a>Method</a> resources this way. The
     * query parameter value must be a single-valued list and contain the
     * <code>"methods"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/resources?embed=methods</code>.</p>
     */
    inline GetResourcesRequest& AddEmbed(const char* value) { m_embedHasBeenSet = true; m_embed.push_back(value); return *this; }

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_position;
    bool m_positionHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
    Aws::Vector<Aws::String> m_embed;
    bool m_embedHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws

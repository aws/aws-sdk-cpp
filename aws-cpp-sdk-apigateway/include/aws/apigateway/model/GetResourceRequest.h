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
   * <p>Request to list information about a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetResourceRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetResourceRequest : public APIGatewayRequest
  {
  public:
    GetResourceRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The <a>RestApi</a> identifier for the resource.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The <a>RestApi</a> identifier for the resource.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> identifier for the resource.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }

    /**
     * <p>The <a>RestApi</a> identifier for the resource.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The <a>RestApi</a> identifier for the resource.</p>
     */
    inline GetResourceRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier for the resource.</p>
     */
    inline GetResourceRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier for the resource.</p>
     */
    inline GetResourceRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>The identifier for the <a>Resource</a> resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier for the <a>Resource</a> resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The identifier for the <a>Resource</a> resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The identifier for the <a>Resource</a> resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The identifier for the <a>Resource</a> resource.</p>
     */
    inline GetResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier for the <a>Resource</a> resource.</p>
     */
    inline GetResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the <a>Resource</a> resource.</p>
     */
    inline GetResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>A query parameter to retrieve the specified resources embedded in the
     * returned <a>Resource</a> representation in the response. This <code>embed</code>
     * parameter value is a list of comma-separated strings. Currently, the request
     * supports only retrieval of the embedded <a>Method</a> resources this way. The
     * query parameter value must be a single-valued list and contain the
     * <code>"methods"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEmbed() const{ return m_embed; }

    /**
     * <p>A query parameter to retrieve the specified resources embedded in the
     * returned <a>Resource</a> representation in the response. This <code>embed</code>
     * parameter value is a list of comma-separated strings. Currently, the request
     * supports only retrieval of the embedded <a>Method</a> resources this way. The
     * query parameter value must be a single-valued list and contain the
     * <code>"methods"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>.</p>
     */
    inline void SetEmbed(const Aws::Vector<Aws::String>& value) { m_embedHasBeenSet = true; m_embed = value; }

    /**
     * <p>A query parameter to retrieve the specified resources embedded in the
     * returned <a>Resource</a> representation in the response. This <code>embed</code>
     * parameter value is a list of comma-separated strings. Currently, the request
     * supports only retrieval of the embedded <a>Method</a> resources this way. The
     * query parameter value must be a single-valued list and contain the
     * <code>"methods"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>.</p>
     */
    inline void SetEmbed(Aws::Vector<Aws::String>&& value) { m_embedHasBeenSet = true; m_embed = std::move(value); }

    /**
     * <p>A query parameter to retrieve the specified resources embedded in the
     * returned <a>Resource</a> representation in the response. This <code>embed</code>
     * parameter value is a list of comma-separated strings. Currently, the request
     * supports only retrieval of the embedded <a>Method</a> resources this way. The
     * query parameter value must be a single-valued list and contain the
     * <code>"methods"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>.</p>
     */
    inline GetResourceRequest& WithEmbed(const Aws::Vector<Aws::String>& value) { SetEmbed(value); return *this;}

    /**
     * <p>A query parameter to retrieve the specified resources embedded in the
     * returned <a>Resource</a> representation in the response. This <code>embed</code>
     * parameter value is a list of comma-separated strings. Currently, the request
     * supports only retrieval of the embedded <a>Method</a> resources this way. The
     * query parameter value must be a single-valued list and contain the
     * <code>"methods"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>.</p>
     */
    inline GetResourceRequest& WithEmbed(Aws::Vector<Aws::String>&& value) { SetEmbed(std::move(value)); return *this;}

    /**
     * <p>A query parameter to retrieve the specified resources embedded in the
     * returned <a>Resource</a> representation in the response. This <code>embed</code>
     * parameter value is a list of comma-separated strings. Currently, the request
     * supports only retrieval of the embedded <a>Method</a> resources this way. The
     * query parameter value must be a single-valued list and contain the
     * <code>"methods"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>.</p>
     */
    inline GetResourceRequest& AddEmbed(const Aws::String& value) { m_embedHasBeenSet = true; m_embed.push_back(value); return *this; }

    /**
     * <p>A query parameter to retrieve the specified resources embedded in the
     * returned <a>Resource</a> representation in the response. This <code>embed</code>
     * parameter value is a list of comma-separated strings. Currently, the request
     * supports only retrieval of the embedded <a>Method</a> resources this way. The
     * query parameter value must be a single-valued list and contain the
     * <code>"methods"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>.</p>
     */
    inline GetResourceRequest& AddEmbed(Aws::String&& value) { m_embedHasBeenSet = true; m_embed.push_back(std::move(value)); return *this; }

    /**
     * <p>A query parameter to retrieve the specified resources embedded in the
     * returned <a>Resource</a> representation in the response. This <code>embed</code>
     * parameter value is a list of comma-separated strings. Currently, the request
     * supports only retrieval of the embedded <a>Method</a> resources this way. The
     * query parameter value must be a single-valued list and contain the
     * <code>"methods"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>.</p>
     */
    inline GetResourceRequest& AddEmbed(const char* value) { m_embedHasBeenSet = true; m_embed.push_back(value); return *this; }

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    Aws::Vector<Aws::String> m_embed;
    bool m_embedHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws

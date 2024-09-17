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
   * <p>Request to list information about a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetResourceRequest">AWS
   * API Reference</a></p>
   */
  class GetResourceRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API GetResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResource"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;

    AWS_APIGATEWAY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }
    inline GetResourceRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}
    inline GetResourceRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}
    inline GetResourceRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the Resource resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline GetResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline GetResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline GetResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A query parameter to retrieve the specified resources embedded in the
     * returned Resource representation in the response. This <code>embed</code>
     * parameter value is a list of comma-separated strings. Currently, the request
     * supports only retrieval of the embedded Method resources this way. The query
     * parameter value must be a single-valued list and contain the
     * <code>"methods"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEmbed() const{ return m_embed; }
    inline bool EmbedHasBeenSet() const { return m_embedHasBeenSet; }
    inline void SetEmbed(const Aws::Vector<Aws::String>& value) { m_embedHasBeenSet = true; m_embed = value; }
    inline void SetEmbed(Aws::Vector<Aws::String>&& value) { m_embedHasBeenSet = true; m_embed = std::move(value); }
    inline GetResourceRequest& WithEmbed(const Aws::Vector<Aws::String>& value) { SetEmbed(value); return *this;}
    inline GetResourceRequest& WithEmbed(Aws::Vector<Aws::String>&& value) { SetEmbed(std::move(value)); return *this;}
    inline GetResourceRequest& AddEmbed(const Aws::String& value) { m_embedHasBeenSet = true; m_embed.push_back(value); return *this; }
    inline GetResourceRequest& AddEmbed(Aws::String&& value) { m_embedHasBeenSet = true; m_embed.push_back(std::move(value)); return *this; }
    inline GetResourceRequest& AddEmbed(const char* value) { m_embedHasBeenSet = true; m_embed.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_embed;
    bool m_embedHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws

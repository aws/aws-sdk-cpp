/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Request to describe an existing <a>Authorizers</a> resource.</p>
   */
  class AWS_APIGATEWAY_API GetAuthorizersRequest : public APIGatewayRequest
  {
  public:
    GetAuthorizersRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizers</a> resource.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizers</a> resource.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizers</a> resource.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizers</a> resource.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizers</a> resource.</p>
     */
    inline GetAuthorizersRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizers</a> resource.</p>
     */
    inline GetAuthorizersRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizers</a> resource.</p>
     */
    inline GetAuthorizersRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>If not all <a>Authorizer</a> resources in the response were present, the
     * position will specify where to start the next page of results.</p>
     */
    inline const Aws::String& GetPosition() const{ return m_position; }

    /**
     * <p>If not all <a>Authorizer</a> resources in the response were present, the
     * position will specify where to start the next page of results.</p>
     */
    inline void SetPosition(const Aws::String& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>If not all <a>Authorizer</a> resources in the response were present, the
     * position will specify where to start the next page of results.</p>
     */
    inline void SetPosition(Aws::String&& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>If not all <a>Authorizer</a> resources in the response were present, the
     * position will specify where to start the next page of results.</p>
     */
    inline void SetPosition(const char* value) { m_positionHasBeenSet = true; m_position.assign(value); }

    /**
     * <p>If not all <a>Authorizer</a> resources in the response were present, the
     * position will specify where to start the next page of results.</p>
     */
    inline GetAuthorizersRequest& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    /**
     * <p>If not all <a>Authorizer</a> resources in the response were present, the
     * position will specify where to start the next page of results.</p>
     */
    inline GetAuthorizersRequest& WithPosition(Aws::String&& value) { SetPosition(value); return *this;}

    /**
     * <p>If not all <a>Authorizer</a> resources in the response were present, the
     * position will specify where to start the next page of results.</p>
     */
    inline GetAuthorizersRequest& WithPosition(const char* value) { SetPosition(value); return *this;}

    /**
     * <p>Limit the number of <a>Authorizer</a> resources in the response.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Limit the number of <a>Authorizer</a> resources in the response.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Limit the number of <a>Authorizer</a> resources in the response.</p>
     */
    inline GetAuthorizersRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_position;
    bool m_positionHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws

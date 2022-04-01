/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/GatewayResponseType.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Gets a <a>GatewayResponse</a> of a specified response type on the given
   * <a>RestApi</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetGatewayResponseRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetGatewayResponseRequest : public APIGatewayRequest
  {
  public:
    GetGatewayResponseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGatewayResponse"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline GetGatewayResponseRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline GetGatewayResponseRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline GetGatewayResponseRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>[Required] <p>The response type of the associated
     * <a>GatewayResponse</a>.</p></p>
     */
    inline const GatewayResponseType& GetResponseType() const{ return m_responseType; }

    /**
     * <p>[Required] <p>The response type of the associated
     * <a>GatewayResponse</a>.</p></p>
     */
    inline bool ResponseTypeHasBeenSet() const { return m_responseTypeHasBeenSet; }

    /**
     * <p>[Required] <p>The response type of the associated
     * <a>GatewayResponse</a>.</p></p>
     */
    inline void SetResponseType(const GatewayResponseType& value) { m_responseTypeHasBeenSet = true; m_responseType = value; }

    /**
     * <p>[Required] <p>The response type of the associated
     * <a>GatewayResponse</a>.</p></p>
     */
    inline void SetResponseType(GatewayResponseType&& value) { m_responseTypeHasBeenSet = true; m_responseType = std::move(value); }

    /**
     * <p>[Required] <p>The response type of the associated
     * <a>GatewayResponse</a>.</p></p>
     */
    inline GetGatewayResponseRequest& WithResponseType(const GatewayResponseType& value) { SetResponseType(value); return *this;}

    /**
     * <p>[Required] <p>The response type of the associated
     * <a>GatewayResponse</a>.</p></p>
     */
    inline GetGatewayResponseRequest& WithResponseType(GatewayResponseType&& value) { SetResponseType(std::move(value)); return *this;}

  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;

    GatewayResponseType m_responseType;
    bool m_responseTypeHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws

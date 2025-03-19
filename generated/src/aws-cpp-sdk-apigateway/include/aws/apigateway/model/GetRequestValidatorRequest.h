/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Gets a RequestValidator of a given RestApi.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetRequestValidatorRequest">AWS
   * API Reference</a></p>
   */
  class GetRequestValidatorRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API GetRequestValidatorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRequestValidator"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const { return m_restApiId; }
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
    template<typename RestApiIdT = Aws::String>
    void SetRestApiId(RestApiIdT&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::forward<RestApiIdT>(value); }
    template<typename RestApiIdT = Aws::String>
    GetRequestValidatorRequest& WithRestApiId(RestApiIdT&& value) { SetRestApiId(std::forward<RestApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the RequestValidator to be retrieved.</p>
     */
    inline const Aws::String& GetRequestValidatorId() const { return m_requestValidatorId; }
    inline bool RequestValidatorIdHasBeenSet() const { return m_requestValidatorIdHasBeenSet; }
    template<typename RequestValidatorIdT = Aws::String>
    void SetRequestValidatorId(RequestValidatorIdT&& value) { m_requestValidatorIdHasBeenSet = true; m_requestValidatorId = std::forward<RequestValidatorIdT>(value); }
    template<typename RequestValidatorIdT = Aws::String>
    GetRequestValidatorRequest& WithRequestValidatorId(RequestValidatorIdT&& value) { SetRequestValidatorId(std::forward<RequestValidatorIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_requestValidatorId;
    bool m_requestValidatorIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws

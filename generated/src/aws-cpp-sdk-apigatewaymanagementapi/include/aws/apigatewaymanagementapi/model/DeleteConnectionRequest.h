/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApi_EXPORTS.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayManagementApi
{
namespace Model
{

  /**
   */
  class DeleteConnectionRequest : public ApiGatewayManagementApiRequest
  {
  public:
    AWS_APIGATEWAYMANAGEMENTAPI_API DeleteConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConnection"; }

    AWS_APIGATEWAYMANAGEMENTAPI_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    DeleteConnectionRequest& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayManagementApi
} // namespace Aws

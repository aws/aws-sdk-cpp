﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApi_EXPORTS.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiRequest.h>
#include <aws/core/utils/Array.h>
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
  class AWS_APIGATEWAYMANAGEMENTAPI_API PostToConnectionRequest : public StreamingApiGatewayManagementApiRequest
  {
  public:
    PostToConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PostToConnection"; }


    /**
     * <p>The identifier of the connection that a specific client is using.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The identifier of the connection that a specific client is using.</p>
     */
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }

    /**
     * <p>The identifier of the connection that a specific client is using.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The identifier of the connection that a specific client is using.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    /**
     * <p>The identifier of the connection that a specific client is using.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The identifier of the connection that a specific client is using.</p>
     */
    inline PostToConnectionRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The identifier of the connection that a specific client is using.</p>
     */
    inline PostToConnectionRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the connection that a specific client is using.</p>
     */
    inline PostToConnectionRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}

  private:


    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet;
  };

} // namespace Model
} // namespace ApiGatewayManagementApi
} // namespace Aws

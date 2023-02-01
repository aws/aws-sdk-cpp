/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class UpdateConnectionRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API UpdateConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnection"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the dedicated connection.</p> <p>You can use
     * <a>DescribeConnections</a> to retrieve the connection ID.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of the dedicated connection.</p> <p>You can use
     * <a>DescribeConnections</a> to retrieve the connection ID.</p>
     */
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }

    /**
     * <p>The ID of the dedicated connection.</p> <p>You can use
     * <a>DescribeConnections</a> to retrieve the connection ID.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of the dedicated connection.</p> <p>You can use
     * <a>DescribeConnections</a> to retrieve the connection ID.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    /**
     * <p>The ID of the dedicated connection.</p> <p>You can use
     * <a>DescribeConnections</a> to retrieve the connection ID.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The ID of the dedicated connection.</p> <p>You can use
     * <a>DescribeConnections</a> to retrieve the connection ID.</p>
     */
    inline UpdateConnectionRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the dedicated connection.</p> <p>You can use
     * <a>DescribeConnections</a> to retrieve the connection ID.</p>
     */
    inline UpdateConnectionRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the dedicated connection.</p> <p>You can use
     * <a>DescribeConnections</a> to retrieve the connection ID.</p>
     */
    inline UpdateConnectionRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>The name of the connection.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    /**
     * <p>The name of the connection.</p>
     */
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }

    /**
     * <p>The name of the connection.</p>
     */
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    /**
     * <p>The name of the connection.</p>
     */
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }

    /**
     * <p>The name of the connection.</p>
     */
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }

    /**
     * <p>The name of the connection.</p>
     */
    inline UpdateConnectionRequest& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    /**
     * <p>The name of the connection.</p>
     */
    inline UpdateConnectionRequest& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}

    /**
     * <p>The name of the connection.</p>
     */
    inline UpdateConnectionRequest& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}


    /**
     * <p>The connection MAC Security (MACsec) encryption mode.</p> <p>The valid values
     * are <code>no_encrypt</code>, <code>should_encrypt</code>, and
     * <code>must_encrypt</code>.</p>
     */
    inline const Aws::String& GetEncryptionMode() const{ return m_encryptionMode; }

    /**
     * <p>The connection MAC Security (MACsec) encryption mode.</p> <p>The valid values
     * are <code>no_encrypt</code>, <code>should_encrypt</code>, and
     * <code>must_encrypt</code>.</p>
     */
    inline bool EncryptionModeHasBeenSet() const { return m_encryptionModeHasBeenSet; }

    /**
     * <p>The connection MAC Security (MACsec) encryption mode.</p> <p>The valid values
     * are <code>no_encrypt</code>, <code>should_encrypt</code>, and
     * <code>must_encrypt</code>.</p>
     */
    inline void SetEncryptionMode(const Aws::String& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = value; }

    /**
     * <p>The connection MAC Security (MACsec) encryption mode.</p> <p>The valid values
     * are <code>no_encrypt</code>, <code>should_encrypt</code>, and
     * <code>must_encrypt</code>.</p>
     */
    inline void SetEncryptionMode(Aws::String&& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = std::move(value); }

    /**
     * <p>The connection MAC Security (MACsec) encryption mode.</p> <p>The valid values
     * are <code>no_encrypt</code>, <code>should_encrypt</code>, and
     * <code>must_encrypt</code>.</p>
     */
    inline void SetEncryptionMode(const char* value) { m_encryptionModeHasBeenSet = true; m_encryptionMode.assign(value); }

    /**
     * <p>The connection MAC Security (MACsec) encryption mode.</p> <p>The valid values
     * are <code>no_encrypt</code>, <code>should_encrypt</code>, and
     * <code>must_encrypt</code>.</p>
     */
    inline UpdateConnectionRequest& WithEncryptionMode(const Aws::String& value) { SetEncryptionMode(value); return *this;}

    /**
     * <p>The connection MAC Security (MACsec) encryption mode.</p> <p>The valid values
     * are <code>no_encrypt</code>, <code>should_encrypt</code>, and
     * <code>must_encrypt</code>.</p>
     */
    inline UpdateConnectionRequest& WithEncryptionMode(Aws::String&& value) { SetEncryptionMode(std::move(value)); return *this;}

    /**
     * <p>The connection MAC Security (MACsec) encryption mode.</p> <p>The valid values
     * are <code>no_encrypt</code>, <code>should_encrypt</code>, and
     * <code>must_encrypt</code>.</p>
     */
    inline UpdateConnectionRequest& WithEncryptionMode(const char* value) { SetEncryptionMode(value); return *this;}

  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::String m_encryptionMode;
    bool m_encryptionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>Specifies the TLS context to use for the test authorizer
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TlsContext">AWS API
   * Reference</a></p>
   */
  class TlsContext
  {
  public:
    AWS_IOT_API TlsContext();
    AWS_IOT_API TlsContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API TlsContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the <code>serverName</code> key in a TLS authorization
     * request.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The value of the <code>serverName</code> key in a TLS authorization
     * request.</p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>The value of the <code>serverName</code> key in a TLS authorization
     * request.</p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The value of the <code>serverName</code> key in a TLS authorization
     * request.</p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>The value of the <code>serverName</code> key in a TLS authorization
     * request.</p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>The value of the <code>serverName</code> key in a TLS authorization
     * request.</p>
     */
    inline TlsContext& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The value of the <code>serverName</code> key in a TLS authorization
     * request.</p>
     */
    inline TlsContext& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The value of the <code>serverName</code> key in a TLS authorization
     * request.</p>
     */
    inline TlsContext& WithServerName(const char* value) { SetServerName(value); return *this;}

  private:

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
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
namespace ConnectParticipant
{
namespace Model
{

  /**
   * <p>The websocket for the participant's connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/Websocket">AWS
   * API Reference</a></p>
   */
  class Websocket
  {
  public:
    AWS_CONNECTPARTICIPANT_API Websocket();
    AWS_CONNECTPARTICIPANT_API Websocket(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Websocket& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL of the websocket.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL of the websocket.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL of the websocket.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL of the websocket.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL of the websocket.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL of the websocket.</p>
     */
    inline Websocket& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL of the websocket.</p>
     */
    inline Websocket& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the websocket.</p>
     */
    inline Websocket& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>The URL expiration timestamp in ISO date format.</p> <p>It's specified in ISO
     * 8601 format: yyyy-MM-ddThh:mm:ss.SSSZ. For example,
     * 2019-11-08T02:41:28.172Z.</p>
     */
    inline const Aws::String& GetConnectionExpiry() const{ return m_connectionExpiry; }

    /**
     * <p>The URL expiration timestamp in ISO date format.</p> <p>It's specified in ISO
     * 8601 format: yyyy-MM-ddThh:mm:ss.SSSZ. For example,
     * 2019-11-08T02:41:28.172Z.</p>
     */
    inline bool ConnectionExpiryHasBeenSet() const { return m_connectionExpiryHasBeenSet; }

    /**
     * <p>The URL expiration timestamp in ISO date format.</p> <p>It's specified in ISO
     * 8601 format: yyyy-MM-ddThh:mm:ss.SSSZ. For example,
     * 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetConnectionExpiry(const Aws::String& value) { m_connectionExpiryHasBeenSet = true; m_connectionExpiry = value; }

    /**
     * <p>The URL expiration timestamp in ISO date format.</p> <p>It's specified in ISO
     * 8601 format: yyyy-MM-ddThh:mm:ss.SSSZ. For example,
     * 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetConnectionExpiry(Aws::String&& value) { m_connectionExpiryHasBeenSet = true; m_connectionExpiry = std::move(value); }

    /**
     * <p>The URL expiration timestamp in ISO date format.</p> <p>It's specified in ISO
     * 8601 format: yyyy-MM-ddThh:mm:ss.SSSZ. For example,
     * 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetConnectionExpiry(const char* value) { m_connectionExpiryHasBeenSet = true; m_connectionExpiry.assign(value); }

    /**
     * <p>The URL expiration timestamp in ISO date format.</p> <p>It's specified in ISO
     * 8601 format: yyyy-MM-ddThh:mm:ss.SSSZ. For example,
     * 2019-11-08T02:41:28.172Z.</p>
     */
    inline Websocket& WithConnectionExpiry(const Aws::String& value) { SetConnectionExpiry(value); return *this;}

    /**
     * <p>The URL expiration timestamp in ISO date format.</p> <p>It's specified in ISO
     * 8601 format: yyyy-MM-ddThh:mm:ss.SSSZ. For example,
     * 2019-11-08T02:41:28.172Z.</p>
     */
    inline Websocket& WithConnectionExpiry(Aws::String&& value) { SetConnectionExpiry(std::move(value)); return *this;}

    /**
     * <p>The URL expiration timestamp in ISO date format.</p> <p>It's specified in ISO
     * 8601 format: yyyy-MM-ddThh:mm:ss.SSSZ. For example,
     * 2019-11-08T02:41:28.172Z.</p>
     */
    inline Websocket& WithConnectionExpiry(const char* value) { SetConnectionExpiry(value); return *this;}

  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_connectionExpiry;
    bool m_connectionExpiryHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws

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
    AWS_CONNECTPARTICIPANT_API Websocket() = default;
    AWS_CONNECTPARTICIPANT_API Websocket(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Websocket& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL of the websocket.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    Websocket& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL expiration timestamp in ISO date format.</p> <p>It's specified in ISO
     * 8601 format: yyyy-MM-ddThh:mm:ss.SSSZ. For example,
     * 2019-11-08T02:41:28.172Z.</p>
     */
    inline const Aws::String& GetConnectionExpiry() const { return m_connectionExpiry; }
    inline bool ConnectionExpiryHasBeenSet() const { return m_connectionExpiryHasBeenSet; }
    template<typename ConnectionExpiryT = Aws::String>
    void SetConnectionExpiry(ConnectionExpiryT&& value) { m_connectionExpiryHasBeenSet = true; m_connectionExpiry = std::forward<ConnectionExpiryT>(value); }
    template<typename ConnectionExpiryT = Aws::String>
    Websocket& WithConnectionExpiry(ConnectionExpiryT&& value) { SetConnectionExpiry(std::forward<ConnectionExpiryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_connectionExpiry;
    bool m_connectionExpiryHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws

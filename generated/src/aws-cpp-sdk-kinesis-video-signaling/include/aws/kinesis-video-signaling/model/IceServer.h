/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannels_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace KinesisVideoSignalingChannels
{
namespace Model
{

  /**
   * <p>A structure for the ICE server connection data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-signaling-2019-12-04/IceServer">AWS
   * API Reference</a></p>
   */
  class IceServer
  {
  public:
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API IceServer() = default;
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API IceServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API IceServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of URIs, in the form specified in the <a
     * href="https://tools.ietf.org/html/draft-petithuguenin-behave-turn-uris-03">I-D.petithuguenin-behave-turn-uris</a>
     * spec. These URIs provide the different addresses and/or protocols that can be
     * used to reach the TURN server.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUris() const { return m_uris; }
    inline bool UrisHasBeenSet() const { return m_urisHasBeenSet; }
    template<typename UrisT = Aws::Vector<Aws::String>>
    void SetUris(UrisT&& value) { m_urisHasBeenSet = true; m_uris = std::forward<UrisT>(value); }
    template<typename UrisT = Aws::Vector<Aws::String>>
    IceServer& WithUris(UrisT&& value) { SetUris(std::forward<UrisT>(value)); return *this;}
    template<typename UrisT = Aws::String>
    IceServer& AddUris(UrisT&& value) { m_urisHasBeenSet = true; m_uris.emplace_back(std::forward<UrisT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A username to login to the ICE server.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    IceServer& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A password to login to the ICE server.</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    IceServer& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period of time, in seconds, during which the username and password are
     * valid.</p>
     */
    inline int GetTtl() const { return m_ttl; }
    inline bool TtlHasBeenSet() const { return m_ttlHasBeenSet; }
    inline void SetTtl(int value) { m_ttlHasBeenSet = true; m_ttl = value; }
    inline IceServer& WithTtl(int value) { SetTtl(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_uris;
    bool m_urisHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    int m_ttl{0};
    bool m_ttlHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoSignalingChannels
} // namespace Aws

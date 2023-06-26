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
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API IceServer();
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API IceServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API IceServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of URIs, in the form specified in the <a
     * href="https://tools.ietf.org/html/draft-petithuguenin-behave-turn-uris-03">I-D.petithuguenin-behave-turn-uris</a>
     * spec. These URIs provide the different addresses and/or protocols that can be
     * used to reach the TURN server.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUris() const{ return m_uris; }

    /**
     * <p>An array of URIs, in the form specified in the <a
     * href="https://tools.ietf.org/html/draft-petithuguenin-behave-turn-uris-03">I-D.petithuguenin-behave-turn-uris</a>
     * spec. These URIs provide the different addresses and/or protocols that can be
     * used to reach the TURN server.</p>
     */
    inline bool UrisHasBeenSet() const { return m_urisHasBeenSet; }

    /**
     * <p>An array of URIs, in the form specified in the <a
     * href="https://tools.ietf.org/html/draft-petithuguenin-behave-turn-uris-03">I-D.petithuguenin-behave-turn-uris</a>
     * spec. These URIs provide the different addresses and/or protocols that can be
     * used to reach the TURN server.</p>
     */
    inline void SetUris(const Aws::Vector<Aws::String>& value) { m_urisHasBeenSet = true; m_uris = value; }

    /**
     * <p>An array of URIs, in the form specified in the <a
     * href="https://tools.ietf.org/html/draft-petithuguenin-behave-turn-uris-03">I-D.petithuguenin-behave-turn-uris</a>
     * spec. These URIs provide the different addresses and/or protocols that can be
     * used to reach the TURN server.</p>
     */
    inline void SetUris(Aws::Vector<Aws::String>&& value) { m_urisHasBeenSet = true; m_uris = std::move(value); }

    /**
     * <p>An array of URIs, in the form specified in the <a
     * href="https://tools.ietf.org/html/draft-petithuguenin-behave-turn-uris-03">I-D.petithuguenin-behave-turn-uris</a>
     * spec. These URIs provide the different addresses and/or protocols that can be
     * used to reach the TURN server.</p>
     */
    inline IceServer& WithUris(const Aws::Vector<Aws::String>& value) { SetUris(value); return *this;}

    /**
     * <p>An array of URIs, in the form specified in the <a
     * href="https://tools.ietf.org/html/draft-petithuguenin-behave-turn-uris-03">I-D.petithuguenin-behave-turn-uris</a>
     * spec. These URIs provide the different addresses and/or protocols that can be
     * used to reach the TURN server.</p>
     */
    inline IceServer& WithUris(Aws::Vector<Aws::String>&& value) { SetUris(std::move(value)); return *this;}

    /**
     * <p>An array of URIs, in the form specified in the <a
     * href="https://tools.ietf.org/html/draft-petithuguenin-behave-turn-uris-03">I-D.petithuguenin-behave-turn-uris</a>
     * spec. These URIs provide the different addresses and/or protocols that can be
     * used to reach the TURN server.</p>
     */
    inline IceServer& AddUris(const Aws::String& value) { m_urisHasBeenSet = true; m_uris.push_back(value); return *this; }

    /**
     * <p>An array of URIs, in the form specified in the <a
     * href="https://tools.ietf.org/html/draft-petithuguenin-behave-turn-uris-03">I-D.petithuguenin-behave-turn-uris</a>
     * spec. These URIs provide the different addresses and/or protocols that can be
     * used to reach the TURN server.</p>
     */
    inline IceServer& AddUris(Aws::String&& value) { m_urisHasBeenSet = true; m_uris.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of URIs, in the form specified in the <a
     * href="https://tools.ietf.org/html/draft-petithuguenin-behave-turn-uris-03">I-D.petithuguenin-behave-turn-uris</a>
     * spec. These URIs provide the different addresses and/or protocols that can be
     * used to reach the TURN server.</p>
     */
    inline IceServer& AddUris(const char* value) { m_urisHasBeenSet = true; m_uris.push_back(value); return *this; }


    /**
     * <p>A username to login to the ICE server.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>A username to login to the ICE server.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>A username to login to the ICE server.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>A username to login to the ICE server.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>A username to login to the ICE server.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>A username to login to the ICE server.</p>
     */
    inline IceServer& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>A username to login to the ICE server.</p>
     */
    inline IceServer& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>A username to login to the ICE server.</p>
     */
    inline IceServer& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>A password to login to the ICE server.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>A password to login to the ICE server.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>A password to login to the ICE server.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>A password to login to the ICE server.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>A password to login to the ICE server.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>A password to login to the ICE server.</p>
     */
    inline IceServer& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>A password to login to the ICE server.</p>
     */
    inline IceServer& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>A password to login to the ICE server.</p>
     */
    inline IceServer& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>The period of time, in seconds, during which the username and password are
     * valid.</p>
     */
    inline int GetTtl() const{ return m_ttl; }

    /**
     * <p>The period of time, in seconds, during which the username and password are
     * valid.</p>
     */
    inline bool TtlHasBeenSet() const { return m_ttlHasBeenSet; }

    /**
     * <p>The period of time, in seconds, during which the username and password are
     * valid.</p>
     */
    inline void SetTtl(int value) { m_ttlHasBeenSet = true; m_ttl = value; }

    /**
     * <p>The period of time, in seconds, during which the username and password are
     * valid.</p>
     */
    inline IceServer& WithTtl(int value) { SetTtl(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_uris;
    bool m_urisHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    int m_ttl;
    bool m_ttlHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoSignalingChannels
} // namespace Aws

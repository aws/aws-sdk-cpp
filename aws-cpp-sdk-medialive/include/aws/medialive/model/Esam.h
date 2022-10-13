/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Settings for the Esam<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Esam">AWS API
   * Reference</a></p>
   */
  class AWS_MEDIALIVE_API Esam
  {
  public:
    Esam();
    Esam(Aws::Utils::Json::JsonView jsonValue);
    Esam& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Sent as acquisitionPointIdentity to identify the MediaLive channel to the POIS.
     */
    inline const Aws::String& GetAcquisitionPointId() const{ return m_acquisitionPointId; }

    /**
     * Sent as acquisitionPointIdentity to identify the MediaLive channel to the POIS.
     */
    inline bool AcquisitionPointIdHasBeenSet() const { return m_acquisitionPointIdHasBeenSet; }

    /**
     * Sent as acquisitionPointIdentity to identify the MediaLive channel to the POIS.
     */
    inline void SetAcquisitionPointId(const Aws::String& value) { m_acquisitionPointIdHasBeenSet = true; m_acquisitionPointId = value; }

    /**
     * Sent as acquisitionPointIdentity to identify the MediaLive channel to the POIS.
     */
    inline void SetAcquisitionPointId(Aws::String&& value) { m_acquisitionPointIdHasBeenSet = true; m_acquisitionPointId = std::move(value); }

    /**
     * Sent as acquisitionPointIdentity to identify the MediaLive channel to the POIS.
     */
    inline void SetAcquisitionPointId(const char* value) { m_acquisitionPointIdHasBeenSet = true; m_acquisitionPointId.assign(value); }

    /**
     * Sent as acquisitionPointIdentity to identify the MediaLive channel to the POIS.
     */
    inline Esam& WithAcquisitionPointId(const Aws::String& value) { SetAcquisitionPointId(value); return *this;}

    /**
     * Sent as acquisitionPointIdentity to identify the MediaLive channel to the POIS.
     */
    inline Esam& WithAcquisitionPointId(Aws::String&& value) { SetAcquisitionPointId(std::move(value)); return *this;}

    /**
     * Sent as acquisitionPointIdentity to identify the MediaLive channel to the POIS.
     */
    inline Esam& WithAcquisitionPointId(const char* value) { SetAcquisitionPointId(value); return *this;}


    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time. This only applies to embedded SCTE 104/35 messages and does not apply to
     * OOB messages.
     */
    inline int GetAdAvailOffset() const{ return m_adAvailOffset; }

    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time. This only applies to embedded SCTE 104/35 messages and does not apply to
     * OOB messages.
     */
    inline bool AdAvailOffsetHasBeenSet() const { return m_adAvailOffsetHasBeenSet; }

    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time. This only applies to embedded SCTE 104/35 messages and does not apply to
     * OOB messages.
     */
    inline void SetAdAvailOffset(int value) { m_adAvailOffsetHasBeenSet = true; m_adAvailOffset = value; }

    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time. This only applies to embedded SCTE 104/35 messages and does not apply to
     * OOB messages.
     */
    inline Esam& WithAdAvailOffset(int value) { SetAdAvailOffset(value); return *this;}


    /**
     * Password if credentials are required to access the POIS endpoint.  This is a
     * reference to an AWS parameter store name from which the password can be
     * retrieved.  AWS Parameter store format: "ssm://<parameter name>"
     */
    inline const Aws::String& GetPasswordParam() const{ return m_passwordParam; }

    /**
     * Password if credentials are required to access the POIS endpoint.  This is a
     * reference to an AWS parameter store name from which the password can be
     * retrieved.  AWS Parameter store format: "ssm://<parameter name>"
     */
    inline bool PasswordParamHasBeenSet() const { return m_passwordParamHasBeenSet; }

    /**
     * Password if credentials are required to access the POIS endpoint.  This is a
     * reference to an AWS parameter store name from which the password can be
     * retrieved.  AWS Parameter store format: "ssm://<parameter name>"
     */
    inline void SetPasswordParam(const Aws::String& value) { m_passwordParamHasBeenSet = true; m_passwordParam = value; }

    /**
     * Password if credentials are required to access the POIS endpoint.  This is a
     * reference to an AWS parameter store name from which the password can be
     * retrieved.  AWS Parameter store format: "ssm://<parameter name>"
     */
    inline void SetPasswordParam(Aws::String&& value) { m_passwordParamHasBeenSet = true; m_passwordParam = std::move(value); }

    /**
     * Password if credentials are required to access the POIS endpoint.  This is a
     * reference to an AWS parameter store name from which the password can be
     * retrieved.  AWS Parameter store format: "ssm://<parameter name>"
     */
    inline void SetPasswordParam(const char* value) { m_passwordParamHasBeenSet = true; m_passwordParam.assign(value); }

    /**
     * Password if credentials are required to access the POIS endpoint.  This is a
     * reference to an AWS parameter store name from which the password can be
     * retrieved.  AWS Parameter store format: "ssm://<parameter name>"
     */
    inline Esam& WithPasswordParam(const Aws::String& value) { SetPasswordParam(value); return *this;}

    /**
     * Password if credentials are required to access the POIS endpoint.  This is a
     * reference to an AWS parameter store name from which the password can be
     * retrieved.  AWS Parameter store format: "ssm://<parameter name>"
     */
    inline Esam& WithPasswordParam(Aws::String&& value) { SetPasswordParam(std::move(value)); return *this;}

    /**
     * Password if credentials are required to access the POIS endpoint.  This is a
     * reference to an AWS parameter store name from which the password can be
     * retrieved.  AWS Parameter store format: "ssm://<parameter name>"
     */
    inline Esam& WithPasswordParam(const char* value) { SetPasswordParam(value); return *this;}


    /**
     * The URL of the signal conditioner endpoint on the Placement Opportunity
     * Information System (POIS). MediaLive sends SignalProcessingEvents here when
     * SCTE-35 messages are read.
     */
    inline const Aws::String& GetPoisEndpoint() const{ return m_poisEndpoint; }

    /**
     * The URL of the signal conditioner endpoint on the Placement Opportunity
     * Information System (POIS). MediaLive sends SignalProcessingEvents here when
     * SCTE-35 messages are read.
     */
    inline bool PoisEndpointHasBeenSet() const { return m_poisEndpointHasBeenSet; }

    /**
     * The URL of the signal conditioner endpoint on the Placement Opportunity
     * Information System (POIS). MediaLive sends SignalProcessingEvents here when
     * SCTE-35 messages are read.
     */
    inline void SetPoisEndpoint(const Aws::String& value) { m_poisEndpointHasBeenSet = true; m_poisEndpoint = value; }

    /**
     * The URL of the signal conditioner endpoint on the Placement Opportunity
     * Information System (POIS). MediaLive sends SignalProcessingEvents here when
     * SCTE-35 messages are read.
     */
    inline void SetPoisEndpoint(Aws::String&& value) { m_poisEndpointHasBeenSet = true; m_poisEndpoint = std::move(value); }

    /**
     * The URL of the signal conditioner endpoint on the Placement Opportunity
     * Information System (POIS). MediaLive sends SignalProcessingEvents here when
     * SCTE-35 messages are read.
     */
    inline void SetPoisEndpoint(const char* value) { m_poisEndpointHasBeenSet = true; m_poisEndpoint.assign(value); }

    /**
     * The URL of the signal conditioner endpoint on the Placement Opportunity
     * Information System (POIS). MediaLive sends SignalProcessingEvents here when
     * SCTE-35 messages are read.
     */
    inline Esam& WithPoisEndpoint(const Aws::String& value) { SetPoisEndpoint(value); return *this;}

    /**
     * The URL of the signal conditioner endpoint on the Placement Opportunity
     * Information System (POIS). MediaLive sends SignalProcessingEvents here when
     * SCTE-35 messages are read.
     */
    inline Esam& WithPoisEndpoint(Aws::String&& value) { SetPoisEndpoint(std::move(value)); return *this;}

    /**
     * The URL of the signal conditioner endpoint on the Placement Opportunity
     * Information System (POIS). MediaLive sends SignalProcessingEvents here when
     * SCTE-35 messages are read.
     */
    inline Esam& WithPoisEndpoint(const char* value) { SetPoisEndpoint(value); return *this;}


    /**
     * Username if credentials are required to access the POIS endpoint.  This can be
     * either a plaintext username, or a reference to an AWS parameter store name from
     * which the username can be retrieved.  AWS Parameter store format:
     * "ssm://<parameter name>"
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * Username if credentials are required to access the POIS endpoint.  This can be
     * either a plaintext username, or a reference to an AWS parameter store name from
     * which the username can be retrieved.  AWS Parameter store format:
     * "ssm://<parameter name>"
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * Username if credentials are required to access the POIS endpoint.  This can be
     * either a plaintext username, or a reference to an AWS parameter store name from
     * which the username can be retrieved.  AWS Parameter store format:
     * "ssm://<parameter name>"
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * Username if credentials are required to access the POIS endpoint.  This can be
     * either a plaintext username, or a reference to an AWS parameter store name from
     * which the username can be retrieved.  AWS Parameter store format:
     * "ssm://<parameter name>"
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * Username if credentials are required to access the POIS endpoint.  This can be
     * either a plaintext username, or a reference to an AWS parameter store name from
     * which the username can be retrieved.  AWS Parameter store format:
     * "ssm://<parameter name>"
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * Username if credentials are required to access the POIS endpoint.  This can be
     * either a plaintext username, or a reference to an AWS parameter store name from
     * which the username can be retrieved.  AWS Parameter store format:
     * "ssm://<parameter name>"
     */
    inline Esam& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * Username if credentials are required to access the POIS endpoint.  This can be
     * either a plaintext username, or a reference to an AWS parameter store name from
     * which the username can be retrieved.  AWS Parameter store format:
     * "ssm://<parameter name>"
     */
    inline Esam& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * Username if credentials are required to access the POIS endpoint.  This can be
     * either a plaintext username, or a reference to an AWS parameter store name from
     * which the username can be retrieved.  AWS Parameter store format:
     * "ssm://<parameter name>"
     */
    inline Esam& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * Optional data sent as zoneIdentity to identify the MediaLive channel to the
     * POIS.
     */
    inline const Aws::String& GetZoneIdentity() const{ return m_zoneIdentity; }

    /**
     * Optional data sent as zoneIdentity to identify the MediaLive channel to the
     * POIS.
     */
    inline bool ZoneIdentityHasBeenSet() const { return m_zoneIdentityHasBeenSet; }

    /**
     * Optional data sent as zoneIdentity to identify the MediaLive channel to the
     * POIS.
     */
    inline void SetZoneIdentity(const Aws::String& value) { m_zoneIdentityHasBeenSet = true; m_zoneIdentity = value; }

    /**
     * Optional data sent as zoneIdentity to identify the MediaLive channel to the
     * POIS.
     */
    inline void SetZoneIdentity(Aws::String&& value) { m_zoneIdentityHasBeenSet = true; m_zoneIdentity = std::move(value); }

    /**
     * Optional data sent as zoneIdentity to identify the MediaLive channel to the
     * POIS.
     */
    inline void SetZoneIdentity(const char* value) { m_zoneIdentityHasBeenSet = true; m_zoneIdentity.assign(value); }

    /**
     * Optional data sent as zoneIdentity to identify the MediaLive channel to the
     * POIS.
     */
    inline Esam& WithZoneIdentity(const Aws::String& value) { SetZoneIdentity(value); return *this;}

    /**
     * Optional data sent as zoneIdentity to identify the MediaLive channel to the
     * POIS.
     */
    inline Esam& WithZoneIdentity(Aws::String&& value) { SetZoneIdentity(std::move(value)); return *this;}

    /**
     * Optional data sent as zoneIdentity to identify the MediaLive channel to the
     * POIS.
     */
    inline Esam& WithZoneIdentity(const char* value) { SetZoneIdentity(value); return *this;}

  private:

    Aws::String m_acquisitionPointId;
    bool m_acquisitionPointIdHasBeenSet = false;

    int m_adAvailOffset;
    bool m_adAvailOffsetHasBeenSet = false;

    Aws::String m_passwordParam;
    bool m_passwordParamHasBeenSet = false;

    Aws::String m_poisEndpoint;
    bool m_poisEndpointHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_zoneIdentity;
    bool m_zoneIdentityHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/PrivateNetworksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/Position.h>
#include <utility>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

  /**
   */
  class ConfigureAccessPointRequest : public PrivateNetworksRequest
  {
  public:
    AWS_PRIVATENETWORKS_API ConfigureAccessPointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfigureAccessPoint"; }

    AWS_PRIVATENETWORKS_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline const Aws::String& GetAccessPointArn() const{ return m_accessPointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline bool AccessPointArnHasBeenSet() const { return m_accessPointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline void SetAccessPointArn(const Aws::String& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline void SetAccessPointArn(Aws::String&& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline void SetAccessPointArn(const char* value) { m_accessPointArnHasBeenSet = true; m_accessPointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline ConfigureAccessPointRequest& WithAccessPointArn(const Aws::String& value) { SetAccessPointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline ConfigureAccessPointRequest& WithAccessPointArn(Aws::String&& value) { SetAccessPointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline ConfigureAccessPointRequest& WithAccessPointArn(const char* value) { SetAccessPointArn(value); return *this;}


    /**
     * <p>A Base64 encoded string of the CPI certificate associated with the CPI user
     * who is certifying the coordinates of the network resource. </p>
     */
    inline const Aws::String& GetCpiSecretKey() const{ return m_cpiSecretKey; }

    /**
     * <p>A Base64 encoded string of the CPI certificate associated with the CPI user
     * who is certifying the coordinates of the network resource. </p>
     */
    inline bool CpiSecretKeyHasBeenSet() const { return m_cpiSecretKeyHasBeenSet; }

    /**
     * <p>A Base64 encoded string of the CPI certificate associated with the CPI user
     * who is certifying the coordinates of the network resource. </p>
     */
    inline void SetCpiSecretKey(const Aws::String& value) { m_cpiSecretKeyHasBeenSet = true; m_cpiSecretKey = value; }

    /**
     * <p>A Base64 encoded string of the CPI certificate associated with the CPI user
     * who is certifying the coordinates of the network resource. </p>
     */
    inline void SetCpiSecretKey(Aws::String&& value) { m_cpiSecretKeyHasBeenSet = true; m_cpiSecretKey = std::move(value); }

    /**
     * <p>A Base64 encoded string of the CPI certificate associated with the CPI user
     * who is certifying the coordinates of the network resource. </p>
     */
    inline void SetCpiSecretKey(const char* value) { m_cpiSecretKeyHasBeenSet = true; m_cpiSecretKey.assign(value); }

    /**
     * <p>A Base64 encoded string of the CPI certificate associated with the CPI user
     * who is certifying the coordinates of the network resource. </p>
     */
    inline ConfigureAccessPointRequest& WithCpiSecretKey(const Aws::String& value) { SetCpiSecretKey(value); return *this;}

    /**
     * <p>A Base64 encoded string of the CPI certificate associated with the CPI user
     * who is certifying the coordinates of the network resource. </p>
     */
    inline ConfigureAccessPointRequest& WithCpiSecretKey(Aws::String&& value) { SetCpiSecretKey(std::move(value)); return *this;}

    /**
     * <p>A Base64 encoded string of the CPI certificate associated with the CPI user
     * who is certifying the coordinates of the network resource. </p>
     */
    inline ConfigureAccessPointRequest& WithCpiSecretKey(const char* value) { SetCpiSecretKey(value); return *this;}


    /**
     * <p>The CPI user ID of the CPI user who is certifying the coordinates of the
     * network resource. </p>
     */
    inline const Aws::String& GetCpiUserId() const{ return m_cpiUserId; }

    /**
     * <p>The CPI user ID of the CPI user who is certifying the coordinates of the
     * network resource. </p>
     */
    inline bool CpiUserIdHasBeenSet() const { return m_cpiUserIdHasBeenSet; }

    /**
     * <p>The CPI user ID of the CPI user who is certifying the coordinates of the
     * network resource. </p>
     */
    inline void SetCpiUserId(const Aws::String& value) { m_cpiUserIdHasBeenSet = true; m_cpiUserId = value; }

    /**
     * <p>The CPI user ID of the CPI user who is certifying the coordinates of the
     * network resource. </p>
     */
    inline void SetCpiUserId(Aws::String&& value) { m_cpiUserIdHasBeenSet = true; m_cpiUserId = std::move(value); }

    /**
     * <p>The CPI user ID of the CPI user who is certifying the coordinates of the
     * network resource. </p>
     */
    inline void SetCpiUserId(const char* value) { m_cpiUserIdHasBeenSet = true; m_cpiUserId.assign(value); }

    /**
     * <p>The CPI user ID of the CPI user who is certifying the coordinates of the
     * network resource. </p>
     */
    inline ConfigureAccessPointRequest& WithCpiUserId(const Aws::String& value) { SetCpiUserId(value); return *this;}

    /**
     * <p>The CPI user ID of the CPI user who is certifying the coordinates of the
     * network resource. </p>
     */
    inline ConfigureAccessPointRequest& WithCpiUserId(Aws::String&& value) { SetCpiUserId(std::move(value)); return *this;}

    /**
     * <p>The CPI user ID of the CPI user who is certifying the coordinates of the
     * network resource. </p>
     */
    inline ConfigureAccessPointRequest& WithCpiUserId(const char* value) { SetCpiUserId(value); return *this;}


    /**
     * <p>The CPI password associated with the CPI certificate in
     * <code>cpiSecretKey</code>.</p>
     */
    inline const Aws::String& GetCpiUserPassword() const{ return m_cpiUserPassword; }

    /**
     * <p>The CPI password associated with the CPI certificate in
     * <code>cpiSecretKey</code>.</p>
     */
    inline bool CpiUserPasswordHasBeenSet() const { return m_cpiUserPasswordHasBeenSet; }

    /**
     * <p>The CPI password associated with the CPI certificate in
     * <code>cpiSecretKey</code>.</p>
     */
    inline void SetCpiUserPassword(const Aws::String& value) { m_cpiUserPasswordHasBeenSet = true; m_cpiUserPassword = value; }

    /**
     * <p>The CPI password associated with the CPI certificate in
     * <code>cpiSecretKey</code>.</p>
     */
    inline void SetCpiUserPassword(Aws::String&& value) { m_cpiUserPasswordHasBeenSet = true; m_cpiUserPassword = std::move(value); }

    /**
     * <p>The CPI password associated with the CPI certificate in
     * <code>cpiSecretKey</code>.</p>
     */
    inline void SetCpiUserPassword(const char* value) { m_cpiUserPasswordHasBeenSet = true; m_cpiUserPassword.assign(value); }

    /**
     * <p>The CPI password associated with the CPI certificate in
     * <code>cpiSecretKey</code>.</p>
     */
    inline ConfigureAccessPointRequest& WithCpiUserPassword(const Aws::String& value) { SetCpiUserPassword(value); return *this;}

    /**
     * <p>The CPI password associated with the CPI certificate in
     * <code>cpiSecretKey</code>.</p>
     */
    inline ConfigureAccessPointRequest& WithCpiUserPassword(Aws::String&& value) { SetCpiUserPassword(std::move(value)); return *this;}

    /**
     * <p>The CPI password associated with the CPI certificate in
     * <code>cpiSecretKey</code>.</p>
     */
    inline ConfigureAccessPointRequest& WithCpiUserPassword(const char* value) { SetCpiUserPassword(value); return *this;}


    /**
     * <p>The CPI user name of the CPI user who is certifying the coordinates of the
     * radio unit.</p>
     */
    inline const Aws::String& GetCpiUsername() const{ return m_cpiUsername; }

    /**
     * <p>The CPI user name of the CPI user who is certifying the coordinates of the
     * radio unit.</p>
     */
    inline bool CpiUsernameHasBeenSet() const { return m_cpiUsernameHasBeenSet; }

    /**
     * <p>The CPI user name of the CPI user who is certifying the coordinates of the
     * radio unit.</p>
     */
    inline void SetCpiUsername(const Aws::String& value) { m_cpiUsernameHasBeenSet = true; m_cpiUsername = value; }

    /**
     * <p>The CPI user name of the CPI user who is certifying the coordinates of the
     * radio unit.</p>
     */
    inline void SetCpiUsername(Aws::String&& value) { m_cpiUsernameHasBeenSet = true; m_cpiUsername = std::move(value); }

    /**
     * <p>The CPI user name of the CPI user who is certifying the coordinates of the
     * radio unit.</p>
     */
    inline void SetCpiUsername(const char* value) { m_cpiUsernameHasBeenSet = true; m_cpiUsername.assign(value); }

    /**
     * <p>The CPI user name of the CPI user who is certifying the coordinates of the
     * radio unit.</p>
     */
    inline ConfigureAccessPointRequest& WithCpiUsername(const Aws::String& value) { SetCpiUsername(value); return *this;}

    /**
     * <p>The CPI user name of the CPI user who is certifying the coordinates of the
     * radio unit.</p>
     */
    inline ConfigureAccessPointRequest& WithCpiUsername(Aws::String&& value) { SetCpiUsername(std::move(value)); return *this;}

    /**
     * <p>The CPI user name of the CPI user who is certifying the coordinates of the
     * radio unit.</p>
     */
    inline ConfigureAccessPointRequest& WithCpiUsername(const char* value) { SetCpiUsername(value); return *this;}


    /**
     * <p>The position of the network resource.</p>
     */
    inline const Position& GetPosition() const{ return m_position; }

    /**
     * <p>The position of the network resource.</p>
     */
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    /**
     * <p>The position of the network resource.</p>
     */
    inline void SetPosition(const Position& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>The position of the network resource.</p>
     */
    inline void SetPosition(Position&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * <p>The position of the network resource.</p>
     */
    inline ConfigureAccessPointRequest& WithPosition(const Position& value) { SetPosition(value); return *this;}

    /**
     * <p>The position of the network resource.</p>
     */
    inline ConfigureAccessPointRequest& WithPosition(Position&& value) { SetPosition(std::move(value)); return *this;}

  private:

    Aws::String m_accessPointArn;
    bool m_accessPointArnHasBeenSet = false;

    Aws::String m_cpiSecretKey;
    bool m_cpiSecretKeyHasBeenSet = false;

    Aws::String m_cpiUserId;
    bool m_cpiUserIdHasBeenSet = false;

    Aws::String m_cpiUserPassword;
    bool m_cpiUserPasswordHasBeenSet = false;

    Aws::String m_cpiUsername;
    bool m_cpiUsernameHasBeenSet = false;

    Position m_position;
    bool m_positionHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws

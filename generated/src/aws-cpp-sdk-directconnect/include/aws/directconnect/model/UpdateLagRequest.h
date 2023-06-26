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
  class UpdateLagRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API UpdateLagRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLag"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the LAG.</p>
     */
    inline const Aws::String& GetLagId() const{ return m_lagId; }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline bool LagIdHasBeenSet() const { return m_lagIdHasBeenSet; }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline void SetLagId(const Aws::String& value) { m_lagIdHasBeenSet = true; m_lagId = value; }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline void SetLagId(Aws::String&& value) { m_lagIdHasBeenSet = true; m_lagId = std::move(value); }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline void SetLagId(const char* value) { m_lagIdHasBeenSet = true; m_lagId.assign(value); }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline UpdateLagRequest& WithLagId(const Aws::String& value) { SetLagId(value); return *this;}

    /**
     * <p>The ID of the LAG.</p>
     */
    inline UpdateLagRequest& WithLagId(Aws::String&& value) { SetLagId(std::move(value)); return *this;}

    /**
     * <p>The ID of the LAG.</p>
     */
    inline UpdateLagRequest& WithLagId(const char* value) { SetLagId(value); return *this;}


    /**
     * <p>The name of the LAG.</p>
     */
    inline const Aws::String& GetLagName() const{ return m_lagName; }

    /**
     * <p>The name of the LAG.</p>
     */
    inline bool LagNameHasBeenSet() const { return m_lagNameHasBeenSet; }

    /**
     * <p>The name of the LAG.</p>
     */
    inline void SetLagName(const Aws::String& value) { m_lagNameHasBeenSet = true; m_lagName = value; }

    /**
     * <p>The name of the LAG.</p>
     */
    inline void SetLagName(Aws::String&& value) { m_lagNameHasBeenSet = true; m_lagName = std::move(value); }

    /**
     * <p>The name of the LAG.</p>
     */
    inline void SetLagName(const char* value) { m_lagNameHasBeenSet = true; m_lagName.assign(value); }

    /**
     * <p>The name of the LAG.</p>
     */
    inline UpdateLagRequest& WithLagName(const Aws::String& value) { SetLagName(value); return *this;}

    /**
     * <p>The name of the LAG.</p>
     */
    inline UpdateLagRequest& WithLagName(Aws::String&& value) { SetLagName(std::move(value)); return *this;}

    /**
     * <p>The name of the LAG.</p>
     */
    inline UpdateLagRequest& WithLagName(const char* value) { SetLagName(value); return *this;}


    /**
     * <p>The minimum number of physical connections that must be operational for the
     * LAG itself to be operational.</p>
     */
    inline int GetMinimumLinks() const{ return m_minimumLinks; }

    /**
     * <p>The minimum number of physical connections that must be operational for the
     * LAG itself to be operational.</p>
     */
    inline bool MinimumLinksHasBeenSet() const { return m_minimumLinksHasBeenSet; }

    /**
     * <p>The minimum number of physical connections that must be operational for the
     * LAG itself to be operational.</p>
     */
    inline void SetMinimumLinks(int value) { m_minimumLinksHasBeenSet = true; m_minimumLinks = value; }

    /**
     * <p>The minimum number of physical connections that must be operational for the
     * LAG itself to be operational.</p>
     */
    inline UpdateLagRequest& WithMinimumLinks(int value) { SetMinimumLinks(value); return *this;}


    /**
     * <p>The LAG MAC Security (MACsec) encryption mode.</p> <p>Amazon Web Services
     * applies the value to all connections which are part of the LAG.</p>
     */
    inline const Aws::String& GetEncryptionMode() const{ return m_encryptionMode; }

    /**
     * <p>The LAG MAC Security (MACsec) encryption mode.</p> <p>Amazon Web Services
     * applies the value to all connections which are part of the LAG.</p>
     */
    inline bool EncryptionModeHasBeenSet() const { return m_encryptionModeHasBeenSet; }

    /**
     * <p>The LAG MAC Security (MACsec) encryption mode.</p> <p>Amazon Web Services
     * applies the value to all connections which are part of the LAG.</p>
     */
    inline void SetEncryptionMode(const Aws::String& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = value; }

    /**
     * <p>The LAG MAC Security (MACsec) encryption mode.</p> <p>Amazon Web Services
     * applies the value to all connections which are part of the LAG.</p>
     */
    inline void SetEncryptionMode(Aws::String&& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = std::move(value); }

    /**
     * <p>The LAG MAC Security (MACsec) encryption mode.</p> <p>Amazon Web Services
     * applies the value to all connections which are part of the LAG.</p>
     */
    inline void SetEncryptionMode(const char* value) { m_encryptionModeHasBeenSet = true; m_encryptionMode.assign(value); }

    /**
     * <p>The LAG MAC Security (MACsec) encryption mode.</p> <p>Amazon Web Services
     * applies the value to all connections which are part of the LAG.</p>
     */
    inline UpdateLagRequest& WithEncryptionMode(const Aws::String& value) { SetEncryptionMode(value); return *this;}

    /**
     * <p>The LAG MAC Security (MACsec) encryption mode.</p> <p>Amazon Web Services
     * applies the value to all connections which are part of the LAG.</p>
     */
    inline UpdateLagRequest& WithEncryptionMode(Aws::String&& value) { SetEncryptionMode(std::move(value)); return *this;}

    /**
     * <p>The LAG MAC Security (MACsec) encryption mode.</p> <p>Amazon Web Services
     * applies the value to all connections which are part of the LAG.</p>
     */
    inline UpdateLagRequest& WithEncryptionMode(const char* value) { SetEncryptionMode(value); return *this;}

  private:

    Aws::String m_lagId;
    bool m_lagIdHasBeenSet = false;

    Aws::String m_lagName;
    bool m_lagNameHasBeenSet = false;

    int m_minimumLinks;
    bool m_minimumLinksHasBeenSet = false;

    Aws::String m_encryptionMode;
    bool m_encryptionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws

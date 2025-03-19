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
    AWS_DIRECTCONNECT_API UpdateLagRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLag"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the LAG.</p>
     */
    inline const Aws::String& GetLagId() const { return m_lagId; }
    inline bool LagIdHasBeenSet() const { return m_lagIdHasBeenSet; }
    template<typename LagIdT = Aws::String>
    void SetLagId(LagIdT&& value) { m_lagIdHasBeenSet = true; m_lagId = std::forward<LagIdT>(value); }
    template<typename LagIdT = Aws::String>
    UpdateLagRequest& WithLagId(LagIdT&& value) { SetLagId(std::forward<LagIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the LAG.</p>
     */
    inline const Aws::String& GetLagName() const { return m_lagName; }
    inline bool LagNameHasBeenSet() const { return m_lagNameHasBeenSet; }
    template<typename LagNameT = Aws::String>
    void SetLagName(LagNameT&& value) { m_lagNameHasBeenSet = true; m_lagName = std::forward<LagNameT>(value); }
    template<typename LagNameT = Aws::String>
    UpdateLagRequest& WithLagName(LagNameT&& value) { SetLagName(std::forward<LagNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of physical connections that must be operational for the
     * LAG itself to be operational.</p>
     */
    inline int GetMinimumLinks() const { return m_minimumLinks; }
    inline bool MinimumLinksHasBeenSet() const { return m_minimumLinksHasBeenSet; }
    inline void SetMinimumLinks(int value) { m_minimumLinksHasBeenSet = true; m_minimumLinks = value; }
    inline UpdateLagRequest& WithMinimumLinks(int value) { SetMinimumLinks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The LAG MAC Security (MACsec) encryption mode.</p> <p>Amazon Web Services
     * applies the value to all connections which are part of the LAG.</p>
     */
    inline const Aws::String& GetEncryptionMode() const { return m_encryptionMode; }
    inline bool EncryptionModeHasBeenSet() const { return m_encryptionModeHasBeenSet; }
    template<typename EncryptionModeT = Aws::String>
    void SetEncryptionMode(EncryptionModeT&& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = std::forward<EncryptionModeT>(value); }
    template<typename EncryptionModeT = Aws::String>
    UpdateLagRequest& WithEncryptionMode(EncryptionModeT&& value) { SetEncryptionMode(std::forward<EncryptionModeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lagId;
    bool m_lagIdHasBeenSet = false;

    Aws::String m_lagName;
    bool m_lagNameHasBeenSet = false;

    int m_minimumLinks{0};
    bool m_minimumLinksHasBeenSet = false;

    Aws::String m_encryptionMode;
    bool m_encryptionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws

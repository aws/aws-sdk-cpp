/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class DeleteKeyPairRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API DeleteKeyPairRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteKeyPair"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the key pair to delete.</p>
     */
    inline const Aws::String& GetKeyPairName() const { return m_keyPairName; }
    inline bool KeyPairNameHasBeenSet() const { return m_keyPairNameHasBeenSet; }
    template<typename KeyPairNameT = Aws::String>
    void SetKeyPairName(KeyPairNameT&& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = std::forward<KeyPairNameT>(value); }
    template<typename KeyPairNameT = Aws::String>
    DeleteKeyPairRequest& WithKeyPairName(KeyPairNameT&& value) { SetKeyPairName(std::forward<KeyPairNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RSA fingerprint of the Lightsail default key pair to delete.</p> 
     * <p>The <code>expectedFingerprint</code> parameter is required only when
     * specifying to delete a Lightsail default key pair.</p> 
     */
    inline const Aws::String& GetExpectedFingerprint() const { return m_expectedFingerprint; }
    inline bool ExpectedFingerprintHasBeenSet() const { return m_expectedFingerprintHasBeenSet; }
    template<typename ExpectedFingerprintT = Aws::String>
    void SetExpectedFingerprint(ExpectedFingerprintT&& value) { m_expectedFingerprintHasBeenSet = true; m_expectedFingerprint = std::forward<ExpectedFingerprintT>(value); }
    template<typename ExpectedFingerprintT = Aws::String>
    DeleteKeyPairRequest& WithExpectedFingerprint(ExpectedFingerprintT&& value) { SetExpectedFingerprint(std::forward<ExpectedFingerprintT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyPairName;
    bool m_keyPairNameHasBeenSet = false;

    Aws::String m_expectedFingerprint;
    bool m_expectedFingerprintHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws

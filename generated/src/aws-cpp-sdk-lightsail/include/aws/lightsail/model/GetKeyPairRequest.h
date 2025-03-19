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
  class GetKeyPairRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetKeyPairRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetKeyPair"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the key pair for which you are requesting information.</p>
     */
    inline const Aws::String& GetKeyPairName() const { return m_keyPairName; }
    inline bool KeyPairNameHasBeenSet() const { return m_keyPairNameHasBeenSet; }
    template<typename KeyPairNameT = Aws::String>
    void SetKeyPairName(KeyPairNameT&& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = std::forward<KeyPairNameT>(value); }
    template<typename KeyPairNameT = Aws::String>
    GetKeyPairRequest& WithKeyPairName(KeyPairNameT&& value) { SetKeyPairName(std::forward<KeyPairNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyPairName;
    bool m_keyPairNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws

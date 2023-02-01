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
    AWS_LIGHTSAIL_API GetKeyPairRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetKeyPair"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the key pair for which you are requesting information.</p>
     */
    inline const Aws::String& GetKeyPairName() const{ return m_keyPairName; }

    /**
     * <p>The name of the key pair for which you are requesting information.</p>
     */
    inline bool KeyPairNameHasBeenSet() const { return m_keyPairNameHasBeenSet; }

    /**
     * <p>The name of the key pair for which you are requesting information.</p>
     */
    inline void SetKeyPairName(const Aws::String& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = value; }

    /**
     * <p>The name of the key pair for which you are requesting information.</p>
     */
    inline void SetKeyPairName(Aws::String&& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = std::move(value); }

    /**
     * <p>The name of the key pair for which you are requesting information.</p>
     */
    inline void SetKeyPairName(const char* value) { m_keyPairNameHasBeenSet = true; m_keyPairName.assign(value); }

    /**
     * <p>The name of the key pair for which you are requesting information.</p>
     */
    inline GetKeyPairRequest& WithKeyPairName(const Aws::String& value) { SetKeyPairName(value); return *this;}

    /**
     * <p>The name of the key pair for which you are requesting information.</p>
     */
    inline GetKeyPairRequest& WithKeyPairName(Aws::String&& value) { SetKeyPairName(std::move(value)); return *this;}

    /**
     * <p>The name of the key pair for which you are requesting information.</p>
     */
    inline GetKeyPairRequest& WithKeyPairName(const char* value) { SetKeyPairName(value); return *this;}

  private:

    Aws::String m_keyPairName;
    bool m_keyPairNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws

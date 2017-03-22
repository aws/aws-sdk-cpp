/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API CreateKeyPairRequest : public LightsailRequest
  {
  public:
    CreateKeyPairRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for your new key pair.</p>
     */
    inline const Aws::String& GetKeyPairName() const{ return m_keyPairName; }

    /**
     * <p>The name for your new key pair.</p>
     */
    inline void SetKeyPairName(const Aws::String& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = value; }

    /**
     * <p>The name for your new key pair.</p>
     */
    inline void SetKeyPairName(Aws::String&& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = value; }

    /**
     * <p>The name for your new key pair.</p>
     */
    inline void SetKeyPairName(const char* value) { m_keyPairNameHasBeenSet = true; m_keyPairName.assign(value); }

    /**
     * <p>The name for your new key pair.</p>
     */
    inline CreateKeyPairRequest& WithKeyPairName(const Aws::String& value) { SetKeyPairName(value); return *this;}

    /**
     * <p>The name for your new key pair.</p>
     */
    inline CreateKeyPairRequest& WithKeyPairName(Aws::String&& value) { SetKeyPairName(value); return *this;}

    /**
     * <p>The name for your new key pair.</p>
     */
    inline CreateKeyPairRequest& WithKeyPairName(const char* value) { SetKeyPairName(value); return *this;}

  private:
    Aws::String m_keyPairName;
    bool m_keyPairNameHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class AttachSecurityProfileRequest : public IoTRequest
  {
  public:
    AWS_IOT_API AttachSecurityProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachSecurityProfile"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The security profile that is attached.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = value; }
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::move(value); }
    inline void SetSecurityProfileName(const char* value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName.assign(value); }
    inline AttachSecurityProfileRequest& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}
    inline AttachSecurityProfileRequest& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}
    inline AttachSecurityProfileRequest& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the target (thing group) to which the security profile is
     * attached.</p>
     */
    inline const Aws::String& GetSecurityProfileTargetArn() const{ return m_securityProfileTargetArn; }
    inline bool SecurityProfileTargetArnHasBeenSet() const { return m_securityProfileTargetArnHasBeenSet; }
    inline void SetSecurityProfileTargetArn(const Aws::String& value) { m_securityProfileTargetArnHasBeenSet = true; m_securityProfileTargetArn = value; }
    inline void SetSecurityProfileTargetArn(Aws::String&& value) { m_securityProfileTargetArnHasBeenSet = true; m_securityProfileTargetArn = std::move(value); }
    inline void SetSecurityProfileTargetArn(const char* value) { m_securityProfileTargetArnHasBeenSet = true; m_securityProfileTargetArn.assign(value); }
    inline AttachSecurityProfileRequest& WithSecurityProfileTargetArn(const Aws::String& value) { SetSecurityProfileTargetArn(value); return *this;}
    inline AttachSecurityProfileRequest& WithSecurityProfileTargetArn(Aws::String&& value) { SetSecurityProfileTargetArn(std::move(value)); return *this;}
    inline AttachSecurityProfileRequest& WithSecurityProfileTargetArn(const char* value) { SetSecurityProfileTargetArn(value); return *this;}
    ///@}
  private:

    Aws::String m_securityProfileName;
    bool m_securityProfileNameHasBeenSet = false;

    Aws::String m_securityProfileTargetArn;
    bool m_securityProfileTargetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

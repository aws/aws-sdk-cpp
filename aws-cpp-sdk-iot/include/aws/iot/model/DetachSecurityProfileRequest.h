/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_IOT_API DetachSecurityProfileRequest : public IoTRequest
  {
  public:
    DetachSecurityProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetachSecurityProfile"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The security profile that is detached.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }

    /**
     * <p>The security profile that is detached.</p>
     */
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }

    /**
     * <p>The security profile that is detached.</p>
     */
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = value; }

    /**
     * <p>The security profile that is detached.</p>
     */
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::move(value); }

    /**
     * <p>The security profile that is detached.</p>
     */
    inline void SetSecurityProfileName(const char* value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName.assign(value); }

    /**
     * <p>The security profile that is detached.</p>
     */
    inline DetachSecurityProfileRequest& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}

    /**
     * <p>The security profile that is detached.</p>
     */
    inline DetachSecurityProfileRequest& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}

    /**
     * <p>The security profile that is detached.</p>
     */
    inline DetachSecurityProfileRequest& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}


    /**
     * <p>The ARN of the thing group from which the security profile is detached.</p>
     */
    inline const Aws::String& GetSecurityProfileTargetArn() const{ return m_securityProfileTargetArn; }

    /**
     * <p>The ARN of the thing group from which the security profile is detached.</p>
     */
    inline bool SecurityProfileTargetArnHasBeenSet() const { return m_securityProfileTargetArnHasBeenSet; }

    /**
     * <p>The ARN of the thing group from which the security profile is detached.</p>
     */
    inline void SetSecurityProfileTargetArn(const Aws::String& value) { m_securityProfileTargetArnHasBeenSet = true; m_securityProfileTargetArn = value; }

    /**
     * <p>The ARN of the thing group from which the security profile is detached.</p>
     */
    inline void SetSecurityProfileTargetArn(Aws::String&& value) { m_securityProfileTargetArnHasBeenSet = true; m_securityProfileTargetArn = std::move(value); }

    /**
     * <p>The ARN of the thing group from which the security profile is detached.</p>
     */
    inline void SetSecurityProfileTargetArn(const char* value) { m_securityProfileTargetArnHasBeenSet = true; m_securityProfileTargetArn.assign(value); }

    /**
     * <p>The ARN of the thing group from which the security profile is detached.</p>
     */
    inline DetachSecurityProfileRequest& WithSecurityProfileTargetArn(const Aws::String& value) { SetSecurityProfileTargetArn(value); return *this;}

    /**
     * <p>The ARN of the thing group from which the security profile is detached.</p>
     */
    inline DetachSecurityProfileRequest& WithSecurityProfileTargetArn(Aws::String&& value) { SetSecurityProfileTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the thing group from which the security profile is detached.</p>
     */
    inline DetachSecurityProfileRequest& WithSecurityProfileTargetArn(const char* value) { SetSecurityProfileTargetArn(value); return *this;}

  private:

    Aws::String m_securityProfileName;
    bool m_securityProfileNameHasBeenSet;

    Aws::String m_securityProfileTargetArn;
    bool m_securityProfileTargetArnHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

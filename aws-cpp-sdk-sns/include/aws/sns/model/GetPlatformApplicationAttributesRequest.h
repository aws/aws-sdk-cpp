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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for GetPlatformApplicationAttributes action.</p>
   */
  class AWS_SNS_API GetPlatformApplicationAttributesRequest : public SNSRequest
  {
  public:
    GetPlatformApplicationAttributesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>PlatformApplicationArn for GetPlatformApplicationAttributesInput.</p>
     */
    inline const Aws::String& GetPlatformApplicationArn() const{ return m_platformApplicationArn; }

    /**
     * <p>PlatformApplicationArn for GetPlatformApplicationAttributesInput.</p>
     */
    inline void SetPlatformApplicationArn(const Aws::String& value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn = value; }

    /**
     * <p>PlatformApplicationArn for GetPlatformApplicationAttributesInput.</p>
     */
    inline void SetPlatformApplicationArn(Aws::String&& value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn = value; }

    /**
     * <p>PlatformApplicationArn for GetPlatformApplicationAttributesInput.</p>
     */
    inline void SetPlatformApplicationArn(const char* value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn.assign(value); }

    /**
     * <p>PlatformApplicationArn for GetPlatformApplicationAttributesInput.</p>
     */
    inline GetPlatformApplicationAttributesRequest& WithPlatformApplicationArn(const Aws::String& value) { SetPlatformApplicationArn(value); return *this;}

    /**
     * <p>PlatformApplicationArn for GetPlatformApplicationAttributesInput.</p>
     */
    inline GetPlatformApplicationAttributesRequest& WithPlatformApplicationArn(Aws::String&& value) { SetPlatformApplicationArn(value); return *this;}

    /**
     * <p>PlatformApplicationArn for GetPlatformApplicationAttributesInput.</p>
     */
    inline GetPlatformApplicationAttributesRequest& WithPlatformApplicationArn(const char* value) { SetPlatformApplicationArn(value); return *this;}

  private:
    Aws::String m_platformApplicationArn;
    bool m_platformApplicationArnHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws

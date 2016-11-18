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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API DeleteSAMLProviderRequest : public IAMRequest
  {
  public:
    DeleteSAMLProviderRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider to delete.</p>
     */
    inline const Aws::String& GetSAMLProviderArn() const{ return m_sAMLProviderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider to delete.</p>
     */
    inline void SetSAMLProviderArn(const Aws::String& value) { m_sAMLProviderArnHasBeenSet = true; m_sAMLProviderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider to delete.</p>
     */
    inline void SetSAMLProviderArn(Aws::String&& value) { m_sAMLProviderArnHasBeenSet = true; m_sAMLProviderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider to delete.</p>
     */
    inline void SetSAMLProviderArn(const char* value) { m_sAMLProviderArnHasBeenSet = true; m_sAMLProviderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider to delete.</p>
     */
    inline DeleteSAMLProviderRequest& WithSAMLProviderArn(const Aws::String& value) { SetSAMLProviderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider to delete.</p>
     */
    inline DeleteSAMLProviderRequest& WithSAMLProviderArn(Aws::String&& value) { SetSAMLProviderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider to delete.</p>
     */
    inline DeleteSAMLProviderRequest& WithSAMLProviderArn(const char* value) { SetSAMLProviderArn(value); return *this;}

  private:
    Aws::String m_sAMLProviderArn;
    bool m_sAMLProviderArnHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/PublicAccessBlockConfig.h>
#include <utility>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   */
  class PutPublicAccessBlockConfigRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API PutPublicAccessBlockConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutPublicAccessBlockConfig"; }

    AWS_LAMBDA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the function you want to configure
     * public-access settings for. Public-access settings are applied at the function
     * level, so you can't apply different settings to function versions or
     * aliases.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline PutPublicAccessBlockConfigRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline PutPublicAccessBlockConfigRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline PutPublicAccessBlockConfigRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object defining the public-access settings you want to apply.</p> <p>To
     * block the creation of resource-based policies that would grant public access to
     * your function, set <code>BlockPublicPolicy</code> to <code>true</code>. To allow
     * the creation of resource-based policies that would grant public access to your
     * function, set <code>BlockPublicPolicy</code> to <code>false</code>.</p> <p>To
     * block public access to your function, even if its resource-based policy allows
     * it, set <code>RestrictPublicResource</code> to <code>true</code>. To allow
     * public access to a function with a resource-based policy that permits it, set
     * <code>RestrictPublicResource</code> to <code>false</code>.</p> <p>The default
     * setting for both <code>BlockPublicPolicy</code> and
     * <code>RestrictPublicResource</code> is <code>true</code>.</p>
     */
    inline const PublicAccessBlockConfig& GetPublicAccessBlockConfig() const{ return m_publicAccessBlockConfig; }
    inline bool PublicAccessBlockConfigHasBeenSet() const { return m_publicAccessBlockConfigHasBeenSet; }
    inline void SetPublicAccessBlockConfig(const PublicAccessBlockConfig& value) { m_publicAccessBlockConfigHasBeenSet = true; m_publicAccessBlockConfig = value; }
    inline void SetPublicAccessBlockConfig(PublicAccessBlockConfig&& value) { m_publicAccessBlockConfigHasBeenSet = true; m_publicAccessBlockConfig = std::move(value); }
    inline PutPublicAccessBlockConfigRequest& WithPublicAccessBlockConfig(const PublicAccessBlockConfig& value) { SetPublicAccessBlockConfig(value); return *this;}
    inline PutPublicAccessBlockConfigRequest& WithPublicAccessBlockConfig(PublicAccessBlockConfig&& value) { SetPublicAccessBlockConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    PublicAccessBlockConfig m_publicAccessBlockConfig;
    bool m_publicAccessBlockConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws

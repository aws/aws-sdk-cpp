/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p>An object that defines the public-access settings for a
   * function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PublicAccessBlockConfig">AWS
   * API Reference</a></p>
   */
  class PublicAccessBlockConfig
  {
  public:
    AWS_LAMBDA_API PublicAccessBlockConfig();
    AWS_LAMBDA_API PublicAccessBlockConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API PublicAccessBlockConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>To block the creation of resource-based policies that would grant public
     * access to your function, set <code>BlockPublicPolicy</code> to
     * <code>true</code>. To allow the creation of resource-based policies that would
     * grant public access to your function, set <code>BlockPublicPolicy</code> to
     * <code>false</code>.</p>
     */
    inline bool GetBlockPublicPolicy() const{ return m_blockPublicPolicy; }
    inline bool BlockPublicPolicyHasBeenSet() const { return m_blockPublicPolicyHasBeenSet; }
    inline void SetBlockPublicPolicy(bool value) { m_blockPublicPolicyHasBeenSet = true; m_blockPublicPolicy = value; }
    inline PublicAccessBlockConfig& WithBlockPublicPolicy(bool value) { SetBlockPublicPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To block public access to your function, even if its resource-based policy
     * allows it, set <code>RestrictPublicResource</code> to <code>true</code>. To
     * allow public access to a function with a resource-based policy that permits it,
     * set <code>RestrictPublicResource</code> to <code>false</code>.</p>
     */
    inline bool GetRestrictPublicResource() const{ return m_restrictPublicResource; }
    inline bool RestrictPublicResourceHasBeenSet() const { return m_restrictPublicResourceHasBeenSet; }
    inline void SetRestrictPublicResource(bool value) { m_restrictPublicResourceHasBeenSet = true; m_restrictPublicResource = value; }
    inline PublicAccessBlockConfig& WithRestrictPublicResource(bool value) { SetRestrictPublicResource(value); return *this;}
    ///@}
  private:

    bool m_blockPublicPolicy;
    bool m_blockPublicPolicyHasBeenSet = false;

    bool m_restrictPublicResource;
    bool m_restrictPublicResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws

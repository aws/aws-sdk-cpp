/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/PublicKeyConfig.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class CreatePublicKey2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CreatePublicKey2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePublicKey"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    /**
     * <p>A CloudFront public key configuration.</p>
     */
    inline const PublicKeyConfig& GetPublicKeyConfig() const{ return m_publicKeyConfig; }

    /**
     * <p>A CloudFront public key configuration.</p>
     */
    inline bool PublicKeyConfigHasBeenSet() const { return m_publicKeyConfigHasBeenSet; }

    /**
     * <p>A CloudFront public key configuration.</p>
     */
    inline void SetPublicKeyConfig(const PublicKeyConfig& value) { m_publicKeyConfigHasBeenSet = true; m_publicKeyConfig = value; }

    /**
     * <p>A CloudFront public key configuration.</p>
     */
    inline void SetPublicKeyConfig(PublicKeyConfig&& value) { m_publicKeyConfigHasBeenSet = true; m_publicKeyConfig = std::move(value); }

    /**
     * <p>A CloudFront public key configuration.</p>
     */
    inline CreatePublicKey2020_05_31Request& WithPublicKeyConfig(const PublicKeyConfig& value) { SetPublicKeyConfig(value); return *this;}

    /**
     * <p>A CloudFront public key configuration.</p>
     */
    inline CreatePublicKey2020_05_31Request& WithPublicKeyConfig(PublicKeyConfig&& value) { SetPublicKeyConfig(std::move(value)); return *this;}

  private:

    PublicKeyConfig m_publicKeyConfig;
    bool m_publicKeyConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws

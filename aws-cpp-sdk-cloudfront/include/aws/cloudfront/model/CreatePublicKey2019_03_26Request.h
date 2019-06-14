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
  class AWS_CLOUDFRONT_API CreatePublicKey2019_03_26Request : public CloudFrontRequest
  {
  public:
    CreatePublicKey2019_03_26Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePublicKey"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The request to add a public key to CloudFront.</p>
     */
    inline const PublicKeyConfig& GetPublicKeyConfig() const{ return m_publicKeyConfig; }

    /**
     * <p>The request to add a public key to CloudFront.</p>
     */
    inline bool PublicKeyConfigHasBeenSet() const { return m_publicKeyConfigHasBeenSet; }

    /**
     * <p>The request to add a public key to CloudFront.</p>
     */
    inline void SetPublicKeyConfig(const PublicKeyConfig& value) { m_publicKeyConfigHasBeenSet = true; m_publicKeyConfig = value; }

    /**
     * <p>The request to add a public key to CloudFront.</p>
     */
    inline void SetPublicKeyConfig(PublicKeyConfig&& value) { m_publicKeyConfigHasBeenSet = true; m_publicKeyConfig = std::move(value); }

    /**
     * <p>The request to add a public key to CloudFront.</p>
     */
    inline CreatePublicKey2019_03_26Request& WithPublicKeyConfig(const PublicKeyConfig& value) { SetPublicKeyConfig(value); return *this;}

    /**
     * <p>The request to add a public key to CloudFront.</p>
     */
    inline CreatePublicKey2019_03_26Request& WithPublicKeyConfig(PublicKeyConfig&& value) { SetPublicKeyConfig(std::move(value)); return *this;}

  private:

    PublicKeyConfig m_publicKeyConfig;
    bool m_publicKeyConfigHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws

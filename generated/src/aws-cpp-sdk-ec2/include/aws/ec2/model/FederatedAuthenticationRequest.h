/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>The IAM SAML identity provider used for federated
   * authentication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FederatedAuthenticationRequest">AWS
   * API Reference</a></p>
   */
  class FederatedAuthenticationRequest
  {
  public:
    AWS_EC2_API FederatedAuthenticationRequest();
    AWS_EC2_API FederatedAuthenticationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FederatedAuthenticationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider.</p>
     */
    inline const Aws::String& GetSAMLProviderArn() const{ return m_sAMLProviderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider.</p>
     */
    inline bool SAMLProviderArnHasBeenSet() const { return m_sAMLProviderArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider.</p>
     */
    inline void SetSAMLProviderArn(const Aws::String& value) { m_sAMLProviderArnHasBeenSet = true; m_sAMLProviderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider.</p>
     */
    inline void SetSAMLProviderArn(Aws::String&& value) { m_sAMLProviderArnHasBeenSet = true; m_sAMLProviderArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider.</p>
     */
    inline void SetSAMLProviderArn(const char* value) { m_sAMLProviderArnHasBeenSet = true; m_sAMLProviderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider.</p>
     */
    inline FederatedAuthenticationRequest& WithSAMLProviderArn(const Aws::String& value) { SetSAMLProviderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider.</p>
     */
    inline FederatedAuthenticationRequest& WithSAMLProviderArn(Aws::String&& value) { SetSAMLProviderArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider.</p>
     */
    inline FederatedAuthenticationRequest& WithSAMLProviderArn(const char* value) { SetSAMLProviderArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal.</p>
     */
    inline const Aws::String& GetSelfServiceSAMLProviderArn() const{ return m_selfServiceSAMLProviderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal.</p>
     */
    inline bool SelfServiceSAMLProviderArnHasBeenSet() const { return m_selfServiceSAMLProviderArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal.</p>
     */
    inline void SetSelfServiceSAMLProviderArn(const Aws::String& value) { m_selfServiceSAMLProviderArnHasBeenSet = true; m_selfServiceSAMLProviderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal.</p>
     */
    inline void SetSelfServiceSAMLProviderArn(Aws::String&& value) { m_selfServiceSAMLProviderArnHasBeenSet = true; m_selfServiceSAMLProviderArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal.</p>
     */
    inline void SetSelfServiceSAMLProviderArn(const char* value) { m_selfServiceSAMLProviderArnHasBeenSet = true; m_selfServiceSAMLProviderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal.</p>
     */
    inline FederatedAuthenticationRequest& WithSelfServiceSAMLProviderArn(const Aws::String& value) { SetSelfServiceSAMLProviderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal.</p>
     */
    inline FederatedAuthenticationRequest& WithSelfServiceSAMLProviderArn(Aws::String&& value) { SetSelfServiceSAMLProviderArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal.</p>
     */
    inline FederatedAuthenticationRequest& WithSelfServiceSAMLProviderArn(const char* value) { SetSelfServiceSAMLProviderArn(value); return *this;}

  private:

    Aws::String m_sAMLProviderArn;
    bool m_sAMLProviderArnHasBeenSet = false;

    Aws::String m_selfServiceSAMLProviderArn;
    bool m_selfServiceSAMLProviderArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

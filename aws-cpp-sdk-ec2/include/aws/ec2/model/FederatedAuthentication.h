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
   * <p>Describes the IAM SAML identity providers used for federated
   * authentication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FederatedAuthentication">AWS
   * API Reference</a></p>
   */
  class FederatedAuthentication
  {
  public:
    AWS_EC2_API FederatedAuthentication();
    AWS_EC2_API FederatedAuthentication(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FederatedAuthentication& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider.</p>
     */
    inline const Aws::String& GetSamlProviderArn() const{ return m_samlProviderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider.</p>
     */
    inline bool SamlProviderArnHasBeenSet() const { return m_samlProviderArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider.</p>
     */
    inline void SetSamlProviderArn(const Aws::String& value) { m_samlProviderArnHasBeenSet = true; m_samlProviderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider.</p>
     */
    inline void SetSamlProviderArn(Aws::String&& value) { m_samlProviderArnHasBeenSet = true; m_samlProviderArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider.</p>
     */
    inline void SetSamlProviderArn(const char* value) { m_samlProviderArnHasBeenSet = true; m_samlProviderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider.</p>
     */
    inline FederatedAuthentication& WithSamlProviderArn(const Aws::String& value) { SetSamlProviderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider.</p>
     */
    inline FederatedAuthentication& WithSamlProviderArn(Aws::String&& value) { SetSamlProviderArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider.</p>
     */
    inline FederatedAuthentication& WithSamlProviderArn(const char* value) { SetSamlProviderArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal.</p>
     */
    inline const Aws::String& GetSelfServiceSamlProviderArn() const{ return m_selfServiceSamlProviderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal.</p>
     */
    inline bool SelfServiceSamlProviderArnHasBeenSet() const { return m_selfServiceSamlProviderArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal.</p>
     */
    inline void SetSelfServiceSamlProviderArn(const Aws::String& value) { m_selfServiceSamlProviderArnHasBeenSet = true; m_selfServiceSamlProviderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal.</p>
     */
    inline void SetSelfServiceSamlProviderArn(Aws::String&& value) { m_selfServiceSamlProviderArnHasBeenSet = true; m_selfServiceSamlProviderArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal.</p>
     */
    inline void SetSelfServiceSamlProviderArn(const char* value) { m_selfServiceSamlProviderArnHasBeenSet = true; m_selfServiceSamlProviderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal.</p>
     */
    inline FederatedAuthentication& WithSelfServiceSamlProviderArn(const Aws::String& value) { SetSelfServiceSamlProviderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal.</p>
     */
    inline FederatedAuthentication& WithSelfServiceSamlProviderArn(Aws::String&& value) { SetSelfServiceSamlProviderArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal.</p>
     */
    inline FederatedAuthentication& WithSelfServiceSamlProviderArn(const char* value) { SetSelfServiceSamlProviderArn(value); return *this;}

  private:

    Aws::String m_samlProviderArn;
    bool m_samlProviderArnHasBeenSet = false;

    Aws::String m_selfServiceSamlProviderArn;
    bool m_selfServiceSamlProviderArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

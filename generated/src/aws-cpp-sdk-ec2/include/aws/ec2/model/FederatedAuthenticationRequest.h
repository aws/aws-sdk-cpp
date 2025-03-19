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
    AWS_EC2_API FederatedAuthenticationRequest() = default;
    AWS_EC2_API FederatedAuthenticationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FederatedAuthenticationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider.</p>
     */
    inline const Aws::String& GetSAMLProviderArn() const { return m_sAMLProviderArn; }
    inline bool SAMLProviderArnHasBeenSet() const { return m_sAMLProviderArnHasBeenSet; }
    template<typename SAMLProviderArnT = Aws::String>
    void SetSAMLProviderArn(SAMLProviderArnT&& value) { m_sAMLProviderArnHasBeenSet = true; m_sAMLProviderArn = std::forward<SAMLProviderArnT>(value); }
    template<typename SAMLProviderArnT = Aws::String>
    FederatedAuthenticationRequest& WithSAMLProviderArn(SAMLProviderArnT&& value) { SetSAMLProviderArn(std::forward<SAMLProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM SAML identity provider for the
     * self-service portal.</p>
     */
    inline const Aws::String& GetSelfServiceSAMLProviderArn() const { return m_selfServiceSAMLProviderArn; }
    inline bool SelfServiceSAMLProviderArnHasBeenSet() const { return m_selfServiceSAMLProviderArnHasBeenSet; }
    template<typename SelfServiceSAMLProviderArnT = Aws::String>
    void SetSelfServiceSAMLProviderArn(SelfServiceSAMLProviderArnT&& value) { m_selfServiceSAMLProviderArnHasBeenSet = true; m_selfServiceSAMLProviderArn = std::forward<SelfServiceSAMLProviderArnT>(value); }
    template<typename SelfServiceSAMLProviderArnT = Aws::String>
    FederatedAuthenticationRequest& WithSelfServiceSAMLProviderArn(SelfServiceSAMLProviderArnT&& value) { SetSelfServiceSAMLProviderArn(std::forward<SelfServiceSAMLProviderArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sAMLProviderArn;
    bool m_sAMLProviderArnHasBeenSet = false;

    Aws::String m_selfServiceSAMLProviderArn;
    bool m_selfServiceSAMLProviderArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

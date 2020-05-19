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
  class AWS_EC2_API FederatedAuthenticationRequest
  {
  public:
    FederatedAuthenticationRequest();
    FederatedAuthenticationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    FederatedAuthenticationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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

  private:

    Aws::String m_sAMLProviderArn;
    bool m_sAMLProviderArnHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

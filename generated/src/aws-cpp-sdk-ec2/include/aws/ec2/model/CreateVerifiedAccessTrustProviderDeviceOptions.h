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
   * <p>Describes the options when creating an Amazon Web Services Verified Access
   * trust provider using the <code>device</code> type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVerifiedAccessTrustProviderDeviceOptions">AWS
   * API Reference</a></p>
   */
  class CreateVerifiedAccessTrustProviderDeviceOptions
  {
  public:
    AWS_EC2_API CreateVerifiedAccessTrustProviderDeviceOptions() = default;
    AWS_EC2_API CreateVerifiedAccessTrustProviderDeviceOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CreateVerifiedAccessTrustProviderDeviceOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the tenant application with the device-identity provider.</p>
     */
    inline const Aws::String& GetTenantId() const { return m_tenantId; }
    inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
    template<typename TenantIdT = Aws::String>
    void SetTenantId(TenantIdT&& value) { m_tenantIdHasBeenSet = true; m_tenantId = std::forward<TenantIdT>(value); }
    template<typename TenantIdT = Aws::String>
    CreateVerifiedAccessTrustProviderDeviceOptions& WithTenantId(TenantIdT&& value) { SetTenantId(std::forward<TenantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URL Amazon Web Services Verified Access will use to verify the
     * authenticity of the device tokens. </p>
     */
    inline const Aws::String& GetPublicSigningKeyUrl() const { return m_publicSigningKeyUrl; }
    inline bool PublicSigningKeyUrlHasBeenSet() const { return m_publicSigningKeyUrlHasBeenSet; }
    template<typename PublicSigningKeyUrlT = Aws::String>
    void SetPublicSigningKeyUrl(PublicSigningKeyUrlT&& value) { m_publicSigningKeyUrlHasBeenSet = true; m_publicSigningKeyUrl = std::forward<PublicSigningKeyUrlT>(value); }
    template<typename PublicSigningKeyUrlT = Aws::String>
    CreateVerifiedAccessTrustProviderDeviceOptions& WithPublicSigningKeyUrl(PublicSigningKeyUrlT&& value) { SetPublicSigningKeyUrl(std::forward<PublicSigningKeyUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tenantId;
    bool m_tenantIdHasBeenSet = false;

    Aws::String m_publicSigningKeyUrl;
    bool m_publicSigningKeyUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

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
   * <p>Modifies the configuration of the specified device-based Amazon Web Services
   * Verified Access trust provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVerifiedAccessTrustProviderDeviceOptions">AWS
   * API Reference</a></p>
   */
  class ModifyVerifiedAccessTrustProviderDeviceOptions
  {
  public:
    AWS_EC2_API ModifyVerifiedAccessTrustProviderDeviceOptions();
    AWS_EC2_API ModifyVerifiedAccessTrustProviderDeviceOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ModifyVerifiedAccessTrustProviderDeviceOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p> The URL Amazon Web Services Verified Access will use to verify the
     * authenticity of the device tokens. </p>
     */
    inline const Aws::String& GetPublicSigningKeyUrl() const{ return m_publicSigningKeyUrl; }

    /**
     * <p> The URL Amazon Web Services Verified Access will use to verify the
     * authenticity of the device tokens. </p>
     */
    inline bool PublicSigningKeyUrlHasBeenSet() const { return m_publicSigningKeyUrlHasBeenSet; }

    /**
     * <p> The URL Amazon Web Services Verified Access will use to verify the
     * authenticity of the device tokens. </p>
     */
    inline void SetPublicSigningKeyUrl(const Aws::String& value) { m_publicSigningKeyUrlHasBeenSet = true; m_publicSigningKeyUrl = value; }

    /**
     * <p> The URL Amazon Web Services Verified Access will use to verify the
     * authenticity of the device tokens. </p>
     */
    inline void SetPublicSigningKeyUrl(Aws::String&& value) { m_publicSigningKeyUrlHasBeenSet = true; m_publicSigningKeyUrl = std::move(value); }

    /**
     * <p> The URL Amazon Web Services Verified Access will use to verify the
     * authenticity of the device tokens. </p>
     */
    inline void SetPublicSigningKeyUrl(const char* value) { m_publicSigningKeyUrlHasBeenSet = true; m_publicSigningKeyUrl.assign(value); }

    /**
     * <p> The URL Amazon Web Services Verified Access will use to verify the
     * authenticity of the device tokens. </p>
     */
    inline ModifyVerifiedAccessTrustProviderDeviceOptions& WithPublicSigningKeyUrl(const Aws::String& value) { SetPublicSigningKeyUrl(value); return *this;}

    /**
     * <p> The URL Amazon Web Services Verified Access will use to verify the
     * authenticity of the device tokens. </p>
     */
    inline ModifyVerifiedAccessTrustProviderDeviceOptions& WithPublicSigningKeyUrl(Aws::String&& value) { SetPublicSigningKeyUrl(std::move(value)); return *this;}

    /**
     * <p> The URL Amazon Web Services Verified Access will use to verify the
     * authenticity of the device tokens. </p>
     */
    inline ModifyVerifiedAccessTrustProviderDeviceOptions& WithPublicSigningKeyUrl(const char* value) { SetPublicSigningKeyUrl(value); return *this;}

  private:

    Aws::String m_publicSigningKeyUrl;
    bool m_publicSigningKeyUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

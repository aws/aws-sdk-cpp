/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

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
   * <p>Indicates whether the instance is enabled for Amazon Web Services Nitro
   * Enclaves. For more information, see <a
   * href="https://docs.aws.amazon.com/enclaves/latest/user/nitro-enclave.html">What
   * is Amazon Web Services Nitro Enclaves?</a> in the <i>Amazon Web Services Nitro
   * Enclaves User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateEnclaveOptionsRequest">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateEnclaveOptionsRequest
  {
  public:
    AWS_EC2_API LaunchTemplateEnclaveOptionsRequest();
    AWS_EC2_API LaunchTemplateEnclaveOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateEnclaveOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>To enable the instance for Amazon Web Services Nitro Enclaves, set this
     * parameter to <code>true</code>.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>To enable the instance for Amazon Web Services Nitro Enclaves, set this
     * parameter to <code>true</code>.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>To enable the instance for Amazon Web Services Nitro Enclaves, set this
     * parameter to <code>true</code>.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>To enable the instance for Amazon Web Services Nitro Enclaves, set this
     * parameter to <code>true</code>.</p>
     */
    inline LaunchTemplateEnclaveOptionsRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

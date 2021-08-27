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
   * <p>Indicates whether the instance is enabled for AWS Nitro Enclaves. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/enclaves/latest/user/nitro-enclave.html"> What
   * is AWS Nitro Enclaves?</a> in the <i>AWS Nitro Enclaves User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnclaveOptionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API EnclaveOptionsRequest
  {
  public:
    EnclaveOptionsRequest();
    EnclaveOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    EnclaveOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>To enable the instance for AWS Nitro Enclaves, set this parameter to
     * <code>true</code>.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>To enable the instance for AWS Nitro Enclaves, set this parameter to
     * <code>true</code>.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>To enable the instance for AWS Nitro Enclaves, set this parameter to
     * <code>true</code>.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>To enable the instance for AWS Nitro Enclaves, set this parameter to
     * <code>true</code>.</p>
     */
    inline EnclaveOptionsRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

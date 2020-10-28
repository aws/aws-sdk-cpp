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
   * <p>Indicates whether the instance is enabled for AWS Nitro
   * Enclaves.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnclaveOptions">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API EnclaveOptions
  {
  public:
    EnclaveOptions();
    EnclaveOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    EnclaveOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>If this parameter is set to <code>true</code>, the instance is enabled for
     * AWS Nitro Enclaves; otherwise, it is not enabled for AWS Nitro Enclaves.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>If this parameter is set to <code>true</code>, the instance is enabled for
     * AWS Nitro Enclaves; otherwise, it is not enabled for AWS Nitro Enclaves.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>If this parameter is set to <code>true</code>, the instance is enabled for
     * AWS Nitro Enclaves; otherwise, it is not enabled for AWS Nitro Enclaves.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>If this parameter is set to <code>true</code>, the instance is enabled for
     * AWS Nitro Enclaves; otherwise, it is not enabled for AWS Nitro Enclaves.</p>
     */
    inline EnclaveOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

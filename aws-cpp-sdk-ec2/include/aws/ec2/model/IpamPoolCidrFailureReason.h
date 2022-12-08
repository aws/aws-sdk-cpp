/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/IpamPoolCidrFailureCode.h>
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
   * <p>Details related to why an IPAM pool CIDR failed to be
   * provisioned.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamPoolCidrFailureReason">AWS
   * API Reference</a></p>
   */
  class IpamPoolCidrFailureReason
  {
  public:
    AWS_EC2_API IpamPoolCidrFailureReason();
    AWS_EC2_API IpamPoolCidrFailureReason(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamPoolCidrFailureReason& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>An error code related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline const IpamPoolCidrFailureCode& GetCode() const{ return m_code; }

    /**
     * <p>An error code related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>An error code related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline void SetCode(const IpamPoolCidrFailureCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>An error code related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline void SetCode(IpamPoolCidrFailureCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>An error code related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline IpamPoolCidrFailureReason& WithCode(const IpamPoolCidrFailureCode& value) { SetCode(value); return *this;}

    /**
     * <p>An error code related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline IpamPoolCidrFailureReason& WithCode(IpamPoolCidrFailureCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>A message related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline IpamPoolCidrFailureReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline IpamPoolCidrFailureReason& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline IpamPoolCidrFailureReason& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    IpamPoolCidrFailureCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

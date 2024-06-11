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
   * <p>Describes address usage for a customer-owned address pool.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CoipAddressUsage">AWS
   * API Reference</a></p>
   */
  class CoipAddressUsage
  {
  public:
    AWS_EC2_API CoipAddressUsage();
    AWS_EC2_API CoipAddressUsage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CoipAddressUsage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The allocation ID of the address.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }
    inline void SetAllocationId(const Aws::String& value) { m_allocationIdHasBeenSet = true; m_allocationId = value; }
    inline void SetAllocationId(Aws::String&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::move(value); }
    inline void SetAllocationId(const char* value) { m_allocationIdHasBeenSet = true; m_allocationId.assign(value); }
    inline CoipAddressUsage& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}
    inline CoipAddressUsage& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}
    inline CoipAddressUsage& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline CoipAddressUsage& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline CoipAddressUsage& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline CoipAddressUsage& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service.</p>
     */
    inline const Aws::String& GetAwsService() const{ return m_awsService; }
    inline bool AwsServiceHasBeenSet() const { return m_awsServiceHasBeenSet; }
    inline void SetAwsService(const Aws::String& value) { m_awsServiceHasBeenSet = true; m_awsService = value; }
    inline void SetAwsService(Aws::String&& value) { m_awsServiceHasBeenSet = true; m_awsService = std::move(value); }
    inline void SetAwsService(const char* value) { m_awsServiceHasBeenSet = true; m_awsService.assign(value); }
    inline CoipAddressUsage& WithAwsService(const Aws::String& value) { SetAwsService(value); return *this;}
    inline CoipAddressUsage& WithAwsService(Aws::String&& value) { SetAwsService(std::move(value)); return *this;}
    inline CoipAddressUsage& WithAwsService(const char* value) { SetAwsService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-owned IP address.</p>
     */
    inline const Aws::String& GetCoIp() const{ return m_coIp; }
    inline bool CoIpHasBeenSet() const { return m_coIpHasBeenSet; }
    inline void SetCoIp(const Aws::String& value) { m_coIpHasBeenSet = true; m_coIp = value; }
    inline void SetCoIp(Aws::String&& value) { m_coIpHasBeenSet = true; m_coIp = std::move(value); }
    inline void SetCoIp(const char* value) { m_coIpHasBeenSet = true; m_coIp.assign(value); }
    inline CoipAddressUsage& WithCoIp(const Aws::String& value) { SetCoIp(value); return *this;}
    inline CoipAddressUsage& WithCoIp(Aws::String&& value) { SetCoIp(std::move(value)); return *this;}
    inline CoipAddressUsage& WithCoIp(const char* value) { SetCoIp(value); return *this;}
    ///@}
  private:

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_awsService;
    bool m_awsServiceHasBeenSet = false;

    Aws::String m_coIp;
    bool m_coIpHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

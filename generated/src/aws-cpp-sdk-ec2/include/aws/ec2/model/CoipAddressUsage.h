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
    AWS_EC2_API CoipAddressUsage() = default;
    AWS_EC2_API CoipAddressUsage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CoipAddressUsage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The allocation ID of the address.</p>
     */
    inline const Aws::String& GetAllocationId() const { return m_allocationId; }
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }
    template<typename AllocationIdT = Aws::String>
    void SetAllocationId(AllocationIdT&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::forward<AllocationIdT>(value); }
    template<typename AllocationIdT = Aws::String>
    CoipAddressUsage& WithAllocationId(AllocationIdT&& value) { SetAllocationId(std::forward<AllocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    CoipAddressUsage& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service.</p>
     */
    inline const Aws::String& GetAwsService() const { return m_awsService; }
    inline bool AwsServiceHasBeenSet() const { return m_awsServiceHasBeenSet; }
    template<typename AwsServiceT = Aws::String>
    void SetAwsService(AwsServiceT&& value) { m_awsServiceHasBeenSet = true; m_awsService = std::forward<AwsServiceT>(value); }
    template<typename AwsServiceT = Aws::String>
    CoipAddressUsage& WithAwsService(AwsServiceT&& value) { SetAwsService(std::forward<AwsServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-owned IP address.</p>
     */
    inline const Aws::String& GetCoIp() const { return m_coIp; }
    inline bool CoIpHasBeenSet() const { return m_coIpHasBeenSet; }
    template<typename CoIpT = Aws::String>
    void SetCoIp(CoIpT&& value) { m_coIpHasBeenSet = true; m_coIp = std::forward<CoIpT>(value); }
    template<typename CoIpT = Aws::String>
    CoipAddressUsage& WithCoIp(CoIpT&& value) { SetCoIp(std::forward<CoIpT>(value)); return *this;}
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

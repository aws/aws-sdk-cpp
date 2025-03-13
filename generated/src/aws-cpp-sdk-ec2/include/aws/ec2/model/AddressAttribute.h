/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/PtrUpdateStatus.h>
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
   * <p>The attributes associated with an Elastic IP address.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AddressAttribute">AWS
   * API Reference</a></p>
   */
  class AddressAttribute
  {
  public:
    AWS_EC2_API AddressAttribute() = default;
    AWS_EC2_API AddressAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AddressAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The public IP address.</p>
     */
    inline const Aws::String& GetPublicIp() const { return m_publicIp; }
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }
    template<typename PublicIpT = Aws::String>
    void SetPublicIp(PublicIpT&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::forward<PublicIpT>(value); }
    template<typename PublicIpT = Aws::String>
    AddressAttribute& WithPublicIp(PublicIpT&& value) { SetPublicIp(std::forward<PublicIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[EC2-VPC] The allocation ID.</p>
     */
    inline const Aws::String& GetAllocationId() const { return m_allocationId; }
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }
    template<typename AllocationIdT = Aws::String>
    void SetAllocationId(AllocationIdT&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::forward<AllocationIdT>(value); }
    template<typename AllocationIdT = Aws::String>
    AddressAttribute& WithAllocationId(AllocationIdT&& value) { SetAllocationId(std::forward<AllocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pointer (PTR) record for the IP address.</p>
     */
    inline const Aws::String& GetPtrRecord() const { return m_ptrRecord; }
    inline bool PtrRecordHasBeenSet() const { return m_ptrRecordHasBeenSet; }
    template<typename PtrRecordT = Aws::String>
    void SetPtrRecord(PtrRecordT&& value) { m_ptrRecordHasBeenSet = true; m_ptrRecord = std::forward<PtrRecordT>(value); }
    template<typename PtrRecordT = Aws::String>
    AddressAttribute& WithPtrRecord(PtrRecordT&& value) { SetPtrRecord(std::forward<PtrRecordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated PTR record for the IP address.</p>
     */
    inline const PtrUpdateStatus& GetPtrRecordUpdate() const { return m_ptrRecordUpdate; }
    inline bool PtrRecordUpdateHasBeenSet() const { return m_ptrRecordUpdateHasBeenSet; }
    template<typename PtrRecordUpdateT = PtrUpdateStatus>
    void SetPtrRecordUpdate(PtrRecordUpdateT&& value) { m_ptrRecordUpdateHasBeenSet = true; m_ptrRecordUpdate = std::forward<PtrRecordUpdateT>(value); }
    template<typename PtrRecordUpdateT = PtrUpdateStatus>
    AddressAttribute& WithPtrRecordUpdate(PtrRecordUpdateT&& value) { SetPtrRecordUpdate(std::forward<PtrRecordUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet = false;

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet = false;

    Aws::String m_ptrRecord;
    bool m_ptrRecordHasBeenSet = false;

    PtrUpdateStatus m_ptrRecordUpdate;
    bool m_ptrRecordUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

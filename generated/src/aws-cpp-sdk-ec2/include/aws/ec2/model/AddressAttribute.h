﻿/**
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
    AWS_EC2_API AddressAttribute();
    AWS_EC2_API AddressAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AddressAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The public IP address.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }
    inline AddressAttribute& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}
    inline AddressAttribute& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}
    inline AddressAttribute& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[EC2-VPC] The allocation ID.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }
    inline void SetAllocationId(const Aws::String& value) { m_allocationIdHasBeenSet = true; m_allocationId = value; }
    inline void SetAllocationId(Aws::String&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::move(value); }
    inline void SetAllocationId(const char* value) { m_allocationIdHasBeenSet = true; m_allocationId.assign(value); }
    inline AddressAttribute& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}
    inline AddressAttribute& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}
    inline AddressAttribute& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pointer (PTR) record for the IP address.</p>
     */
    inline const Aws::String& GetPtrRecord() const{ return m_ptrRecord; }
    inline bool PtrRecordHasBeenSet() const { return m_ptrRecordHasBeenSet; }
    inline void SetPtrRecord(const Aws::String& value) { m_ptrRecordHasBeenSet = true; m_ptrRecord = value; }
    inline void SetPtrRecord(Aws::String&& value) { m_ptrRecordHasBeenSet = true; m_ptrRecord = std::move(value); }
    inline void SetPtrRecord(const char* value) { m_ptrRecordHasBeenSet = true; m_ptrRecord.assign(value); }
    inline AddressAttribute& WithPtrRecord(const Aws::String& value) { SetPtrRecord(value); return *this;}
    inline AddressAttribute& WithPtrRecord(Aws::String&& value) { SetPtrRecord(std::move(value)); return *this;}
    inline AddressAttribute& WithPtrRecord(const char* value) { SetPtrRecord(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated PTR record for the IP address.</p>
     */
    inline const PtrUpdateStatus& GetPtrRecordUpdate() const{ return m_ptrRecordUpdate; }
    inline bool PtrRecordUpdateHasBeenSet() const { return m_ptrRecordUpdateHasBeenSet; }
    inline void SetPtrRecordUpdate(const PtrUpdateStatus& value) { m_ptrRecordUpdateHasBeenSet = true; m_ptrRecordUpdate = value; }
    inline void SetPtrRecordUpdate(PtrUpdateStatus&& value) { m_ptrRecordUpdateHasBeenSet = true; m_ptrRecordUpdate = std::move(value); }
    inline AddressAttribute& WithPtrRecordUpdate(const PtrUpdateStatus& value) { SetPtrRecordUpdate(value); return *this;}
    inline AddressAttribute& WithPtrRecordUpdate(PtrUpdateStatus&& value) { SetPtrRecordUpdate(std::move(value)); return *this;}
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/AddressTransferStatus.h>
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
   * <p>Details on the Elastic IP address transfer. For more information, see <a
   * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-eips.html#transfer-EIPs-intro">Transfer
   * Elastic IP addresses</a> in the <i>Amazon VPC User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AddressTransfer">AWS
   * API Reference</a></p>
   */
  class AddressTransfer
  {
  public:
    AWS_EC2_API AddressTransfer() = default;
    AWS_EC2_API AddressTransfer(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AddressTransfer& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Elastic IP address being transferred.</p>
     */
    inline const Aws::String& GetPublicIp() const { return m_publicIp; }
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }
    template<typename PublicIpT = Aws::String>
    void SetPublicIp(PublicIpT&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::forward<PublicIpT>(value); }
    template<typename PublicIpT = Aws::String>
    AddressTransfer& WithPublicIp(PublicIpT&& value) { SetPublicIp(std::forward<PublicIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allocation ID of an Elastic IP address.</p>
     */
    inline const Aws::String& GetAllocationId() const { return m_allocationId; }
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }
    template<typename AllocationIdT = Aws::String>
    void SetAllocationId(AllocationIdT&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::forward<AllocationIdT>(value); }
    template<typename AllocationIdT = Aws::String>
    AddressTransfer& WithAllocationId(AllocationIdT&& value) { SetAllocationId(std::forward<AllocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the account that you want to transfer the Elastic IP address
     * to.</p>
     */
    inline const Aws::String& GetTransferAccountId() const { return m_transferAccountId; }
    inline bool TransferAccountIdHasBeenSet() const { return m_transferAccountIdHasBeenSet; }
    template<typename TransferAccountIdT = Aws::String>
    void SetTransferAccountId(TransferAccountIdT&& value) { m_transferAccountIdHasBeenSet = true; m_transferAccountId = std::forward<TransferAccountIdT>(value); }
    template<typename TransferAccountIdT = Aws::String>
    AddressTransfer& WithTransferAccountId(TransferAccountIdT&& value) { SetTransferAccountId(std::forward<TransferAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the Elastic IP address transfer expired. When the source
     * account starts the transfer, the transfer account has seven hours to allocate
     * the Elastic IP address to complete the transfer, or the Elastic IP address will
     * return to its original owner.</p>
     */
    inline const Aws::Utils::DateTime& GetTransferOfferExpirationTimestamp() const { return m_transferOfferExpirationTimestamp; }
    inline bool TransferOfferExpirationTimestampHasBeenSet() const { return m_transferOfferExpirationTimestampHasBeenSet; }
    template<typename TransferOfferExpirationTimestampT = Aws::Utils::DateTime>
    void SetTransferOfferExpirationTimestamp(TransferOfferExpirationTimestampT&& value) { m_transferOfferExpirationTimestampHasBeenSet = true; m_transferOfferExpirationTimestamp = std::forward<TransferOfferExpirationTimestampT>(value); }
    template<typename TransferOfferExpirationTimestampT = Aws::Utils::DateTime>
    AddressTransfer& WithTransferOfferExpirationTimestamp(TransferOfferExpirationTimestampT&& value) { SetTransferOfferExpirationTimestamp(std::forward<TransferOfferExpirationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the Elastic IP address transfer was accepted.</p>
     */
    inline const Aws::Utils::DateTime& GetTransferOfferAcceptedTimestamp() const { return m_transferOfferAcceptedTimestamp; }
    inline bool TransferOfferAcceptedTimestampHasBeenSet() const { return m_transferOfferAcceptedTimestampHasBeenSet; }
    template<typename TransferOfferAcceptedTimestampT = Aws::Utils::DateTime>
    void SetTransferOfferAcceptedTimestamp(TransferOfferAcceptedTimestampT&& value) { m_transferOfferAcceptedTimestampHasBeenSet = true; m_transferOfferAcceptedTimestamp = std::forward<TransferOfferAcceptedTimestampT>(value); }
    template<typename TransferOfferAcceptedTimestampT = Aws::Utils::DateTime>
    AddressTransfer& WithTransferOfferAcceptedTimestamp(TransferOfferAcceptedTimestampT&& value) { SetTransferOfferAcceptedTimestamp(std::forward<TransferOfferAcceptedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elastic IP address transfer status.</p>
     */
    inline AddressTransferStatus GetAddressTransferStatus() const { return m_addressTransferStatus; }
    inline bool AddressTransferStatusHasBeenSet() const { return m_addressTransferStatusHasBeenSet; }
    inline void SetAddressTransferStatus(AddressTransferStatus value) { m_addressTransferStatusHasBeenSet = true; m_addressTransferStatus = value; }
    inline AddressTransfer& WithAddressTransferStatus(AddressTransferStatus value) { SetAddressTransferStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet = false;

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet = false;

    Aws::String m_transferAccountId;
    bool m_transferAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_transferOfferExpirationTimestamp{};
    bool m_transferOfferExpirationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_transferOfferAcceptedTimestamp{};
    bool m_transferOfferAcceptedTimestampHasBeenSet = false;

    AddressTransferStatus m_addressTransferStatus{AddressTransferStatus::NOT_SET};
    bool m_addressTransferStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

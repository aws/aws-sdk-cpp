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
   * Elastic IP addresses</a> in the <i>Amazon Virtual Private Cloud User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AddressTransfer">AWS
   * API Reference</a></p>
   */
  class AddressTransfer
  {
  public:
    AWS_EC2_API AddressTransfer();
    AWS_EC2_API AddressTransfer(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AddressTransfer& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Elastic IP address being transferred.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }

    /**
     * <p>The Elastic IP address being transferred.</p>
     */
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }

    /**
     * <p>The Elastic IP address being transferred.</p>
     */
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }

    /**
     * <p>The Elastic IP address being transferred.</p>
     */
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }

    /**
     * <p>The Elastic IP address being transferred.</p>
     */
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }

    /**
     * <p>The Elastic IP address being transferred.</p>
     */
    inline AddressTransfer& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}

    /**
     * <p>The Elastic IP address being transferred.</p>
     */
    inline AddressTransfer& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}

    /**
     * <p>The Elastic IP address being transferred.</p>
     */
    inline AddressTransfer& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}


    /**
     * <p>The allocation ID of an Elastic IP address.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }

    /**
     * <p>The allocation ID of an Elastic IP address.</p>
     */
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }

    /**
     * <p>The allocation ID of an Elastic IP address.</p>
     */
    inline void SetAllocationId(const Aws::String& value) { m_allocationIdHasBeenSet = true; m_allocationId = value; }

    /**
     * <p>The allocation ID of an Elastic IP address.</p>
     */
    inline void SetAllocationId(Aws::String&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::move(value); }

    /**
     * <p>The allocation ID of an Elastic IP address.</p>
     */
    inline void SetAllocationId(const char* value) { m_allocationIdHasBeenSet = true; m_allocationId.assign(value); }

    /**
     * <p>The allocation ID of an Elastic IP address.</p>
     */
    inline AddressTransfer& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}

    /**
     * <p>The allocation ID of an Elastic IP address.</p>
     */
    inline AddressTransfer& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}

    /**
     * <p>The allocation ID of an Elastic IP address.</p>
     */
    inline AddressTransfer& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}


    /**
     * <p>The ID of the account that you want to transfer the Elastic IP address
     * to.</p>
     */
    inline const Aws::String& GetTransferAccountId() const{ return m_transferAccountId; }

    /**
     * <p>The ID of the account that you want to transfer the Elastic IP address
     * to.</p>
     */
    inline bool TransferAccountIdHasBeenSet() const { return m_transferAccountIdHasBeenSet; }

    /**
     * <p>The ID of the account that you want to transfer the Elastic IP address
     * to.</p>
     */
    inline void SetTransferAccountId(const Aws::String& value) { m_transferAccountIdHasBeenSet = true; m_transferAccountId = value; }

    /**
     * <p>The ID of the account that you want to transfer the Elastic IP address
     * to.</p>
     */
    inline void SetTransferAccountId(Aws::String&& value) { m_transferAccountIdHasBeenSet = true; m_transferAccountId = std::move(value); }

    /**
     * <p>The ID of the account that you want to transfer the Elastic IP address
     * to.</p>
     */
    inline void SetTransferAccountId(const char* value) { m_transferAccountIdHasBeenSet = true; m_transferAccountId.assign(value); }

    /**
     * <p>The ID of the account that you want to transfer the Elastic IP address
     * to.</p>
     */
    inline AddressTransfer& WithTransferAccountId(const Aws::String& value) { SetTransferAccountId(value); return *this;}

    /**
     * <p>The ID of the account that you want to transfer the Elastic IP address
     * to.</p>
     */
    inline AddressTransfer& WithTransferAccountId(Aws::String&& value) { SetTransferAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the account that you want to transfer the Elastic IP address
     * to.</p>
     */
    inline AddressTransfer& WithTransferAccountId(const char* value) { SetTransferAccountId(value); return *this;}


    /**
     * <p>The timestamp when the Elastic IP address transfer expired. When the source
     * account starts the transfer, the transfer account has seven hours to allocate
     * the Elastic IP address to complete the transfer, or the Elastic IP address will
     * return to its original owner.</p>
     */
    inline const Aws::Utils::DateTime& GetTransferOfferExpirationTimestamp() const{ return m_transferOfferExpirationTimestamp; }

    /**
     * <p>The timestamp when the Elastic IP address transfer expired. When the source
     * account starts the transfer, the transfer account has seven hours to allocate
     * the Elastic IP address to complete the transfer, or the Elastic IP address will
     * return to its original owner.</p>
     */
    inline bool TransferOfferExpirationTimestampHasBeenSet() const { return m_transferOfferExpirationTimestampHasBeenSet; }

    /**
     * <p>The timestamp when the Elastic IP address transfer expired. When the source
     * account starts the transfer, the transfer account has seven hours to allocate
     * the Elastic IP address to complete the transfer, or the Elastic IP address will
     * return to its original owner.</p>
     */
    inline void SetTransferOfferExpirationTimestamp(const Aws::Utils::DateTime& value) { m_transferOfferExpirationTimestampHasBeenSet = true; m_transferOfferExpirationTimestamp = value; }

    /**
     * <p>The timestamp when the Elastic IP address transfer expired. When the source
     * account starts the transfer, the transfer account has seven hours to allocate
     * the Elastic IP address to complete the transfer, or the Elastic IP address will
     * return to its original owner.</p>
     */
    inline void SetTransferOfferExpirationTimestamp(Aws::Utils::DateTime&& value) { m_transferOfferExpirationTimestampHasBeenSet = true; m_transferOfferExpirationTimestamp = std::move(value); }

    /**
     * <p>The timestamp when the Elastic IP address transfer expired. When the source
     * account starts the transfer, the transfer account has seven hours to allocate
     * the Elastic IP address to complete the transfer, or the Elastic IP address will
     * return to its original owner.</p>
     */
    inline AddressTransfer& WithTransferOfferExpirationTimestamp(const Aws::Utils::DateTime& value) { SetTransferOfferExpirationTimestamp(value); return *this;}

    /**
     * <p>The timestamp when the Elastic IP address transfer expired. When the source
     * account starts the transfer, the transfer account has seven hours to allocate
     * the Elastic IP address to complete the transfer, or the Elastic IP address will
     * return to its original owner.</p>
     */
    inline AddressTransfer& WithTransferOfferExpirationTimestamp(Aws::Utils::DateTime&& value) { SetTransferOfferExpirationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the Elastic IP address transfer was accepted.</p>
     */
    inline const Aws::Utils::DateTime& GetTransferOfferAcceptedTimestamp() const{ return m_transferOfferAcceptedTimestamp; }

    /**
     * <p>The timestamp when the Elastic IP address transfer was accepted.</p>
     */
    inline bool TransferOfferAcceptedTimestampHasBeenSet() const { return m_transferOfferAcceptedTimestampHasBeenSet; }

    /**
     * <p>The timestamp when the Elastic IP address transfer was accepted.</p>
     */
    inline void SetTransferOfferAcceptedTimestamp(const Aws::Utils::DateTime& value) { m_transferOfferAcceptedTimestampHasBeenSet = true; m_transferOfferAcceptedTimestamp = value; }

    /**
     * <p>The timestamp when the Elastic IP address transfer was accepted.</p>
     */
    inline void SetTransferOfferAcceptedTimestamp(Aws::Utils::DateTime&& value) { m_transferOfferAcceptedTimestampHasBeenSet = true; m_transferOfferAcceptedTimestamp = std::move(value); }

    /**
     * <p>The timestamp when the Elastic IP address transfer was accepted.</p>
     */
    inline AddressTransfer& WithTransferOfferAcceptedTimestamp(const Aws::Utils::DateTime& value) { SetTransferOfferAcceptedTimestamp(value); return *this;}

    /**
     * <p>The timestamp when the Elastic IP address transfer was accepted.</p>
     */
    inline AddressTransfer& WithTransferOfferAcceptedTimestamp(Aws::Utils::DateTime&& value) { SetTransferOfferAcceptedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The Elastic IP address transfer status.</p>
     */
    inline const AddressTransferStatus& GetAddressTransferStatus() const{ return m_addressTransferStatus; }

    /**
     * <p>The Elastic IP address transfer status.</p>
     */
    inline bool AddressTransferStatusHasBeenSet() const { return m_addressTransferStatusHasBeenSet; }

    /**
     * <p>The Elastic IP address transfer status.</p>
     */
    inline void SetAddressTransferStatus(const AddressTransferStatus& value) { m_addressTransferStatusHasBeenSet = true; m_addressTransferStatus = value; }

    /**
     * <p>The Elastic IP address transfer status.</p>
     */
    inline void SetAddressTransferStatus(AddressTransferStatus&& value) { m_addressTransferStatusHasBeenSet = true; m_addressTransferStatus = std::move(value); }

    /**
     * <p>The Elastic IP address transfer status.</p>
     */
    inline AddressTransfer& WithAddressTransferStatus(const AddressTransferStatus& value) { SetAddressTransferStatus(value); return *this;}

    /**
     * <p>The Elastic IP address transfer status.</p>
     */
    inline AddressTransfer& WithAddressTransferStatus(AddressTransferStatus&& value) { SetAddressTransferStatus(std::move(value)); return *this;}

  private:

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet = false;

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet = false;

    Aws::String m_transferAccountId;
    bool m_transferAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_transferOfferExpirationTimestamp;
    bool m_transferOfferExpirationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_transferOfferAcceptedTimestamp;
    bool m_transferOfferAcceptedTimestampHasBeenSet = false;

    AddressTransferStatus m_addressTransferStatus;
    bool m_addressTransferStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

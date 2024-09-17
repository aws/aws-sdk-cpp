/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>Data used to transfer a certificate to an Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TransferData">AWS
   * API Reference</a></p>
   */
  class TransferData
  {
  public:
    AWS_IOT_API TransferData();
    AWS_IOT_API TransferData(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API TransferData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The transfer message.</p>
     */
    inline const Aws::String& GetTransferMessage() const{ return m_transferMessage; }
    inline bool TransferMessageHasBeenSet() const { return m_transferMessageHasBeenSet; }
    inline void SetTransferMessage(const Aws::String& value) { m_transferMessageHasBeenSet = true; m_transferMessage = value; }
    inline void SetTransferMessage(Aws::String&& value) { m_transferMessageHasBeenSet = true; m_transferMessage = std::move(value); }
    inline void SetTransferMessage(const char* value) { m_transferMessageHasBeenSet = true; m_transferMessage.assign(value); }
    inline TransferData& WithTransferMessage(const Aws::String& value) { SetTransferMessage(value); return *this;}
    inline TransferData& WithTransferMessage(Aws::String&& value) { SetTransferMessage(std::move(value)); return *this;}
    inline TransferData& WithTransferMessage(const char* value) { SetTransferMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the transfer was rejected.</p>
     */
    inline const Aws::String& GetRejectReason() const{ return m_rejectReason; }
    inline bool RejectReasonHasBeenSet() const { return m_rejectReasonHasBeenSet; }
    inline void SetRejectReason(const Aws::String& value) { m_rejectReasonHasBeenSet = true; m_rejectReason = value; }
    inline void SetRejectReason(Aws::String&& value) { m_rejectReasonHasBeenSet = true; m_rejectReason = std::move(value); }
    inline void SetRejectReason(const char* value) { m_rejectReasonHasBeenSet = true; m_rejectReason.assign(value); }
    inline TransferData& WithRejectReason(const Aws::String& value) { SetRejectReason(value); return *this;}
    inline TransferData& WithRejectReason(Aws::String&& value) { SetRejectReason(std::move(value)); return *this;}
    inline TransferData& WithRejectReason(const char* value) { SetRejectReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the transfer took place.</p>
     */
    inline const Aws::Utils::DateTime& GetTransferDate() const{ return m_transferDate; }
    inline bool TransferDateHasBeenSet() const { return m_transferDateHasBeenSet; }
    inline void SetTransferDate(const Aws::Utils::DateTime& value) { m_transferDateHasBeenSet = true; m_transferDate = value; }
    inline void SetTransferDate(Aws::Utils::DateTime&& value) { m_transferDateHasBeenSet = true; m_transferDate = std::move(value); }
    inline TransferData& WithTransferDate(const Aws::Utils::DateTime& value) { SetTransferDate(value); return *this;}
    inline TransferData& WithTransferDate(Aws::Utils::DateTime&& value) { SetTransferDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the transfer was accepted.</p>
     */
    inline const Aws::Utils::DateTime& GetAcceptDate() const{ return m_acceptDate; }
    inline bool AcceptDateHasBeenSet() const { return m_acceptDateHasBeenSet; }
    inline void SetAcceptDate(const Aws::Utils::DateTime& value) { m_acceptDateHasBeenSet = true; m_acceptDate = value; }
    inline void SetAcceptDate(Aws::Utils::DateTime&& value) { m_acceptDateHasBeenSet = true; m_acceptDate = std::move(value); }
    inline TransferData& WithAcceptDate(const Aws::Utils::DateTime& value) { SetAcceptDate(value); return *this;}
    inline TransferData& WithAcceptDate(Aws::Utils::DateTime&& value) { SetAcceptDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the transfer was rejected.</p>
     */
    inline const Aws::Utils::DateTime& GetRejectDate() const{ return m_rejectDate; }
    inline bool RejectDateHasBeenSet() const { return m_rejectDateHasBeenSet; }
    inline void SetRejectDate(const Aws::Utils::DateTime& value) { m_rejectDateHasBeenSet = true; m_rejectDate = value; }
    inline void SetRejectDate(Aws::Utils::DateTime&& value) { m_rejectDateHasBeenSet = true; m_rejectDate = std::move(value); }
    inline TransferData& WithRejectDate(const Aws::Utils::DateTime& value) { SetRejectDate(value); return *this;}
    inline TransferData& WithRejectDate(Aws::Utils::DateTime&& value) { SetRejectDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_transferMessage;
    bool m_transferMessageHasBeenSet = false;

    Aws::String m_rejectReason;
    bool m_rejectReasonHasBeenSet = false;

    Aws::Utils::DateTime m_transferDate;
    bool m_transferDateHasBeenSet = false;

    Aws::Utils::DateTime m_acceptDate;
    bool m_acceptDateHasBeenSet = false;

    Aws::Utils::DateTime m_rejectDate;
    bool m_rejectDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

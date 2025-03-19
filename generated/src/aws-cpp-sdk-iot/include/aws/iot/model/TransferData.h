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
    AWS_IOT_API TransferData() = default;
    AWS_IOT_API TransferData(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API TransferData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The transfer message.</p>
     */
    inline const Aws::String& GetTransferMessage() const { return m_transferMessage; }
    inline bool TransferMessageHasBeenSet() const { return m_transferMessageHasBeenSet; }
    template<typename TransferMessageT = Aws::String>
    void SetTransferMessage(TransferMessageT&& value) { m_transferMessageHasBeenSet = true; m_transferMessage = std::forward<TransferMessageT>(value); }
    template<typename TransferMessageT = Aws::String>
    TransferData& WithTransferMessage(TransferMessageT&& value) { SetTransferMessage(std::forward<TransferMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the transfer was rejected.</p>
     */
    inline const Aws::String& GetRejectReason() const { return m_rejectReason; }
    inline bool RejectReasonHasBeenSet() const { return m_rejectReasonHasBeenSet; }
    template<typename RejectReasonT = Aws::String>
    void SetRejectReason(RejectReasonT&& value) { m_rejectReasonHasBeenSet = true; m_rejectReason = std::forward<RejectReasonT>(value); }
    template<typename RejectReasonT = Aws::String>
    TransferData& WithRejectReason(RejectReasonT&& value) { SetRejectReason(std::forward<RejectReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the transfer took place.</p>
     */
    inline const Aws::Utils::DateTime& GetTransferDate() const { return m_transferDate; }
    inline bool TransferDateHasBeenSet() const { return m_transferDateHasBeenSet; }
    template<typename TransferDateT = Aws::Utils::DateTime>
    void SetTransferDate(TransferDateT&& value) { m_transferDateHasBeenSet = true; m_transferDate = std::forward<TransferDateT>(value); }
    template<typename TransferDateT = Aws::Utils::DateTime>
    TransferData& WithTransferDate(TransferDateT&& value) { SetTransferDate(std::forward<TransferDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the transfer was accepted.</p>
     */
    inline const Aws::Utils::DateTime& GetAcceptDate() const { return m_acceptDate; }
    inline bool AcceptDateHasBeenSet() const { return m_acceptDateHasBeenSet; }
    template<typename AcceptDateT = Aws::Utils::DateTime>
    void SetAcceptDate(AcceptDateT&& value) { m_acceptDateHasBeenSet = true; m_acceptDate = std::forward<AcceptDateT>(value); }
    template<typename AcceptDateT = Aws::Utils::DateTime>
    TransferData& WithAcceptDate(AcceptDateT&& value) { SetAcceptDate(std::forward<AcceptDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the transfer was rejected.</p>
     */
    inline const Aws::Utils::DateTime& GetRejectDate() const { return m_rejectDate; }
    inline bool RejectDateHasBeenSet() const { return m_rejectDateHasBeenSet; }
    template<typename RejectDateT = Aws::Utils::DateTime>
    void SetRejectDate(RejectDateT&& value) { m_rejectDateHasBeenSet = true; m_rejectDate = std::forward<RejectDateT>(value); }
    template<typename RejectDateT = Aws::Utils::DateTime>
    TransferData& WithRejectDate(RejectDateT&& value) { SetRejectDate(std::forward<RejectDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transferMessage;
    bool m_transferMessageHasBeenSet = false;

    Aws::String m_rejectReason;
    bool m_rejectReasonHasBeenSet = false;

    Aws::Utils::DateTime m_transferDate{};
    bool m_transferDateHasBeenSet = false;

    Aws::Utils::DateTime m_acceptDate{};
    bool m_acceptDateHasBeenSet = false;

    Aws::Utils::DateTime m_rejectDate{};
    bool m_rejectDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

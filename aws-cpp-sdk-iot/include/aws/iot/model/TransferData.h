/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Data used to transfer a certificate to an AWS account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TransferData">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API TransferData
  {
  public:
    TransferData();
    TransferData(Aws::Utils::Json::JsonView jsonValue);
    TransferData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The transfer message.</p>
     */
    inline const Aws::String& GetTransferMessage() const{ return m_transferMessage; }

    /**
     * <p>The transfer message.</p>
     */
    inline bool TransferMessageHasBeenSet() const { return m_transferMessageHasBeenSet; }

    /**
     * <p>The transfer message.</p>
     */
    inline void SetTransferMessage(const Aws::String& value) { m_transferMessageHasBeenSet = true; m_transferMessage = value; }

    /**
     * <p>The transfer message.</p>
     */
    inline void SetTransferMessage(Aws::String&& value) { m_transferMessageHasBeenSet = true; m_transferMessage = std::move(value); }

    /**
     * <p>The transfer message.</p>
     */
    inline void SetTransferMessage(const char* value) { m_transferMessageHasBeenSet = true; m_transferMessage.assign(value); }

    /**
     * <p>The transfer message.</p>
     */
    inline TransferData& WithTransferMessage(const Aws::String& value) { SetTransferMessage(value); return *this;}

    /**
     * <p>The transfer message.</p>
     */
    inline TransferData& WithTransferMessage(Aws::String&& value) { SetTransferMessage(std::move(value)); return *this;}

    /**
     * <p>The transfer message.</p>
     */
    inline TransferData& WithTransferMessage(const char* value) { SetTransferMessage(value); return *this;}


    /**
     * <p>The reason why the transfer was rejected.</p>
     */
    inline const Aws::String& GetRejectReason() const{ return m_rejectReason; }

    /**
     * <p>The reason why the transfer was rejected.</p>
     */
    inline bool RejectReasonHasBeenSet() const { return m_rejectReasonHasBeenSet; }

    /**
     * <p>The reason why the transfer was rejected.</p>
     */
    inline void SetRejectReason(const Aws::String& value) { m_rejectReasonHasBeenSet = true; m_rejectReason = value; }

    /**
     * <p>The reason why the transfer was rejected.</p>
     */
    inline void SetRejectReason(Aws::String&& value) { m_rejectReasonHasBeenSet = true; m_rejectReason = std::move(value); }

    /**
     * <p>The reason why the transfer was rejected.</p>
     */
    inline void SetRejectReason(const char* value) { m_rejectReasonHasBeenSet = true; m_rejectReason.assign(value); }

    /**
     * <p>The reason why the transfer was rejected.</p>
     */
    inline TransferData& WithRejectReason(const Aws::String& value) { SetRejectReason(value); return *this;}

    /**
     * <p>The reason why the transfer was rejected.</p>
     */
    inline TransferData& WithRejectReason(Aws::String&& value) { SetRejectReason(std::move(value)); return *this;}

    /**
     * <p>The reason why the transfer was rejected.</p>
     */
    inline TransferData& WithRejectReason(const char* value) { SetRejectReason(value); return *this;}


    /**
     * <p>The date the transfer took place.</p>
     */
    inline const Aws::Utils::DateTime& GetTransferDate() const{ return m_transferDate; }

    /**
     * <p>The date the transfer took place.</p>
     */
    inline bool TransferDateHasBeenSet() const { return m_transferDateHasBeenSet; }

    /**
     * <p>The date the transfer took place.</p>
     */
    inline void SetTransferDate(const Aws::Utils::DateTime& value) { m_transferDateHasBeenSet = true; m_transferDate = value; }

    /**
     * <p>The date the transfer took place.</p>
     */
    inline void SetTransferDate(Aws::Utils::DateTime&& value) { m_transferDateHasBeenSet = true; m_transferDate = std::move(value); }

    /**
     * <p>The date the transfer took place.</p>
     */
    inline TransferData& WithTransferDate(const Aws::Utils::DateTime& value) { SetTransferDate(value); return *this;}

    /**
     * <p>The date the transfer took place.</p>
     */
    inline TransferData& WithTransferDate(Aws::Utils::DateTime&& value) { SetTransferDate(std::move(value)); return *this;}


    /**
     * <p>The date the transfer was accepted.</p>
     */
    inline const Aws::Utils::DateTime& GetAcceptDate() const{ return m_acceptDate; }

    /**
     * <p>The date the transfer was accepted.</p>
     */
    inline bool AcceptDateHasBeenSet() const { return m_acceptDateHasBeenSet; }

    /**
     * <p>The date the transfer was accepted.</p>
     */
    inline void SetAcceptDate(const Aws::Utils::DateTime& value) { m_acceptDateHasBeenSet = true; m_acceptDate = value; }

    /**
     * <p>The date the transfer was accepted.</p>
     */
    inline void SetAcceptDate(Aws::Utils::DateTime&& value) { m_acceptDateHasBeenSet = true; m_acceptDate = std::move(value); }

    /**
     * <p>The date the transfer was accepted.</p>
     */
    inline TransferData& WithAcceptDate(const Aws::Utils::DateTime& value) { SetAcceptDate(value); return *this;}

    /**
     * <p>The date the transfer was accepted.</p>
     */
    inline TransferData& WithAcceptDate(Aws::Utils::DateTime&& value) { SetAcceptDate(std::move(value)); return *this;}


    /**
     * <p>The date the transfer was rejected.</p>
     */
    inline const Aws::Utils::DateTime& GetRejectDate() const{ return m_rejectDate; }

    /**
     * <p>The date the transfer was rejected.</p>
     */
    inline bool RejectDateHasBeenSet() const { return m_rejectDateHasBeenSet; }

    /**
     * <p>The date the transfer was rejected.</p>
     */
    inline void SetRejectDate(const Aws::Utils::DateTime& value) { m_rejectDateHasBeenSet = true; m_rejectDate = value; }

    /**
     * <p>The date the transfer was rejected.</p>
     */
    inline void SetRejectDate(Aws::Utils::DateTime&& value) { m_rejectDateHasBeenSet = true; m_rejectDate = std::move(value); }

    /**
     * <p>The date the transfer was rejected.</p>
     */
    inline TransferData& WithRejectDate(const Aws::Utils::DateTime& value) { SetRejectDate(value); return *this;}

    /**
     * <p>The date the transfer was rejected.</p>
     */
    inline TransferData& WithRejectDate(Aws::Utils::DateTime&& value) { SetRejectDate(std::move(value)); return *this;}

  private:

    Aws::String m_transferMessage;
    bool m_transferMessageHasBeenSet;

    Aws::String m_rejectReason;
    bool m_rejectReasonHasBeenSet;

    Aws::Utils::DateTime m_transferDate;
    bool m_transferDateHasBeenSet;

    Aws::Utils::DateTime m_acceptDate;
    bool m_acceptDateHasBeenSet;

    Aws::Utils::DateTime m_rejectDate;
    bool m_rejectDateHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

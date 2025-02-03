/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>An address list contains a list of emails and domains that are used in
   * MailManager Ingress endpoints and Rules for email management.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/AddressList">AWS
   * API Reference</a></p>
   */
  class AddressList
  {
  public:
    AWS_MAILMANAGER_API AddressList();
    AWS_MAILMANAGER_API AddressList(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API AddressList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the address list.</p>
     */
    inline const Aws::String& GetAddressListArn() const{ return m_addressListArn; }
    inline bool AddressListArnHasBeenSet() const { return m_addressListArnHasBeenSet; }
    inline void SetAddressListArn(const Aws::String& value) { m_addressListArnHasBeenSet = true; m_addressListArn = value; }
    inline void SetAddressListArn(Aws::String&& value) { m_addressListArnHasBeenSet = true; m_addressListArn = std::move(value); }
    inline void SetAddressListArn(const char* value) { m_addressListArnHasBeenSet = true; m_addressListArn.assign(value); }
    inline AddressList& WithAddressListArn(const Aws::String& value) { SetAddressListArn(value); return *this;}
    inline AddressList& WithAddressListArn(Aws::String&& value) { SetAddressListArn(std::move(value)); return *this;}
    inline AddressList& WithAddressListArn(const char* value) { SetAddressListArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the address list.</p>
     */
    inline const Aws::String& GetAddressListId() const{ return m_addressListId; }
    inline bool AddressListIdHasBeenSet() const { return m_addressListIdHasBeenSet; }
    inline void SetAddressListId(const Aws::String& value) { m_addressListIdHasBeenSet = true; m_addressListId = value; }
    inline void SetAddressListId(Aws::String&& value) { m_addressListIdHasBeenSet = true; m_addressListId = std::move(value); }
    inline void SetAddressListId(const char* value) { m_addressListIdHasBeenSet = true; m_addressListId.assign(value); }
    inline AddressList& WithAddressListId(const Aws::String& value) { SetAddressListId(value); return *this;}
    inline AddressList& WithAddressListId(Aws::String&& value) { SetAddressListId(std::move(value)); return *this;}
    inline AddressList& WithAddressListId(const char* value) { SetAddressListId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of the address list.</p>
     */
    inline const Aws::String& GetAddressListName() const{ return m_addressListName; }
    inline bool AddressListNameHasBeenSet() const { return m_addressListNameHasBeenSet; }
    inline void SetAddressListName(const Aws::String& value) { m_addressListNameHasBeenSet = true; m_addressListName = value; }
    inline void SetAddressListName(Aws::String&& value) { m_addressListNameHasBeenSet = true; m_addressListName = std::move(value); }
    inline void SetAddressListName(const char* value) { m_addressListNameHasBeenSet = true; m_addressListName.assign(value); }
    inline AddressList& WithAddressListName(const Aws::String& value) { SetAddressListName(value); return *this;}
    inline AddressList& WithAddressListName(Aws::String&& value) { SetAddressListName(std::move(value)); return *this;}
    inline AddressList& WithAddressListName(const char* value) { SetAddressListName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the address list was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline AddressList& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline AddressList& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the address list was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }
    inline AddressList& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline AddressList& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_addressListArn;
    bool m_addressListArnHasBeenSet = false;

    Aws::String m_addressListId;
    bool m_addressListIdHasBeenSet = false;

    Aws::String m_addressListName;
    bool m_addressListNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws

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
    AWS_MAILMANAGER_API AddressList() = default;
    AWS_MAILMANAGER_API AddressList(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API AddressList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the address list.</p>
     */
    inline const Aws::String& GetAddressListId() const { return m_addressListId; }
    inline bool AddressListIdHasBeenSet() const { return m_addressListIdHasBeenSet; }
    template<typename AddressListIdT = Aws::String>
    void SetAddressListId(AddressListIdT&& value) { m_addressListIdHasBeenSet = true; m_addressListId = std::forward<AddressListIdT>(value); }
    template<typename AddressListIdT = Aws::String>
    AddressList& WithAddressListId(AddressListIdT&& value) { SetAddressListId(std::forward<AddressListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the address list.</p>
     */
    inline const Aws::String& GetAddressListArn() const { return m_addressListArn; }
    inline bool AddressListArnHasBeenSet() const { return m_addressListArnHasBeenSet; }
    template<typename AddressListArnT = Aws::String>
    void SetAddressListArn(AddressListArnT&& value) { m_addressListArnHasBeenSet = true; m_addressListArn = std::forward<AddressListArnT>(value); }
    template<typename AddressListArnT = Aws::String>
    AddressList& WithAddressListArn(AddressListArnT&& value) { SetAddressListArn(std::forward<AddressListArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of the address list.</p>
     */
    inline const Aws::String& GetAddressListName() const { return m_addressListName; }
    inline bool AddressListNameHasBeenSet() const { return m_addressListNameHasBeenSet; }
    template<typename AddressListNameT = Aws::String>
    void SetAddressListName(AddressListNameT&& value) { m_addressListNameHasBeenSet = true; m_addressListName = std::forward<AddressListNameT>(value); }
    template<typename AddressListNameT = Aws::String>
    AddressList& WithAddressListName(AddressListNameT&& value) { SetAddressListName(std::forward<AddressListNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the address list was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    AddressList& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the address list was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value); }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    AddressList& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_addressListId;
    bool m_addressListIdHasBeenSet = false;

    Aws::String m_addressListArn;
    bool m_addressListArnHasBeenSet = false;

    Aws::String m_addressListName;
    bool m_addressListNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp{};
    bool m_lastUpdatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws

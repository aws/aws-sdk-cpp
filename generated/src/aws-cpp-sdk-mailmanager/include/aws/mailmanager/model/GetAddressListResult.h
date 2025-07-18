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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MailManager
{
namespace Model
{
  class GetAddressListResult
  {
  public:
    AWS_MAILMANAGER_API GetAddressListResult() = default;
    AWS_MAILMANAGER_API GetAddressListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetAddressListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the address list resource.</p>
     */
    inline const Aws::String& GetAddressListId() const { return m_addressListId; }
    template<typename AddressListIdT = Aws::String>
    void SetAddressListId(AddressListIdT&& value) { m_addressListIdHasBeenSet = true; m_addressListId = std::forward<AddressListIdT>(value); }
    template<typename AddressListIdT = Aws::String>
    GetAddressListResult& WithAddressListId(AddressListIdT&& value) { SetAddressListId(std::forward<AddressListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the address list resource.</p>
     */
    inline const Aws::String& GetAddressListArn() const { return m_addressListArn; }
    template<typename AddressListArnT = Aws::String>
    void SetAddressListArn(AddressListArnT&& value) { m_addressListArnHasBeenSet = true; m_addressListArn = std::forward<AddressListArnT>(value); }
    template<typename AddressListArnT = Aws::String>
    GetAddressListResult& WithAddressListArn(AddressListArnT&& value) { SetAddressListArn(std::forward<AddressListArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the address list resource.</p>
     */
    inline const Aws::String& GetAddressListName() const { return m_addressListName; }
    template<typename AddressListNameT = Aws::String>
    void SetAddressListName(AddressListNameT&& value) { m_addressListNameHasBeenSet = true; m_addressListName = std::forward<AddressListNameT>(value); }
    template<typename AddressListNameT = Aws::String>
    GetAddressListResult& WithAddressListName(AddressListNameT&& value) { SetAddressListName(std::forward<AddressListNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date of when then address list was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    GetAddressListResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date of when the address list was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value); }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    GetAddressListResult& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAddressListResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws

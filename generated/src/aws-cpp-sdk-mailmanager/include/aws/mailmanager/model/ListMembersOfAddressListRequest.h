/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/AddressFilter.h>
#include <utility>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   */
  class ListMembersOfAddressListRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API ListMembersOfAddressListRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMembersOfAddressList"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the address list to list the addresses from.</p>
     */
    inline const Aws::String& GetAddressListId() const { return m_addressListId; }
    inline bool AddressListIdHasBeenSet() const { return m_addressListIdHasBeenSet; }
    template<typename AddressListIdT = Aws::String>
    void SetAddressListId(AddressListIdT&& value) { m_addressListIdHasBeenSet = true; m_addressListId = std::forward<AddressListIdT>(value); }
    template<typename AddressListIdT = Aws::String>
    ListMembersOfAddressListRequest& WithAddressListId(AddressListIdT&& value) { SetAddressListId(std::forward<AddressListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter to be used to limit the results.</p>
     */
    inline const AddressFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = AddressFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = AddressFilter>
    ListMembersOfAddressListRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you received a pagination token from a previous call to this API, you can
     * provide it here to continue paginating through the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMembersOfAddressListRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of address list members that are returned per call. You
     * can use NextToken to retrieve the next page of members.</p>
     */
    inline int GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline ListMembersOfAddressListRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}
  private:

    Aws::String m_addressListId;
    bool m_addressListIdHasBeenSet = false;

    AddressFilter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_pageSize{0};
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws

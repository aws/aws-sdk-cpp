/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/AddressList.h>
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
  class ListAddressListsResult
  {
  public:
    AWS_MAILMANAGER_API ListAddressListsResult();
    AWS_MAILMANAGER_API ListAddressListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API ListAddressListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of address lists.</p>
     */
    inline const Aws::Vector<AddressList>& GetAddressLists() const{ return m_addressLists; }
    inline void SetAddressLists(const Aws::Vector<AddressList>& value) { m_addressLists = value; }
    inline void SetAddressLists(Aws::Vector<AddressList>&& value) { m_addressLists = std::move(value); }
    inline ListAddressListsResult& WithAddressLists(const Aws::Vector<AddressList>& value) { SetAddressLists(value); return *this;}
    inline ListAddressListsResult& WithAddressLists(Aws::Vector<AddressList>&& value) { SetAddressLists(std::move(value)); return *this;}
    inline ListAddressListsResult& AddAddressLists(const AddressList& value) { m_addressLists.push_back(value); return *this; }
    inline ListAddressListsResult& AddAddressLists(AddressList&& value) { m_addressLists.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If NextToken is returned, there are more results available. The value of
     * NextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAddressListsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAddressListsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAddressListsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAddressListsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAddressListsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAddressListsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AddressList> m_addressLists;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/AddressBookData.h>
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
namespace AlexaForBusiness
{
namespace Model
{
  class SearchAddressBooksResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API SearchAddressBooksResult();
    AWS_ALEXAFORBUSINESS_API SearchAddressBooksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API SearchAddressBooksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The address books that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline const Aws::Vector<AddressBookData>& GetAddressBooks() const{ return m_addressBooks; }

    /**
     * <p>The address books that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline void SetAddressBooks(const Aws::Vector<AddressBookData>& value) { m_addressBooks = value; }

    /**
     * <p>The address books that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline void SetAddressBooks(Aws::Vector<AddressBookData>&& value) { m_addressBooks = std::move(value); }

    /**
     * <p>The address books that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline SearchAddressBooksResult& WithAddressBooks(const Aws::Vector<AddressBookData>& value) { SetAddressBooks(value); return *this;}

    /**
     * <p>The address books that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline SearchAddressBooksResult& WithAddressBooks(Aws::Vector<AddressBookData>&& value) { SetAddressBooks(std::move(value)); return *this;}

    /**
     * <p>The address books that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline SearchAddressBooksResult& AddAddressBooks(const AddressBookData& value) { m_addressBooks.push_back(value); return *this; }

    /**
     * <p>The address books that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline SearchAddressBooksResult& AddAddressBooks(AddressBookData&& value) { m_addressBooks.push_back(std::move(value)); return *this; }


    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline SearchAddressBooksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline SearchAddressBooksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline SearchAddressBooksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of address books returned.</p>
     */
    inline int GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of address books returned.</p>
     */
    inline void SetTotalCount(int value) { m_totalCount = value; }

    /**
     * <p>The total number of address books returned.</p>
     */
    inline SearchAddressBooksResult& WithTotalCount(int value) { SetTotalCount(value); return *this;}

  private:

    Aws::Vector<AddressBookData> m_addressBooks;

    Aws::String m_nextToken;

    int m_totalCount;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws

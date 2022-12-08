/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/AddressBook.h>
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
  class GetAddressBookResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API GetAddressBookResult();
    AWS_ALEXAFORBUSINESS_API GetAddressBookResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API GetAddressBookResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the requested address book.</p>
     */
    inline const AddressBook& GetAddressBook() const{ return m_addressBook; }

    /**
     * <p>The details of the requested address book.</p>
     */
    inline void SetAddressBook(const AddressBook& value) { m_addressBook = value; }

    /**
     * <p>The details of the requested address book.</p>
     */
    inline void SetAddressBook(AddressBook&& value) { m_addressBook = std::move(value); }

    /**
     * <p>The details of the requested address book.</p>
     */
    inline GetAddressBookResult& WithAddressBook(const AddressBook& value) { SetAddressBook(value); return *this;}

    /**
     * <p>The details of the requested address book.</p>
     */
    inline GetAddressBookResult& WithAddressBook(AddressBook&& value) { SetAddressBook(std::move(value)); return *this;}

  private:

    AddressBook m_addressBook;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws

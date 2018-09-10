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
  class AWS_ALEXAFORBUSINESS_API GetAddressBookResult
  {
  public:
    GetAddressBookResult();
    GetAddressBookResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAddressBookResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

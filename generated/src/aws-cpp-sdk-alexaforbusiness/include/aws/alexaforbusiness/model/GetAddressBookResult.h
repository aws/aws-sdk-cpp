/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/AddressBook.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAddressBookResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAddressBookResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAddressBookResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AddressBook m_addressBook;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws

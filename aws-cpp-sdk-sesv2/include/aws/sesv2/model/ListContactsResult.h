/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/Contact.h>
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
namespace SESV2
{
namespace Model
{
  class ListContactsResult
  {
  public:
    AWS_SESV2_API ListContactsResult();
    AWS_SESV2_API ListContactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListContactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The contacts present in a specific contact list.</p>
     */
    inline const Aws::Vector<Contact>& GetContacts() const{ return m_contacts; }

    /**
     * <p>The contacts present in a specific contact list.</p>
     */
    inline void SetContacts(const Aws::Vector<Contact>& value) { m_contacts = value; }

    /**
     * <p>The contacts present in a specific contact list.</p>
     */
    inline void SetContacts(Aws::Vector<Contact>&& value) { m_contacts = std::move(value); }

    /**
     * <p>The contacts present in a specific contact list.</p>
     */
    inline ListContactsResult& WithContacts(const Aws::Vector<Contact>& value) { SetContacts(value); return *this;}

    /**
     * <p>The contacts present in a specific contact list.</p>
     */
    inline ListContactsResult& WithContacts(Aws::Vector<Contact>&& value) { SetContacts(std::move(value)); return *this;}

    /**
     * <p>The contacts present in a specific contact list.</p>
     */
    inline ListContactsResult& AddContacts(const Contact& value) { m_contacts.push_back(value); return *this; }

    /**
     * <p>The contacts present in a specific contact list.</p>
     */
    inline ListContactsResult& AddContacts(Contact&& value) { m_contacts.push_back(std::move(value)); return *this; }


    /**
     * <p>A string token indicating that there might be additional contacts available
     * to be listed. Copy this token to a subsequent call to <code>ListContacts</code>
     * with the same parameters to retrieve the next page of contacts.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string token indicating that there might be additional contacts available
     * to be listed. Copy this token to a subsequent call to <code>ListContacts</code>
     * with the same parameters to retrieve the next page of contacts.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A string token indicating that there might be additional contacts available
     * to be listed. Copy this token to a subsequent call to <code>ListContacts</code>
     * with the same parameters to retrieve the next page of contacts.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A string token indicating that there might be additional contacts available
     * to be listed. Copy this token to a subsequent call to <code>ListContacts</code>
     * with the same parameters to retrieve the next page of contacts.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A string token indicating that there might be additional contacts available
     * to be listed. Copy this token to a subsequent call to <code>ListContacts</code>
     * with the same parameters to retrieve the next page of contacts.</p>
     */
    inline ListContactsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string token indicating that there might be additional contacts available
     * to be listed. Copy this token to a subsequent call to <code>ListContacts</code>
     * with the same parameters to retrieve the next page of contacts.</p>
     */
    inline ListContactsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A string token indicating that there might be additional contacts available
     * to be listed. Copy this token to a subsequent call to <code>ListContacts</code>
     * with the same parameters to retrieve the next page of contacts.</p>
     */
    inline ListContactsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Contact> m_contacts;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

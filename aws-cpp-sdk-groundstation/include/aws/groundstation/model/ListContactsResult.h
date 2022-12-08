/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/ContactData.h>
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
namespace GroundStation
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListContactsResponse">AWS
   * API Reference</a></p>
   */
  class ListContactsResult
  {
  public:
    AWS_GROUNDSTATION_API ListContactsResult();
    AWS_GROUNDSTATION_API ListContactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API ListContactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of contacts.</p>
     */
    inline const Aws::Vector<ContactData>& GetContactList() const{ return m_contactList; }

    /**
     * <p>List of contacts.</p>
     */
    inline void SetContactList(const Aws::Vector<ContactData>& value) { m_contactList = value; }

    /**
     * <p>List of contacts.</p>
     */
    inline void SetContactList(Aws::Vector<ContactData>&& value) { m_contactList = std::move(value); }

    /**
     * <p>List of contacts.</p>
     */
    inline ListContactsResult& WithContactList(const Aws::Vector<ContactData>& value) { SetContactList(value); return *this;}

    /**
     * <p>List of contacts.</p>
     */
    inline ListContactsResult& WithContactList(Aws::Vector<ContactData>&& value) { SetContactList(std::move(value)); return *this;}

    /**
     * <p>List of contacts.</p>
     */
    inline ListContactsResult& AddContactList(const ContactData& value) { m_contactList.push_back(value); return *this; }

    /**
     * <p>List of contacts.</p>
     */
    inline ListContactsResult& AddContactList(ContactData&& value) { m_contactList.push_back(std::move(value)); return *this; }


    /**
     * <p>Next token returned in the response of a previous <code>ListContacts</code>
     * call. Used to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Next token returned in the response of a previous <code>ListContacts</code>
     * call. Used to get the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Next token returned in the response of a previous <code>ListContacts</code>
     * call. Used to get the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Next token returned in the response of a previous <code>ListContacts</code>
     * call. Used to get the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Next token returned in the response of a previous <code>ListContacts</code>
     * call. Used to get the next page of results.</p>
     */
    inline ListContactsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Next token returned in the response of a previous <code>ListContacts</code>
     * call. Used to get the next page of results.</p>
     */
    inline ListContactsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Next token returned in the response of a previous <code>ListContacts</code>
     * call. Used to get the next page of results.</p>
     */
    inline ListContactsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ContactData> m_contactList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws

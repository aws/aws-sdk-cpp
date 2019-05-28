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
  class AWS_GROUNDSTATION_API ListContactsResult
  {
  public:
    ListContactsResult();
    ListContactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListContactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

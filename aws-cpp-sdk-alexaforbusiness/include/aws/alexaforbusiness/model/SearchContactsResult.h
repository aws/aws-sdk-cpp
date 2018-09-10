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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/ContactData.h>
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
  class AWS_ALEXAFORBUSINESS_API SearchContactsResult
  {
  public:
    SearchContactsResult();
    SearchContactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SearchContactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The contacts that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline const Aws::Vector<ContactData>& GetContacts() const{ return m_contacts; }

    /**
     * <p>The contacts that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline void SetContacts(const Aws::Vector<ContactData>& value) { m_contacts = value; }

    /**
     * <p>The contacts that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline void SetContacts(Aws::Vector<ContactData>&& value) { m_contacts = std::move(value); }

    /**
     * <p>The contacts that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline SearchContactsResult& WithContacts(const Aws::Vector<ContactData>& value) { SetContacts(value); return *this;}

    /**
     * <p>The contacts that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline SearchContactsResult& WithContacts(Aws::Vector<ContactData>&& value) { SetContacts(std::move(value)); return *this;}

    /**
     * <p>The contacts that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline SearchContactsResult& AddContacts(const ContactData& value) { m_contacts.push_back(value); return *this; }

    /**
     * <p>The contacts that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline SearchContactsResult& AddContacts(ContactData&& value) { m_contacts.push_back(std::move(value)); return *this; }


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
    inline SearchContactsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline SearchContactsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline SearchContactsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of contacts returned.</p>
     */
    inline int GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of contacts returned.</p>
     */
    inline void SetTotalCount(int value) { m_totalCount = value; }

    /**
     * <p>The total number of contacts returned.</p>
     */
    inline SearchContactsResult& WithTotalCount(int value) { SetTotalCount(value); return *this;}

  private:

    Aws::Vector<ContactData> m_contacts;

    Aws::String m_nextToken;

    int m_totalCount;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws

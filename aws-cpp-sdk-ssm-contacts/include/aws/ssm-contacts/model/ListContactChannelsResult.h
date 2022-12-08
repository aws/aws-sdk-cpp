/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-contacts/model/ContactChannel.h>
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
namespace SSMContacts
{
namespace Model
{
  class ListContactChannelsResult
  {
  public:
    AWS_SSMCONTACTS_API ListContactChannelsResult();
    AWS_SSMCONTACTS_API ListContactChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API ListContactChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListContactChannelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListContactChannelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListContactChannelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of contact channels related to the specified contact.</p>
     */
    inline const Aws::Vector<ContactChannel>& GetContactChannels() const{ return m_contactChannels; }

    /**
     * <p>A list of contact channels related to the specified contact.</p>
     */
    inline void SetContactChannels(const Aws::Vector<ContactChannel>& value) { m_contactChannels = value; }

    /**
     * <p>A list of contact channels related to the specified contact.</p>
     */
    inline void SetContactChannels(Aws::Vector<ContactChannel>&& value) { m_contactChannels = std::move(value); }

    /**
     * <p>A list of contact channels related to the specified contact.</p>
     */
    inline ListContactChannelsResult& WithContactChannels(const Aws::Vector<ContactChannel>& value) { SetContactChannels(value); return *this;}

    /**
     * <p>A list of contact channels related to the specified contact.</p>
     */
    inline ListContactChannelsResult& WithContactChannels(Aws::Vector<ContactChannel>&& value) { SetContactChannels(std::move(value)); return *this;}

    /**
     * <p>A list of contact channels related to the specified contact.</p>
     */
    inline ListContactChannelsResult& AddContactChannels(const ContactChannel& value) { m_contactChannels.push_back(value); return *this; }

    /**
     * <p>A list of contact channels related to the specified contact.</p>
     */
    inline ListContactChannelsResult& AddContactChannels(ContactChannel&& value) { m_contactChannels.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ContactChannel> m_contactChannels;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectparticipant/model/Item.h>
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
namespace ConnectParticipant
{
namespace Model
{
  class GetTranscriptResult
  {
  public:
    AWS_CONNECTPARTICIPANT_API GetTranscriptResult();
    AWS_CONNECTPARTICIPANT_API GetTranscriptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTPARTICIPANT_API GetTranscriptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The initial contact ID for the contact. </p>
     */
    inline const Aws::String& GetInitialContactId() const{ return m_initialContactId; }

    /**
     * <p>The initial contact ID for the contact. </p>
     */
    inline void SetInitialContactId(const Aws::String& value) { m_initialContactId = value; }

    /**
     * <p>The initial contact ID for the contact. </p>
     */
    inline void SetInitialContactId(Aws::String&& value) { m_initialContactId = std::move(value); }

    /**
     * <p>The initial contact ID for the contact. </p>
     */
    inline void SetInitialContactId(const char* value) { m_initialContactId.assign(value); }

    /**
     * <p>The initial contact ID for the contact. </p>
     */
    inline GetTranscriptResult& WithInitialContactId(const Aws::String& value) { SetInitialContactId(value); return *this;}

    /**
     * <p>The initial contact ID for the contact. </p>
     */
    inline GetTranscriptResult& WithInitialContactId(Aws::String&& value) { SetInitialContactId(std::move(value)); return *this;}

    /**
     * <p>The initial contact ID for the contact. </p>
     */
    inline GetTranscriptResult& WithInitialContactId(const char* value) { SetInitialContactId(value); return *this;}


    /**
     * <p>The list of messages in the session.</p>
     */
    inline const Aws::Vector<Item>& GetTranscript() const{ return m_transcript; }

    /**
     * <p>The list of messages in the session.</p>
     */
    inline void SetTranscript(const Aws::Vector<Item>& value) { m_transcript = value; }

    /**
     * <p>The list of messages in the session.</p>
     */
    inline void SetTranscript(Aws::Vector<Item>&& value) { m_transcript = std::move(value); }

    /**
     * <p>The list of messages in the session.</p>
     */
    inline GetTranscriptResult& WithTranscript(const Aws::Vector<Item>& value) { SetTranscript(value); return *this;}

    /**
     * <p>The list of messages in the session.</p>
     */
    inline GetTranscriptResult& WithTranscript(Aws::Vector<Item>&& value) { SetTranscript(std::move(value)); return *this;}

    /**
     * <p>The list of messages in the session.</p>
     */
    inline GetTranscriptResult& AddTranscript(const Item& value) { m_transcript.push_back(value); return *this; }

    /**
     * <p>The list of messages in the session.</p>
     */
    inline GetTranscriptResult& AddTranscript(Item&& value) { m_transcript.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token. Use the value returned previously in the next
     * subsequent request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token. Use the value returned previously in the next
     * subsequent request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token. Use the value returned previously in the next
     * subsequent request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token. Use the value returned previously in the next
     * subsequent request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token. Use the value returned previously in the next
     * subsequent request to retrieve the next set of results.</p>
     */
    inline GetTranscriptResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token. Use the value returned previously in the next
     * subsequent request to retrieve the next set of results.</p>
     */
    inline GetTranscriptResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token. Use the value returned previously in the next
     * subsequent request to retrieve the next set of results.</p>
     */
    inline GetTranscriptResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_initialContactId;

    Aws::Vector<Item> m_transcript;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws

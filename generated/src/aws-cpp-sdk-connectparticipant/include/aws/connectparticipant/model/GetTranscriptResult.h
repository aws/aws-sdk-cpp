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
    AWS_CONNECTPARTICIPANT_API GetTranscriptResult() = default;
    AWS_CONNECTPARTICIPANT_API GetTranscriptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTPARTICIPANT_API GetTranscriptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The initial contact ID for the contact. </p>
     */
    inline const Aws::String& GetInitialContactId() const { return m_initialContactId; }
    template<typename InitialContactIdT = Aws::String>
    void SetInitialContactId(InitialContactIdT&& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = std::forward<InitialContactIdT>(value); }
    template<typename InitialContactIdT = Aws::String>
    GetTranscriptResult& WithInitialContactId(InitialContactIdT&& value) { SetInitialContactId(std::forward<InitialContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of messages in the session.</p>
     */
    inline const Aws::Vector<Item>& GetTranscript() const { return m_transcript; }
    template<typename TranscriptT = Aws::Vector<Item>>
    void SetTranscript(TranscriptT&& value) { m_transcriptHasBeenSet = true; m_transcript = std::forward<TranscriptT>(value); }
    template<typename TranscriptT = Aws::Vector<Item>>
    GetTranscriptResult& WithTranscript(TranscriptT&& value) { SetTranscript(std::forward<TranscriptT>(value)); return *this;}
    template<typename TranscriptT = Item>
    GetTranscriptResult& AddTranscript(TranscriptT&& value) { m_transcriptHasBeenSet = true; m_transcript.emplace_back(std::forward<TranscriptT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token. Use the value returned previously in the next
     * subsequent request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetTranscriptResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTranscriptResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_initialContactId;
    bool m_initialContactIdHasBeenSet = false;

    Aws::Vector<Item> m_transcript;
    bool m_transcriptHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws

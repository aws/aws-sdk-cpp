/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/MLInputChannelSummary.h>
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
namespace CleanRoomsML
{
namespace Model
{
  class ListMLInputChannelsResult
  {
  public:
    AWS_CLEANROOMSML_API ListMLInputChannelsResult();
    AWS_CLEANROOMSML_API ListMLInputChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListMLInputChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMLInputChannelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMLInputChannelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMLInputChannelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of ML input channels that you wanted.</p>
     */
    inline const Aws::Vector<MLInputChannelSummary>& GetMlInputChannelsList() const{ return m_mlInputChannelsList; }
    inline void SetMlInputChannelsList(const Aws::Vector<MLInputChannelSummary>& value) { m_mlInputChannelsList = value; }
    inline void SetMlInputChannelsList(Aws::Vector<MLInputChannelSummary>&& value) { m_mlInputChannelsList = std::move(value); }
    inline ListMLInputChannelsResult& WithMlInputChannelsList(const Aws::Vector<MLInputChannelSummary>& value) { SetMlInputChannelsList(value); return *this;}
    inline ListMLInputChannelsResult& WithMlInputChannelsList(Aws::Vector<MLInputChannelSummary>&& value) { SetMlInputChannelsList(std::move(value)); return *this;}
    inline ListMLInputChannelsResult& AddMlInputChannelsList(const MLInputChannelSummary& value) { m_mlInputChannelsList.push_back(value); return *this; }
    inline ListMLInputChannelsResult& AddMlInputChannelsList(MLInputChannelSummary&& value) { m_mlInputChannelsList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMLInputChannelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMLInputChannelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMLInputChannelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<MLInputChannelSummary> m_mlInputChannelsList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws

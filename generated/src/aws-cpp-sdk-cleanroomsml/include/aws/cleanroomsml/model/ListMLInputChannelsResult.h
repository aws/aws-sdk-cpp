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
    AWS_CLEANROOMSML_API ListMLInputChannelsResult() = default;
    AWS_CLEANROOMSML_API ListMLInputChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListMLInputChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMLInputChannelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of ML input channels that you wanted.</p>
     */
    inline const Aws::Vector<MLInputChannelSummary>& GetMlInputChannelsList() const { return m_mlInputChannelsList; }
    template<typename MlInputChannelsListT = Aws::Vector<MLInputChannelSummary>>
    void SetMlInputChannelsList(MlInputChannelsListT&& value) { m_mlInputChannelsListHasBeenSet = true; m_mlInputChannelsList = std::forward<MlInputChannelsListT>(value); }
    template<typename MlInputChannelsListT = Aws::Vector<MLInputChannelSummary>>
    ListMLInputChannelsResult& WithMlInputChannelsList(MlInputChannelsListT&& value) { SetMlInputChannelsList(std::forward<MlInputChannelsListT>(value)); return *this;}
    template<typename MlInputChannelsListT = MLInputChannelSummary>
    ListMLInputChannelsResult& AddMlInputChannelsList(MlInputChannelsListT&& value) { m_mlInputChannelsListHasBeenSet = true; m_mlInputChannelsList.emplace_back(std::forward<MlInputChannelsListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMLInputChannelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<MLInputChannelSummary> m_mlInputChannelsList;
    bool m_mlInputChannelsListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws

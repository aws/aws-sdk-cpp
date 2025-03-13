/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/BotChannelAssociation.h>
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
namespace LexModelBuildingService
{
namespace Model
{
  class GetBotChannelAssociationsResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetBotChannelAssociationsResult() = default;
    AWS_LEXMODELBUILDINGSERVICE_API GetBotChannelAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetBotChannelAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects, one for each association, that provides information
     * about the Amazon Lex bot and its association with the channel. </p>
     */
    inline const Aws::Vector<BotChannelAssociation>& GetBotChannelAssociations() const { return m_botChannelAssociations; }
    template<typename BotChannelAssociationsT = Aws::Vector<BotChannelAssociation>>
    void SetBotChannelAssociations(BotChannelAssociationsT&& value) { m_botChannelAssociationsHasBeenSet = true; m_botChannelAssociations = std::forward<BotChannelAssociationsT>(value); }
    template<typename BotChannelAssociationsT = Aws::Vector<BotChannelAssociation>>
    GetBotChannelAssociationsResult& WithBotChannelAssociations(BotChannelAssociationsT&& value) { SetBotChannelAssociations(std::forward<BotChannelAssociationsT>(value)); return *this;}
    template<typename BotChannelAssociationsT = BotChannelAssociation>
    GetBotChannelAssociationsResult& AddBotChannelAssociations(BotChannelAssociationsT&& value) { m_botChannelAssociationsHasBeenSet = true; m_botChannelAssociations.emplace_back(std::forward<BotChannelAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that fetches the next page of associations. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of associations, specify the pagination token
     * in the next request. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetBotChannelAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBotChannelAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BotChannelAssociation> m_botChannelAssociations;
    bool m_botChannelAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws

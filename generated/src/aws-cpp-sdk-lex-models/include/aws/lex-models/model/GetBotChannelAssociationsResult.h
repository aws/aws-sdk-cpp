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
    AWS_LEXMODELBUILDINGSERVICE_API GetBotChannelAssociationsResult();
    AWS_LEXMODELBUILDINGSERVICE_API GetBotChannelAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetBotChannelAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects, one for each association, that provides information
     * about the Amazon Lex bot and its association with the channel. </p>
     */
    inline const Aws::Vector<BotChannelAssociation>& GetBotChannelAssociations() const{ return m_botChannelAssociations; }

    /**
     * <p>An array of objects, one for each association, that provides information
     * about the Amazon Lex bot and its association with the channel. </p>
     */
    inline void SetBotChannelAssociations(const Aws::Vector<BotChannelAssociation>& value) { m_botChannelAssociations = value; }

    /**
     * <p>An array of objects, one for each association, that provides information
     * about the Amazon Lex bot and its association with the channel. </p>
     */
    inline void SetBotChannelAssociations(Aws::Vector<BotChannelAssociation>&& value) { m_botChannelAssociations = std::move(value); }

    /**
     * <p>An array of objects, one for each association, that provides information
     * about the Amazon Lex bot and its association with the channel. </p>
     */
    inline GetBotChannelAssociationsResult& WithBotChannelAssociations(const Aws::Vector<BotChannelAssociation>& value) { SetBotChannelAssociations(value); return *this;}

    /**
     * <p>An array of objects, one for each association, that provides information
     * about the Amazon Lex bot and its association with the channel. </p>
     */
    inline GetBotChannelAssociationsResult& WithBotChannelAssociations(Aws::Vector<BotChannelAssociation>&& value) { SetBotChannelAssociations(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each association, that provides information
     * about the Amazon Lex bot and its association with the channel. </p>
     */
    inline GetBotChannelAssociationsResult& AddBotChannelAssociations(const BotChannelAssociation& value) { m_botChannelAssociations.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each association, that provides information
     * about the Amazon Lex bot and its association with the channel. </p>
     */
    inline GetBotChannelAssociationsResult& AddBotChannelAssociations(BotChannelAssociation&& value) { m_botChannelAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that fetches the next page of associations. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of associations, specify the pagination token
     * in the next request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that fetches the next page of associations. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of associations, specify the pagination token
     * in the next request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that fetches the next page of associations. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of associations, specify the pagination token
     * in the next request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that fetches the next page of associations. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of associations, specify the pagination token
     * in the next request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that fetches the next page of associations. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of associations, specify the pagination token
     * in the next request. </p>
     */
    inline GetBotChannelAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that fetches the next page of associations. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of associations, specify the pagination token
     * in the next request. </p>
     */
    inline GetBotChannelAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that fetches the next page of associations. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of associations, specify the pagination token
     * in the next request. </p>
     */
    inline GetBotChannelAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BotChannelAssociation> m_botChannelAssociations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws

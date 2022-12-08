/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/IntentMetadata.h>
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
  class GetIntentsResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetIntentsResult();
    AWS_LEXMODELBUILDINGSERVICE_API GetIntentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetIntentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>Intent</code> objects. For more information, see
     * <a>PutBot</a>.</p>
     */
    inline const Aws::Vector<IntentMetadata>& GetIntents() const{ return m_intents; }

    /**
     * <p>An array of <code>Intent</code> objects. For more information, see
     * <a>PutBot</a>.</p>
     */
    inline void SetIntents(const Aws::Vector<IntentMetadata>& value) { m_intents = value; }

    /**
     * <p>An array of <code>Intent</code> objects. For more information, see
     * <a>PutBot</a>.</p>
     */
    inline void SetIntents(Aws::Vector<IntentMetadata>&& value) { m_intents = std::move(value); }

    /**
     * <p>An array of <code>Intent</code> objects. For more information, see
     * <a>PutBot</a>.</p>
     */
    inline GetIntentsResult& WithIntents(const Aws::Vector<IntentMetadata>& value) { SetIntents(value); return *this;}

    /**
     * <p>An array of <code>Intent</code> objects. For more information, see
     * <a>PutBot</a>.</p>
     */
    inline GetIntentsResult& WithIntents(Aws::Vector<IntentMetadata>&& value) { SetIntents(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Intent</code> objects. For more information, see
     * <a>PutBot</a>.</p>
     */
    inline GetIntentsResult& AddIntents(const IntentMetadata& value) { m_intents.push_back(value); return *this; }

    /**
     * <p>An array of <code>Intent</code> objects. For more information, see
     * <a>PutBot</a>.</p>
     */
    inline GetIntentsResult& AddIntents(IntentMetadata&& value) { m_intents.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, the response includes a pagination token that
     * you can specify in your next request to fetch the next page of intents. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, the response includes a pagination token that
     * you can specify in your next request to fetch the next page of intents. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, the response includes a pagination token that
     * you can specify in your next request to fetch the next page of intents. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, the response includes a pagination token that
     * you can specify in your next request to fetch the next page of intents. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, the response includes a pagination token that
     * you can specify in your next request to fetch the next page of intents. </p>
     */
    inline GetIntentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, the response includes a pagination token that
     * you can specify in your next request to fetch the next page of intents. </p>
     */
    inline GetIntentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, the response includes a pagination token that
     * you can specify in your next request to fetch the next page of intents. </p>
     */
    inline GetIntentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<IntentMetadata> m_intents;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws

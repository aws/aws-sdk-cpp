/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/DefaultVocabulary.h>
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
namespace Connect
{
namespace Model
{
  class ListDefaultVocabulariesResult
  {
  public:
    AWS_CONNECT_API ListDefaultVocabulariesResult();
    AWS_CONNECT_API ListDefaultVocabulariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListDefaultVocabulariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of default vocabularies.</p>
     */
    inline const Aws::Vector<DefaultVocabulary>& GetDefaultVocabularyList() const{ return m_defaultVocabularyList; }

    /**
     * <p>A list of default vocabularies.</p>
     */
    inline void SetDefaultVocabularyList(const Aws::Vector<DefaultVocabulary>& value) { m_defaultVocabularyList = value; }

    /**
     * <p>A list of default vocabularies.</p>
     */
    inline void SetDefaultVocabularyList(Aws::Vector<DefaultVocabulary>&& value) { m_defaultVocabularyList = std::move(value); }

    /**
     * <p>A list of default vocabularies.</p>
     */
    inline ListDefaultVocabulariesResult& WithDefaultVocabularyList(const Aws::Vector<DefaultVocabulary>& value) { SetDefaultVocabularyList(value); return *this;}

    /**
     * <p>A list of default vocabularies.</p>
     */
    inline ListDefaultVocabulariesResult& WithDefaultVocabularyList(Aws::Vector<DefaultVocabulary>&& value) { SetDefaultVocabularyList(std::move(value)); return *this;}

    /**
     * <p>A list of default vocabularies.</p>
     */
    inline ListDefaultVocabulariesResult& AddDefaultVocabularyList(const DefaultVocabulary& value) { m_defaultVocabularyList.push_back(value); return *this; }

    /**
     * <p>A list of default vocabularies.</p>
     */
    inline ListDefaultVocabulariesResult& AddDefaultVocabularyList(DefaultVocabulary&& value) { m_defaultVocabularyList.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListDefaultVocabulariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListDefaultVocabulariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListDefaultVocabulariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DefaultVocabulary> m_defaultVocabularyList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

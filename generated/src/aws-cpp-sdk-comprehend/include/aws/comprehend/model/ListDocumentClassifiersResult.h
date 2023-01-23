/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/DocumentClassifierProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class ListDocumentClassifiersResult
  {
  public:
    AWS_COMPREHEND_API ListDocumentClassifiersResult();
    AWS_COMPREHEND_API ListDocumentClassifiersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListDocumentClassifiersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline const Aws::Vector<DocumentClassifierProperties>& GetDocumentClassifierPropertiesList() const{ return m_documentClassifierPropertiesList; }

    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline void SetDocumentClassifierPropertiesList(const Aws::Vector<DocumentClassifierProperties>& value) { m_documentClassifierPropertiesList = value; }

    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline void SetDocumentClassifierPropertiesList(Aws::Vector<DocumentClassifierProperties>&& value) { m_documentClassifierPropertiesList = std::move(value); }

    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline ListDocumentClassifiersResult& WithDocumentClassifierPropertiesList(const Aws::Vector<DocumentClassifierProperties>& value) { SetDocumentClassifierPropertiesList(value); return *this;}

    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline ListDocumentClassifiersResult& WithDocumentClassifierPropertiesList(Aws::Vector<DocumentClassifierProperties>&& value) { SetDocumentClassifierPropertiesList(std::move(value)); return *this;}

    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline ListDocumentClassifiersResult& AddDocumentClassifierPropertiesList(const DocumentClassifierProperties& value) { m_documentClassifierPropertiesList.push_back(value); return *this; }

    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline ListDocumentClassifiersResult& AddDocumentClassifierPropertiesList(DocumentClassifierProperties&& value) { m_documentClassifierPropertiesList.push_back(std::move(value)); return *this; }


    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListDocumentClassifiersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListDocumentClassifiersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListDocumentClassifiersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DocumentClassifierProperties> m_documentClassifierPropertiesList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

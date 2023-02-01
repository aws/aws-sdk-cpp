/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/DocumentClassificationJobProperties.h>
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
  class ListDocumentClassificationJobsResult
  {
  public:
    AWS_COMPREHEND_API ListDocumentClassificationJobsResult();
    AWS_COMPREHEND_API ListDocumentClassificationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListDocumentClassificationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline const Aws::Vector<DocumentClassificationJobProperties>& GetDocumentClassificationJobPropertiesList() const{ return m_documentClassificationJobPropertiesList; }

    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline void SetDocumentClassificationJobPropertiesList(const Aws::Vector<DocumentClassificationJobProperties>& value) { m_documentClassificationJobPropertiesList = value; }

    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline void SetDocumentClassificationJobPropertiesList(Aws::Vector<DocumentClassificationJobProperties>&& value) { m_documentClassificationJobPropertiesList = std::move(value); }

    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline ListDocumentClassificationJobsResult& WithDocumentClassificationJobPropertiesList(const Aws::Vector<DocumentClassificationJobProperties>& value) { SetDocumentClassificationJobPropertiesList(value); return *this;}

    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline ListDocumentClassificationJobsResult& WithDocumentClassificationJobPropertiesList(Aws::Vector<DocumentClassificationJobProperties>&& value) { SetDocumentClassificationJobPropertiesList(std::move(value)); return *this;}

    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline ListDocumentClassificationJobsResult& AddDocumentClassificationJobPropertiesList(const DocumentClassificationJobProperties& value) { m_documentClassificationJobPropertiesList.push_back(value); return *this; }

    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline ListDocumentClassificationJobsResult& AddDocumentClassificationJobPropertiesList(DocumentClassificationJobProperties&& value) { m_documentClassificationJobPropertiesList.push_back(std::move(value)); return *this; }


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
    inline ListDocumentClassificationJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListDocumentClassificationJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListDocumentClassificationJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DocumentClassificationJobProperties> m_documentClassificationJobPropertiesList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

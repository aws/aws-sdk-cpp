/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/AnnotationImportJobItem.h>
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
namespace Omics
{
namespace Model
{
  class ListAnnotationImportJobsResult
  {
  public:
    AWS_OMICS_API ListAnnotationImportJobsResult();
    AWS_OMICS_API ListAnnotationImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListAnnotationImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of jobs.</p>
     */
    inline const Aws::Vector<AnnotationImportJobItem>& GetAnnotationImportJobs() const{ return m_annotationImportJobs; }

    /**
     * <p>A list of jobs.</p>
     */
    inline void SetAnnotationImportJobs(const Aws::Vector<AnnotationImportJobItem>& value) { m_annotationImportJobs = value; }

    /**
     * <p>A list of jobs.</p>
     */
    inline void SetAnnotationImportJobs(Aws::Vector<AnnotationImportJobItem>&& value) { m_annotationImportJobs = std::move(value); }

    /**
     * <p>A list of jobs.</p>
     */
    inline ListAnnotationImportJobsResult& WithAnnotationImportJobs(const Aws::Vector<AnnotationImportJobItem>& value) { SetAnnotationImportJobs(value); return *this;}

    /**
     * <p>A list of jobs.</p>
     */
    inline ListAnnotationImportJobsResult& WithAnnotationImportJobs(Aws::Vector<AnnotationImportJobItem>&& value) { SetAnnotationImportJobs(std::move(value)); return *this;}

    /**
     * <p>A list of jobs.</p>
     */
    inline ListAnnotationImportJobsResult& AddAnnotationImportJobs(const AnnotationImportJobItem& value) { m_annotationImportJobs.push_back(value); return *this; }

    /**
     * <p>A list of jobs.</p>
     */
    inline ListAnnotationImportJobsResult& AddAnnotationImportJobs(AnnotationImportJobItem&& value) { m_annotationImportJobs.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListAnnotationImportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListAnnotationImportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListAnnotationImportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AnnotationImportJobItem> m_annotationImportJobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws

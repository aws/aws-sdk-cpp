/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ExportReadSetJobDetail.h>
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
  class ListReadSetExportJobsResult
  {
  public:
    AWS_OMICS_API ListReadSetExportJobsResult();
    AWS_OMICS_API ListReadSetExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListReadSetExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of jobs.</p>
     */
    inline const Aws::Vector<ExportReadSetJobDetail>& GetExportJobs() const{ return m_exportJobs; }

    /**
     * <p>A list of jobs.</p>
     */
    inline void SetExportJobs(const Aws::Vector<ExportReadSetJobDetail>& value) { m_exportJobs = value; }

    /**
     * <p>A list of jobs.</p>
     */
    inline void SetExportJobs(Aws::Vector<ExportReadSetJobDetail>&& value) { m_exportJobs = std::move(value); }

    /**
     * <p>A list of jobs.</p>
     */
    inline ListReadSetExportJobsResult& WithExportJobs(const Aws::Vector<ExportReadSetJobDetail>& value) { SetExportJobs(value); return *this;}

    /**
     * <p>A list of jobs.</p>
     */
    inline ListReadSetExportJobsResult& WithExportJobs(Aws::Vector<ExportReadSetJobDetail>&& value) { SetExportJobs(std::move(value)); return *this;}

    /**
     * <p>A list of jobs.</p>
     */
    inline ListReadSetExportJobsResult& AddExportJobs(const ExportReadSetJobDetail& value) { m_exportJobs.push_back(value); return *this; }

    /**
     * <p>A list of jobs.</p>
     */
    inline ListReadSetExportJobsResult& AddExportJobs(ExportReadSetJobDetail&& value) { m_exportJobs.push_back(std::move(value)); return *this; }


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
    inline ListReadSetExportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListReadSetExportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListReadSetExportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ExportReadSetJobDetail> m_exportJobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws

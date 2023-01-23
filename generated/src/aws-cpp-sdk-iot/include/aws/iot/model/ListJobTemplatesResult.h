/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/JobTemplateSummary.h>
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
namespace IoT
{
namespace Model
{
  class ListJobTemplatesResult
  {
  public:
    AWS_IOT_API ListJobTemplatesResult();
    AWS_IOT_API ListJobTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListJobTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects that contain information about the job templates.</p>
     */
    inline const Aws::Vector<JobTemplateSummary>& GetJobTemplates() const{ return m_jobTemplates; }

    /**
     * <p>A list of objects that contain information about the job templates.</p>
     */
    inline void SetJobTemplates(const Aws::Vector<JobTemplateSummary>& value) { m_jobTemplates = value; }

    /**
     * <p>A list of objects that contain information about the job templates.</p>
     */
    inline void SetJobTemplates(Aws::Vector<JobTemplateSummary>&& value) { m_jobTemplates = std::move(value); }

    /**
     * <p>A list of objects that contain information about the job templates.</p>
     */
    inline ListJobTemplatesResult& WithJobTemplates(const Aws::Vector<JobTemplateSummary>& value) { SetJobTemplates(value); return *this;}

    /**
     * <p>A list of objects that contain information about the job templates.</p>
     */
    inline ListJobTemplatesResult& WithJobTemplates(Aws::Vector<JobTemplateSummary>&& value) { SetJobTemplates(std::move(value)); return *this;}

    /**
     * <p>A list of objects that contain information about the job templates.</p>
     */
    inline ListJobTemplatesResult& AddJobTemplates(const JobTemplateSummary& value) { m_jobTemplates.push_back(value); return *this; }

    /**
     * <p>A list of objects that contain information about the job templates.</p>
     */
    inline ListJobTemplatesResult& AddJobTemplates(JobTemplateSummary&& value) { m_jobTemplates.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListJobTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListJobTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListJobTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<JobTemplateSummary> m_jobTemplates;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

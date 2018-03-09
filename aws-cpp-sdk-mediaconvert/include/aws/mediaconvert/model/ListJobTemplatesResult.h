/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/JobTemplate.h>
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
namespace MediaConvert
{
namespace Model
{
  class AWS_MEDIACONVERT_API ListJobTemplatesResult
  {
  public:
    ListJobTemplatesResult();
    ListJobTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListJobTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * List of Job templates.
     */
    inline const Aws::Vector<JobTemplate>& GetJobTemplates() const{ return m_jobTemplates; }

    /**
     * List of Job templates.
     */
    inline void SetJobTemplates(const Aws::Vector<JobTemplate>& value) { m_jobTemplates = value; }

    /**
     * List of Job templates.
     */
    inline void SetJobTemplates(Aws::Vector<JobTemplate>&& value) { m_jobTemplates = std::move(value); }

    /**
     * List of Job templates.
     */
    inline ListJobTemplatesResult& WithJobTemplates(const Aws::Vector<JobTemplate>& value) { SetJobTemplates(value); return *this;}

    /**
     * List of Job templates.
     */
    inline ListJobTemplatesResult& WithJobTemplates(Aws::Vector<JobTemplate>&& value) { SetJobTemplates(std::move(value)); return *this;}

    /**
     * List of Job templates.
     */
    inline ListJobTemplatesResult& AddJobTemplates(const JobTemplate& value) { m_jobTemplates.push_back(value); return *this; }

    /**
     * List of Job templates.
     */
    inline ListJobTemplatesResult& AddJobTemplates(JobTemplate&& value) { m_jobTemplates.push_back(std::move(value)); return *this; }


    /**
     * Use this string to request the next batch of job templates.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * Use this string to request the next batch of job templates.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * Use this string to request the next batch of job templates.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * Use this string to request the next batch of job templates.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * Use this string to request the next batch of job templates.
     */
    inline ListJobTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * Use this string to request the next batch of job templates.
     */
    inline ListJobTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * Use this string to request the next batch of job templates.
     */
    inline ListJobTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<JobTemplate> m_jobTemplates;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws

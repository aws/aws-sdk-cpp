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
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glacier/model/GlacierJobDescription.h>
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
namespace Glacier
{
namespace Model
{
  /**
   * <p>Contains the Amazon S3 Glacier response to your request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ListJobsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GLACIER_API ListJobsResult
  {
  public:
    ListJobsResult();
    ListJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of job objects. Each job object contains metadata describing the
     * job.</p>
     */
    inline const Aws::Vector<GlacierJobDescription>& GetJobList() const{ return m_jobList; }

    /**
     * <p>A list of job objects. Each job object contains metadata describing the
     * job.</p>
     */
    inline void SetJobList(const Aws::Vector<GlacierJobDescription>& value) { m_jobList = value; }

    /**
     * <p>A list of job objects. Each job object contains metadata describing the
     * job.</p>
     */
    inline void SetJobList(Aws::Vector<GlacierJobDescription>&& value) { m_jobList = std::move(value); }

    /**
     * <p>A list of job objects. Each job object contains metadata describing the
     * job.</p>
     */
    inline ListJobsResult& WithJobList(const Aws::Vector<GlacierJobDescription>& value) { SetJobList(value); return *this;}

    /**
     * <p>A list of job objects. Each job object contains metadata describing the
     * job.</p>
     */
    inline ListJobsResult& WithJobList(Aws::Vector<GlacierJobDescription>&& value) { SetJobList(std::move(value)); return *this;}

    /**
     * <p>A list of job objects. Each job object contains metadata describing the
     * job.</p>
     */
    inline ListJobsResult& AddJobList(const GlacierJobDescription& value) { m_jobList.push_back(value); return *this; }

    /**
     * <p>A list of job objects. Each job object contains metadata describing the
     * job.</p>
     */
    inline ListJobsResult& AddJobList(GlacierJobDescription&& value) { m_jobList.push_back(std::move(value)); return *this; }


    /**
     * <p> An opaque string used for pagination that specifies the job at which the
     * listing of jobs should begin. You get the <code>marker</code> value from a
     * previous List Jobs response. You only need to include the marker if you are
     * continuing the pagination of the results started in a previous List Jobs
     * request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An opaque string used for pagination that specifies the job at which the
     * listing of jobs should begin. You get the <code>marker</code> value from a
     * previous List Jobs response. You only need to include the marker if you are
     * continuing the pagination of the results started in a previous List Jobs
     * request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p> An opaque string used for pagination that specifies the job at which the
     * listing of jobs should begin. You get the <code>marker</code> value from a
     * previous List Jobs response. You only need to include the marker if you are
     * continuing the pagination of the results started in a previous List Jobs
     * request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p> An opaque string used for pagination that specifies the job at which the
     * listing of jobs should begin. You get the <code>marker</code> value from a
     * previous List Jobs response. You only need to include the marker if you are
     * continuing the pagination of the results started in a previous List Jobs
     * request. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p> An opaque string used for pagination that specifies the job at which the
     * listing of jobs should begin. You get the <code>marker</code> value from a
     * previous List Jobs response. You only need to include the marker if you are
     * continuing the pagination of the results started in a previous List Jobs
     * request. </p>
     */
    inline ListJobsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An opaque string used for pagination that specifies the job at which the
     * listing of jobs should begin. You get the <code>marker</code> value from a
     * previous List Jobs response. You only need to include the marker if you are
     * continuing the pagination of the results started in a previous List Jobs
     * request. </p>
     */
    inline ListJobsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p> An opaque string used for pagination that specifies the job at which the
     * listing of jobs should begin. You get the <code>marker</code> value from a
     * previous List Jobs response. You only need to include the marker if you are
     * continuing the pagination of the results started in a previous List Jobs
     * request. </p>
     */
    inline ListJobsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<GlacierJobDescription> m_jobList;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListJobsResult
  {
  public:
    AWS_GLACIER_API ListJobsResult();
    AWS_GLACIER_API ListJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API ListJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of job objects. Each job object contains metadata describing the
     * job.</p>
     */
    inline const Aws::Vector<GlacierJobDescription>& GetJobList() const{ return m_jobList; }
    inline void SetJobList(const Aws::Vector<GlacierJobDescription>& value) { m_jobList = value; }
    inline void SetJobList(Aws::Vector<GlacierJobDescription>&& value) { m_jobList = std::move(value); }
    inline ListJobsResult& WithJobList(const Aws::Vector<GlacierJobDescription>& value) { SetJobList(value); return *this;}
    inline ListJobsResult& WithJobList(Aws::Vector<GlacierJobDescription>&& value) { SetJobList(std::move(value)); return *this;}
    inline ListJobsResult& AddJobList(const GlacierJobDescription& value) { m_jobList.push_back(value); return *this; }
    inline ListJobsResult& AddJobList(GlacierJobDescription&& value) { m_jobList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An opaque string used for pagination that specifies the job at which the
     * listing of jobs should begin. You get the <code>marker</code> value from a
     * previous List Jobs response. You only need to include the marker if you are
     * continuing the pagination of the results started in a previous List Jobs
     * request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline ListJobsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline ListJobsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline ListJobsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<GlacierJobDescription> m_jobList;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws

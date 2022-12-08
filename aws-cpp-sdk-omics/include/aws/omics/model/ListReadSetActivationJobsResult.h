/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ActivateReadSetJobItem.h>
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
  class ListReadSetActivationJobsResult
  {
  public:
    AWS_OMICS_API ListReadSetActivationJobsResult();
    AWS_OMICS_API ListReadSetActivationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListReadSetActivationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of jobs.</p>
     */
    inline const Aws::Vector<ActivateReadSetJobItem>& GetActivationJobs() const{ return m_activationJobs; }

    /**
     * <p>A list of jobs.</p>
     */
    inline void SetActivationJobs(const Aws::Vector<ActivateReadSetJobItem>& value) { m_activationJobs = value; }

    /**
     * <p>A list of jobs.</p>
     */
    inline void SetActivationJobs(Aws::Vector<ActivateReadSetJobItem>&& value) { m_activationJobs = std::move(value); }

    /**
     * <p>A list of jobs.</p>
     */
    inline ListReadSetActivationJobsResult& WithActivationJobs(const Aws::Vector<ActivateReadSetJobItem>& value) { SetActivationJobs(value); return *this;}

    /**
     * <p>A list of jobs.</p>
     */
    inline ListReadSetActivationJobsResult& WithActivationJobs(Aws::Vector<ActivateReadSetJobItem>&& value) { SetActivationJobs(std::move(value)); return *this;}

    /**
     * <p>A list of jobs.</p>
     */
    inline ListReadSetActivationJobsResult& AddActivationJobs(const ActivateReadSetJobItem& value) { m_activationJobs.push_back(value); return *this; }

    /**
     * <p>A list of jobs.</p>
     */
    inline ListReadSetActivationJobsResult& AddActivationJobs(ActivateReadSetJobItem&& value) { m_activationJobs.push_back(std::move(value)); return *this; }


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
    inline ListReadSetActivationJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListReadSetActivationJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListReadSetActivationJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ActivateReadSetJobItem> m_activationJobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws

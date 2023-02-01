/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/TargetedSentimentDetectionJobProperties.h>
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
  class ListTargetedSentimentDetectionJobsResult
  {
  public:
    AWS_COMPREHEND_API ListTargetedSentimentDetectionJobsResult();
    AWS_COMPREHEND_API ListTargetedSentimentDetectionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListTargetedSentimentDetectionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline const Aws::Vector<TargetedSentimentDetectionJobProperties>& GetTargetedSentimentDetectionJobPropertiesList() const{ return m_targetedSentimentDetectionJobPropertiesList; }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline void SetTargetedSentimentDetectionJobPropertiesList(const Aws::Vector<TargetedSentimentDetectionJobProperties>& value) { m_targetedSentimentDetectionJobPropertiesList = value; }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline void SetTargetedSentimentDetectionJobPropertiesList(Aws::Vector<TargetedSentimentDetectionJobProperties>&& value) { m_targetedSentimentDetectionJobPropertiesList = std::move(value); }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListTargetedSentimentDetectionJobsResult& WithTargetedSentimentDetectionJobPropertiesList(const Aws::Vector<TargetedSentimentDetectionJobProperties>& value) { SetTargetedSentimentDetectionJobPropertiesList(value); return *this;}

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListTargetedSentimentDetectionJobsResult& WithTargetedSentimentDetectionJobPropertiesList(Aws::Vector<TargetedSentimentDetectionJobProperties>&& value) { SetTargetedSentimentDetectionJobPropertiesList(std::move(value)); return *this;}

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListTargetedSentimentDetectionJobsResult& AddTargetedSentimentDetectionJobPropertiesList(const TargetedSentimentDetectionJobProperties& value) { m_targetedSentimentDetectionJobPropertiesList.push_back(value); return *this; }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListTargetedSentimentDetectionJobsResult& AddTargetedSentimentDetectionJobPropertiesList(TargetedSentimentDetectionJobProperties&& value) { m_targetedSentimentDetectionJobPropertiesList.push_back(std::move(value)); return *this; }


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
    inline ListTargetedSentimentDetectionJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListTargetedSentimentDetectionJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListTargetedSentimentDetectionJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TargetedSentimentDetectionJobProperties> m_targetedSentimentDetectionJobPropertiesList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

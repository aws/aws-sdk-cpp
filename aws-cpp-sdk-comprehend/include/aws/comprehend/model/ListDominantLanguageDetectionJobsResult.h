/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/DominantLanguageDetectionJobProperties.h>
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
  class ListDominantLanguageDetectionJobsResult
  {
  public:
    AWS_COMPREHEND_API ListDominantLanguageDetectionJobsResult();
    AWS_COMPREHEND_API ListDominantLanguageDetectionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListDominantLanguageDetectionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline const Aws::Vector<DominantLanguageDetectionJobProperties>& GetDominantLanguageDetectionJobPropertiesList() const{ return m_dominantLanguageDetectionJobPropertiesList; }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline void SetDominantLanguageDetectionJobPropertiesList(const Aws::Vector<DominantLanguageDetectionJobProperties>& value) { m_dominantLanguageDetectionJobPropertiesList = value; }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline void SetDominantLanguageDetectionJobPropertiesList(Aws::Vector<DominantLanguageDetectionJobProperties>&& value) { m_dominantLanguageDetectionJobPropertiesList = std::move(value); }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListDominantLanguageDetectionJobsResult& WithDominantLanguageDetectionJobPropertiesList(const Aws::Vector<DominantLanguageDetectionJobProperties>& value) { SetDominantLanguageDetectionJobPropertiesList(value); return *this;}

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListDominantLanguageDetectionJobsResult& WithDominantLanguageDetectionJobPropertiesList(Aws::Vector<DominantLanguageDetectionJobProperties>&& value) { SetDominantLanguageDetectionJobPropertiesList(std::move(value)); return *this;}

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListDominantLanguageDetectionJobsResult& AddDominantLanguageDetectionJobPropertiesList(const DominantLanguageDetectionJobProperties& value) { m_dominantLanguageDetectionJobPropertiesList.push_back(value); return *this; }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListDominantLanguageDetectionJobsResult& AddDominantLanguageDetectionJobPropertiesList(DominantLanguageDetectionJobProperties&& value) { m_dominantLanguageDetectionJobPropertiesList.push_back(std::move(value)); return *this; }


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
    inline ListDominantLanguageDetectionJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListDominantLanguageDetectionJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListDominantLanguageDetectionJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DominantLanguageDetectionJobProperties> m_dominantLanguageDetectionJobPropertiesList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

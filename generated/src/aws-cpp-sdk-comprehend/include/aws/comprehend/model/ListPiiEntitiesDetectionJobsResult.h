/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/PiiEntitiesDetectionJobProperties.h>
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
  class ListPiiEntitiesDetectionJobsResult
  {
  public:
    AWS_COMPREHEND_API ListPiiEntitiesDetectionJobsResult();
    AWS_COMPREHEND_API ListPiiEntitiesDetectionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListPiiEntitiesDetectionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline const Aws::Vector<PiiEntitiesDetectionJobProperties>& GetPiiEntitiesDetectionJobPropertiesList() const{ return m_piiEntitiesDetectionJobPropertiesList; }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline void SetPiiEntitiesDetectionJobPropertiesList(const Aws::Vector<PiiEntitiesDetectionJobProperties>& value) { m_piiEntitiesDetectionJobPropertiesList = value; }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline void SetPiiEntitiesDetectionJobPropertiesList(Aws::Vector<PiiEntitiesDetectionJobProperties>&& value) { m_piiEntitiesDetectionJobPropertiesList = std::move(value); }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListPiiEntitiesDetectionJobsResult& WithPiiEntitiesDetectionJobPropertiesList(const Aws::Vector<PiiEntitiesDetectionJobProperties>& value) { SetPiiEntitiesDetectionJobPropertiesList(value); return *this;}

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListPiiEntitiesDetectionJobsResult& WithPiiEntitiesDetectionJobPropertiesList(Aws::Vector<PiiEntitiesDetectionJobProperties>&& value) { SetPiiEntitiesDetectionJobPropertiesList(std::move(value)); return *this;}

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListPiiEntitiesDetectionJobsResult& AddPiiEntitiesDetectionJobPropertiesList(const PiiEntitiesDetectionJobProperties& value) { m_piiEntitiesDetectionJobPropertiesList.push_back(value); return *this; }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListPiiEntitiesDetectionJobsResult& AddPiiEntitiesDetectionJobPropertiesList(PiiEntitiesDetectionJobProperties&& value) { m_piiEntitiesDetectionJobPropertiesList.push_back(std::move(value)); return *this; }


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
    inline ListPiiEntitiesDetectionJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListPiiEntitiesDetectionJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListPiiEntitiesDetectionJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PiiEntitiesDetectionJobProperties> m_piiEntitiesDetectionJobPropertiesList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

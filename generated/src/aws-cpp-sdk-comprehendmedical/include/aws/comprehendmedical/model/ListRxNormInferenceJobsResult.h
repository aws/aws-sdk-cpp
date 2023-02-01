/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehendmedical/model/ComprehendMedicalAsyncJobProperties.h>
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
namespace ComprehendMedical
{
namespace Model
{
  class ListRxNormInferenceJobsResult
  {
  public:
    AWS_COMPREHENDMEDICAL_API ListRxNormInferenceJobsResult();
    AWS_COMPREHENDMEDICAL_API ListRxNormInferenceJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHENDMEDICAL_API ListRxNormInferenceJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The maximum number of results to return in each page. The default is 100.</p>
     */
    inline const Aws::Vector<ComprehendMedicalAsyncJobProperties>& GetComprehendMedicalAsyncJobPropertiesList() const{ return m_comprehendMedicalAsyncJobPropertiesList; }

    /**
     * <p>The maximum number of results to return in each page. The default is 100.</p>
     */
    inline void SetComprehendMedicalAsyncJobPropertiesList(const Aws::Vector<ComprehendMedicalAsyncJobProperties>& value) { m_comprehendMedicalAsyncJobPropertiesList = value; }

    /**
     * <p>The maximum number of results to return in each page. The default is 100.</p>
     */
    inline void SetComprehendMedicalAsyncJobPropertiesList(Aws::Vector<ComprehendMedicalAsyncJobProperties>&& value) { m_comprehendMedicalAsyncJobPropertiesList = std::move(value); }

    /**
     * <p>The maximum number of results to return in each page. The default is 100.</p>
     */
    inline ListRxNormInferenceJobsResult& WithComprehendMedicalAsyncJobPropertiesList(const Aws::Vector<ComprehendMedicalAsyncJobProperties>& value) { SetComprehendMedicalAsyncJobPropertiesList(value); return *this;}

    /**
     * <p>The maximum number of results to return in each page. The default is 100.</p>
     */
    inline ListRxNormInferenceJobsResult& WithComprehendMedicalAsyncJobPropertiesList(Aws::Vector<ComprehendMedicalAsyncJobProperties>&& value) { SetComprehendMedicalAsyncJobPropertiesList(std::move(value)); return *this;}

    /**
     * <p>The maximum number of results to return in each page. The default is 100.</p>
     */
    inline ListRxNormInferenceJobsResult& AddComprehendMedicalAsyncJobPropertiesList(const ComprehendMedicalAsyncJobProperties& value) { m_comprehendMedicalAsyncJobPropertiesList.push_back(value); return *this; }

    /**
     * <p>The maximum number of results to return in each page. The default is 100.</p>
     */
    inline ListRxNormInferenceJobsResult& AddComprehendMedicalAsyncJobPropertiesList(ComprehendMedicalAsyncJobProperties&& value) { m_comprehendMedicalAsyncJobPropertiesList.push_back(std::move(value)); return *this; }


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
    inline ListRxNormInferenceJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListRxNormInferenceJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListRxNormInferenceJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ComprehendMedicalAsyncJobProperties> m_comprehendMedicalAsyncJobPropertiesList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws

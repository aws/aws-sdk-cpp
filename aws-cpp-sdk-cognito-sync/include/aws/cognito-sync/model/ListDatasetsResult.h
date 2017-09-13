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
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-sync/model/Dataset.h>
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
namespace CognitoSync
{
namespace Model
{
  /**
   * Returned for a successful ListDatasets request.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/ListDatasetsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOSYNC_API ListDatasetsResult
  {
  public:
    ListDatasetsResult();
    ListDatasetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDatasetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A set of datasets.
     */
    inline const Aws::Vector<Dataset>& GetDatasets() const{ return m_datasets; }

    /**
     * A set of datasets.
     */
    inline void SetDatasets(const Aws::Vector<Dataset>& value) { m_datasets = value; }

    /**
     * A set of datasets.
     */
    inline void SetDatasets(Aws::Vector<Dataset>&& value) { m_datasets = std::move(value); }

    /**
     * A set of datasets.
     */
    inline ListDatasetsResult& WithDatasets(const Aws::Vector<Dataset>& value) { SetDatasets(value); return *this;}

    /**
     * A set of datasets.
     */
    inline ListDatasetsResult& WithDatasets(Aws::Vector<Dataset>&& value) { SetDatasets(std::move(value)); return *this;}

    /**
     * A set of datasets.
     */
    inline ListDatasetsResult& AddDatasets(const Dataset& value) { m_datasets.push_back(value); return *this; }

    /**
     * A set of datasets.
     */
    inline ListDatasetsResult& AddDatasets(Dataset&& value) { m_datasets.push_back(std::move(value)); return *this; }


    /**
     * Number of datasets returned.
     */
    inline int GetCount() const{ return m_count; }

    /**
     * Number of datasets returned.
     */
    inline void SetCount(int value) { m_count = value; }

    /**
     * Number of datasets returned.
     */
    inline ListDatasetsResult& WithCount(int value) { SetCount(value); return *this;}


    /**
     * A pagination token for obtaining the next page of results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline ListDatasetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline ListDatasetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline ListDatasetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Dataset> m_datasets;

    int m_count;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws

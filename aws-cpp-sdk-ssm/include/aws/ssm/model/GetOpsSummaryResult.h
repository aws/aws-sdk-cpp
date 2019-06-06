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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/OpsEntity.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API GetOpsSummaryResult
  {
  public:
    GetOpsSummaryResult();
    GetOpsSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetOpsSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of aggregated and filtered OpsItems.</p>
     */
    inline const Aws::Vector<OpsEntity>& GetEntities() const{ return m_entities; }

    /**
     * <p>The list of aggregated and filtered OpsItems.</p>
     */
    inline void SetEntities(const Aws::Vector<OpsEntity>& value) { m_entities = value; }

    /**
     * <p>The list of aggregated and filtered OpsItems.</p>
     */
    inline void SetEntities(Aws::Vector<OpsEntity>&& value) { m_entities = std::move(value); }

    /**
     * <p>The list of aggregated and filtered OpsItems.</p>
     */
    inline GetOpsSummaryResult& WithEntities(const Aws::Vector<OpsEntity>& value) { SetEntities(value); return *this;}

    /**
     * <p>The list of aggregated and filtered OpsItems.</p>
     */
    inline GetOpsSummaryResult& WithEntities(Aws::Vector<OpsEntity>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>The list of aggregated and filtered OpsItems.</p>
     */
    inline GetOpsSummaryResult& AddEntities(const OpsEntity& value) { m_entities.push_back(value); return *this; }

    /**
     * <p>The list of aggregated and filtered OpsItems.</p>
     */
    inline GetOpsSummaryResult& AddEntities(OpsEntity&& value) { m_entities.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline GetOpsSummaryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline GetOpsSummaryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline GetOpsSummaryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<OpsEntity> m_entities;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

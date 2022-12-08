/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fis/model/TargetResourceTypeSummary.h>
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
namespace FIS
{
namespace Model
{
  class ListTargetResourceTypesResult
  {
  public:
    AWS_FIS_API ListTargetResourceTypesResult();
    AWS_FIS_API ListTargetResourceTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API ListTargetResourceTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The target resource types.</p>
     */
    inline const Aws::Vector<TargetResourceTypeSummary>& GetTargetResourceTypes() const{ return m_targetResourceTypes; }

    /**
     * <p>The target resource types.</p>
     */
    inline void SetTargetResourceTypes(const Aws::Vector<TargetResourceTypeSummary>& value) { m_targetResourceTypes = value; }

    /**
     * <p>The target resource types.</p>
     */
    inline void SetTargetResourceTypes(Aws::Vector<TargetResourceTypeSummary>&& value) { m_targetResourceTypes = std::move(value); }

    /**
     * <p>The target resource types.</p>
     */
    inline ListTargetResourceTypesResult& WithTargetResourceTypes(const Aws::Vector<TargetResourceTypeSummary>& value) { SetTargetResourceTypes(value); return *this;}

    /**
     * <p>The target resource types.</p>
     */
    inline ListTargetResourceTypesResult& WithTargetResourceTypes(Aws::Vector<TargetResourceTypeSummary>&& value) { SetTargetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>The target resource types.</p>
     */
    inline ListTargetResourceTypesResult& AddTargetResourceTypes(const TargetResourceTypeSummary& value) { m_targetResourceTypes.push_back(value); return *this; }

    /**
     * <p>The target resource types.</p>
     */
    inline ListTargetResourceTypesResult& AddTargetResourceTypes(TargetResourceTypeSummary&& value) { m_targetResourceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListTargetResourceTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListTargetResourceTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListTargetResourceTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TargetResourceTypeSummary> m_targetResourceTypes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws

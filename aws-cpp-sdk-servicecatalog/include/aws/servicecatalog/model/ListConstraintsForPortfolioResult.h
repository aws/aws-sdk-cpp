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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ConstraintDetail.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API ListConstraintsForPortfolioResult
  {
  public:
    ListConstraintsForPortfolioResult();
    ListConstraintsForPortfolioResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListConstraintsForPortfolioResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the constraints.</p>
     */
    inline const Aws::Vector<ConstraintDetail>& GetConstraintDetails() const{ return m_constraintDetails; }

    /**
     * <p>Information about the constraints.</p>
     */
    inline void SetConstraintDetails(const Aws::Vector<ConstraintDetail>& value) { m_constraintDetails = value; }

    /**
     * <p>Information about the constraints.</p>
     */
    inline void SetConstraintDetails(Aws::Vector<ConstraintDetail>&& value) { m_constraintDetails = std::move(value); }

    /**
     * <p>Information about the constraints.</p>
     */
    inline ListConstraintsForPortfolioResult& WithConstraintDetails(const Aws::Vector<ConstraintDetail>& value) { SetConstraintDetails(value); return *this;}

    /**
     * <p>Information about the constraints.</p>
     */
    inline ListConstraintsForPortfolioResult& WithConstraintDetails(Aws::Vector<ConstraintDetail>&& value) { SetConstraintDetails(std::move(value)); return *this;}

    /**
     * <p>Information about the constraints.</p>
     */
    inline ListConstraintsForPortfolioResult& AddConstraintDetails(const ConstraintDetail& value) { m_constraintDetails.push_back(value); return *this; }

    /**
     * <p>Information about the constraints.</p>
     */
    inline ListConstraintsForPortfolioResult& AddConstraintDetails(ConstraintDetail&& value) { m_constraintDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListConstraintsForPortfolioResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListConstraintsForPortfolioResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListConstraintsForPortfolioResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<ConstraintDetail> m_constraintDetails;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws

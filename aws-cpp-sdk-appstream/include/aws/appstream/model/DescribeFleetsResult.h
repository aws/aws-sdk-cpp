﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/Fleet.h>

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
namespace AppStream
{
namespace Model
{
  class AWS_APPSTREAM_API DescribeFleetsResult
  {
  public:
    DescribeFleetsResult();
    DescribeFleetsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeFleetsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The list of fleet details.</p>
     */
    inline const Aws::Vector<Fleet>& GetFleets() const{ return m_fleets; }

    /**
     * <p>The list of fleet details.</p>
     */
    inline void SetFleets(const Aws::Vector<Fleet>& value) { m_fleets = value; }

    /**
     * <p>The list of fleet details.</p>
     */
    inline void SetFleets(Aws::Vector<Fleet>&& value) { m_fleets = value; }

    /**
     * <p>The list of fleet details.</p>
     */
    inline DescribeFleetsResult& WithFleets(const Aws::Vector<Fleet>& value) { SetFleets(value); return *this;}

    /**
     * <p>The list of fleet details.</p>
     */
    inline DescribeFleetsResult& WithFleets(Aws::Vector<Fleet>&& value) { SetFleets(value); return *this;}

    /**
     * <p>The list of fleet details.</p>
     */
    inline DescribeFleetsResult& AddFleets(const Fleet& value) { m_fleets.push_back(value); return *this; }

    /**
     * <p>The list of fleet details.</p>
     */
    inline DescribeFleetsResult& AddFleets(Fleet&& value) { m_fleets.push_back(value); return *this; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeFleetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeFleetsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeFleetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Fleet> m_fleets;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws

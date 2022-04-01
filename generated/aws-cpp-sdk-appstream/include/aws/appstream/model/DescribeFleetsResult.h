﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/Fleet.h>
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
namespace AppStream
{
namespace Model
{
  class AWS_APPSTREAM_API DescribeFleetsResult
  {
  public:
    DescribeFleetsResult();
    DescribeFleetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeFleetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the fleets.</p>
     */
    inline const Aws::Vector<Fleet>& GetFleets() const{ return m_fleets; }

    /**
     * <p>Information about the fleets.</p>
     */
    inline void SetFleets(const Aws::Vector<Fleet>& value) { m_fleets = value; }

    /**
     * <p>Information about the fleets.</p>
     */
    inline void SetFleets(Aws::Vector<Fleet>&& value) { m_fleets = std::move(value); }

    /**
     * <p>Information about the fleets.</p>
     */
    inline DescribeFleetsResult& WithFleets(const Aws::Vector<Fleet>& value) { SetFleets(value); return *this;}

    /**
     * <p>Information about the fleets.</p>
     */
    inline DescribeFleetsResult& WithFleets(Aws::Vector<Fleet>&& value) { SetFleets(std::move(value)); return *this;}

    /**
     * <p>Information about the fleets.</p>
     */
    inline DescribeFleetsResult& AddFleets(const Fleet& value) { m_fleets.push_back(value); return *this; }

    /**
     * <p>Information about the fleets.</p>
     */
    inline DescribeFleetsResult& AddFleets(Fleet&& value) { m_fleets.push_back(std::move(value)); return *this; }


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
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

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
    inline DescribeFleetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

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

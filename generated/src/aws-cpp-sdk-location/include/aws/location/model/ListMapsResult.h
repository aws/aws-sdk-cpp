/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/ListMapsResponseEntry.h>
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
namespace LocationService
{
namespace Model
{
  class ListMapsResult
  {
  public:
    AWS_LOCATIONSERVICE_API ListMapsResult();
    AWS_LOCATIONSERVICE_API ListMapsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API ListMapsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains a list of maps in your AWS account</p>
     */
    inline const Aws::Vector<ListMapsResponseEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>Contains a list of maps in your AWS account</p>
     */
    inline void SetEntries(const Aws::Vector<ListMapsResponseEntry>& value) { m_entries = value; }

    /**
     * <p>Contains a list of maps in your AWS account</p>
     */
    inline void SetEntries(Aws::Vector<ListMapsResponseEntry>&& value) { m_entries = std::move(value); }

    /**
     * <p>Contains a list of maps in your AWS account</p>
     */
    inline ListMapsResult& WithEntries(const Aws::Vector<ListMapsResponseEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>Contains a list of maps in your AWS account</p>
     */
    inline ListMapsResult& WithEntries(Aws::Vector<ListMapsResponseEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>Contains a list of maps in your AWS account</p>
     */
    inline ListMapsResult& AddEntries(const ListMapsResponseEntry& value) { m_entries.push_back(value); return *this; }

    /**
     * <p>Contains a list of maps in your AWS account</p>
     */
    inline ListMapsResult& AddEntries(ListMapsResponseEntry&& value) { m_entries.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline ListMapsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline ListMapsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline ListMapsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ListMapsResponseEntry> m_entries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws

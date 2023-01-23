/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{
  class ListDimensionsResult
  {
  public:
    AWS_IOT_API ListDimensionsResult();
    AWS_IOT_API ListDimensionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListDimensionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the names of the defined dimensions. Use
     * <code>DescribeDimension</code> to get details for a dimension.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDimensionNames() const{ return m_dimensionNames; }

    /**
     * <p>A list of the names of the defined dimensions. Use
     * <code>DescribeDimension</code> to get details for a dimension.</p>
     */
    inline void SetDimensionNames(const Aws::Vector<Aws::String>& value) { m_dimensionNames = value; }

    /**
     * <p>A list of the names of the defined dimensions. Use
     * <code>DescribeDimension</code> to get details for a dimension.</p>
     */
    inline void SetDimensionNames(Aws::Vector<Aws::String>&& value) { m_dimensionNames = std::move(value); }

    /**
     * <p>A list of the names of the defined dimensions. Use
     * <code>DescribeDimension</code> to get details for a dimension.</p>
     */
    inline ListDimensionsResult& WithDimensionNames(const Aws::Vector<Aws::String>& value) { SetDimensionNames(value); return *this;}

    /**
     * <p>A list of the names of the defined dimensions. Use
     * <code>DescribeDimension</code> to get details for a dimension.</p>
     */
    inline ListDimensionsResult& WithDimensionNames(Aws::Vector<Aws::String>&& value) { SetDimensionNames(std::move(value)); return *this;}

    /**
     * <p>A list of the names of the defined dimensions. Use
     * <code>DescribeDimension</code> to get details for a dimension.</p>
     */
    inline ListDimensionsResult& AddDimensionNames(const Aws::String& value) { m_dimensionNames.push_back(value); return *this; }

    /**
     * <p>A list of the names of the defined dimensions. Use
     * <code>DescribeDimension</code> to get details for a dimension.</p>
     */
    inline ListDimensionsResult& AddDimensionNames(Aws::String&& value) { m_dimensionNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the names of the defined dimensions. Use
     * <code>DescribeDimension</code> to get details for a dimension.</p>
     */
    inline ListDimensionsResult& AddDimensionNames(const char* value) { m_dimensionNames.push_back(value); return *this; }


    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListDimensionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListDimensionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListDimensionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_dimensionNames;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

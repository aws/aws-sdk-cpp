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
    AWS_IOT_API ListDimensionsResult() = default;
    AWS_IOT_API ListDimensionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListDimensionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the names of the defined dimensions. Use
     * <code>DescribeDimension</code> to get details for a dimension.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDimensionNames() const { return m_dimensionNames; }
    template<typename DimensionNamesT = Aws::Vector<Aws::String>>
    void SetDimensionNames(DimensionNamesT&& value) { m_dimensionNamesHasBeenSet = true; m_dimensionNames = std::forward<DimensionNamesT>(value); }
    template<typename DimensionNamesT = Aws::Vector<Aws::String>>
    ListDimensionsResult& WithDimensionNames(DimensionNamesT&& value) { SetDimensionNames(std::forward<DimensionNamesT>(value)); return *this;}
    template<typename DimensionNamesT = Aws::String>
    ListDimensionsResult& AddDimensionNames(DimensionNamesT&& value) { m_dimensionNamesHasBeenSet = true; m_dimensionNames.emplace_back(std::forward<DimensionNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDimensionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDimensionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_dimensionNames;
    bool m_dimensionNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

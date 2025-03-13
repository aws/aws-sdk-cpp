/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
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
namespace CloudDirectory
{
namespace Model
{
  class ListFacetNamesResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ListFacetNamesResult() = default;
    AWS_CLOUDDIRECTORY_API ListFacetNamesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ListFacetNamesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The names of facets that exist within the schema.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFacetNames() const { return m_facetNames; }
    template<typename FacetNamesT = Aws::Vector<Aws::String>>
    void SetFacetNames(FacetNamesT&& value) { m_facetNamesHasBeenSet = true; m_facetNames = std::forward<FacetNamesT>(value); }
    template<typename FacetNamesT = Aws::Vector<Aws::String>>
    ListFacetNamesResult& WithFacetNames(FacetNamesT&& value) { SetFacetNames(std::forward<FacetNamesT>(value)); return *this;}
    template<typename FacetNamesT = Aws::String>
    ListFacetNamesResult& AddFacetNames(FacetNamesT&& value) { m_facetNamesHasBeenSet = true; m_facetNames.emplace_back(std::forward<FacetNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFacetNamesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFacetNamesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_facetNames;
    bool m_facetNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws

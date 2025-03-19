/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
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
namespace EKS
{
namespace Model
{
  class ListFargateProfilesResult
  {
  public:
    AWS_EKS_API ListFargateProfilesResult() = default;
    AWS_EKS_API ListFargateProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API ListFargateProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of all of the Fargate profiles associated with the specified
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFargateProfileNames() const { return m_fargateProfileNames; }
    template<typename FargateProfileNamesT = Aws::Vector<Aws::String>>
    void SetFargateProfileNames(FargateProfileNamesT&& value) { m_fargateProfileNamesHasBeenSet = true; m_fargateProfileNames = std::forward<FargateProfileNamesT>(value); }
    template<typename FargateProfileNamesT = Aws::Vector<Aws::String>>
    ListFargateProfilesResult& WithFargateProfileNames(FargateProfileNamesT&& value) { SetFargateProfileNames(std::forward<FargateProfileNamesT>(value)); return *this;}
    template<typename FargateProfileNamesT = Aws::String>
    ListFargateProfilesResult& AddFargateProfileNames(FargateProfileNamesT&& value) { m_fargateProfileNamesHasBeenSet = true; m_fargateProfileNames.emplace_back(std::forward<FargateProfileNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated request,
     * where <code>maxResults</code> was used and the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. This value is null when there are no
     * more results to return.</p>  <p>This token should be treated as an opaque
     * identifier that is used only to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFargateProfilesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFargateProfilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_fargateProfileNames;
    bool m_fargateProfileNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws

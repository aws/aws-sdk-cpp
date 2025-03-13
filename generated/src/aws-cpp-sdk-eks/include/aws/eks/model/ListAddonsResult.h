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
  class ListAddonsResult
  {
  public:
    AWS_EKS_API ListAddonsResult() = default;
    AWS_EKS_API ListAddonsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API ListAddonsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of installed add-ons.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddons() const { return m_addons; }
    template<typename AddonsT = Aws::Vector<Aws::String>>
    void SetAddons(AddonsT&& value) { m_addonsHasBeenSet = true; m_addons = std::forward<AddonsT>(value); }
    template<typename AddonsT = Aws::Vector<Aws::String>>
    ListAddonsResult& WithAddons(AddonsT&& value) { SetAddons(std::forward<AddonsT>(value)); return *this;}
    template<typename AddonsT = Aws::String>
    ListAddonsResult& AddAddons(AddonsT&& value) { m_addonsHasBeenSet = true; m_addons.emplace_back(std::forward<AddonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListAddons</code> request. When the results of a <code>ListAddons</code>
     * request exceed <code>maxResults</code>, you can use this value to retrieve the
     * next page of results. This value is <code>null</code> when there are no more
     * results to return.</p>  <p>This token should be treated as an opaque
     * identifier that is used only to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAddonsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAddonsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_addons;
    bool m_addonsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class ListCrossAccountResourceAccountsResult
  {
  public:
    AWS_GLOBALACCELERATOR_API ListCrossAccountResourceAccountsResult() = default;
    AWS_GLOBALACCELERATOR_API ListCrossAccountResourceAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API ListCrossAccountResourceAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The account IDs of principals (resource owners) in a cross-account attachment
     * who can work with resources listed in the same attachment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceOwnerAwsAccountIds() const { return m_resourceOwnerAwsAccountIds; }
    template<typename ResourceOwnerAwsAccountIdsT = Aws::Vector<Aws::String>>
    void SetResourceOwnerAwsAccountIds(ResourceOwnerAwsAccountIdsT&& value) { m_resourceOwnerAwsAccountIdsHasBeenSet = true; m_resourceOwnerAwsAccountIds = std::forward<ResourceOwnerAwsAccountIdsT>(value); }
    template<typename ResourceOwnerAwsAccountIdsT = Aws::Vector<Aws::String>>
    ListCrossAccountResourceAccountsResult& WithResourceOwnerAwsAccountIds(ResourceOwnerAwsAccountIdsT&& value) { SetResourceOwnerAwsAccountIds(std::forward<ResourceOwnerAwsAccountIdsT>(value)); return *this;}
    template<typename ResourceOwnerAwsAccountIdsT = Aws::String>
    ListCrossAccountResourceAccountsResult& AddResourceOwnerAwsAccountIds(ResourceOwnerAwsAccountIdsT&& value) { m_resourceOwnerAwsAccountIdsHasBeenSet = true; m_resourceOwnerAwsAccountIds.emplace_back(std::forward<ResourceOwnerAwsAccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCrossAccountResourceAccountsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_resourceOwnerAwsAccountIds;
    bool m_resourceOwnerAwsAccountIdsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws

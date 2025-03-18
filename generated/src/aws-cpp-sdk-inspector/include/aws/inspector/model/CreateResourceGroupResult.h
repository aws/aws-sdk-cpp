/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
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
namespace Inspector
{
namespace Model
{
  class CreateResourceGroupResult
  {
  public:
    AWS_INSPECTOR_API CreateResourceGroupResult() = default;
    AWS_INSPECTOR_API CreateResourceGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API CreateResourceGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN that specifies the resource group that is created.</p>
     */
    inline const Aws::String& GetResourceGroupArn() const { return m_resourceGroupArn; }
    template<typename ResourceGroupArnT = Aws::String>
    void SetResourceGroupArn(ResourceGroupArnT&& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = std::forward<ResourceGroupArnT>(value); }
    template<typename ResourceGroupArnT = Aws::String>
    CreateResourceGroupResult& WithResourceGroupArn(ResourceGroupArnT&& value) { SetResourceGroupArn(std::forward<ResourceGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateResourceGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceGroupArn;
    bool m_resourceGroupArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws

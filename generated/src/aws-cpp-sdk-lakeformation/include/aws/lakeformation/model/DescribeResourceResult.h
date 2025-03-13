/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/ResourceInfo.h>
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
namespace LakeFormation
{
namespace Model
{
  class DescribeResourceResult
  {
  public:
    AWS_LAKEFORMATION_API DescribeResourceResult() = default;
    AWS_LAKEFORMATION_API DescribeResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API DescribeResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure containing information about an Lake Formation resource.</p>
     */
    inline const ResourceInfo& GetResourceInfo() const { return m_resourceInfo; }
    template<typename ResourceInfoT = ResourceInfo>
    void SetResourceInfo(ResourceInfoT&& value) { m_resourceInfoHasBeenSet = true; m_resourceInfo = std::forward<ResourceInfoT>(value); }
    template<typename ResourceInfoT = ResourceInfo>
    DescribeResourceResult& WithResourceInfo(ResourceInfoT&& value) { SetResourceInfo(std::forward<ResourceInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeResourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResourceInfo m_resourceInfo;
    bool m_resourceInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws

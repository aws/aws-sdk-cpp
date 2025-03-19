/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/ResourceSet.h>
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
namespace FMS
{
namespace Model
{
  class GetResourceSetResult
  {
  public:
    AWS_FMS_API GetResourceSetResult() = default;
    AWS_FMS_API GetResourceSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API GetResourceSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the specified resource set.</p>
     */
    inline const ResourceSet& GetResourceSet() const { return m_resourceSet; }
    template<typename ResourceSetT = ResourceSet>
    void SetResourceSet(ResourceSetT&& value) { m_resourceSetHasBeenSet = true; m_resourceSet = std::forward<ResourceSetT>(value); }
    template<typename ResourceSetT = ResourceSet>
    GetResourceSetResult& WithResourceSet(ResourceSetT&& value) { SetResourceSet(std::forward<ResourceSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource set.</p>
     */
    inline const Aws::String& GetResourceSetArn() const { return m_resourceSetArn; }
    template<typename ResourceSetArnT = Aws::String>
    void SetResourceSetArn(ResourceSetArnT&& value) { m_resourceSetArnHasBeenSet = true; m_resourceSetArn = std::forward<ResourceSetArnT>(value); }
    template<typename ResourceSetArnT = Aws::String>
    GetResourceSetResult& WithResourceSetArn(ResourceSetArnT&& value) { SetResourceSetArn(std::forward<ResourceSetArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourceSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResourceSet m_resourceSet;
    bool m_resourceSetHasBeenSet = false;

    Aws::String m_resourceSetArn;
    bool m_resourceSetArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws

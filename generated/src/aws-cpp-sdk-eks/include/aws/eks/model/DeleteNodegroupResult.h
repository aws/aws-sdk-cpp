﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/Nodegroup.h>
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
  class DeleteNodegroupResult
  {
  public:
    AWS_EKS_API DeleteNodegroupResult();
    AWS_EKS_API DeleteNodegroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API DeleteNodegroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The full description of your deleted node group.</p>
     */
    inline const Nodegroup& GetNodegroup() const{ return m_nodegroup; }
    inline void SetNodegroup(const Nodegroup& value) { m_nodegroup = value; }
    inline void SetNodegroup(Nodegroup&& value) { m_nodegroup = std::move(value); }
    inline DeleteNodegroupResult& WithNodegroup(const Nodegroup& value) { SetNodegroup(value); return *this;}
    inline DeleteNodegroupResult& WithNodegroup(Nodegroup&& value) { SetNodegroup(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteNodegroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteNodegroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteNodegroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Nodegroup m_nodegroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws

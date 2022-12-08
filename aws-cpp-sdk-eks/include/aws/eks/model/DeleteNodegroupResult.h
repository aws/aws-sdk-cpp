/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/Nodegroup.h>
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


    /**
     * <p>The full description of your deleted node group.</p>
     */
    inline const Nodegroup& GetNodegroup() const{ return m_nodegroup; }

    /**
     * <p>The full description of your deleted node group.</p>
     */
    inline void SetNodegroup(const Nodegroup& value) { m_nodegroup = value; }

    /**
     * <p>The full description of your deleted node group.</p>
     */
    inline void SetNodegroup(Nodegroup&& value) { m_nodegroup = std::move(value); }

    /**
     * <p>The full description of your deleted node group.</p>
     */
    inline DeleteNodegroupResult& WithNodegroup(const Nodegroup& value) { SetNodegroup(value); return *this;}

    /**
     * <p>The full description of your deleted node group.</p>
     */
    inline DeleteNodegroupResult& WithNodegroup(Nodegroup&& value) { SetNodegroup(std::move(value)); return *this;}

  private:

    Nodegroup m_nodegroup;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws

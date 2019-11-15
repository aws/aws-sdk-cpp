/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EKS_API CreateNodegroupResult
  {
  public:
    CreateNodegroupResult();
    CreateNodegroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateNodegroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of your new node group.</p>
     */
    inline const Nodegroup& GetNodegroup() const{ return m_nodegroup; }

    /**
     * <p>The full description of your new node group.</p>
     */
    inline void SetNodegroup(const Nodegroup& value) { m_nodegroup = value; }

    /**
     * <p>The full description of your new node group.</p>
     */
    inline void SetNodegroup(Nodegroup&& value) { m_nodegroup = std::move(value); }

    /**
     * <p>The full description of your new node group.</p>
     */
    inline CreateNodegroupResult& WithNodegroup(const Nodegroup& value) { SetNodegroup(value); return *this;}

    /**
     * <p>The full description of your new node group.</p>
     */
    inline CreateNodegroupResult& WithNodegroup(Nodegroup&& value) { SetNodegroup(std::move(value)); return *this;}

  private:

    Nodegroup m_nodegroup;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws

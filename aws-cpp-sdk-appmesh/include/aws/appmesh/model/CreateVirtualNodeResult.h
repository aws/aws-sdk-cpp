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
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualNodeData.h>
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
namespace AppMesh
{
namespace Model
{
  /**
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualNodeOutput">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API CreateVirtualNodeResult
  {
  public:
    CreateVirtualNodeResult();
    CreateVirtualNodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateVirtualNodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of your virtual node following the create call.</p>
     */
    inline const VirtualNodeData& GetVirtualNode() const{ return m_virtualNode; }

    /**
     * <p>The full description of your virtual node following the create call.</p>
     */
    inline void SetVirtualNode(const VirtualNodeData& value) { m_virtualNode = value; }

    /**
     * <p>The full description of your virtual node following the create call.</p>
     */
    inline void SetVirtualNode(VirtualNodeData&& value) { m_virtualNode = std::move(value); }

    /**
     * <p>The full description of your virtual node following the create call.</p>
     */
    inline CreateVirtualNodeResult& WithVirtualNode(const VirtualNodeData& value) { SetVirtualNode(value); return *this;}

    /**
     * <p>The full description of your virtual node following the create call.</p>
     */
    inline CreateVirtualNodeResult& WithVirtualNode(VirtualNodeData&& value) { SetVirtualNode(std::move(value)); return *this;}

  private:

    VirtualNodeData m_virtualNode;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws

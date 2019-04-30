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
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/Node.h>
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
namespace ManagedBlockchain
{
namespace Model
{
  class AWS_MANAGEDBLOCKCHAIN_API GetNodeResult
  {
  public:
    GetNodeResult();
    GetNodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetNodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Properties of the node configuration.</p>
     */
    inline const Node& GetNode() const{ return m_node; }

    /**
     * <p>Properties of the node configuration.</p>
     */
    inline void SetNode(const Node& value) { m_node = value; }

    /**
     * <p>Properties of the node configuration.</p>
     */
    inline void SetNode(Node&& value) { m_node = std::move(value); }

    /**
     * <p>Properties of the node configuration.</p>
     */
    inline GetNodeResult& WithNode(const Node& value) { SetNode(value); return *this;}

    /**
     * <p>Properties of the node configuration.</p>
     */
    inline GetNodeResult& WithNode(Node&& value) { SetNode(std::move(value)); return *this;}

  private:

    Node m_node;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws

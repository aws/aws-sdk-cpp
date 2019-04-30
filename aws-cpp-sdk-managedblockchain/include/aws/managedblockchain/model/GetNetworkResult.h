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
#include <aws/managedblockchain/model/Network.h>
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
  class AWS_MANAGEDBLOCKCHAIN_API GetNetworkResult
  {
  public:
    GetNetworkResult();
    GetNetworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetNetworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object containing network configuration parameters.</p>
     */
    inline const Network& GetNetwork() const{ return m_network; }

    /**
     * <p>An object containing network configuration parameters.</p>
     */
    inline void SetNetwork(const Network& value) { m_network = value; }

    /**
     * <p>An object containing network configuration parameters.</p>
     */
    inline void SetNetwork(Network&& value) { m_network = std::move(value); }

    /**
     * <p>An object containing network configuration parameters.</p>
     */
    inline GetNetworkResult& WithNetwork(const Network& value) { SetNetwork(value); return *this;}

    /**
     * <p>An object containing network configuration parameters.</p>
     */
    inline GetNetworkResult& WithNetwork(Network&& value) { SetNetwork(std::move(value)); return *this;}

  private:

    Network m_network;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws

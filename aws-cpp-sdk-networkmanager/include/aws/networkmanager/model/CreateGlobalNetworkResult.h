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
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/GlobalNetwork.h>
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
namespace NetworkManager
{
namespace Model
{
  class AWS_NETWORKMANAGER_API CreateGlobalNetworkResult
  {
  public:
    CreateGlobalNetworkResult();
    CreateGlobalNetworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateGlobalNetworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the global network object.</p>
     */
    inline const GlobalNetwork& GetGlobalNetwork() const{ return m_globalNetwork; }

    /**
     * <p>Information about the global network object.</p>
     */
    inline void SetGlobalNetwork(const GlobalNetwork& value) { m_globalNetwork = value; }

    /**
     * <p>Information about the global network object.</p>
     */
    inline void SetGlobalNetwork(GlobalNetwork&& value) { m_globalNetwork = std::move(value); }

    /**
     * <p>Information about the global network object.</p>
     */
    inline CreateGlobalNetworkResult& WithGlobalNetwork(const GlobalNetwork& value) { SetGlobalNetwork(value); return *this;}

    /**
     * <p>Information about the global network object.</p>
     */
    inline CreateGlobalNetworkResult& WithGlobalNetwork(GlobalNetwork&& value) { SetGlobalNetwork(std::move(value)); return *this;}

  private:

    GlobalNetwork m_globalNetwork;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws

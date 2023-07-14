﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_NETWORKMANAGER_API UpdateGlobalNetworkResult
  {
  public:
    UpdateGlobalNetworkResult();
    UpdateGlobalNetworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateGlobalNetworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateGlobalNetworkResult& WithGlobalNetwork(const GlobalNetwork& value) { SetGlobalNetwork(value); return *this;}

    /**
     * <p>Information about the global network object.</p>
     */
    inline UpdateGlobalNetworkResult& WithGlobalNetwork(GlobalNetwork&& value) { SetGlobalNetwork(std::move(value)); return *this;}

  private:

    GlobalNetwork m_globalNetwork;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws

﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/model/Server.h>

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
namespace OpsWorksCM
{
namespace Model
{
  class AWS_OPSWORKSCM_API StartMaintenanceResult
  {
  public:
    StartMaintenanceResult();
    StartMaintenanceResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartMaintenanceResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Contains the response to a <code>StartMaintenance</code> request. </p>
     */
    inline const Server& GetServer() const{ return m_server; }

    /**
     * <p>Contains the response to a <code>StartMaintenance</code> request. </p>
     */
    inline void SetServer(const Server& value) { m_server = value; }

    /**
     * <p>Contains the response to a <code>StartMaintenance</code> request. </p>
     */
    inline void SetServer(Server&& value) { m_server = value; }

    /**
     * <p>Contains the response to a <code>StartMaintenance</code> request. </p>
     */
    inline StartMaintenanceResult& WithServer(const Server& value) { SetServer(value); return *this;}

    /**
     * <p>Contains the response to a <code>StartMaintenance</code> request. </p>
     */
    inline StartMaintenanceResult& WithServer(Server&& value) { SetServer(value); return *this;}

  private:
    Server m_server;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws

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
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/ServerGroupReplicationConfiguration.h>
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
namespace SMS
{
namespace Model
{
  class AWS_SMS_API GetAppReplicationConfigurationResult
  {
  public:
    GetAppReplicationConfigurationResult();
    GetAppReplicationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAppReplicationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Replication configurations associated with server groups in this
     * application.</p>
     */
    inline const Aws::Vector<ServerGroupReplicationConfiguration>& GetServerGroupReplicationConfigurations() const{ return m_serverGroupReplicationConfigurations; }

    /**
     * <p>Replication configurations associated with server groups in this
     * application.</p>
     */
    inline void SetServerGroupReplicationConfigurations(const Aws::Vector<ServerGroupReplicationConfiguration>& value) { m_serverGroupReplicationConfigurations = value; }

    /**
     * <p>Replication configurations associated with server groups in this
     * application.</p>
     */
    inline void SetServerGroupReplicationConfigurations(Aws::Vector<ServerGroupReplicationConfiguration>&& value) { m_serverGroupReplicationConfigurations = std::move(value); }

    /**
     * <p>Replication configurations associated with server groups in this
     * application.</p>
     */
    inline GetAppReplicationConfigurationResult& WithServerGroupReplicationConfigurations(const Aws::Vector<ServerGroupReplicationConfiguration>& value) { SetServerGroupReplicationConfigurations(value); return *this;}

    /**
     * <p>Replication configurations associated with server groups in this
     * application.</p>
     */
    inline GetAppReplicationConfigurationResult& WithServerGroupReplicationConfigurations(Aws::Vector<ServerGroupReplicationConfiguration>&& value) { SetServerGroupReplicationConfigurations(std::move(value)); return *this;}

    /**
     * <p>Replication configurations associated with server groups in this
     * application.</p>
     */
    inline GetAppReplicationConfigurationResult& AddServerGroupReplicationConfigurations(const ServerGroupReplicationConfiguration& value) { m_serverGroupReplicationConfigurations.push_back(value); return *this; }

    /**
     * <p>Replication configurations associated with server groups in this
     * application.</p>
     */
    inline GetAppReplicationConfigurationResult& AddServerGroupReplicationConfigurations(ServerGroupReplicationConfiguration&& value) { m_serverGroupReplicationConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ServerGroupReplicationConfiguration> m_serverGroupReplicationConfigurations;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws

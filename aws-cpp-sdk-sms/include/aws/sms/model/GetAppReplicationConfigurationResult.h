/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetAppReplicationConfigurationResult
  {
  public:
    AWS_SMS_API GetAppReplicationConfigurationResult();
    AWS_SMS_API GetAppReplicationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API GetAppReplicationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The replication configurations associated with server groups in this
     * application.</p>
     */
    inline const Aws::Vector<ServerGroupReplicationConfiguration>& GetServerGroupReplicationConfigurations() const{ return m_serverGroupReplicationConfigurations; }

    /**
     * <p>The replication configurations associated with server groups in this
     * application.</p>
     */
    inline void SetServerGroupReplicationConfigurations(const Aws::Vector<ServerGroupReplicationConfiguration>& value) { m_serverGroupReplicationConfigurations = value; }

    /**
     * <p>The replication configurations associated with server groups in this
     * application.</p>
     */
    inline void SetServerGroupReplicationConfigurations(Aws::Vector<ServerGroupReplicationConfiguration>&& value) { m_serverGroupReplicationConfigurations = std::move(value); }

    /**
     * <p>The replication configurations associated with server groups in this
     * application.</p>
     */
    inline GetAppReplicationConfigurationResult& WithServerGroupReplicationConfigurations(const Aws::Vector<ServerGroupReplicationConfiguration>& value) { SetServerGroupReplicationConfigurations(value); return *this;}

    /**
     * <p>The replication configurations associated with server groups in this
     * application.</p>
     */
    inline GetAppReplicationConfigurationResult& WithServerGroupReplicationConfigurations(Aws::Vector<ServerGroupReplicationConfiguration>&& value) { SetServerGroupReplicationConfigurations(std::move(value)); return *this;}

    /**
     * <p>The replication configurations associated with server groups in this
     * application.</p>
     */
    inline GetAppReplicationConfigurationResult& AddServerGroupReplicationConfigurations(const ServerGroupReplicationConfiguration& value) { m_serverGroupReplicationConfigurations.push_back(value); return *this; }

    /**
     * <p>The replication configurations associated with server groups in this
     * application.</p>
     */
    inline GetAppReplicationConfigurationResult& AddServerGroupReplicationConfigurations(ServerGroupReplicationConfiguration&& value) { m_serverGroupReplicationConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ServerGroupReplicationConfiguration> m_serverGroupReplicationConfigurations;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws

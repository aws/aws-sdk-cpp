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
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworkscm/model/Server.h>
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
namespace OpsWorksCM
{
namespace Model
{
  class AWS_OPSWORKSCM_API DescribeServersResult
  {
  public:
    DescribeServersResult();
    DescribeServersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeServersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains the response to a <code>DescribeServers</code> request.</p> <p>
     * <i>For Puppet Server:</i>
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> contains
     * PUPPET_API_CA_CERT. This is the PEM-encoded CA certificate that is used by the
     * Puppet API over TCP port number 8140. The CA certificate is also used to sign
     * node certificates.</p>
     */
    inline const Aws::Vector<Server>& GetServers() const{ return m_servers; }

    /**
     * <p>Contains the response to a <code>DescribeServers</code> request.</p> <p>
     * <i>For Puppet Server:</i>
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> contains
     * PUPPET_API_CA_CERT. This is the PEM-encoded CA certificate that is used by the
     * Puppet API over TCP port number 8140. The CA certificate is also used to sign
     * node certificates.</p>
     */
    inline void SetServers(const Aws::Vector<Server>& value) { m_servers = value; }

    /**
     * <p>Contains the response to a <code>DescribeServers</code> request.</p> <p>
     * <i>For Puppet Server:</i>
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> contains
     * PUPPET_API_CA_CERT. This is the PEM-encoded CA certificate that is used by the
     * Puppet API over TCP port number 8140. The CA certificate is also used to sign
     * node certificates.</p>
     */
    inline void SetServers(Aws::Vector<Server>&& value) { m_servers = std::move(value); }

    /**
     * <p>Contains the response to a <code>DescribeServers</code> request.</p> <p>
     * <i>For Puppet Server:</i>
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> contains
     * PUPPET_API_CA_CERT. This is the PEM-encoded CA certificate that is used by the
     * Puppet API over TCP port number 8140. The CA certificate is also used to sign
     * node certificates.</p>
     */
    inline DescribeServersResult& WithServers(const Aws::Vector<Server>& value) { SetServers(value); return *this;}

    /**
     * <p>Contains the response to a <code>DescribeServers</code> request.</p> <p>
     * <i>For Puppet Server:</i>
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> contains
     * PUPPET_API_CA_CERT. This is the PEM-encoded CA certificate that is used by the
     * Puppet API over TCP port number 8140. The CA certificate is also used to sign
     * node certificates.</p>
     */
    inline DescribeServersResult& WithServers(Aws::Vector<Server>&& value) { SetServers(std::move(value)); return *this;}

    /**
     * <p>Contains the response to a <code>DescribeServers</code> request.</p> <p>
     * <i>For Puppet Server:</i>
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> contains
     * PUPPET_API_CA_CERT. This is the PEM-encoded CA certificate that is used by the
     * Puppet API over TCP port number 8140. The CA certificate is also used to sign
     * node certificates.</p>
     */
    inline DescribeServersResult& AddServers(const Server& value) { m_servers.push_back(value); return *this; }

    /**
     * <p>Contains the response to a <code>DescribeServers</code> request.</p> <p>
     * <i>For Puppet Server:</i>
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> contains
     * PUPPET_API_CA_CERT. This is the PEM-encoded CA certificate that is used by the
     * Puppet API over TCP port number 8140. The CA certificate is also used to sign
     * node certificates.</p>
     */
    inline DescribeServersResult& AddServers(Server&& value) { m_servers.push_back(std::move(value)); return *this; }


    /**
     * <p>This is not currently implemented for <code>DescribeServers</code> requests.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>This is not currently implemented for <code>DescribeServers</code> requests.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>This is not currently implemented for <code>DescribeServers</code> requests.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>This is not currently implemented for <code>DescribeServers</code> requests.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>This is not currently implemented for <code>DescribeServers</code> requests.
     * </p>
     */
    inline DescribeServersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>This is not currently implemented for <code>DescribeServers</code> requests.
     * </p>
     */
    inline DescribeServersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>This is not currently implemented for <code>DescribeServers</code> requests.
     * </p>
     */
    inline DescribeServersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Server> m_servers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws

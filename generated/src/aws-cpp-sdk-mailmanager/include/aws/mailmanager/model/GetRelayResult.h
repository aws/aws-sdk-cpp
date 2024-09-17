/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/RelayAuthentication.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MailManager
{
namespace Model
{
  class GetRelayResult
  {
  public:
    AWS_MAILMANAGER_API GetRelayResult();
    AWS_MAILMANAGER_API GetRelayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetRelayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The authentication attribute—contains the secret ARN where the customer relay
     * server credentials are stored. </p>
     */
    inline const RelayAuthentication& GetAuthentication() const{ return m_authentication; }
    inline void SetAuthentication(const RelayAuthentication& value) { m_authentication = value; }
    inline void SetAuthentication(RelayAuthentication&& value) { m_authentication = std::move(value); }
    inline GetRelayResult& WithAuthentication(const RelayAuthentication& value) { SetAuthentication(value); return *this;}
    inline GetRelayResult& WithAuthentication(RelayAuthentication&& value) { SetAuthentication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the relay was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline GetRelayResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline GetRelayResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when relay was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestamp = value; }
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestamp = std::move(value); }
    inline GetRelayResult& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}
    inline GetRelayResult& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the relay.</p>
     */
    inline const Aws::String& GetRelayArn() const{ return m_relayArn; }
    inline void SetRelayArn(const Aws::String& value) { m_relayArn = value; }
    inline void SetRelayArn(Aws::String&& value) { m_relayArn = std::move(value); }
    inline void SetRelayArn(const char* value) { m_relayArn.assign(value); }
    inline GetRelayResult& WithRelayArn(const Aws::String& value) { SetRelayArn(value); return *this;}
    inline GetRelayResult& WithRelayArn(Aws::String&& value) { SetRelayArn(std::move(value)); return *this;}
    inline GetRelayResult& WithRelayArn(const char* value) { SetRelayArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique relay identifier.</p>
     */
    inline const Aws::String& GetRelayId() const{ return m_relayId; }
    inline void SetRelayId(const Aws::String& value) { m_relayId = value; }
    inline void SetRelayId(Aws::String&& value) { m_relayId = std::move(value); }
    inline void SetRelayId(const char* value) { m_relayId.assign(value); }
    inline GetRelayResult& WithRelayId(const Aws::String& value) { SetRelayId(value); return *this;}
    inline GetRelayResult& WithRelayId(Aws::String&& value) { SetRelayId(std::move(value)); return *this;}
    inline GetRelayResult& WithRelayId(const char* value) { SetRelayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the relay.</p>
     */
    inline const Aws::String& GetRelayName() const{ return m_relayName; }
    inline void SetRelayName(const Aws::String& value) { m_relayName = value; }
    inline void SetRelayName(Aws::String&& value) { m_relayName = std::move(value); }
    inline void SetRelayName(const char* value) { m_relayName.assign(value); }
    inline GetRelayResult& WithRelayName(const Aws::String& value) { SetRelayName(value); return *this;}
    inline GetRelayResult& WithRelayName(Aws::String&& value) { SetRelayName(std::move(value)); return *this;}
    inline GetRelayResult& WithRelayName(const char* value) { SetRelayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination relay server address.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }
    inline void SetServerName(const Aws::String& value) { m_serverName = value; }
    inline void SetServerName(Aws::String&& value) { m_serverName = std::move(value); }
    inline void SetServerName(const char* value) { m_serverName.assign(value); }
    inline GetRelayResult& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}
    inline GetRelayResult& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}
    inline GetRelayResult& WithServerName(const char* value) { SetServerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination relay server port.</p>
     */
    inline int GetServerPort() const{ return m_serverPort; }
    inline void SetServerPort(int value) { m_serverPort = value; }
    inline GetRelayResult& WithServerPort(int value) { SetServerPort(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRelayResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRelayResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRelayResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RelayAuthentication m_authentication;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_lastModifiedTimestamp;

    Aws::String m_relayArn;

    Aws::String m_relayId;

    Aws::String m_relayName;

    Aws::String m_serverName;

    int m_serverPort;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws

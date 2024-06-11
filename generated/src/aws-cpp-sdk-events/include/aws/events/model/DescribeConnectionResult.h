/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/ConnectionState.h>
#include <aws/events/model/ConnectionAuthorizationType.h>
#include <aws/events/model/ConnectionAuthResponseParameters.h>
#include <aws/core/utils/DateTime.h>
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
namespace CloudWatchEvents
{
namespace Model
{
  class DescribeConnectionResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API DescribeConnectionResult();
    AWS_CLOUDWATCHEVENTS_API DescribeConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API DescribeConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the connection retrieved.</p>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArn = value; }
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArn = std::move(value); }
    inline void SetConnectionArn(const char* value) { m_connectionArn.assign(value); }
    inline DescribeConnectionResult& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}
    inline DescribeConnectionResult& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}
    inline DescribeConnectionResult& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection retrieved.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeConnectionResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeConnectionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeConnectionResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the connection retrieved.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeConnectionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeConnectionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeConnectionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the connection retrieved.</p>
     */
    inline const ConnectionState& GetConnectionState() const{ return m_connectionState; }
    inline void SetConnectionState(const ConnectionState& value) { m_connectionState = value; }
    inline void SetConnectionState(ConnectionState&& value) { m_connectionState = std::move(value); }
    inline DescribeConnectionResult& WithConnectionState(const ConnectionState& value) { SetConnectionState(value); return *this;}
    inline DescribeConnectionResult& WithConnectionState(ConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the connection is in the current connection state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }
    inline void SetStateReason(const Aws::String& value) { m_stateReason = value; }
    inline void SetStateReason(Aws::String&& value) { m_stateReason = std::move(value); }
    inline void SetStateReason(const char* value) { m_stateReason.assign(value); }
    inline DescribeConnectionResult& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}
    inline DescribeConnectionResult& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}
    inline DescribeConnectionResult& WithStateReason(const char* value) { SetStateReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authorization specified for the connection.</p>
     */
    inline const ConnectionAuthorizationType& GetAuthorizationType() const{ return m_authorizationType; }
    inline void SetAuthorizationType(const ConnectionAuthorizationType& value) { m_authorizationType = value; }
    inline void SetAuthorizationType(ConnectionAuthorizationType&& value) { m_authorizationType = std::move(value); }
    inline DescribeConnectionResult& WithAuthorizationType(const ConnectionAuthorizationType& value) { SetAuthorizationType(value); return *this;}
    inline DescribeConnectionResult& WithAuthorizationType(ConnectionAuthorizationType&& value) { SetAuthorizationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the secret created from the authorization parameters specified for
     * the connection.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArn.assign(value); }
    inline DescribeConnectionResult& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline DescribeConnectionResult& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline DescribeConnectionResult& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters to use for authorization for the connection.</p>
     */
    inline const ConnectionAuthResponseParameters& GetAuthParameters() const{ return m_authParameters; }
    inline void SetAuthParameters(const ConnectionAuthResponseParameters& value) { m_authParameters = value; }
    inline void SetAuthParameters(ConnectionAuthResponseParameters&& value) { m_authParameters = std::move(value); }
    inline DescribeConnectionResult& WithAuthParameters(const ConnectionAuthResponseParameters& value) { SetAuthParameters(value); return *this;}
    inline DescribeConnectionResult& WithAuthParameters(ConnectionAuthResponseParameters&& value) { SetAuthParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the connection was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeConnectionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeConnectionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the connection was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeConnectionResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeConnectionResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the connection was last authorized.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAuthorizedTime() const{ return m_lastAuthorizedTime; }
    inline void SetLastAuthorizedTime(const Aws::Utils::DateTime& value) { m_lastAuthorizedTime = value; }
    inline void SetLastAuthorizedTime(Aws::Utils::DateTime&& value) { m_lastAuthorizedTime = std::move(value); }
    inline DescribeConnectionResult& WithLastAuthorizedTime(const Aws::Utils::DateTime& value) { SetLastAuthorizedTime(value); return *this;}
    inline DescribeConnectionResult& WithLastAuthorizedTime(Aws::Utils::DateTime&& value) { SetLastAuthorizedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionArn;

    Aws::String m_name;

    Aws::String m_description;

    ConnectionState m_connectionState;

    Aws::String m_stateReason;

    ConnectionAuthorizationType m_authorizationType;

    Aws::String m_secretArn;

    ConnectionAuthResponseParameters m_authParameters;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Utils::DateTime m_lastAuthorizedTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws

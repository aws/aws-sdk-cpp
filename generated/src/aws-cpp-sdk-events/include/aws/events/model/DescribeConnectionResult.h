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


    /**
     * <p>The ARN of the connection retrieved.</p>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }

    /**
     * <p>The ARN of the connection retrieved.</p>
     */
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArn = value; }

    /**
     * <p>The ARN of the connection retrieved.</p>
     */
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArn = std::move(value); }

    /**
     * <p>The ARN of the connection retrieved.</p>
     */
    inline void SetConnectionArn(const char* value) { m_connectionArn.assign(value); }

    /**
     * <p>The ARN of the connection retrieved.</p>
     */
    inline DescribeConnectionResult& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}

    /**
     * <p>The ARN of the connection retrieved.</p>
     */
    inline DescribeConnectionResult& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the connection retrieved.</p>
     */
    inline DescribeConnectionResult& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}


    /**
     * <p>The name of the connection retrieved.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the connection retrieved.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the connection retrieved.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the connection retrieved.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the connection retrieved.</p>
     */
    inline DescribeConnectionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the connection retrieved.</p>
     */
    inline DescribeConnectionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the connection retrieved.</p>
     */
    inline DescribeConnectionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description for the connection retrieved.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the connection retrieved.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description for the connection retrieved.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description for the connection retrieved.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description for the connection retrieved.</p>
     */
    inline DescribeConnectionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the connection retrieved.</p>
     */
    inline DescribeConnectionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the connection retrieved.</p>
     */
    inline DescribeConnectionResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The state of the connection retrieved.</p>
     */
    inline const ConnectionState& GetConnectionState() const{ return m_connectionState; }

    /**
     * <p>The state of the connection retrieved.</p>
     */
    inline void SetConnectionState(const ConnectionState& value) { m_connectionState = value; }

    /**
     * <p>The state of the connection retrieved.</p>
     */
    inline void SetConnectionState(ConnectionState&& value) { m_connectionState = std::move(value); }

    /**
     * <p>The state of the connection retrieved.</p>
     */
    inline DescribeConnectionResult& WithConnectionState(const ConnectionState& value) { SetConnectionState(value); return *this;}

    /**
     * <p>The state of the connection retrieved.</p>
     */
    inline DescribeConnectionResult& WithConnectionState(ConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}


    /**
     * <p>The reason that the connection is in the current connection state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>The reason that the connection is in the current connection state.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReason = value; }

    /**
     * <p>The reason that the connection is in the current connection state.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReason = std::move(value); }

    /**
     * <p>The reason that the connection is in the current connection state.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReason.assign(value); }

    /**
     * <p>The reason that the connection is in the current connection state.</p>
     */
    inline DescribeConnectionResult& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>The reason that the connection is in the current connection state.</p>
     */
    inline DescribeConnectionResult& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>The reason that the connection is in the current connection state.</p>
     */
    inline DescribeConnectionResult& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>The type of authorization specified for the connection.</p>
     */
    inline const ConnectionAuthorizationType& GetAuthorizationType() const{ return m_authorizationType; }

    /**
     * <p>The type of authorization specified for the connection.</p>
     */
    inline void SetAuthorizationType(const ConnectionAuthorizationType& value) { m_authorizationType = value; }

    /**
     * <p>The type of authorization specified for the connection.</p>
     */
    inline void SetAuthorizationType(ConnectionAuthorizationType&& value) { m_authorizationType = std::move(value); }

    /**
     * <p>The type of authorization specified for the connection.</p>
     */
    inline DescribeConnectionResult& WithAuthorizationType(const ConnectionAuthorizationType& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>The type of authorization specified for the connection.</p>
     */
    inline DescribeConnectionResult& WithAuthorizationType(ConnectionAuthorizationType&& value) { SetAuthorizationType(std::move(value)); return *this;}


    /**
     * <p>The ARN of the secret created from the authorization parameters specified for
     * the connection.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The ARN of the secret created from the authorization parameters specified for
     * the connection.</p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArn = value; }

    /**
     * <p>The ARN of the secret created from the authorization parameters specified for
     * the connection.</p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArn = std::move(value); }

    /**
     * <p>The ARN of the secret created from the authorization parameters specified for
     * the connection.</p>
     */
    inline void SetSecretArn(const char* value) { m_secretArn.assign(value); }

    /**
     * <p>The ARN of the secret created from the authorization parameters specified for
     * the connection.</p>
     */
    inline DescribeConnectionResult& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The ARN of the secret created from the authorization parameters specified for
     * the connection.</p>
     */
    inline DescribeConnectionResult& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the secret created from the authorization parameters specified for
     * the connection.</p>
     */
    inline DescribeConnectionResult& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * <p>The parameters to use for authorization for the connection.</p>
     */
    inline const ConnectionAuthResponseParameters& GetAuthParameters() const{ return m_authParameters; }

    /**
     * <p>The parameters to use for authorization for the connection.</p>
     */
    inline void SetAuthParameters(const ConnectionAuthResponseParameters& value) { m_authParameters = value; }

    /**
     * <p>The parameters to use for authorization for the connection.</p>
     */
    inline void SetAuthParameters(ConnectionAuthResponseParameters&& value) { m_authParameters = std::move(value); }

    /**
     * <p>The parameters to use for authorization for the connection.</p>
     */
    inline DescribeConnectionResult& WithAuthParameters(const ConnectionAuthResponseParameters& value) { SetAuthParameters(value); return *this;}

    /**
     * <p>The parameters to use for authorization for the connection.</p>
     */
    inline DescribeConnectionResult& WithAuthParameters(ConnectionAuthResponseParameters&& value) { SetAuthParameters(std::move(value)); return *this;}


    /**
     * <p>A time stamp for the time that the connection was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A time stamp for the time that the connection was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>A time stamp for the time that the connection was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>A time stamp for the time that the connection was created.</p>
     */
    inline DescribeConnectionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A time stamp for the time that the connection was created.</p>
     */
    inline DescribeConnectionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A time stamp for the time that the connection was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A time stamp for the time that the connection was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>A time stamp for the time that the connection was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>A time stamp for the time that the connection was last modified.</p>
     */
    inline DescribeConnectionResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A time stamp for the time that the connection was last modified.</p>
     */
    inline DescribeConnectionResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>A time stamp for the time that the connection was last authorized.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAuthorizedTime() const{ return m_lastAuthorizedTime; }

    /**
     * <p>A time stamp for the time that the connection was last authorized.</p>
     */
    inline void SetLastAuthorizedTime(const Aws::Utils::DateTime& value) { m_lastAuthorizedTime = value; }

    /**
     * <p>A time stamp for the time that the connection was last authorized.</p>
     */
    inline void SetLastAuthorizedTime(Aws::Utils::DateTime&& value) { m_lastAuthorizedTime = std::move(value); }

    /**
     * <p>A time stamp for the time that the connection was last authorized.</p>
     */
    inline DescribeConnectionResult& WithLastAuthorizedTime(const Aws::Utils::DateTime& value) { SetLastAuthorizedTime(value); return *this;}

    /**
     * <p>A time stamp for the time that the connection was last authorized.</p>
     */
    inline DescribeConnectionResult& WithLastAuthorizedTime(Aws::Utils::DateTime&& value) { SetLastAuthorizedTime(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/ConnectionState.h>
#include <aws/eventbridge/model/ConnectionAuthorizationType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EventBridge
{
namespace Model
{

  /**
   * <p>Contains information about a connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/Connection">AWS
   * API Reference</a></p>
   */
  class AWS_EVENTBRIDGE_API Connection
  {
  public:
    Connection();
    Connection(Aws::Utils::Json::JsonView jsonValue);
    Connection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the connection.</p>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }

    /**
     * <p>The ARN of the connection.</p>
     */
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }

    /**
     * <p>The ARN of the connection.</p>
     */
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArnHasBeenSet = true; m_connectionArn = value; }

    /**
     * <p>The ARN of the connection.</p>
     */
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::move(value); }

    /**
     * <p>The ARN of the connection.</p>
     */
    inline void SetConnectionArn(const char* value) { m_connectionArnHasBeenSet = true; m_connectionArn.assign(value); }

    /**
     * <p>The ARN of the connection.</p>
     */
    inline Connection& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}

    /**
     * <p>The ARN of the connection.</p>
     */
    inline Connection& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the connection.</p>
     */
    inline Connection& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}


    /**
     * <p>The name of the connection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the connection.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the connection.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the connection.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the connection.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the connection.</p>
     */
    inline Connection& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the connection.</p>
     */
    inline Connection& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the connection.</p>
     */
    inline Connection& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The state of the connection.</p>
     */
    inline const ConnectionState& GetConnectionState() const{ return m_connectionState; }

    /**
     * <p>The state of the connection.</p>
     */
    inline bool ConnectionStateHasBeenSet() const { return m_connectionStateHasBeenSet; }

    /**
     * <p>The state of the connection.</p>
     */
    inline void SetConnectionState(const ConnectionState& value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }

    /**
     * <p>The state of the connection.</p>
     */
    inline void SetConnectionState(ConnectionState&& value) { m_connectionStateHasBeenSet = true; m_connectionState = std::move(value); }

    /**
     * <p>The state of the connection.</p>
     */
    inline Connection& WithConnectionState(const ConnectionState& value) { SetConnectionState(value); return *this;}

    /**
     * <p>The state of the connection.</p>
     */
    inline Connection& WithConnectionState(ConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}


    /**
     * <p>The reason that the connection is in the connection state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>The reason that the connection is in the connection state.</p>
     */
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }

    /**
     * <p>The reason that the connection is in the connection state.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }

    /**
     * <p>The reason that the connection is in the connection state.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }

    /**
     * <p>The reason that the connection is in the connection state.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }

    /**
     * <p>The reason that the connection is in the connection state.</p>
     */
    inline Connection& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>The reason that the connection is in the connection state.</p>
     */
    inline Connection& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>The reason that the connection is in the connection state.</p>
     */
    inline Connection& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>The authorization type specified for the connection.</p>
     */
    inline const ConnectionAuthorizationType& GetAuthorizationType() const{ return m_authorizationType; }

    /**
     * <p>The authorization type specified for the connection.</p>
     */
    inline bool AuthorizationTypeHasBeenSet() const { return m_authorizationTypeHasBeenSet; }

    /**
     * <p>The authorization type specified for the connection.</p>
     */
    inline void SetAuthorizationType(const ConnectionAuthorizationType& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }

    /**
     * <p>The authorization type specified for the connection.</p>
     */
    inline void SetAuthorizationType(ConnectionAuthorizationType&& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = std::move(value); }

    /**
     * <p>The authorization type specified for the connection.</p>
     */
    inline Connection& WithAuthorizationType(const ConnectionAuthorizationType& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>The authorization type specified for the connection.</p>
     */
    inline Connection& WithAuthorizationType(ConnectionAuthorizationType&& value) { SetAuthorizationType(std::move(value)); return *this;}


    /**
     * <p>A time stamp for the time that the connection was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A time stamp for the time that the connection was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A time stamp for the time that the connection was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A time stamp for the time that the connection was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A time stamp for the time that the connection was created.</p>
     */
    inline Connection& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A time stamp for the time that the connection was created.</p>
     */
    inline Connection& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A time stamp for the time that the connection was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A time stamp for the time that the connection was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>A time stamp for the time that the connection was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>A time stamp for the time that the connection was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>A time stamp for the time that the connection was last modified.</p>
     */
    inline Connection& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A time stamp for the time that the connection was last modified.</p>
     */
    inline Connection& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>A time stamp for the time that the connection was last authorized.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAuthorizedTime() const{ return m_lastAuthorizedTime; }

    /**
     * <p>A time stamp for the time that the connection was last authorized.</p>
     */
    inline bool LastAuthorizedTimeHasBeenSet() const { return m_lastAuthorizedTimeHasBeenSet; }

    /**
     * <p>A time stamp for the time that the connection was last authorized.</p>
     */
    inline void SetLastAuthorizedTime(const Aws::Utils::DateTime& value) { m_lastAuthorizedTimeHasBeenSet = true; m_lastAuthorizedTime = value; }

    /**
     * <p>A time stamp for the time that the connection was last authorized.</p>
     */
    inline void SetLastAuthorizedTime(Aws::Utils::DateTime&& value) { m_lastAuthorizedTimeHasBeenSet = true; m_lastAuthorizedTime = std::move(value); }

    /**
     * <p>A time stamp for the time that the connection was last authorized.</p>
     */
    inline Connection& WithLastAuthorizedTime(const Aws::Utils::DateTime& value) { SetLastAuthorizedTime(value); return *this;}

    /**
     * <p>A time stamp for the time that the connection was last authorized.</p>
     */
    inline Connection& WithLastAuthorizedTime(Aws::Utils::DateTime&& value) { SetLastAuthorizedTime(std::move(value)); return *this;}

  private:

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ConnectionState m_connectionState;
    bool m_connectionStateHasBeenSet;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet;

    ConnectionAuthorizationType m_authorizationType;
    bool m_authorizationTypeHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    Aws::Utils::DateTime m_lastAuthorizedTime;
    bool m_lastAuthorizedTimeHasBeenSet;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws

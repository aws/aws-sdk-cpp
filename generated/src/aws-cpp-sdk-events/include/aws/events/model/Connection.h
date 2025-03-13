/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/ConnectionState.h>
#include <aws/events/model/ConnectionAuthorizationType.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>Contains information about a connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/Connection">AWS
   * API Reference</a></p>
   */
  class Connection
  {
  public:
    AWS_CLOUDWATCHEVENTS_API Connection() = default;
    AWS_CLOUDWATCHEVENTS_API Connection(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Connection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the connection.</p>
     */
    inline const Aws::String& GetConnectionArn() const { return m_connectionArn; }
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }
    template<typename ConnectionArnT = Aws::String>
    void SetConnectionArn(ConnectionArnT&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::forward<ConnectionArnT>(value); }
    template<typename ConnectionArnT = Aws::String>
    Connection& WithConnectionArn(ConnectionArnT&& value) { SetConnectionArn(std::forward<ConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Connection& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the connection.</p>
     */
    inline ConnectionState GetConnectionState() const { return m_connectionState; }
    inline bool ConnectionStateHasBeenSet() const { return m_connectionStateHasBeenSet; }
    inline void SetConnectionState(ConnectionState value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }
    inline Connection& WithConnectionState(ConnectionState value) { SetConnectionState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the connection is in the connection state.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    Connection& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization type specified for the connection.</p>
     */
    inline ConnectionAuthorizationType GetAuthorizationType() const { return m_authorizationType; }
    inline bool AuthorizationTypeHasBeenSet() const { return m_authorizationTypeHasBeenSet; }
    inline void SetAuthorizationType(ConnectionAuthorizationType value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }
    inline Connection& WithAuthorizationType(ConnectionAuthorizationType value) { SetAuthorizationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the connection was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Connection& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the connection was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    Connection& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the connection was last authorized.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAuthorizedTime() const { return m_lastAuthorizedTime; }
    inline bool LastAuthorizedTimeHasBeenSet() const { return m_lastAuthorizedTimeHasBeenSet; }
    template<typename LastAuthorizedTimeT = Aws::Utils::DateTime>
    void SetLastAuthorizedTime(LastAuthorizedTimeT&& value) { m_lastAuthorizedTimeHasBeenSet = true; m_lastAuthorizedTime = std::forward<LastAuthorizedTimeT>(value); }
    template<typename LastAuthorizedTimeT = Aws::Utils::DateTime>
    Connection& WithLastAuthorizedTime(LastAuthorizedTimeT&& value) { SetLastAuthorizedTime(std::forward<LastAuthorizedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ConnectionState m_connectionState{ConnectionState::NOT_SET};
    bool m_connectionStateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    ConnectionAuthorizationType m_authorizationType{ConnectionAuthorizationType::NOT_SET};
    bool m_authorizationTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastAuthorizedTime{};
    bool m_lastAuthorizedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws

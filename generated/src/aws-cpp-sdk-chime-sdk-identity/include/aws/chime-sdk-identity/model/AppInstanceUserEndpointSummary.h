/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-identity/model/AppInstanceUserEndpointType.h>
#include <aws/chime-sdk-identity/model/AllowMessages.h>
#include <aws/chime-sdk-identity/model/EndpointState.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   * <p>Summary of the details of an
   * <code>AppInstanceUserEndpoint</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/AppInstanceUserEndpointSummary">AWS
   * API Reference</a></p>
   */
  class AppInstanceUserEndpointSummary
  {
  public:
    AWS_CHIMESDKIDENTITY_API AppInstanceUserEndpointSummary() = default;
    AWS_CHIMESDKIDENTITY_API AppInstanceUserEndpointSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API AppInstanceUserEndpointSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline const Aws::String& GetAppInstanceUserArn() const { return m_appInstanceUserArn; }
    inline bool AppInstanceUserArnHasBeenSet() const { return m_appInstanceUserArnHasBeenSet; }
    template<typename AppInstanceUserArnT = Aws::String>
    void SetAppInstanceUserArn(AppInstanceUserArnT&& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = std::forward<AppInstanceUserArnT>(value); }
    template<typename AppInstanceUserArnT = Aws::String>
    AppInstanceUserEndpointSummary& WithAppInstanceUserArn(AppInstanceUserArnT&& value) { SetAppInstanceUserArn(std::forward<AppInstanceUserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline const Aws::String& GetEndpointId() const { return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    template<typename EndpointIdT = Aws::String>
    void SetEndpointId(EndpointIdT&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::forward<EndpointIdT>(value); }
    template<typename EndpointIdT = Aws::String>
    AppInstanceUserEndpointSummary& WithEndpointId(EndpointIdT&& value) { SetEndpointId(std::forward<EndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AppInstanceUserEndpointSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline AppInstanceUserEndpointType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AppInstanceUserEndpointType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AppInstanceUserEndpointSummary& WithType(AppInstanceUserEndpointType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>BBoolean that controls whether the <code>AppInstanceUserEndpoint</code> is
     * opted in to receive messages. <code>ALL</code> indicates the endpoint will
     * receive all messages. <code>NONE</code> indicates the endpoint will receive no
     * messages.</p>
     */
    inline AllowMessages GetAllowMessages() const { return m_allowMessages; }
    inline bool AllowMessagesHasBeenSet() const { return m_allowMessagesHasBeenSet; }
    inline void SetAllowMessages(AllowMessages value) { m_allowMessagesHasBeenSet = true; m_allowMessages = value; }
    inline AppInstanceUserEndpointSummary& WithAllowMessages(AllowMessages value) { SetAllowMessages(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A read-only field that represent the state of an
     * <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline const EndpointState& GetEndpointState() const { return m_endpointState; }
    inline bool EndpointStateHasBeenSet() const { return m_endpointStateHasBeenSet; }
    template<typename EndpointStateT = EndpointState>
    void SetEndpointState(EndpointStateT&& value) { m_endpointStateHasBeenSet = true; m_endpointState = std::forward<EndpointStateT>(value); }
    template<typename EndpointStateT = EndpointState>
    AppInstanceUserEndpointSummary& WithEndpointState(EndpointStateT&& value) { SetEndpointState(std::forward<EndpointStateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceUserArn;
    bool m_appInstanceUserArnHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AppInstanceUserEndpointType m_type{AppInstanceUserEndpointType::NOT_SET};
    bool m_typeHasBeenSet = false;

    AllowMessages m_allowMessages{AllowMessages::NOT_SET};
    bool m_allowMessagesHasBeenSet = false;

    EndpointState m_endpointState;
    bool m_endpointStateHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws

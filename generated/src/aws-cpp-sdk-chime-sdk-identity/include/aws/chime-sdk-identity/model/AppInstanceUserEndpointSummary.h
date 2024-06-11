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
    AWS_CHIMESDKIDENTITY_API AppInstanceUserEndpointSummary();
    AWS_CHIMESDKIDENTITY_API AppInstanceUserEndpointSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API AppInstanceUserEndpointSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline const Aws::String& GetAppInstanceUserArn() const{ return m_appInstanceUserArn; }
    inline bool AppInstanceUserArnHasBeenSet() const { return m_appInstanceUserArnHasBeenSet; }
    inline void SetAppInstanceUserArn(const Aws::String& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = value; }
    inline void SetAppInstanceUserArn(Aws::String&& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = std::move(value); }
    inline void SetAppInstanceUserArn(const char* value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn.assign(value); }
    inline AppInstanceUserEndpointSummary& WithAppInstanceUserArn(const Aws::String& value) { SetAppInstanceUserArn(value); return *this;}
    inline AppInstanceUserEndpointSummary& WithAppInstanceUserArn(Aws::String&& value) { SetAppInstanceUserArn(std::move(value)); return *this;}
    inline AppInstanceUserEndpointSummary& WithAppInstanceUserArn(const char* value) { SetAppInstanceUserArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }
    inline AppInstanceUserEndpointSummary& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}
    inline AppInstanceUserEndpointSummary& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}
    inline AppInstanceUserEndpointSummary& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AppInstanceUserEndpointSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AppInstanceUserEndpointSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AppInstanceUserEndpointSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline const AppInstanceUserEndpointType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const AppInstanceUserEndpointType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(AppInstanceUserEndpointType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline AppInstanceUserEndpointSummary& WithType(const AppInstanceUserEndpointType& value) { SetType(value); return *this;}
    inline AppInstanceUserEndpointSummary& WithType(AppInstanceUserEndpointType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>BBoolean that controls whether the <code>AppInstanceUserEndpoint</code> is
     * opted in to receive messages. <code>ALL</code> indicates the endpoint will
     * receive all messages. <code>NONE</code> indicates the endpoint will receive no
     * messages.</p>
     */
    inline const AllowMessages& GetAllowMessages() const{ return m_allowMessages; }
    inline bool AllowMessagesHasBeenSet() const { return m_allowMessagesHasBeenSet; }
    inline void SetAllowMessages(const AllowMessages& value) { m_allowMessagesHasBeenSet = true; m_allowMessages = value; }
    inline void SetAllowMessages(AllowMessages&& value) { m_allowMessagesHasBeenSet = true; m_allowMessages = std::move(value); }
    inline AppInstanceUserEndpointSummary& WithAllowMessages(const AllowMessages& value) { SetAllowMessages(value); return *this;}
    inline AppInstanceUserEndpointSummary& WithAllowMessages(AllowMessages&& value) { SetAllowMessages(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A read-only field that represent the state of an
     * <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline const EndpointState& GetEndpointState() const{ return m_endpointState; }
    inline bool EndpointStateHasBeenSet() const { return m_endpointStateHasBeenSet; }
    inline void SetEndpointState(const EndpointState& value) { m_endpointStateHasBeenSet = true; m_endpointState = value; }
    inline void SetEndpointState(EndpointState&& value) { m_endpointStateHasBeenSet = true; m_endpointState = std::move(value); }
    inline AppInstanceUserEndpointSummary& WithEndpointState(const EndpointState& value) { SetEndpointState(value); return *this;}
    inline AppInstanceUserEndpointSummary& WithEndpointState(EndpointState&& value) { SetEndpointState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceUserArn;
    bool m_appInstanceUserArnHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AppInstanceUserEndpointType m_type;
    bool m_typeHasBeenSet = false;

    AllowMessages m_allowMessages;
    bool m_allowMessagesHasBeenSet = false;

    EndpointState m_endpointState;
    bool m_endpointStateHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/ApiDestinationState.h>
#include <aws/eventbridge/model/ApiDestinationHttpMethod.h>
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
   * <p>Contains details about an API destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ApiDestination">AWS
   * API Reference</a></p>
   */
  class ApiDestination
  {
  public:
    AWS_EVENTBRIDGE_API ApiDestination() = default;
    AWS_EVENTBRIDGE_API ApiDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API ApiDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the API destination.</p>
     */
    inline const Aws::String& GetApiDestinationArn() const { return m_apiDestinationArn; }
    inline bool ApiDestinationArnHasBeenSet() const { return m_apiDestinationArnHasBeenSet; }
    template<typename ApiDestinationArnT = Aws::String>
    void SetApiDestinationArn(ApiDestinationArnT&& value) { m_apiDestinationArnHasBeenSet = true; m_apiDestinationArn = std::forward<ApiDestinationArnT>(value); }
    template<typename ApiDestinationArnT = Aws::String>
    ApiDestination& WithApiDestinationArn(ApiDestinationArnT&& value) { SetApiDestinationArn(std::forward<ApiDestinationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API destination.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ApiDestination& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the API destination.</p>
     */
    inline ApiDestinationState GetApiDestinationState() const { return m_apiDestinationState; }
    inline bool ApiDestinationStateHasBeenSet() const { return m_apiDestinationStateHasBeenSet; }
    inline void SetApiDestinationState(ApiDestinationState value) { m_apiDestinationStateHasBeenSet = true; m_apiDestinationState = value; }
    inline ApiDestination& WithApiDestinationState(ApiDestinationState value) { SetApiDestinationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the connection specified for the API destination.</p>
     */
    inline const Aws::String& GetConnectionArn() const { return m_connectionArn; }
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }
    template<typename ConnectionArnT = Aws::String>
    void SetConnectionArn(ConnectionArnT&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::forward<ConnectionArnT>(value); }
    template<typename ConnectionArnT = Aws::String>
    ApiDestination& WithConnectionArn(ConnectionArnT&& value) { SetConnectionArn(std::forward<ConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the endpoint for the API destination.</p>
     */
    inline const Aws::String& GetInvocationEndpoint() const { return m_invocationEndpoint; }
    inline bool InvocationEndpointHasBeenSet() const { return m_invocationEndpointHasBeenSet; }
    template<typename InvocationEndpointT = Aws::String>
    void SetInvocationEndpoint(InvocationEndpointT&& value) { m_invocationEndpointHasBeenSet = true; m_invocationEndpoint = std::forward<InvocationEndpointT>(value); }
    template<typename InvocationEndpointT = Aws::String>
    ApiDestination& WithInvocationEndpoint(InvocationEndpointT&& value) { SetInvocationEndpoint(std::forward<InvocationEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method to use to connect to the HTTP endpoint.</p>
     */
    inline ApiDestinationHttpMethod GetHttpMethod() const { return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    inline void SetHttpMethod(ApiDestinationHttpMethod value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }
    inline ApiDestination& WithHttpMethod(ApiDestinationHttpMethod value) { SetHttpMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of invocations per second to send to the HTTP
     * endpoint.</p>
     */
    inline int GetInvocationRateLimitPerSecond() const { return m_invocationRateLimitPerSecond; }
    inline bool InvocationRateLimitPerSecondHasBeenSet() const { return m_invocationRateLimitPerSecondHasBeenSet; }
    inline void SetInvocationRateLimitPerSecond(int value) { m_invocationRateLimitPerSecondHasBeenSet = true; m_invocationRateLimitPerSecond = value; }
    inline ApiDestination& WithInvocationRateLimitPerSecond(int value) { SetInvocationRateLimitPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the API destination was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ApiDestination& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the API destination was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    ApiDestination& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiDestinationArn;
    bool m_apiDestinationArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ApiDestinationState m_apiDestinationState{ApiDestinationState::NOT_SET};
    bool m_apiDestinationStateHasBeenSet = false;

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet = false;

    Aws::String m_invocationEndpoint;
    bool m_invocationEndpointHasBeenSet = false;

    ApiDestinationHttpMethod m_httpMethod{ApiDestinationHttpMethod::NOT_SET};
    bool m_httpMethodHasBeenSet = false;

    int m_invocationRateLimitPerSecond{0};
    bool m_invocationRateLimitPerSecondHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/model/DisplayConfiguration.h>
#include <aws/gameliftstreams/model/Protocol.h>

#include <utility>

namespace Aws {
namespace GameLiftStreams {
namespace Model {

/**
 */
class CreateStreamUrlRequest : public GameLiftStreamsRequest {
 public:
  AWS_GAMELIFTSTREAMS_API CreateStreamUrlRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateStreamUrl"; }

  AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>An <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
   * Resource Name (ARN)</a> or ID that uniquely identifies the stream group
   * resource. Example ARN:
   * <code>arn:aws:gameliftstreams:us-west-2:111122223333:streamgroup/sg-1AB2C3De4</code>.
   * Example ID: <code>sg-1AB2C3De4</code>. </p> <p>The stream session runs in this
   * stream group.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  CreateStreamUrlRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
   * Resource Name (ARN)</a> or ID that uniquely identifies the application resource.
   * Example ARN:
   * <code>arn:aws:gameliftstreams:us-west-2:111122223333:application/a-9ZY8X7Wv6</code>.
   * Example ID: <code>a-9ZY8X7Wv6</code>. </p> <p>This application must be
   * associated with the stream group.</p>
   */
  inline const Aws::String& GetApplicationIdentifier() const { return m_applicationIdentifier; }
  inline bool ApplicationIdentifierHasBeenSet() const { return m_applicationIdentifierHasBeenSet; }
  template <typename ApplicationIdentifierT = Aws::String>
  void SetApplicationIdentifier(ApplicationIdentifierT&& value) {
    m_applicationIdentifierHasBeenSet = true;
    m_applicationIdentifier = std::forward<ApplicationIdentifierT>(value);
  }
  template <typename ApplicationIdentifierT = Aws::String>
  CreateStreamUrlRequest& WithApplicationIdentifier(ApplicationIdentifierT&& value) {
    SetApplicationIdentifier(std::forward<ApplicationIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data transport protocol for the stream session. Amazon GameLift Streams
   * supports <code>WebRTC</code>.</p>
   */
  inline Protocol GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(Protocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline CreateStreamUrlRequest& WithProtocol(Protocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of minutes after creation that the stream URL remains valid. After
   * this period, the status of the stream URL changes to <code>EXPIRED</code> and it
   * can no longer start stream sessions. The minimum is 1 minute. For the maximum,
   * see <a
   * href="https://docs.aws.amazon.com/gameliftstreams/latest/developerguide/regions-quotas.html">Regions,
   * quotas, and limitations</a> in the <i>Amazon GameLift Streams Developer
   * Guide</i>.</p>
   */
  inline int GetUrlExpiresAfterMinutes() const { return m_urlExpiresAfterMinutes; }
  inline bool UrlExpiresAfterMinutesHasBeenSet() const { return m_urlExpiresAfterMinutesHasBeenSet; }
  inline void SetUrlExpiresAfterMinutes(int value) {
    m_urlExpiresAfterMinutesHasBeenSet = true;
    m_urlExpiresAfterMinutes = value;
  }
  inline CreateStreamUrlRequest& WithUrlExpiresAfterMinutes(int value) {
    SetUrlExpiresAfterMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of times the stream URL can start a stream session. Each
   * successful use reduces the remaining uses by one. The minimum is 1, and the
   * default is 1. For the maximum, see <a
   * href="https://docs.aws.amazon.com/gameliftstreams/latest/developerguide/regions-quotas.html">Regions,
   * quotas, and limitations</a> in the <i>Amazon GameLift Streams Developer
   * Guide</i>.</p>
   */
  inline int GetUsageLimit() const { return m_usageLimit; }
  inline bool UsageLimitHasBeenSet() const { return m_usageLimitHasBeenSet; }
  inline void SetUsageLimit(int value) {
    m_usageLimitHasBeenSet = true;
    m_usageLimit = value;
  }
  inline CreateStreamUrlRequest& WithUsageLimit(int value) {
    SetUsageLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A descriptive label for the stream URL.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateStreamUrlRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of locations, in order of preference, where Amazon GameLift Streams
   * can place the stream session. Specify each location by its Amazon Web Services
   * Region code, for example <code>us-east-1</code>. For a complete list of
   * locations that Amazon GameLift Streams supports, refer to <a
   * href="https://docs.aws.amazon.com/gameliftstreams/latest/developerguide/regions-quotas.html">Regions,
   * quotas, and limitations</a> in the <i>Amazon GameLift Streams Developer
   * Guide</i>. </p>
   */
  inline const Aws::Vector<Aws::String>& GetLocations() const { return m_locations; }
  inline bool LocationsHasBeenSet() const { return m_locationsHasBeenSet; }
  template <typename LocationsT = Aws::Vector<Aws::String>>
  void SetLocations(LocationsT&& value) {
    m_locationsHasBeenSet = true;
    m_locations = std::forward<LocationsT>(value);
  }
  template <typename LocationsT = Aws::Vector<Aws::String>>
  CreateStreamUrlRequest& WithLocations(LocationsT&& value) {
    SetLocations(std::forward<LocationsT>(value));
    return *this;
  }
  template <typename LocationsT = Aws::String>
  CreateStreamUrlRequest& AddLocations(LocationsT&& value) {
    m_locationsHasBeenSet = true;
    m_locations.emplace_back(std::forward<LocationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum length of time, in seconds, that a stream session started from
   * this stream URL can run. Valid values are 1-86400 seconds (1 second to 24
   * hours). The default is 43200 seconds (12 hours).</p>
   */
  inline int GetSessionLengthSeconds() const { return m_sessionLengthSeconds; }
  inline bool SessionLengthSecondsHasBeenSet() const { return m_sessionLengthSecondsHasBeenSet; }
  inline void SetSessionLengthSeconds(int value) {
    m_sessionLengthSecondsHasBeenSet = true;
    m_sessionLengthSeconds = value;
  }
  inline CreateStreamUrlRequest& WithSessionLengthSeconds(int value) {
    SetSessionLengthSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of CLI arguments that are sent to the streaming server when a stream
   * session launches. You can use this to configure the application or stream
   * session details. You can also provide custom arguments that Amazon GameLift
   * Streams passes to your game client.</p> <p>
   * <code>AdditionalEnvironmentVariables</code> and
   * <code>AdditionalLaunchArgs</code> have similar purposes.
   * <code>AdditionalEnvironmentVariables</code> passes data using environment
   * variables; while <code>AdditionalLaunchArgs</code> passes data using
   * command-line arguments.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAdditionalLaunchArgs() const { return m_additionalLaunchArgs; }
  inline bool AdditionalLaunchArgsHasBeenSet() const { return m_additionalLaunchArgsHasBeenSet; }
  template <typename AdditionalLaunchArgsT = Aws::Vector<Aws::String>>
  void SetAdditionalLaunchArgs(AdditionalLaunchArgsT&& value) {
    m_additionalLaunchArgsHasBeenSet = true;
    m_additionalLaunchArgs = std::forward<AdditionalLaunchArgsT>(value);
  }
  template <typename AdditionalLaunchArgsT = Aws::Vector<Aws::String>>
  CreateStreamUrlRequest& WithAdditionalLaunchArgs(AdditionalLaunchArgsT&& value) {
    SetAdditionalLaunchArgs(std::forward<AdditionalLaunchArgsT>(value));
    return *this;
  }
  template <typename AdditionalLaunchArgsT = Aws::String>
  CreateStreamUrlRequest& AddAdditionalLaunchArgs(AdditionalLaunchArgsT&& value) {
    m_additionalLaunchArgsHasBeenSet = true;
    m_additionalLaunchArgs.emplace_back(std::forward<AdditionalLaunchArgsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A set of options that you can use to control the stream session runtime
   * environment, expressed as a set of key-value pairs. You can use this to
   * configure the application or stream session details. You can also provide custom
   * environment variables that Amazon GameLift Streams passes to your game
   * client.</p>  <p>If you want to debug your application with environment
   * variables, we recommend that you do so in a local environment outside of Amazon
   * GameLift Streams. For more information, refer to the Compatibility Guidance in
   * the troubleshooting section of the Developer Guide.</p>  <p>
   * <code>AdditionalEnvironmentVariables</code> and
   * <code>AdditionalLaunchArgs</code> have similar purposes.
   * <code>AdditionalEnvironmentVariables</code> passes data using environment
   * variables; while <code>AdditionalLaunchArgs</code> passes data using
   * command-line arguments.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEnvironmentVariables() const { return m_additionalEnvironmentVariables; }
  inline bool AdditionalEnvironmentVariablesHasBeenSet() const { return m_additionalEnvironmentVariablesHasBeenSet; }
  template <typename AdditionalEnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  void SetAdditionalEnvironmentVariables(AdditionalEnvironmentVariablesT&& value) {
    m_additionalEnvironmentVariablesHasBeenSet = true;
    m_additionalEnvironmentVariables = std::forward<AdditionalEnvironmentVariablesT>(value);
  }
  template <typename AdditionalEnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  CreateStreamUrlRequest& WithAdditionalEnvironmentVariables(AdditionalEnvironmentVariablesT&& value) {
    SetAdditionalEnvironmentVariables(std::forward<AdditionalEnvironmentVariablesT>(value));
    return *this;
  }
  template <typename AdditionalEnvironmentVariablesKeyT = Aws::String, typename AdditionalEnvironmentVariablesValueT = Aws::String>
  CreateStreamUrlRequest& AddAdditionalEnvironmentVariables(AdditionalEnvironmentVariablesKeyT&& key,
                                                            AdditionalEnvironmentVariablesValueT&& value) {
    m_additionalEnvironmentVariablesHasBeenSet = true;
    m_additionalEnvironmentVariables.emplace(std::forward<AdditionalEnvironmentVariablesKeyT>(key),
                                             std::forward<AdditionalEnvironmentVariablesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon GameLift Streams
   * assumes during stream sessions started from this stream URL. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/gameliftstreams/latest/developerguide/session-credentials.html">Provide
   * AWS credentials to your streaming application</a> in the <i>Amazon GameLift
   * Streams Developer Guide</i>.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  CreateStreamUrlRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display settings, such as resolution, for stream sessions started from
   * this stream URL.</p>
   */
  inline const DisplayConfiguration& GetDisplayConfiguration() const { return m_displayConfiguration; }
  inline bool DisplayConfigurationHasBeenSet() const { return m_displayConfigurationHasBeenSet; }
  template <typename DisplayConfigurationT = DisplayConfiguration>
  void SetDisplayConfiguration(DisplayConfigurationT&& value) {
    m_displayConfigurationHasBeenSet = true;
    m_displayConfiguration = std::forward<DisplayConfigurationT>(value);
  }
  template <typename DisplayConfigurationT = DisplayConfiguration>
  CreateStreamUrlRequest& WithDisplayConfiguration(DisplayConfigurationT&& value) {
    SetDisplayConfiguration(std::forward<DisplayConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure this request
   * is idempotent. If you retry a request with the same <code>ClientToken</code>,
   * Amazon GameLift Streams returns the original response without performing the
   * operation again.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateStreamUrlRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;

  Aws::String m_applicationIdentifier;

  Protocol m_protocol{Protocol::NOT_SET};

  int m_urlExpiresAfterMinutes{0};

  int m_usageLimit{0};

  Aws::String m_description;

  Aws::Vector<Aws::String> m_locations;

  int m_sessionLengthSeconds{0};

  Aws::Vector<Aws::String> m_additionalLaunchArgs;

  Aws::Map<Aws::String, Aws::String> m_additionalEnvironmentVariables;

  Aws::String m_roleArn;

  DisplayConfiguration m_displayConfiguration;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_identifierHasBeenSet = false;
  bool m_applicationIdentifierHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
  bool m_urlExpiresAfterMinutesHasBeenSet = false;
  bool m_usageLimitHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_locationsHasBeenSet = false;
  bool m_sessionLengthSecondsHasBeenSet = false;
  bool m_additionalLaunchArgsHasBeenSet = false;
  bool m_additionalEnvironmentVariablesHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_displayConfigurationHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws

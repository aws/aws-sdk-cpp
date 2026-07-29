/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/model/ShaderCacheStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GameLiftStreams {
namespace Model {

/**
 * <p>Describes a shader cache associated with an Amazon GameLift Streams
 * application.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/ShaderCacheSummary">AWS
 * API Reference</a></p>
 */
class ShaderCacheSummary {
 public:
  AWS_GAMELIFTSTREAMS_API ShaderCacheSummary() = default;
  AWS_GAMELIFTSTREAMS_API ShaderCacheSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFTSTREAMS_API ShaderCacheSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFTSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A unique identifier for the shader cache, formatted as a 32-character
   * hexadecimal string. Format is <code>1271e693c50b940e228582f1ccdd4e27</code>.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  ShaderCacheSummary& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
   * Resource Name (ARN)</a> that uniquely identifies the application resource.
   * Example ARN:
   * <code>arn:aws:gameliftstreams:us-west-2:111122223333:application/a-9ZY8X7Wv6</code>.
   * </p>
   */
  inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
  inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
  template <typename ApplicationArnT = Aws::String>
  void SetApplicationArn(ApplicationArnT&& value) {
    m_applicationArnHasBeenSet = true;
    m_applicationArn = std::forward<ApplicationArnT>(value);
  }
  template <typename ApplicationArnT = Aws::String>
  ShaderCacheSummary& WithApplicationArn(ApplicationArnT&& value) {
    SetApplicationArn(std::forward<ApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the shader cache. Possible statuses include the
   * following:</p> <ul> <li> <p> <code>INITIALIZED</code>: Amazon GameLift Streams
   * received the request and is preparing the shader cache.</p> </li> <li> <p>
   * <code>PROCESSING</code>: Amazon GameLift Streams is replicating the shader cache
   * to the streaming locations in the associated stream groups.</p> </li> <li> <p>
   * <code>READY</code>: The shader cache is replicated and available for use in
   * stream sessions.</p> </li> <li> <p> <code>DELETING</code>: Amazon GameLift
   * Streams is deleting the shader cache.</p> </li> <li> <p> <code>ERROR</code>: An
   * error occurred during shader cache processing. Create a new shader cache to try
   * again.</p> </li> </ul>
   */
  inline ShaderCacheStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ShaderCacheStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ShaderCacheSummary& WithStatus(ShaderCacheStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A timestamp that indicates when this resource was last updated. Timestamps
   * are expressed using in ISO8601 format, such as:
   * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  ShaderCacheSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total storage used by all compiled shader files in this shader cache, in
   * bytes.</p>
   */
  inline long long GetStorageBytes() const { return m_storageBytes; }
  inline bool StorageBytesHasBeenSet() const { return m_storageBytesHasBeenSet; }
  inline void SetStorageBytes(long long value) {
    m_storageBytesHasBeenSet = true;
    m_storageBytes = value;
  }
  inline ShaderCacheSummary& WithStorageBytes(long long value) {
    SetStorageBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The stream groups compatible with this shader cache. Compatibility is based
   * on GPU type and GPU driver version. For more information on shader cache
   * compatibility, see <a
   * href="https://docs.aws.amazon.com/gameliftstreams/latest/developerguide/shader-caches.html">Shader
   * caches</a> in the <i>Amazon GameLift Streams Developer Guide</i>.</p> <p>This
   * value is a set of <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
   * Resource Names (ARNs)</a> that uniquely identify stream group resources. Example
   * ARN:
   * <code>arn:aws:gameliftstreams:us-west-2:111122223333:streamgroup/sg-1AB2C3De4</code>.
   * </p>
   */
  inline const Aws::Vector<Aws::String>& GetAssociatedStreamGroups() const { return m_associatedStreamGroups; }
  inline bool AssociatedStreamGroupsHasBeenSet() const { return m_associatedStreamGroupsHasBeenSet; }
  template <typename AssociatedStreamGroupsT = Aws::Vector<Aws::String>>
  void SetAssociatedStreamGroups(AssociatedStreamGroupsT&& value) {
    m_associatedStreamGroupsHasBeenSet = true;
    m_associatedStreamGroups = std::forward<AssociatedStreamGroupsT>(value);
  }
  template <typename AssociatedStreamGroupsT = Aws::Vector<Aws::String>>
  ShaderCacheSummary& WithAssociatedStreamGroups(AssociatedStreamGroupsT&& value) {
    SetAssociatedStreamGroups(std::forward<AssociatedStreamGroupsT>(value));
    return *this;
  }
  template <typename AssociatedStreamGroupsT = Aws::String>
  ShaderCacheSummary& AddAssociatedStreamGroups(AssociatedStreamGroupsT&& value) {
    m_associatedStreamGroupsHasBeenSet = true;
    m_associatedStreamGroups.emplace_back(std::forward<AssociatedStreamGroupsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;

  Aws::String m_applicationArn;

  ShaderCacheStatus m_status{ShaderCacheStatus::NOT_SET};

  Aws::Utils::DateTime m_lastUpdatedAt{};

  long long m_storageBytes{0};

  Aws::Vector<Aws::String> m_associatedStreamGroups;
  bool m_identifierHasBeenSet = false;
  bool m_applicationArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
  bool m_storageBytesHasBeenSet = false;
  bool m_associatedStreamGroupsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws

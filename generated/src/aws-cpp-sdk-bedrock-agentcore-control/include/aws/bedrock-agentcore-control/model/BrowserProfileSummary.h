/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/BrowserProfileStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Contains summary information about a browser profile. A browser profile
 * stores persistent browser data that can be reused across browser
 * sessions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/BrowserProfileSummary">AWS
 * API Reference</a></p>
 */
class BrowserProfileSummary {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API BrowserProfileSummary() = default;
  AWS_BEDROCKAGENTCORECONTROL_API BrowserProfileSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API BrowserProfileSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the browser profile.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  BrowserProfileSummary& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the browser profile.</p>
   */
  inline const Aws::String& GetProfileArn() const { return m_profileArn; }
  inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }
  template <typename ProfileArnT = Aws::String>
  void SetProfileArn(ProfileArnT&& value) {
    m_profileArnHasBeenSet = true;
    m_profileArn = std::forward<ProfileArnT>(value);
  }
  template <typename ProfileArnT = Aws::String>
  BrowserProfileSummary& WithProfileArn(ProfileArnT&& value) {
    SetProfileArn(std::forward<ProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the browser profile.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  BrowserProfileSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the browser profile.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  BrowserProfileSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the browser profile. Possible values include READY,
   * SAVING, DELETING, and DELETED.</p>
   */
  inline BrowserProfileStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(BrowserProfileStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline BrowserProfileSummary& WithStatus(BrowserProfileStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the browser profile was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  BrowserProfileSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the browser profile was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  BrowserProfileSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when browser session data was last saved to this profile.</p>
   */
  inline const Aws::Utils::DateTime& GetLastSavedAt() const { return m_lastSavedAt; }
  inline bool LastSavedAtHasBeenSet() const { return m_lastSavedAtHasBeenSet; }
  template <typename LastSavedAtT = Aws::Utils::DateTime>
  void SetLastSavedAt(LastSavedAtT&& value) {
    m_lastSavedAtHasBeenSet = true;
    m_lastSavedAt = std::forward<LastSavedAtT>(value);
  }
  template <typename LastSavedAtT = Aws::Utils::DateTime>
  BrowserProfileSummary& WithLastSavedAt(LastSavedAtT&& value) {
    SetLastSavedAt(std::forward<LastSavedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the browser session from which data was last saved to this
   * profile.</p>
   */
  inline const Aws::String& GetLastSavedBrowserSessionId() const { return m_lastSavedBrowserSessionId; }
  inline bool LastSavedBrowserSessionIdHasBeenSet() const { return m_lastSavedBrowserSessionIdHasBeenSet; }
  template <typename LastSavedBrowserSessionIdT = Aws::String>
  void SetLastSavedBrowserSessionId(LastSavedBrowserSessionIdT&& value) {
    m_lastSavedBrowserSessionIdHasBeenSet = true;
    m_lastSavedBrowserSessionId = std::forward<LastSavedBrowserSessionIdT>(value);
  }
  template <typename LastSavedBrowserSessionIdT = Aws::String>
  BrowserProfileSummary& WithLastSavedBrowserSessionId(LastSavedBrowserSessionIdT&& value) {
    SetLastSavedBrowserSessionId(std::forward<LastSavedBrowserSessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the browser from which data was last saved to this
   * profile.</p>
   */
  inline const Aws::String& GetLastSavedBrowserId() const { return m_lastSavedBrowserId; }
  inline bool LastSavedBrowserIdHasBeenSet() const { return m_lastSavedBrowserIdHasBeenSet; }
  template <typename LastSavedBrowserIdT = Aws::String>
  void SetLastSavedBrowserId(LastSavedBrowserIdT&& value) {
    m_lastSavedBrowserIdHasBeenSet = true;
    m_lastSavedBrowserId = std::forward<LastSavedBrowserIdT>(value);
  }
  template <typename LastSavedBrowserIdT = Aws::String>
  BrowserProfileSummary& WithLastSavedBrowserId(LastSavedBrowserIdT&& value) {
    SetLastSavedBrowserId(std::forward<LastSavedBrowserIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_profileId;

  Aws::String m_profileArn;

  Aws::String m_name;

  Aws::String m_description;

  BrowserProfileStatus m_status{BrowserProfileStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_lastUpdatedAt{};

  Aws::Utils::DateTime m_lastSavedAt{};

  Aws::String m_lastSavedBrowserSessionId;

  Aws::String m_lastSavedBrowserId;
  bool m_profileIdHasBeenSet = false;
  bool m_profileArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
  bool m_lastSavedAtHasBeenSet = false;
  bool m_lastSavedBrowserSessionIdHasBeenSet = false;
  bool m_lastSavedBrowserIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

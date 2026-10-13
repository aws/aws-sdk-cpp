/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect {
namespace Model {

/**
 * <p>Contains summary information about a flow alias.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactFlowAliasSummary">AWS
 * API Reference</a></p>
 */
class ContactFlowAliasSummary {
 public:
  AWS_CONNECT_API ContactFlowAliasSummary() = default;
  AWS_CONNECT_API ContactFlowAliasSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ContactFlowAliasSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the flow alias.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ContactFlowAliasSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the alias.</p>
   */
  inline const Aws::String& GetAliasId() const { return m_aliasId; }
  inline bool AliasIdHasBeenSet() const { return m_aliasIdHasBeenSet; }
  template <typename AliasIdT = Aws::String>
  void SetAliasId(AliasIdT&& value) {
    m_aliasIdHasBeenSet = true;
    m_aliasId = std::forward<AliasIdT>(value);
  }
  template <typename AliasIdT = Aws::String>
  ContactFlowAliasSummary& WithAliasId(AliasIdT&& value) {
    SetAliasId(std::forward<AliasIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the flow.</p>
   */
  inline long long GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  inline void SetVersion(long long value) {
    m_versionHasBeenSet = true;
    m_version = value;
  }
  inline ContactFlowAliasSummary& WithVersion(long long value) {
    SetVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the alias.</p>
   */
  inline const Aws::String& GetAliasName() const { return m_aliasName; }
  inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
  template <typename AliasNameT = Aws::String>
  void SetAliasName(AliasNameT&& value) {
    m_aliasNameHasBeenSet = true;
    m_aliasName = std::forward<AliasNameT>(value);
  }
  template <typename AliasNameT = Aws::String>
  ContactFlowAliasSummary& WithAliasName(AliasNameT&& value) {
    SetAliasName(std::forward<AliasNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the alias.</p>
   */
  inline const Aws::String& GetAliasDescription() const { return m_aliasDescription; }
  inline bool AliasDescriptionHasBeenSet() const { return m_aliasDescriptionHasBeenSet; }
  template <typename AliasDescriptionT = Aws::String>
  void SetAliasDescription(AliasDescriptionT&& value) {
    m_aliasDescriptionHasBeenSet = true;
    m_aliasDescription = std::forward<AliasDescriptionT>(value);
  }
  template <typename AliasDescriptionT = Aws::String>
  ContactFlowAliasSummary& WithAliasDescription(AliasDescriptionT&& value) {
    SetAliasDescription(std::forward<AliasDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this resource was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  ContactFlowAliasSummary& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region where this resource was last modified.</p>
   */
  inline const Aws::String& GetLastModifiedRegion() const { return m_lastModifiedRegion; }
  inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
  template <typename LastModifiedRegionT = Aws::String>
  void SetLastModifiedRegion(LastModifiedRegionT&& value) {
    m_lastModifiedRegionHasBeenSet = true;
    m_lastModifiedRegion = std::forward<LastModifiedRegionT>(value);
  }
  template <typename LastModifiedRegionT = Aws::String>
  ContactFlowAliasSummary& WithLastModifiedRegion(LastModifiedRegionT&& value) {
    SetLastModifiedRegion(std::forward<LastModifiedRegionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_aliasId;

  long long m_version{0};

  Aws::String m_aliasName;

  Aws::String m_aliasDescription;

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_lastModifiedRegion;
  bool m_arnHasBeenSet = false;
  bool m_aliasIdHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_aliasNameHasBeenSet = false;
  bool m_aliasDescriptionHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_lastModifiedRegionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

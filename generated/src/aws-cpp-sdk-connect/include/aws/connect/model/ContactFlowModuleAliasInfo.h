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
 * <p>Contains information about an alias.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactFlowModuleAliasInfo">AWS
 * API Reference</a></p>
 */
class ContactFlowModuleAliasInfo {
 public:
  AWS_CONNECT_API ContactFlowModuleAliasInfo() = default;
  AWS_CONNECT_API ContactFlowModuleAliasInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ContactFlowModuleAliasInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the flow module.</p>
   */
  inline const Aws::String& GetContactFlowModuleId() const { return m_contactFlowModuleId; }
  inline bool ContactFlowModuleIdHasBeenSet() const { return m_contactFlowModuleIdHasBeenSet; }
  template <typename ContactFlowModuleIdT = Aws::String>
  void SetContactFlowModuleId(ContactFlowModuleIdT&& value) {
    m_contactFlowModuleIdHasBeenSet = true;
    m_contactFlowModuleId = std::forward<ContactFlowModuleIdT>(value);
  }
  template <typename ContactFlowModuleIdT = Aws::String>
  ContactFlowModuleAliasInfo& WithContactFlowModuleId(ContactFlowModuleIdT&& value) {
    SetContactFlowModuleId(std::forward<ContactFlowModuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the flow module.</p>
   */
  inline const Aws::String& GetContactFlowModuleArn() const { return m_contactFlowModuleArn; }
  inline bool ContactFlowModuleArnHasBeenSet() const { return m_contactFlowModuleArnHasBeenSet; }
  template <typename ContactFlowModuleArnT = Aws::String>
  void SetContactFlowModuleArn(ContactFlowModuleArnT&& value) {
    m_contactFlowModuleArnHasBeenSet = true;
    m_contactFlowModuleArn = std::forward<ContactFlowModuleArnT>(value);
  }
  template <typename ContactFlowModuleArnT = Aws::String>
  ContactFlowModuleAliasInfo& WithContactFlowModuleArn(ContactFlowModuleArnT&& value) {
    SetContactFlowModuleArn(std::forward<ContactFlowModuleArnT>(value));
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
  ContactFlowModuleAliasInfo& WithAliasId(AliasIdT&& value) {
    SetAliasId(std::forward<AliasIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the flow module.</p>
   */
  inline long long GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  inline void SetVersion(long long value) {
    m_versionHasBeenSet = true;
    m_version = value;
  }
  inline ContactFlowModuleAliasInfo& WithVersion(long long value) {
    SetVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the alias.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ContactFlowModuleAliasInfo& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the alias.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ContactFlowModuleAliasInfo& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
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
  ContactFlowModuleAliasInfo& WithLastModifiedRegion(LastModifiedRegionT&& value) {
    SetLastModifiedRegion(std::forward<LastModifiedRegionT>(value));
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
  ContactFlowModuleAliasInfo& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contactFlowModuleId;

  Aws::String m_contactFlowModuleArn;

  Aws::String m_aliasId;

  long long m_version{0};

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_lastModifiedRegion;

  Aws::Utils::DateTime m_lastModifiedTime{};
  bool m_contactFlowModuleIdHasBeenSet = false;
  bool m_contactFlowModuleArnHasBeenSet = false;
  bool m_aliasIdHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_lastModifiedRegionHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

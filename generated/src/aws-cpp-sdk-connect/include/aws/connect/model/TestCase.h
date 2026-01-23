/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TestCaseEntryPoint.h>
#include <aws/connect/model/TestCaseStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * <p>Contains information about a test case.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TestCase">AWS
 * API Reference</a></p>
 */
class TestCase {
 public:
  AWS_CONNECT_API TestCase() = default;
  AWS_CONNECT_API TestCase(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API TestCase& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the test case.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  TestCase& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the test case.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  TestCase& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the test case.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  TestCase& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON string that represents the content of the test.</p>
   */
  inline const Aws::String& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::String>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::String>
  TestCase& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines the starting point for the test, including channel type and
   * parameters.</p>
   */
  inline const TestCaseEntryPoint& GetEntryPoint() const { return m_entryPoint; }
  inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }
  template <typename EntryPointT = TestCaseEntryPoint>
  void SetEntryPoint(EntryPointT&& value) {
    m_entryPointHasBeenSet = true;
    m_entryPoint = std::forward<EntryPointT>(value);
  }
  template <typename EntryPointT = TestCaseEntryPoint>
  TestCase& WithEntryPoint(EntryPointT&& value) {
    SetEntryPoint(std::forward<EntryPointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines the test attributes for precise data representation.</p>
   */
  inline const Aws::String& GetInitializationData() const { return m_initializationData; }
  inline bool InitializationDataHasBeenSet() const { return m_initializationDataHasBeenSet; }
  template <typename InitializationDataT = Aws::String>
  void SetInitializationData(InitializationDataT&& value) {
    m_initializationDataHasBeenSet = true;
    m_initializationData = std::forward<InitializationDataT>(value);
  }
  template <typename InitializationDataT = Aws::String>
  TestCase& WithInitializationData(InitializationDataT&& value) {
    SetInitializationData(std::forward<InitializationDataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the test case.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  TestCase& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates the test status as either SAVED or PUBLISHED.</p>
   */
  inline TestCaseStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(TestCaseStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline TestCase& WithStatus(TestCaseStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the test case was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  TestCase& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The region in which the test case was last modified.</p>
   */
  inline const Aws::String& GetLastModifiedRegion() const { return m_lastModifiedRegion; }
  inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
  template <typename LastModifiedRegionT = Aws::String>
  void SetLastModifiedRegion(LastModifiedRegionT&& value) {
    m_lastModifiedRegionHasBeenSet = true;
    m_lastModifiedRegion = std::forward<LastModifiedRegionT>(value);
  }
  template <typename LastModifiedRegionT = Aws::String>
  TestCase& WithLastModifiedRegion(LastModifiedRegionT&& value) {
    SetLastModifiedRegion(std::forward<LastModifiedRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags used to organize, track, or control access for this resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  TestCase& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  TestCase& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SHA256 hash of the test case content.</p>
   */
  inline const Aws::String& GetTestCaseSha256() const { return m_testCaseSha256; }
  inline bool TestCaseSha256HasBeenSet() const { return m_testCaseSha256HasBeenSet; }
  template <typename TestCaseSha256T = Aws::String>
  void SetTestCaseSha256(TestCaseSha256T&& value) {
    m_testCaseSha256HasBeenSet = true;
    m_testCaseSha256 = std::forward<TestCaseSha256T>(value);
  }
  template <typename TestCaseSha256T = Aws::String>
  TestCase& WithTestCaseSha256(TestCaseSha256T&& value) {
    SetTestCaseSha256(std::forward<TestCaseSha256T>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_id;

  Aws::String m_name;

  Aws::String m_content;

  TestCaseEntryPoint m_entryPoint;

  Aws::String m_initializationData;

  Aws::String m_description;

  TestCaseStatus m_status{TestCaseStatus::NOT_SET};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_lastModifiedRegion;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_testCaseSha256;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_entryPointHasBeenSet = false;
  bool m_initializationDataHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_lastModifiedRegionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_testCaseSha256HasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

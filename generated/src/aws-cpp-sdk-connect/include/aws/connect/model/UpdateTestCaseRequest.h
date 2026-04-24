/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TestCaseEntryPoint.h>
#include <aws/connect/model/TestCaseStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class UpdateTestCaseRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API UpdateTestCaseRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateTestCase"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  AWS_CONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The identifier of the Amazon Connect instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  UpdateTestCaseRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the test case to update.</p>
   */
  inline const Aws::String& GetTestCaseId() const { return m_testCaseId; }
  inline bool TestCaseIdHasBeenSet() const { return m_testCaseIdHasBeenSet; }
  template <typename TestCaseIdT = Aws::String>
  void SetTestCaseId(TestCaseIdT&& value) {
    m_testCaseIdHasBeenSet = true;
    m_testCaseId = std::forward<TestCaseIdT>(value);
  }
  template <typename TestCaseIdT = Aws::String>
  UpdateTestCaseRequest& WithTestCaseId(TestCaseIdT&& value) {
    SetTestCaseId(std::forward<TestCaseIdT>(value));
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
  UpdateTestCaseRequest& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines the starting point for your test.</p>
   */
  inline const TestCaseEntryPoint& GetEntryPoint() const { return m_entryPoint; }
  inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }
  template <typename EntryPointT = TestCaseEntryPoint>
  void SetEntryPoint(EntryPointT&& value) {
    m_entryPointHasBeenSet = true;
    m_entryPoint = std::forward<EntryPointT>(value);
  }
  template <typename EntryPointT = TestCaseEntryPoint>
  UpdateTestCaseRequest& WithEntryPoint(EntryPointT&& value) {
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
  UpdateTestCaseRequest& WithInitializationData(InitializationDataT&& value) {
    SetInitializationData(std::forward<InitializationDataT>(value));
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
  UpdateTestCaseRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
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
  UpdateTestCaseRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates the test status as either SAVED or PUBLISHED. The PUBLISHED status
   * will initiate validation on the content. The SAVED status does not initiate
   * validation of the content.</p>
   */
  inline TestCaseStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(TestCaseStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateTestCaseRequest& WithStatus(TestCaseStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the resource was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  UpdateTestCaseRequest& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The region in which the resource was last modified</p>
   */
  inline const Aws::String& GetLastModifiedRegion() const { return m_lastModifiedRegion; }
  inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
  template <typename LastModifiedRegionT = Aws::String>
  void SetLastModifiedRegion(LastModifiedRegionT&& value) {
    m_lastModifiedRegionHasBeenSet = true;
    m_lastModifiedRegion = std::forward<LastModifiedRegionT>(value);
  }
  template <typename LastModifiedRegionT = Aws::String>
  UpdateTestCaseRequest& WithLastModifiedRegion(LastModifiedRegionT&& value) {
    SetLastModifiedRegion(std::forward<LastModifiedRegionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_testCaseId;

  Aws::String m_content;

  TestCaseEntryPoint m_entryPoint;

  Aws::String m_initializationData;

  Aws::String m_name;

  Aws::String m_description;

  TestCaseStatus m_status{TestCaseStatus::NOT_SET};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_lastModifiedRegion;
  bool m_instanceIdHasBeenSet = false;
  bool m_testCaseIdHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_entryPointHasBeenSet = false;
  bool m_initializationDataHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_lastModifiedRegionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
 * <p>Contains information about a page configuration in a workspace, including the
 * view assigned to the page.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/WorkspacePage">AWS
 * API Reference</a></p>
 */
class WorkspacePage {
 public:
  AWS_CONNECT_API WorkspacePage() = default;
  AWS_CONNECT_API WorkspacePage(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API WorkspacePage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the view associated with this page.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  WorkspacePage& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The page identifier. System pages include <code>HOME</code> and
   * <code>AGENT_EXPERIENCE</code>.</p>
   */
  inline const Aws::String& GetPage() const { return m_page; }
  inline bool PageHasBeenSet() const { return m_pageHasBeenSet; }
  template <typename PageT = Aws::String>
  void SetPage(PageT&& value) {
    m_pageHasBeenSet = true;
    m_page = std::forward<PageT>(value);
  }
  template <typename PageT = Aws::String>
  WorkspacePage& WithPage(PageT&& value) {
    SetPage(std::forward<PageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL-friendly identifier for the page.</p>
   */
  inline const Aws::String& GetSlug() const { return m_slug; }
  inline bool SlugHasBeenSet() const { return m_slugHasBeenSet; }
  template <typename SlugT = Aws::String>
  void SetSlug(SlugT&& value) {
    m_slugHasBeenSet = true;
    m_slug = std::forward<SlugT>(value);
  }
  template <typename SlugT = Aws::String>
  WorkspacePage& WithSlug(SlugT&& value) {
    SetSlug(std::forward<SlugT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A JSON string containing input parameters passed to the view when the page is
   * rendered.</p>
   */
  inline const Aws::String& GetInputData() const { return m_inputData; }
  inline bool InputDataHasBeenSet() const { return m_inputDataHasBeenSet; }
  template <typename InputDataT = Aws::String>
  void SetInputData(InputDataT&& value) {
    m_inputDataHasBeenSet = true;
    m_inputData = std::forward<InputDataT>(value);
  }
  template <typename InputDataT = Aws::String>
  WorkspacePage& WithInputData(InputDataT&& value) {
    SetInputData(std::forward<InputDataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  Aws::String m_page;

  Aws::String m_slug;

  Aws::String m_inputData;
  bool m_resourceArnHasBeenSet = false;
  bool m_pageHasBeenSet = false;
  bool m_slugHasBeenSet = false;
  bool m_inputDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

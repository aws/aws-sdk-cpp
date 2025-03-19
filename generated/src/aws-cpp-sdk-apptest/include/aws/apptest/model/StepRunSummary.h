/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/MainframeActionSummary.h>
#include <aws/apptest/model/CompareActionSummary.h>
#include <aws/apptest/model/ResourceActionSummary.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Defines the step run summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/StepRunSummary">AWS
   * API Reference</a></p>
   */
  class StepRunSummary
  {
  public:
    AWS_APPTEST_API StepRunSummary() = default;
    AWS_APPTEST_API StepRunSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API StepRunSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The mainframe action of the step run summary.</p>
     */
    inline const MainframeActionSummary& GetMainframeAction() const { return m_mainframeAction; }
    inline bool MainframeActionHasBeenSet() const { return m_mainframeActionHasBeenSet; }
    template<typename MainframeActionT = MainframeActionSummary>
    void SetMainframeAction(MainframeActionT&& value) { m_mainframeActionHasBeenSet = true; m_mainframeAction = std::forward<MainframeActionT>(value); }
    template<typename MainframeActionT = MainframeActionSummary>
    StepRunSummary& WithMainframeAction(MainframeActionT&& value) { SetMainframeAction(std::forward<MainframeActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compare action of the step run summary.</p>
     */
    inline const CompareActionSummary& GetCompareAction() const { return m_compareAction; }
    inline bool CompareActionHasBeenSet() const { return m_compareActionHasBeenSet; }
    template<typename CompareActionT = CompareActionSummary>
    void SetCompareAction(CompareActionT&& value) { m_compareActionHasBeenSet = true; m_compareAction = std::forward<CompareActionT>(value); }
    template<typename CompareActionT = CompareActionSummary>
    StepRunSummary& WithCompareAction(CompareActionT&& value) { SetCompareAction(std::forward<CompareActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource action of the step run summary.</p>
     */
    inline const ResourceActionSummary& GetResourceAction() const { return m_resourceAction; }
    inline bool ResourceActionHasBeenSet() const { return m_resourceActionHasBeenSet; }
    template<typename ResourceActionT = ResourceActionSummary>
    void SetResourceAction(ResourceActionT&& value) { m_resourceActionHasBeenSet = true; m_resourceAction = std::forward<ResourceActionT>(value); }
    template<typename ResourceActionT = ResourceActionSummary>
    StepRunSummary& WithResourceAction(ResourceActionT&& value) { SetResourceAction(std::forward<ResourceActionT>(value)); return *this;}
    ///@}
  private:

    MainframeActionSummary m_mainframeAction;
    bool m_mainframeActionHasBeenSet = false;

    CompareActionSummary m_compareAction;
    bool m_compareActionHasBeenSet = false;

    ResourceActionSummary m_resourceAction;
    bool m_resourceActionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/ResourceAction.h>
#include <aws/apptest/model/MainframeAction.h>
#include <aws/apptest/model/CompareAction.h>
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
   * <p>Specifies a step action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/StepAction">AWS
   * API Reference</a></p>
   */
  class StepAction
  {
  public:
    AWS_APPTEST_API StepAction() = default;
    AWS_APPTEST_API StepAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API StepAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource action of the step action.</p>
     */
    inline const ResourceAction& GetResourceAction() const { return m_resourceAction; }
    inline bool ResourceActionHasBeenSet() const { return m_resourceActionHasBeenSet; }
    template<typename ResourceActionT = ResourceAction>
    void SetResourceAction(ResourceActionT&& value) { m_resourceActionHasBeenSet = true; m_resourceAction = std::forward<ResourceActionT>(value); }
    template<typename ResourceActionT = ResourceAction>
    StepAction& WithResourceAction(ResourceActionT&& value) { SetResourceAction(std::forward<ResourceActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mainframe action of the step action.</p>
     */
    inline const MainframeAction& GetMainframeAction() const { return m_mainframeAction; }
    inline bool MainframeActionHasBeenSet() const { return m_mainframeActionHasBeenSet; }
    template<typename MainframeActionT = MainframeAction>
    void SetMainframeAction(MainframeActionT&& value) { m_mainframeActionHasBeenSet = true; m_mainframeAction = std::forward<MainframeActionT>(value); }
    template<typename MainframeActionT = MainframeAction>
    StepAction& WithMainframeAction(MainframeActionT&& value) { SetMainframeAction(std::forward<MainframeActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compare action of the step action.</p>
     */
    inline const CompareAction& GetCompareAction() const { return m_compareAction; }
    inline bool CompareActionHasBeenSet() const { return m_compareActionHasBeenSet; }
    template<typename CompareActionT = CompareAction>
    void SetCompareAction(CompareActionT&& value) { m_compareActionHasBeenSet = true; m_compareAction = std::forward<CompareActionT>(value); }
    template<typename CompareActionT = CompareAction>
    StepAction& WithCompareAction(CompareActionT&& value) { SetCompareAction(std::forward<CompareActionT>(value)); return *this;}
    ///@}
  private:

    ResourceAction m_resourceAction;
    bool m_resourceActionHasBeenSet = false;

    MainframeAction m_mainframeAction;
    bool m_mainframeActionHasBeenSet = false;

    CompareAction m_compareAction;
    bool m_compareActionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws

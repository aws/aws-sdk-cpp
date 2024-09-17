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
    AWS_APPTEST_API StepAction();
    AWS_APPTEST_API StepAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API StepAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource action of the step action.</p>
     */
    inline const ResourceAction& GetResourceAction() const{ return m_resourceAction; }
    inline bool ResourceActionHasBeenSet() const { return m_resourceActionHasBeenSet; }
    inline void SetResourceAction(const ResourceAction& value) { m_resourceActionHasBeenSet = true; m_resourceAction = value; }
    inline void SetResourceAction(ResourceAction&& value) { m_resourceActionHasBeenSet = true; m_resourceAction = std::move(value); }
    inline StepAction& WithResourceAction(const ResourceAction& value) { SetResourceAction(value); return *this;}
    inline StepAction& WithResourceAction(ResourceAction&& value) { SetResourceAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mainframe action of the step action.</p>
     */
    inline const MainframeAction& GetMainframeAction() const{ return m_mainframeAction; }
    inline bool MainframeActionHasBeenSet() const { return m_mainframeActionHasBeenSet; }
    inline void SetMainframeAction(const MainframeAction& value) { m_mainframeActionHasBeenSet = true; m_mainframeAction = value; }
    inline void SetMainframeAction(MainframeAction&& value) { m_mainframeActionHasBeenSet = true; m_mainframeAction = std::move(value); }
    inline StepAction& WithMainframeAction(const MainframeAction& value) { SetMainframeAction(value); return *this;}
    inline StepAction& WithMainframeAction(MainframeAction&& value) { SetMainframeAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compare action of the step action.</p>
     */
    inline const CompareAction& GetCompareAction() const{ return m_compareAction; }
    inline bool CompareActionHasBeenSet() const { return m_compareActionHasBeenSet; }
    inline void SetCompareAction(const CompareAction& value) { m_compareActionHasBeenSet = true; m_compareAction = value; }
    inline void SetCompareAction(CompareAction&& value) { m_compareActionHasBeenSet = true; m_compareAction = std::move(value); }
    inline StepAction& WithCompareAction(const CompareAction& value) { SetCompareAction(value); return *this;}
    inline StepAction& WithCompareAction(CompareAction&& value) { SetCompareAction(std::move(value)); return *this;}
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

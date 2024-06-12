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
    AWS_APPTEST_API StepRunSummary();
    AWS_APPTEST_API StepRunSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API StepRunSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The mainframe action of the step run summary.</p>
     */
    inline const MainframeActionSummary& GetMainframeAction() const{ return m_mainframeAction; }
    inline bool MainframeActionHasBeenSet() const { return m_mainframeActionHasBeenSet; }
    inline void SetMainframeAction(const MainframeActionSummary& value) { m_mainframeActionHasBeenSet = true; m_mainframeAction = value; }
    inline void SetMainframeAction(MainframeActionSummary&& value) { m_mainframeActionHasBeenSet = true; m_mainframeAction = std::move(value); }
    inline StepRunSummary& WithMainframeAction(const MainframeActionSummary& value) { SetMainframeAction(value); return *this;}
    inline StepRunSummary& WithMainframeAction(MainframeActionSummary&& value) { SetMainframeAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compare action of the step run summary.</p>
     */
    inline const CompareActionSummary& GetCompareAction() const{ return m_compareAction; }
    inline bool CompareActionHasBeenSet() const { return m_compareActionHasBeenSet; }
    inline void SetCompareAction(const CompareActionSummary& value) { m_compareActionHasBeenSet = true; m_compareAction = value; }
    inline void SetCompareAction(CompareActionSummary&& value) { m_compareActionHasBeenSet = true; m_compareAction = std::move(value); }
    inline StepRunSummary& WithCompareAction(const CompareActionSummary& value) { SetCompareAction(value); return *this;}
    inline StepRunSummary& WithCompareAction(CompareActionSummary&& value) { SetCompareAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource action of the step run summary.</p>
     */
    inline const ResourceActionSummary& GetResourceAction() const{ return m_resourceAction; }
    inline bool ResourceActionHasBeenSet() const { return m_resourceActionHasBeenSet; }
    inline void SetResourceAction(const ResourceActionSummary& value) { m_resourceActionHasBeenSet = true; m_resourceAction = value; }
    inline void SetResourceAction(ResourceActionSummary&& value) { m_resourceActionHasBeenSet = true; m_resourceAction = std::move(value); }
    inline StepRunSummary& WithResourceAction(const ResourceActionSummary& value) { SetResourceAction(value); return *this;}
    inline StepRunSummary& WithResourceAction(ResourceActionSummary&& value) { SetResourceAction(std::move(value)); return *this;}
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

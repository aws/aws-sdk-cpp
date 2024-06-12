/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/StepAction.h>
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
   * <p>Defines a step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/Step">AWS API
   * Reference</a></p>
   */
  class Step
  {
  public:
    AWS_APPTEST_API Step();
    AWS_APPTEST_API Step(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Step& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Step& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Step& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Step& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the step.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Step& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Step& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Step& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action of the step.</p>
     */
    inline const StepAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const StepAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(StepAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline Step& WithAction(const StepAction& value) { SetAction(value); return *this;}
    inline Step& WithAction(StepAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    StepAction m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws

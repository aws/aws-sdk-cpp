/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Amplify
{
namespace Model
{

  /**
   * <p> Custom rewrite / redirect rule. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CustomRule">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API CustomRule
  {
  public:
    CustomRule();
    CustomRule(Aws::Utils::Json::JsonView jsonValue);
    CustomRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The source pattern for a URL rewrite or redirect rule. </p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p> The source pattern for a URL rewrite or redirect rule. </p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p> The source pattern for a URL rewrite or redirect rule. </p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p> The source pattern for a URL rewrite or redirect rule. </p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p> The source pattern for a URL rewrite or redirect rule. </p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p> The source pattern for a URL rewrite or redirect rule. </p>
     */
    inline CustomRule& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p> The source pattern for a URL rewrite or redirect rule. </p>
     */
    inline CustomRule& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p> The source pattern for a URL rewrite or redirect rule. </p>
     */
    inline CustomRule& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p> The target pattern for a URL rewrite or redirect rule. </p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p> The target pattern for a URL rewrite or redirect rule. </p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p> The target pattern for a URL rewrite or redirect rule. </p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p> The target pattern for a URL rewrite or redirect rule. </p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p> The target pattern for a URL rewrite or redirect rule. </p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p> The target pattern for a URL rewrite or redirect rule. </p>
     */
    inline CustomRule& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p> The target pattern for a URL rewrite or redirect rule. </p>
     */
    inline CustomRule& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p> The target pattern for a URL rewrite or redirect rule. </p>
     */
    inline CustomRule& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p> The status code for a URL rewrite or redirect rule. </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p> The status code for a URL rewrite or redirect rule. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status code for a URL rewrite or redirect rule. </p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status code for a URL rewrite or redirect rule. </p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status code for a URL rewrite or redirect rule. </p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p> The status code for a URL rewrite or redirect rule. </p>
     */
    inline CustomRule& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p> The status code for a URL rewrite or redirect rule. </p>
     */
    inline CustomRule& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p> The status code for a URL rewrite or redirect rule. </p>
     */
    inline CustomRule& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p> The condition for a URL rewrite or redirect rule, e.g. country code. </p>
     */
    inline const Aws::String& GetCondition() const{ return m_condition; }

    /**
     * <p> The condition for a URL rewrite or redirect rule, e.g. country code. </p>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p> The condition for a URL rewrite or redirect rule, e.g. country code. </p>
     */
    inline void SetCondition(const Aws::String& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p> The condition for a URL rewrite or redirect rule, e.g. country code. </p>
     */
    inline void SetCondition(Aws::String&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p> The condition for a URL rewrite or redirect rule, e.g. country code. </p>
     */
    inline void SetCondition(const char* value) { m_conditionHasBeenSet = true; m_condition.assign(value); }

    /**
     * <p> The condition for a URL rewrite or redirect rule, e.g. country code. </p>
     */
    inline CustomRule& WithCondition(const Aws::String& value) { SetCondition(value); return *this;}

    /**
     * <p> The condition for a URL rewrite or redirect rule, e.g. country code. </p>
     */
    inline CustomRule& WithCondition(Aws::String&& value) { SetCondition(std::move(value)); return *this;}

    /**
     * <p> The condition for a URL rewrite or redirect rule, e.g. country code. </p>
     */
    inline CustomRule& WithCondition(const char* value) { SetCondition(value); return *this;}

  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet;

    Aws::String m_target;
    bool m_targetHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_condition;
    bool m_conditionHasBeenSet;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws

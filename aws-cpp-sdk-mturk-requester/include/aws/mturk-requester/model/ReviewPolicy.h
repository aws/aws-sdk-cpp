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
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/PolicyParameter.h>
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
namespace MTurk
{
namespace Model
{

  /**
   * <p> HIT Review Policy data structures represent HIT review policies, which you
   * specify when you create a HIT. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ReviewPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_MTURK_API ReviewPolicy
  {
  public:
    ReviewPolicy();
    ReviewPolicy(Aws::Utils::Json::JsonView jsonValue);
    ReviewPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Name of a Review Policy: SimplePlurality/2011-09-01 or
     * ScoreMyKnownAnswers/2011-09-01 </p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p> Name of a Review Policy: SimplePlurality/2011-09-01 or
     * ScoreMyKnownAnswers/2011-09-01 </p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p> Name of a Review Policy: SimplePlurality/2011-09-01 or
     * ScoreMyKnownAnswers/2011-09-01 </p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p> Name of a Review Policy: SimplePlurality/2011-09-01 or
     * ScoreMyKnownAnswers/2011-09-01 </p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p> Name of a Review Policy: SimplePlurality/2011-09-01 or
     * ScoreMyKnownAnswers/2011-09-01 </p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p> Name of a Review Policy: SimplePlurality/2011-09-01 or
     * ScoreMyKnownAnswers/2011-09-01 </p>
     */
    inline ReviewPolicy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p> Name of a Review Policy: SimplePlurality/2011-09-01 or
     * ScoreMyKnownAnswers/2011-09-01 </p>
     */
    inline ReviewPolicy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p> Name of a Review Policy: SimplePlurality/2011-09-01 or
     * ScoreMyKnownAnswers/2011-09-01 </p>
     */
    inline ReviewPolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>Name of the parameter from the Review policy.</p>
     */
    inline const Aws::Vector<PolicyParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Name of the parameter from the Review policy.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Name of the parameter from the Review policy.</p>
     */
    inline void SetParameters(const Aws::Vector<PolicyParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Name of the parameter from the Review policy.</p>
     */
    inline void SetParameters(Aws::Vector<PolicyParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Name of the parameter from the Review policy.</p>
     */
    inline ReviewPolicy& WithParameters(const Aws::Vector<PolicyParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>Name of the parameter from the Review policy.</p>
     */
    inline ReviewPolicy& WithParameters(Aws::Vector<PolicyParameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Name of the parameter from the Review policy.</p>
     */
    inline ReviewPolicy& AddParameters(const PolicyParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>Name of the parameter from the Review policy.</p>
     */
    inline ReviewPolicy& AddParameters(PolicyParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;

    Aws::Vector<PolicyParameter> m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws

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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/Policy.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Information that implicitly denies authorization. When policy doesn't
   * explicitly deny or allow an action on a resource it is considered an implicit
   * deny.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ImplicitDeny">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API ImplicitDeny
  {
  public:
    ImplicitDeny();
    ImplicitDeny(Aws::Utils::Json::JsonView jsonValue);
    ImplicitDeny& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Policies that don't contain a matching allow or deny statement for the
     * specified action on the specified resource. </p>
     */
    inline const Aws::Vector<Policy>& GetPolicies() const{ return m_policies; }

    /**
     * <p>Policies that don't contain a matching allow or deny statement for the
     * specified action on the specified resource. </p>
     */
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }

    /**
     * <p>Policies that don't contain a matching allow or deny statement for the
     * specified action on the specified resource. </p>
     */
    inline void SetPolicies(const Aws::Vector<Policy>& value) { m_policiesHasBeenSet = true; m_policies = value; }

    /**
     * <p>Policies that don't contain a matching allow or deny statement for the
     * specified action on the specified resource. </p>
     */
    inline void SetPolicies(Aws::Vector<Policy>&& value) { m_policiesHasBeenSet = true; m_policies = std::move(value); }

    /**
     * <p>Policies that don't contain a matching allow or deny statement for the
     * specified action on the specified resource. </p>
     */
    inline ImplicitDeny& WithPolicies(const Aws::Vector<Policy>& value) { SetPolicies(value); return *this;}

    /**
     * <p>Policies that don't contain a matching allow or deny statement for the
     * specified action on the specified resource. </p>
     */
    inline ImplicitDeny& WithPolicies(Aws::Vector<Policy>&& value) { SetPolicies(std::move(value)); return *this;}

    /**
     * <p>Policies that don't contain a matching allow or deny statement for the
     * specified action on the specified resource. </p>
     */
    inline ImplicitDeny& AddPolicies(const Policy& value) { m_policiesHasBeenSet = true; m_policies.push_back(value); return *this; }

    /**
     * <p>Policies that don't contain a matching allow or deny statement for the
     * specified action on the specified resource. </p>
     */
    inline ImplicitDeny& AddPolicies(Policy&& value) { m_policiesHasBeenSet = true; m_policies.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Policy> m_policies;
    bool m_policiesHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

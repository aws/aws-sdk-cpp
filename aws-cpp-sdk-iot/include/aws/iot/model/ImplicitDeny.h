/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ImplicitDeny
  {
  public:
    AWS_IOT_API ImplicitDeny();
    AWS_IOT_API ImplicitDeny(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ImplicitDeny& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_policiesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

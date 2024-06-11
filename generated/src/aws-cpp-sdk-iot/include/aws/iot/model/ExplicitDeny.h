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
   * <p>Information that explicitly denies authorization.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ExplicitDeny">AWS
   * API Reference</a></p>
   */
  class ExplicitDeny
  {
  public:
    AWS_IOT_API ExplicitDeny();
    AWS_IOT_API ExplicitDeny(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ExplicitDeny& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The policies that denied the authorization.</p>
     */
    inline const Aws::Vector<Policy>& GetPolicies() const{ return m_policies; }
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }
    inline void SetPolicies(const Aws::Vector<Policy>& value) { m_policiesHasBeenSet = true; m_policies = value; }
    inline void SetPolicies(Aws::Vector<Policy>&& value) { m_policiesHasBeenSet = true; m_policies = std::move(value); }
    inline ExplicitDeny& WithPolicies(const Aws::Vector<Policy>& value) { SetPolicies(value); return *this;}
    inline ExplicitDeny& WithPolicies(Aws::Vector<Policy>&& value) { SetPolicies(std::move(value)); return *this;}
    inline ExplicitDeny& AddPolicies(const Policy& value) { m_policiesHasBeenSet = true; m_policies.push_back(value); return *this; }
    inline ExplicitDeny& AddPolicies(Policy&& value) { m_policiesHasBeenSet = true; m_policies.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Policy> m_policies;
    bool m_policiesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

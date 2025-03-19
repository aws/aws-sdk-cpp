/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Information about the version of the policy associated with the
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/PolicyVersionIdentifier">AWS
   * API Reference</a></p>
   */
  class PolicyVersionIdentifier
  {
  public:
    AWS_IOT_API PolicyVersionIdentifier() = default;
    AWS_IOT_API PolicyVersionIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API PolicyVersionIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    PolicyVersionIdentifier& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the version of the policy associated with the resource.</p>
     */
    inline const Aws::String& GetPolicyVersionId() const { return m_policyVersionId; }
    inline bool PolicyVersionIdHasBeenSet() const { return m_policyVersionIdHasBeenSet; }
    template<typename PolicyVersionIdT = Aws::String>
    void SetPolicyVersionId(PolicyVersionIdT&& value) { m_policyVersionIdHasBeenSet = true; m_policyVersionId = std::forward<PolicyVersionIdT>(value); }
    template<typename PolicyVersionIdT = Aws::String>
    PolicyVersionIdentifier& WithPolicyVersionId(PolicyVersionIdT&& value) { SetPolicyVersionId(std::forward<PolicyVersionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyVersionId;
    bool m_policyVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

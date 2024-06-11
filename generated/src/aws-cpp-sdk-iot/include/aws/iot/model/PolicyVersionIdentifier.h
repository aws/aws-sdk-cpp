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
    AWS_IOT_API PolicyVersionIdentifier();
    AWS_IOT_API PolicyVersionIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API PolicyVersionIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }
    inline PolicyVersionIdentifier& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}
    inline PolicyVersionIdentifier& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}
    inline PolicyVersionIdentifier& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the version of the policy associated with the resource.</p>
     */
    inline const Aws::String& GetPolicyVersionId() const{ return m_policyVersionId; }
    inline bool PolicyVersionIdHasBeenSet() const { return m_policyVersionIdHasBeenSet; }
    inline void SetPolicyVersionId(const Aws::String& value) { m_policyVersionIdHasBeenSet = true; m_policyVersionId = value; }
    inline void SetPolicyVersionId(Aws::String&& value) { m_policyVersionIdHasBeenSet = true; m_policyVersionId = std::move(value); }
    inline void SetPolicyVersionId(const char* value) { m_policyVersionIdHasBeenSet = true; m_policyVersionId.assign(value); }
    inline PolicyVersionIdentifier& WithPolicyVersionId(const Aws::String& value) { SetPolicyVersionId(value); return *this;}
    inline PolicyVersionIdentifier& WithPolicyVersionId(Aws::String&& value) { SetPolicyVersionId(std::move(value)); return *this;}
    inline PolicyVersionIdentifier& WithPolicyVersionId(const char* value) { SetPolicyVersionId(value); return *this;}
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/SecurityProfileIdentifier.h>
#include <aws/iot/model/SecurityProfileTarget.h>
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
   * <p>Information about a security profile and the target associated with
   * it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SecurityProfileTargetMapping">AWS
   * API Reference</a></p>
   */
  class SecurityProfileTargetMapping
  {
  public:
    AWS_IOT_API SecurityProfileTargetMapping() = default;
    AWS_IOT_API SecurityProfileTargetMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API SecurityProfileTargetMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information that identifies the security profile.</p>
     */
    inline const SecurityProfileIdentifier& GetSecurityProfileIdentifier() const { return m_securityProfileIdentifier; }
    inline bool SecurityProfileIdentifierHasBeenSet() const { return m_securityProfileIdentifierHasBeenSet; }
    template<typename SecurityProfileIdentifierT = SecurityProfileIdentifier>
    void SetSecurityProfileIdentifier(SecurityProfileIdentifierT&& value) { m_securityProfileIdentifierHasBeenSet = true; m_securityProfileIdentifier = std::forward<SecurityProfileIdentifierT>(value); }
    template<typename SecurityProfileIdentifierT = SecurityProfileIdentifier>
    SecurityProfileTargetMapping& WithSecurityProfileIdentifier(SecurityProfileIdentifierT&& value) { SetSecurityProfileIdentifier(std::forward<SecurityProfileIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the target (thing group) associated with the security
     * profile.</p>
     */
    inline const SecurityProfileTarget& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = SecurityProfileTarget>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = SecurityProfileTarget>
    SecurityProfileTargetMapping& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}
  private:

    SecurityProfileIdentifier m_securityProfileIdentifier;
    bool m_securityProfileIdentifierHasBeenSet = false;

    SecurityProfileTarget m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

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
  class AWS_IOT_API SecurityProfileTargetMapping
  {
  public:
    SecurityProfileTargetMapping();
    SecurityProfileTargetMapping(Aws::Utils::Json::JsonView jsonValue);
    SecurityProfileTargetMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information that identifies the security profile.</p>
     */
    inline const SecurityProfileIdentifier& GetSecurityProfileIdentifier() const{ return m_securityProfileIdentifier; }

    /**
     * <p>Information that identifies the security profile.</p>
     */
    inline bool SecurityProfileIdentifierHasBeenSet() const { return m_securityProfileIdentifierHasBeenSet; }

    /**
     * <p>Information that identifies the security profile.</p>
     */
    inline void SetSecurityProfileIdentifier(const SecurityProfileIdentifier& value) { m_securityProfileIdentifierHasBeenSet = true; m_securityProfileIdentifier = value; }

    /**
     * <p>Information that identifies the security profile.</p>
     */
    inline void SetSecurityProfileIdentifier(SecurityProfileIdentifier&& value) { m_securityProfileIdentifierHasBeenSet = true; m_securityProfileIdentifier = std::move(value); }

    /**
     * <p>Information that identifies the security profile.</p>
     */
    inline SecurityProfileTargetMapping& WithSecurityProfileIdentifier(const SecurityProfileIdentifier& value) { SetSecurityProfileIdentifier(value); return *this;}

    /**
     * <p>Information that identifies the security profile.</p>
     */
    inline SecurityProfileTargetMapping& WithSecurityProfileIdentifier(SecurityProfileIdentifier&& value) { SetSecurityProfileIdentifier(std::move(value)); return *this;}


    /**
     * <p>Information about the target (thing group) associated with the security
     * profile.</p>
     */
    inline const SecurityProfileTarget& GetTarget() const{ return m_target; }

    /**
     * <p>Information about the target (thing group) associated with the security
     * profile.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>Information about the target (thing group) associated with the security
     * profile.</p>
     */
    inline void SetTarget(const SecurityProfileTarget& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>Information about the target (thing group) associated with the security
     * profile.</p>
     */
    inline void SetTarget(SecurityProfileTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>Information about the target (thing group) associated with the security
     * profile.</p>
     */
    inline SecurityProfileTargetMapping& WithTarget(const SecurityProfileTarget& value) { SetTarget(value); return *this;}

    /**
     * <p>Information about the target (thing group) associated with the security
     * profile.</p>
     */
    inline SecurityProfileTargetMapping& WithTarget(SecurityProfileTarget&& value) { SetTarget(std::move(value)); return *this;}

  private:

    SecurityProfileIdentifier m_securityProfileIdentifier;
    bool m_securityProfileIdentifierHasBeenSet;

    SecurityProfileTarget m_target;
    bool m_targetHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

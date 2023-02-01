/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Container security context.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/SecurityContext">AWS
   * API Reference</a></p>
   */
  class SecurityContext
  {
  public:
    AWS_GUARDDUTY_API SecurityContext();
    AWS_GUARDDUTY_API SecurityContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API SecurityContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether the container is privileged.</p>
     */
    inline bool GetPrivileged() const{ return m_privileged; }

    /**
     * <p>Whether the container is privileged.</p>
     */
    inline bool PrivilegedHasBeenSet() const { return m_privilegedHasBeenSet; }

    /**
     * <p>Whether the container is privileged.</p>
     */
    inline void SetPrivileged(bool value) { m_privilegedHasBeenSet = true; m_privileged = value; }

    /**
     * <p>Whether the container is privileged.</p>
     */
    inline SecurityContext& WithPrivileged(bool value) { SetPrivileged(value); return *this;}

  private:

    bool m_privileged;
    bool m_privilegedHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
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
namespace ControlTower
{
namespace Model
{

  /**
   * <p>A summary of enabled controls.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnabledControlSummary">AWS
   * API Reference</a></p>
   */
  class EnabledControlSummary
  {
  public:
    AWS_CONTROLTOWER_API EnabledControlSummary();
    AWS_CONTROLTOWER_API EnabledControlSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API EnabledControlSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b>
     * guardrail.</p>
     */
    inline const Aws::String& GetControlIdentifier() const{ return m_controlIdentifier; }

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b>
     * guardrail.</p>
     */
    inline bool ControlIdentifierHasBeenSet() const { return m_controlIdentifierHasBeenSet; }

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b>
     * guardrail.</p>
     */
    inline void SetControlIdentifier(const Aws::String& value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier = value; }

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b>
     * guardrail.</p>
     */
    inline void SetControlIdentifier(Aws::String&& value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier = std::move(value); }

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b>
     * guardrail.</p>
     */
    inline void SetControlIdentifier(const char* value) { m_controlIdentifierHasBeenSet = true; m_controlIdentifier.assign(value); }

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b>
     * guardrail.</p>
     */
    inline EnabledControlSummary& WithControlIdentifier(const Aws::String& value) { SetControlIdentifier(value); return *this;}

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b>
     * guardrail.</p>
     */
    inline EnabledControlSummary& WithControlIdentifier(Aws::String&& value) { SetControlIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ARN of the control. Only <b>Strongly recommended</b> and <b>Elective</b>
     * controls are permitted, with the exception of the <b>Region deny</b>
     * guardrail.</p>
     */
    inline EnabledControlSummary& WithControlIdentifier(const char* value) { SetControlIdentifier(value); return *this;}

  private:

    Aws::String m_controlIdentifier;
    bool m_controlIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws

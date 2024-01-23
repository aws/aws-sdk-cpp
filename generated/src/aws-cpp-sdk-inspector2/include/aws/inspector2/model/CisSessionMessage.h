/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CisRuleStatus.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The CIS session message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisSessionMessage">AWS
   * API Reference</a></p>
   */
  class CisSessionMessage
  {
  public:
    AWS_INSPECTOR2_API CisSessionMessage();
    AWS_INSPECTOR2_API CisSessionMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisSessionMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The CIS rule details for the CIS session message.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCisRuleDetails() const{ return m_cisRuleDetails; }

    /**
     * <p>The CIS rule details for the CIS session message.</p>
     */
    inline bool CisRuleDetailsHasBeenSet() const { return m_cisRuleDetailsHasBeenSet; }

    /**
     * <p>The CIS rule details for the CIS session message.</p>
     */
    inline void SetCisRuleDetails(const Aws::Utils::ByteBuffer& value) { m_cisRuleDetailsHasBeenSet = true; m_cisRuleDetails = value; }

    /**
     * <p>The CIS rule details for the CIS session message.</p>
     */
    inline void SetCisRuleDetails(Aws::Utils::ByteBuffer&& value) { m_cisRuleDetailsHasBeenSet = true; m_cisRuleDetails = std::move(value); }

    /**
     * <p>The CIS rule details for the CIS session message.</p>
     */
    inline CisSessionMessage& WithCisRuleDetails(const Aws::Utils::ByteBuffer& value) { SetCisRuleDetails(value); return *this;}

    /**
     * <p>The CIS rule details for the CIS session message.</p>
     */
    inline CisSessionMessage& WithCisRuleDetails(Aws::Utils::ByteBuffer&& value) { SetCisRuleDetails(std::move(value)); return *this;}


    /**
     * <p>The rule ID for the CIS session message.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The rule ID for the CIS session message.</p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>The rule ID for the CIS session message.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The rule ID for the CIS session message.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>The rule ID for the CIS session message.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The rule ID for the CIS session message.</p>
     */
    inline CisSessionMessage& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The rule ID for the CIS session message.</p>
     */
    inline CisSessionMessage& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>The rule ID for the CIS session message.</p>
     */
    inline CisSessionMessage& WithRuleId(const char* value) { SetRuleId(value); return *this;}


    /**
     * <p>The status of the CIS session message.</p>
     */
    inline const CisRuleStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the CIS session message.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the CIS session message.</p>
     */
    inline void SetStatus(const CisRuleStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the CIS session message.</p>
     */
    inline void SetStatus(CisRuleStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the CIS session message.</p>
     */
    inline CisSessionMessage& WithStatus(const CisRuleStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the CIS session message.</p>
     */
    inline CisSessionMessage& WithStatus(CisRuleStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_cisRuleDetails;
    bool m_cisRuleDetailsHasBeenSet = false;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    CisRuleStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws

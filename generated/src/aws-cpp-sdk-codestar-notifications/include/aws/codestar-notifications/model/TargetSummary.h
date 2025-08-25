/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-notifications/model/TargetStatus.h>
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
namespace CodeStarNotifications
{
namespace Model
{

  /**
   * <p>Information about the targets specified for a notification
   * rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/TargetSummary">AWS
   * API Reference</a></p>
   */
  class TargetSummary
  {
  public:
    AWS_CODESTARNOTIFICATIONS_API TargetSummary() = default;
    AWS_CODESTARNOTIFICATIONS_API TargetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARNOTIFICATIONS_API TargetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARNOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q Developer in chat applications
     * topic or Amazon Q Developer in chat applications client.</p>
     */
    inline const Aws::String& GetTargetAddress() const { return m_targetAddress; }
    inline bool TargetAddressHasBeenSet() const { return m_targetAddressHasBeenSet; }
    template<typename TargetAddressT = Aws::String>
    void SetTargetAddress(TargetAddressT&& value) { m_targetAddressHasBeenSet = true; m_targetAddress = std::forward<TargetAddressT>(value); }
    template<typename TargetAddressT = Aws::String>
    TargetSummary& WithTargetAddress(TargetAddressT&& value) { SetTargetAddress(std::forward<TargetAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the target (for example, <code>SNS</code>).</p> <ul> <li>
     * <p>Amazon Q Developer in chat applications topics are specified as
     * <code>SNS</code>.</p> </li> <li> <p>Amazon Q Developer in chat applications
     * clients are specified as <code>AWSChatbotSlack</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetTargetType() const { return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    template<typename TargetTypeT = Aws::String>
    void SetTargetType(TargetTypeT&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::forward<TargetTypeT>(value); }
    template<typename TargetTypeT = Aws::String>
    TargetSummary& WithTargetType(TargetTypeT&& value) { SetTargetType(std::forward<TargetTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the target.</p>
     */
    inline TargetStatus GetTargetStatus() const { return m_targetStatus; }
    inline bool TargetStatusHasBeenSet() const { return m_targetStatusHasBeenSet; }
    inline void SetTargetStatus(TargetStatus value) { m_targetStatusHasBeenSet = true; m_targetStatus = value; }
    inline TargetSummary& WithTargetStatus(TargetStatus value) { SetTargetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_targetAddress;
    bool m_targetAddressHasBeenSet = false;

    Aws::String m_targetType;
    bool m_targetTypeHasBeenSet = false;

    TargetStatus m_targetStatus{TargetStatus::NOT_SET};
    bool m_targetStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws

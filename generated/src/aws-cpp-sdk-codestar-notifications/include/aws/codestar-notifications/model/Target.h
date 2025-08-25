/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
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
namespace CodeStarNotifications
{
namespace Model
{

  /**
   * <p>Information about the Amazon Q Developer in chat applications topics or
   * Amazon Q Developer in chat applications clients associated with a notification
   * rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/Target">AWS
   * API Reference</a></p>
   */
  class Target
  {
  public:
    AWS_CODESTARNOTIFICATIONS_API Target() = default;
    AWS_CODESTARNOTIFICATIONS_API Target(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARNOTIFICATIONS_API Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARNOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target type. Can be an Amazon Q Developer in chat applications topic or
     * Amazon Q Developer in chat applications client.</p> <ul> <li> <p>Amazon Q
     * Developer in chat applications topics are specified as <code>SNS</code>.</p>
     * </li> <li> <p>Amazon Q Developer in chat applications clients are specified as
     * <code>AWSChatbotSlack</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetTargetType() const { return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    template<typename TargetTypeT = Aws::String>
    void SetTargetType(TargetTypeT&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::forward<TargetTypeT>(value); }
    template<typename TargetTypeT = Aws::String>
    Target& WithTargetType(TargetTypeT&& value) { SetTargetType(std::forward<TargetTypeT>(value)); return *this;}
    ///@}

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
    Target& WithTargetAddress(TargetAddressT&& value) { SetTargetAddress(std::forward<TargetAddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetType;
    bool m_targetTypeHasBeenSet = false;

    Aws::String m_targetAddress;
    bool m_targetAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws

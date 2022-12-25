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
   * <p>Information about the Chatbot topics or Chatbot clients associated with a
   * notification rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/Target">AWS
   * API Reference</a></p>
   */
  class Target
  {
  public:
    AWS_CODESTARNOTIFICATIONS_API Target();
    AWS_CODESTARNOTIFICATIONS_API Target(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARNOTIFICATIONS_API Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARNOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The target type. Can be an Chatbot topic or Chatbot client.</p> <ul> <li>
     * <p>Chatbot topics are specified as <code>SNS</code>.</p> </li> <li> <p>Chatbot
     * clients are specified as <code>AWSChatbotSlack</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The target type. Can be an Chatbot topic or Chatbot client.</p> <ul> <li>
     * <p>Chatbot topics are specified as <code>SNS</code>.</p> </li> <li> <p>Chatbot
     * clients are specified as <code>AWSChatbotSlack</code>.</p> </li> </ul>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>The target type. Can be an Chatbot topic or Chatbot client.</p> <ul> <li>
     * <p>Chatbot topics are specified as <code>SNS</code>.</p> </li> <li> <p>Chatbot
     * clients are specified as <code>AWSChatbotSlack</code>.</p> </li> </ul>
     */
    inline void SetTargetType(const Aws::String& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The target type. Can be an Chatbot topic or Chatbot client.</p> <ul> <li>
     * <p>Chatbot topics are specified as <code>SNS</code>.</p> </li> <li> <p>Chatbot
     * clients are specified as <code>AWSChatbotSlack</code>.</p> </li> </ul>
     */
    inline void SetTargetType(Aws::String&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>The target type. Can be an Chatbot topic or Chatbot client.</p> <ul> <li>
     * <p>Chatbot topics are specified as <code>SNS</code>.</p> </li> <li> <p>Chatbot
     * clients are specified as <code>AWSChatbotSlack</code>.</p> </li> </ul>
     */
    inline void SetTargetType(const char* value) { m_targetTypeHasBeenSet = true; m_targetType.assign(value); }

    /**
     * <p>The target type. Can be an Chatbot topic or Chatbot client.</p> <ul> <li>
     * <p>Chatbot topics are specified as <code>SNS</code>.</p> </li> <li> <p>Chatbot
     * clients are specified as <code>AWSChatbotSlack</code>.</p> </li> </ul>
     */
    inline Target& WithTargetType(const Aws::String& value) { SetTargetType(value); return *this;}

    /**
     * <p>The target type. Can be an Chatbot topic or Chatbot client.</p> <ul> <li>
     * <p>Chatbot topics are specified as <code>SNS</code>.</p> </li> <li> <p>Chatbot
     * clients are specified as <code>AWSChatbotSlack</code>.</p> </li> </ul>
     */
    inline Target& WithTargetType(Aws::String&& value) { SetTargetType(std::move(value)); return *this;}

    /**
     * <p>The target type. Can be an Chatbot topic or Chatbot client.</p> <ul> <li>
     * <p>Chatbot topics are specified as <code>SNS</code>.</p> </li> <li> <p>Chatbot
     * clients are specified as <code>AWSChatbotSlack</code>.</p> </li> </ul>
     */
    inline Target& WithTargetType(const char* value) { SetTargetType(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Chatbot topic or Chatbot client.</p>
     */
    inline const Aws::String& GetTargetAddress() const{ return m_targetAddress; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Chatbot topic or Chatbot client.</p>
     */
    inline bool TargetAddressHasBeenSet() const { return m_targetAddressHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Chatbot topic or Chatbot client.</p>
     */
    inline void SetTargetAddress(const Aws::String& value) { m_targetAddressHasBeenSet = true; m_targetAddress = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Chatbot topic or Chatbot client.</p>
     */
    inline void SetTargetAddress(Aws::String&& value) { m_targetAddressHasBeenSet = true; m_targetAddress = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Chatbot topic or Chatbot client.</p>
     */
    inline void SetTargetAddress(const char* value) { m_targetAddressHasBeenSet = true; m_targetAddress.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Chatbot topic or Chatbot client.</p>
     */
    inline Target& WithTargetAddress(const Aws::String& value) { SetTargetAddress(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Chatbot topic or Chatbot client.</p>
     */
    inline Target& WithTargetAddress(Aws::String&& value) { SetTargetAddress(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Chatbot topic or Chatbot client.</p>
     */
    inline Target& WithTargetAddress(const char* value) { SetTargetAddress(value); return *this;}

  private:

    Aws::String m_targetType;
    bool m_targetTypeHasBeenSet = false;

    Aws::String m_targetAddress;
    bool m_targetAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws

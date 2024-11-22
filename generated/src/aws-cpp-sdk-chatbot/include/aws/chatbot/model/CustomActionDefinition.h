/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
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
namespace chatbot
{
namespace Model
{

  /**
   * <p>The definition of the command to run when invoked as an alias or as an action
   * button.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/CustomActionDefinition">AWS
   * API Reference</a></p>
   */
  class CustomActionDefinition
  {
  public:
    AWS_CHATBOT_API CustomActionDefinition();
    AWS_CHATBOT_API CustomActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API CustomActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The command string to run which may include variables by prefixing with a
     * dollar sign ($).</p>
     */
    inline const Aws::String& GetCommandText() const{ return m_commandText; }
    inline bool CommandTextHasBeenSet() const { return m_commandTextHasBeenSet; }
    inline void SetCommandText(const Aws::String& value) { m_commandTextHasBeenSet = true; m_commandText = value; }
    inline void SetCommandText(Aws::String&& value) { m_commandTextHasBeenSet = true; m_commandText = std::move(value); }
    inline void SetCommandText(const char* value) { m_commandTextHasBeenSet = true; m_commandText.assign(value); }
    inline CustomActionDefinition& WithCommandText(const Aws::String& value) { SetCommandText(value); return *this;}
    inline CustomActionDefinition& WithCommandText(Aws::String&& value) { SetCommandText(std::move(value)); return *this;}
    inline CustomActionDefinition& WithCommandText(const char* value) { SetCommandText(value); return *this;}
    ///@}
  private:

    Aws::String m_commandText;
    bool m_commandTextHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws

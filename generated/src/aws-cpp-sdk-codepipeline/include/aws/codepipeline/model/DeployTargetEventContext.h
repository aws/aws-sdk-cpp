/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>The context for the event for the deploy action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DeployTargetEventContext">AWS
   * API Reference</a></p>
   */
  class DeployTargetEventContext
  {
  public:
    AWS_CODEPIPELINE_API DeployTargetEventContext() = default;
    AWS_CODEPIPELINE_API DeployTargetEventContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API DeployTargetEventContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The command ID for the event for the deploy action.</p>
     */
    inline const Aws::String& GetSsmCommandId() const { return m_ssmCommandId; }
    inline bool SsmCommandIdHasBeenSet() const { return m_ssmCommandIdHasBeenSet; }
    template<typename SsmCommandIdT = Aws::String>
    void SetSsmCommandId(SsmCommandIdT&& value) { m_ssmCommandIdHasBeenSet = true; m_ssmCommandId = std::forward<SsmCommandIdT>(value); }
    template<typename SsmCommandIdT = Aws::String>
    DeployTargetEventContext& WithSsmCommandId(SsmCommandIdT&& value) { SetSsmCommandId(std::forward<SsmCommandIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The context message for the event for the deploy action.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DeployTargetEventContext& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ssmCommandId;
    bool m_ssmCommandIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws

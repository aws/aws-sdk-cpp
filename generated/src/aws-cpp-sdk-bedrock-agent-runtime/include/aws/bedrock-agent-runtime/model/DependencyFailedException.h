/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>There was an issue with a dependency. Check the resource configurations and
   * retry the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/DependencyFailedException">AWS
   * API Reference</a></p>
   */
  class DependencyFailedException
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API DependencyFailedException();
    AWS_BEDROCKAGENTRUNTIME_API DependencyFailedException(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API DependencyFailedException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline DependencyFailedException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline DependencyFailedException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline DependencyFailedException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The name of the dependency that caused the issue, such as Amazon Bedrock,
     * Lambda, or STS.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of the dependency that caused the issue, such as Amazon Bedrock,
     * Lambda, or STS.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The name of the dependency that caused the issue, such as Amazon Bedrock,
     * Lambda, or STS.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The name of the dependency that caused the issue, such as Amazon Bedrock,
     * Lambda, or STS.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The name of the dependency that caused the issue, such as Amazon Bedrock,
     * Lambda, or STS.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The name of the dependency that caused the issue, such as Amazon Bedrock,
     * Lambda, or STS.</p>
     */
    inline DependencyFailedException& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of the dependency that caused the issue, such as Amazon Bedrock,
     * Lambda, or STS.</p>
     */
    inline DependencyFailedException& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the dependency that caused the issue, such as Amazon Bedrock,
     * Lambda, or STS.</p>
     */
    inline DependencyFailedException& WithResourceName(const char* value) { SetResourceName(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws

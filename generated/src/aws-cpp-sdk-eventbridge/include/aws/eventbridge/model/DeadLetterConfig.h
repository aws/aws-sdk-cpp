/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>A <code>DeadLetterConfig</code> object that contains information about a
   * dead-letter queue configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DeadLetterConfig">AWS
   * API Reference</a></p>
   */
  class DeadLetterConfig
  {
  public:
    AWS_EVENTBRIDGE_API DeadLetterConfig();
    AWS_EVENTBRIDGE_API DeadLetterConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API DeadLetterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the SQS queue specified as the target for the dead-letter
     * queue.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the SQS queue specified as the target for the dead-letter
     * queue.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the SQS queue specified as the target for the dead-letter
     * queue.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the SQS queue specified as the target for the dead-letter
     * queue.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the SQS queue specified as the target for the dead-letter
     * queue.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the SQS queue specified as the target for the dead-letter
     * queue.</p>
     */
    inline DeadLetterConfig& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the SQS queue specified as the target for the dead-letter
     * queue.</p>
     */
    inline DeadLetterConfig& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the SQS queue specified as the target for the dead-letter
     * queue.</p>
     */
    inline DeadLetterConfig& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws

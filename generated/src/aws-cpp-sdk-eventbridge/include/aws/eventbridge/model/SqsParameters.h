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
   * <p>This structure includes the custom parameter to be used when the target is an
   * SQS FIFO queue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/SqsParameters">AWS
   * API Reference</a></p>
   */
  class SqsParameters
  {
  public:
    AWS_EVENTBRIDGE_API SqsParameters();
    AWS_EVENTBRIDGE_API SqsParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API SqsParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline const Aws::String& GetMessageGroupId() const{ return m_messageGroupId; }

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline bool MessageGroupIdHasBeenSet() const { return m_messageGroupIdHasBeenSet; }

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline void SetMessageGroupId(const Aws::String& value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId = value; }

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline void SetMessageGroupId(Aws::String&& value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId = std::move(value); }

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline void SetMessageGroupId(const char* value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId.assign(value); }

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline SqsParameters& WithMessageGroupId(const Aws::String& value) { SetMessageGroupId(value); return *this;}

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline SqsParameters& WithMessageGroupId(Aws::String&& value) { SetMessageGroupId(std::move(value)); return *this;}

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline SqsParameters& WithMessageGroupId(const char* value) { SetMessageGroupId(value); return *this;}

  private:

    Aws::String m_messageGroupId;
    bool m_messageGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws

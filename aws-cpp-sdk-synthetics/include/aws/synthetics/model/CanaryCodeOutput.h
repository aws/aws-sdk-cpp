/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>This structure contains information about the canary's Lambda handler and
   * where its code is stored by CloudWatch Synthetics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryCodeOutput">AWS
   * API Reference</a></p>
   */
  class CanaryCodeOutput
  {
  public:
    AWS_SYNTHETICS_API CanaryCodeOutput();
    AWS_SYNTHETICS_API CanaryCodeOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API CanaryCodeOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the Lambda layer where Synthetics stores the canary script
     * code.</p>
     */
    inline const Aws::String& GetSourceLocationArn() const{ return m_sourceLocationArn; }

    /**
     * <p>The ARN of the Lambda layer where Synthetics stores the canary script
     * code.</p>
     */
    inline bool SourceLocationArnHasBeenSet() const { return m_sourceLocationArnHasBeenSet; }

    /**
     * <p>The ARN of the Lambda layer where Synthetics stores the canary script
     * code.</p>
     */
    inline void SetSourceLocationArn(const Aws::String& value) { m_sourceLocationArnHasBeenSet = true; m_sourceLocationArn = value; }

    /**
     * <p>The ARN of the Lambda layer where Synthetics stores the canary script
     * code.</p>
     */
    inline void SetSourceLocationArn(Aws::String&& value) { m_sourceLocationArnHasBeenSet = true; m_sourceLocationArn = std::move(value); }

    /**
     * <p>The ARN of the Lambda layer where Synthetics stores the canary script
     * code.</p>
     */
    inline void SetSourceLocationArn(const char* value) { m_sourceLocationArnHasBeenSet = true; m_sourceLocationArn.assign(value); }

    /**
     * <p>The ARN of the Lambda layer where Synthetics stores the canary script
     * code.</p>
     */
    inline CanaryCodeOutput& WithSourceLocationArn(const Aws::String& value) { SetSourceLocationArn(value); return *this;}

    /**
     * <p>The ARN of the Lambda layer where Synthetics stores the canary script
     * code.</p>
     */
    inline CanaryCodeOutput& WithSourceLocationArn(Aws::String&& value) { SetSourceLocationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Lambda layer where Synthetics stores the canary script
     * code.</p>
     */
    inline CanaryCodeOutput& WithSourceLocationArn(const char* value) { SetSourceLocationArn(value); return *this;}


    /**
     * <p>The entry point to use for the source code when running the canary.</p>
     */
    inline const Aws::String& GetHandler() const{ return m_handler; }

    /**
     * <p>The entry point to use for the source code when running the canary.</p>
     */
    inline bool HandlerHasBeenSet() const { return m_handlerHasBeenSet; }

    /**
     * <p>The entry point to use for the source code when running the canary.</p>
     */
    inline void SetHandler(const Aws::String& value) { m_handlerHasBeenSet = true; m_handler = value; }

    /**
     * <p>The entry point to use for the source code when running the canary.</p>
     */
    inline void SetHandler(Aws::String&& value) { m_handlerHasBeenSet = true; m_handler = std::move(value); }

    /**
     * <p>The entry point to use for the source code when running the canary.</p>
     */
    inline void SetHandler(const char* value) { m_handlerHasBeenSet = true; m_handler.assign(value); }

    /**
     * <p>The entry point to use for the source code when running the canary.</p>
     */
    inline CanaryCodeOutput& WithHandler(const Aws::String& value) { SetHandler(value); return *this;}

    /**
     * <p>The entry point to use for the source code when running the canary.</p>
     */
    inline CanaryCodeOutput& WithHandler(Aws::String&& value) { SetHandler(std::move(value)); return *this;}

    /**
     * <p>The entry point to use for the source code when running the canary.</p>
     */
    inline CanaryCodeOutput& WithHandler(const char* value) { SetHandler(value); return *this;}

  private:

    Aws::String m_sourceLocationArn;
    bool m_sourceLocationArnHasBeenSet = false;

    Aws::String m_handler;
    bool m_handlerHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws

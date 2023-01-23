/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>

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
namespace KinesisVideo
{
namespace Model
{

  /**
   * <p>A structure that contains the configuration for the
   * <code>SINGLE_MASTER</code> channel type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/SingleMasterConfiguration">AWS
   * API Reference</a></p>
   */
  class SingleMasterConfiguration
  {
  public:
    AWS_KINESISVIDEO_API SingleMasterConfiguration();
    AWS_KINESISVIDEO_API SingleMasterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API SingleMasterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The period of time a signaling channel retains undelivered messages before
     * they are discarded.</p>
     */
    inline int GetMessageTtlSeconds() const{ return m_messageTtlSeconds; }

    /**
     * <p>The period of time a signaling channel retains undelivered messages before
     * they are discarded.</p>
     */
    inline bool MessageTtlSecondsHasBeenSet() const { return m_messageTtlSecondsHasBeenSet; }

    /**
     * <p>The period of time a signaling channel retains undelivered messages before
     * they are discarded.</p>
     */
    inline void SetMessageTtlSeconds(int value) { m_messageTtlSecondsHasBeenSet = true; m_messageTtlSeconds = value; }

    /**
     * <p>The period of time a signaling channel retains undelivered messages before
     * they are discarded.</p>
     */
    inline SingleMasterConfiguration& WithMessageTtlSeconds(int value) { SetMessageTtlSeconds(value); return *this;}

  private:

    int m_messageTtlSeconds;
    bool m_messageTtlSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws

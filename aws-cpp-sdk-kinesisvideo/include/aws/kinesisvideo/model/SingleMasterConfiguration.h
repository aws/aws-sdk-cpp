/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_KINESISVIDEO_API SingleMasterConfiguration
  {
  public:
    SingleMasterConfiguration();
    SingleMasterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    SingleMasterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The period of time a signaling channel retains underlivered messages before
     * they are discarded.</p>
     */
    inline int GetMessageTtlSeconds() const{ return m_messageTtlSeconds; }

    /**
     * <p>The period of time a signaling channel retains underlivered messages before
     * they are discarded.</p>
     */
    inline bool MessageTtlSecondsHasBeenSet() const { return m_messageTtlSecondsHasBeenSet; }

    /**
     * <p>The period of time a signaling channel retains underlivered messages before
     * they are discarded.</p>
     */
    inline void SetMessageTtlSeconds(int value) { m_messageTtlSecondsHasBeenSet = true; m_messageTtlSeconds = value; }

    /**
     * <p>The period of time a signaling channel retains underlivered messages before
     * they are discarded.</p>
     */
    inline SingleMasterConfiguration& WithMessageTtlSeconds(int value) { SetMessageTtlSeconds(value); return *this;}

  private:

    int m_messageTtlSeconds;
    bool m_messageTtlSecondsHasBeenSet;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws

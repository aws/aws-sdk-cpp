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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AccelerationMode.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Accelerated transcoding can significantly speed up jobs with long, visually
   * complex content. Outputs that use this feature incur pro-tier pricing. For
   * information about feature limitations, see the AWS Elemental MediaConvert User
   * Guide.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AccelerationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API AccelerationSettings
  {
  public:
    AccelerationSettings();
    AccelerationSettings(Aws::Utils::Json::JsonView jsonValue);
    AccelerationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Acceleration configuration for the job.
     */
    inline const AccelerationMode& GetMode() const{ return m_mode; }

    /**
     * Acceleration configuration for the job.
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * Acceleration configuration for the job.
     */
    inline void SetMode(const AccelerationMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * Acceleration configuration for the job.
     */
    inline void SetMode(AccelerationMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * Acceleration configuration for the job.
     */
    inline AccelerationSettings& WithMode(const AccelerationMode& value) { SetMode(value); return *this;}

    /**
     * Acceleration configuration for the job.
     */
    inline AccelerationSettings& WithMode(AccelerationMode&& value) { SetMode(std::move(value)); return *this;}

  private:

    AccelerationMode m_mode;
    bool m_modeHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws

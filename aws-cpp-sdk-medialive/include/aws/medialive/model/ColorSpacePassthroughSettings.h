/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>

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
namespace MediaLive
{
namespace Model
{

  /**
   * Passthrough applies no color space conversion to the output<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ColorSpacePassthroughSettings">AWS
   * API Reference</a></p>
   */
  class ColorSpacePassthroughSettings
  {
  public:
    AWS_MEDIALIVE_API ColorSpacePassthroughSettings();
    AWS_MEDIALIVE_API ColorSpacePassthroughSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ColorSpacePassthroughSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

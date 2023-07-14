/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>For HLS, when set to true, MediaTailor passes through EXT-X-CUE-IN,
   * EXT-X-CUE-OUT, and EXT-X-SPLICEPOINT-SCTE35 ad markers from the origin manifest
   * to the MediaTailor personalized manifest.</p> <p>No logic is applied to these ad
   * markers. For example, if EXT-X-CUE-OUT has a value of 60, but no ads are filled
   * for that ad break, MediaTailor will not set the value to 0.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/AdMarkerPassthrough">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIATAILOR_API AdMarkerPassthrough
  {
  public:
    AdMarkerPassthrough();
    AdMarkerPassthrough(Aws::Utils::Json::JsonView jsonValue);
    AdMarkerPassthrough& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables ad marker passthrough for your configuration.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Enables ad marker passthrough for your configuration.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Enables ad marker passthrough for your configuration.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Enables ad marker passthrough for your configuration.</p>
     */
    inline AdMarkerPassthrough& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws

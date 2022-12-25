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
   * Contains summary configuration for a Multiplex event.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexSettingsSummary">AWS
   * API Reference</a></p>
   */
  class MultiplexSettingsSummary
  {
  public:
    AWS_MEDIALIVE_API MultiplexSettingsSummary();
    AWS_MEDIALIVE_API MultiplexSettingsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexSettingsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Transport stream bit rate.
     */
    inline int GetTransportStreamBitrate() const{ return m_transportStreamBitrate; }

    /**
     * Transport stream bit rate.
     */
    inline bool TransportStreamBitrateHasBeenSet() const { return m_transportStreamBitrateHasBeenSet; }

    /**
     * Transport stream bit rate.
     */
    inline void SetTransportStreamBitrate(int value) { m_transportStreamBitrateHasBeenSet = true; m_transportStreamBitrate = value; }

    /**
     * Transport stream bit rate.
     */
    inline MultiplexSettingsSummary& WithTransportStreamBitrate(int value) { SetTransportStreamBitrate(value); return *this;}

  private:

    int m_transportStreamBitrate;
    bool m_transportStreamBitrateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

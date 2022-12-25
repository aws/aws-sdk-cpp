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
   * DVB Time and Date Table (SDT)<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DvbTdtSettings">AWS
   * API Reference</a></p>
   */
  class DvbTdtSettings
  {
  public:
    AWS_MEDIALIVE_API DvbTdtSettings();
    AWS_MEDIALIVE_API DvbTdtSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API DvbTdtSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline int GetRepInterval() const{ return m_repInterval; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline bool RepIntervalHasBeenSet() const { return m_repIntervalHasBeenSet; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline void SetRepInterval(int value) { m_repIntervalHasBeenSet = true; m_repInterval = value; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline DvbTdtSettings& WithRepInterval(int value) { SetRepInterval(value); return *this;}

  private:

    int m_repInterval;
    bool m_repIntervalHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

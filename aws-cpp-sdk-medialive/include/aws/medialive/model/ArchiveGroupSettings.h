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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/OutputLocationRef.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Archive Group Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ArchiveGroupSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API ArchiveGroupSettings
  {
  public:
    ArchiveGroupSettings();
    ArchiveGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    ArchiveGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A directory and base filename where archive files should be written.
     */
    inline const OutputLocationRef& GetDestination() const{ return m_destination; }

    /**
     * A directory and base filename where archive files should be written.
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * A directory and base filename where archive files should be written.
     */
    inline void SetDestination(const OutputLocationRef& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * A directory and base filename where archive files should be written.
     */
    inline void SetDestination(OutputLocationRef&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * A directory and base filename where archive files should be written.
     */
    inline ArchiveGroupSettings& WithDestination(const OutputLocationRef& value) { SetDestination(value); return *this;}

    /**
     * A directory and base filename where archive files should be written.
     */
    inline ArchiveGroupSettings& WithDestination(OutputLocationRef&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * Number of seconds to write to archive file before closing and starting a new
     * one.
     */
    inline int GetRolloverInterval() const{ return m_rolloverInterval; }

    /**
     * Number of seconds to write to archive file before closing and starting a new
     * one.
     */
    inline bool RolloverIntervalHasBeenSet() const { return m_rolloverIntervalHasBeenSet; }

    /**
     * Number of seconds to write to archive file before closing and starting a new
     * one.
     */
    inline void SetRolloverInterval(int value) { m_rolloverIntervalHasBeenSet = true; m_rolloverInterval = value; }

    /**
     * Number of seconds to write to archive file before closing and starting a new
     * one.
     */
    inline ArchiveGroupSettings& WithRolloverInterval(int value) { SetRolloverInterval(value); return *this;}

  private:

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet;

    int m_rolloverInterval;
    bool m_rolloverIntervalHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

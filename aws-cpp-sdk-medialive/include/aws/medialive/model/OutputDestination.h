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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/OutputDestinationSettings.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for OutputDestination<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/OutputDestination">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API OutputDestination
  {
  public:
    OutputDestination();
    OutputDestination(const Aws::Utils::Json::JsonValue& jsonValue);
    OutputDestination& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * User-specified id. This is used in an output group or an output.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * User-specified id. This is used in an output group or an output.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * User-specified id. This is used in an output group or an output.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * User-specified id. This is used in an output group or an output.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * User-specified id. This is used in an output group or an output.
     */
    inline OutputDestination& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * User-specified id. This is used in an output group or an output.
     */
    inline OutputDestination& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * User-specified id. This is used in an output group or an output.
     */
    inline OutputDestination& WithId(const char* value) { SetId(value); return *this;}


    /**
     * Destination settings for output; one for each redundant encoder.
     */
    inline const Aws::Vector<OutputDestinationSettings>& GetSettings() const{ return m_settings; }

    /**
     * Destination settings for output; one for each redundant encoder.
     */
    inline void SetSettings(const Aws::Vector<OutputDestinationSettings>& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * Destination settings for output; one for each redundant encoder.
     */
    inline void SetSettings(Aws::Vector<OutputDestinationSettings>&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * Destination settings for output; one for each redundant encoder.
     */
    inline OutputDestination& WithSettings(const Aws::Vector<OutputDestinationSettings>& value) { SetSettings(value); return *this;}

    /**
     * Destination settings for output; one for each redundant encoder.
     */
    inline OutputDestination& WithSettings(Aws::Vector<OutputDestinationSettings>&& value) { SetSettings(std::move(value)); return *this;}

    /**
     * Destination settings for output; one for each redundant encoder.
     */
    inline OutputDestination& AddSettings(const OutputDestinationSettings& value) { m_settingsHasBeenSet = true; m_settings.push_back(value); return *this; }

    /**
     * Destination settings for output; one for each redundant encoder.
     */
    inline OutputDestination& AddSettings(OutputDestinationSettings&& value) { m_settingsHasBeenSet = true; m_settings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::Vector<OutputDestinationSettings> m_settings;
    bool m_settingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

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
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/Criticality.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Object that determines whether tracking should be used during a contact
     
   * executed with this <code>Config</code> in the mission profile.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/TrackingConfig">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API TrackingConfig
  {
  public:
    TrackingConfig();
    TrackingConfig(Aws::Utils::Json::JsonView jsonValue);
    TrackingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Current setting for autotrack.</p>
     */
    inline const Criticality& GetAutotrack() const{ return m_autotrack; }

    /**
     * <p>Current setting for autotrack.</p>
     */
    inline bool AutotrackHasBeenSet() const { return m_autotrackHasBeenSet; }

    /**
     * <p>Current setting for autotrack.</p>
     */
    inline void SetAutotrack(const Criticality& value) { m_autotrackHasBeenSet = true; m_autotrack = value; }

    /**
     * <p>Current setting for autotrack.</p>
     */
    inline void SetAutotrack(Criticality&& value) { m_autotrackHasBeenSet = true; m_autotrack = std::move(value); }

    /**
     * <p>Current setting for autotrack.</p>
     */
    inline TrackingConfig& WithAutotrack(const Criticality& value) { SetAutotrack(value); return *this;}

    /**
     * <p>Current setting for autotrack.</p>
     */
    inline TrackingConfig& WithAutotrack(Criticality&& value) { SetAutotrack(std::move(value)); return *this;}

  private:

    Criticality m_autotrack;
    bool m_autotrackHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws

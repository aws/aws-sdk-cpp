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
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p>Specifies when to enable fast snapshot restore.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/FastRestoreRule">AWS
   * API Reference</a></p>
   */
  class AWS_DLM_API FastRestoreRule
  {
  public:
    FastRestoreRule();
    FastRestoreRule(Aws::Utils::Json::JsonView jsonValue);
    FastRestoreRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of snapshots to be enabled with fast snapshot restore.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of snapshots to be enabled with fast snapshot restore.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of snapshots to be enabled with fast snapshot restore.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of snapshots to be enabled with fast snapshot restore.</p>
     */
    inline FastRestoreRule& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>The Availability Zones in which to enable fast snapshot restore.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>The Availability Zones in which to enable fast snapshot restore.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>The Availability Zones in which to enable fast snapshot restore.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>The Availability Zones in which to enable fast snapshot restore.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>The Availability Zones in which to enable fast snapshot restore.</p>
     */
    inline FastRestoreRule& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The Availability Zones in which to enable fast snapshot restore.</p>
     */
    inline FastRestoreRule& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The Availability Zones in which to enable fast snapshot restore.</p>
     */
    inline FastRestoreRule& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The Availability Zones in which to enable fast snapshot restore.</p>
     */
    inline FastRestoreRule& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>The Availability Zones in which to enable fast snapshot restore.</p>
     */
    inline FastRestoreRule& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

  private:

    int m_count;
    bool m_countHasBeenSet;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws

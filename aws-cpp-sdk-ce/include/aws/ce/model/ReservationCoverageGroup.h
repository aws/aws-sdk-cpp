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
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ce/model/Coverage.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>A group of reservations that share a set of attributes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ReservationCoverageGroup">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API ReservationCoverageGroup
  {
  public:
    ReservationCoverageGroup();
    ReservationCoverageGroup(Aws::Utils::Json::JsonView jsonValue);
    ReservationCoverageGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline ReservationCoverageGroup& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline ReservationCoverageGroup& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline ReservationCoverageGroup& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline ReservationCoverageGroup& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline ReservationCoverageGroup& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline ReservationCoverageGroup& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline ReservationCoverageGroup& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline ReservationCoverageGroup& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline ReservationCoverageGroup& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>How much instance usage this group of reservations covered.</p>
     */
    inline const Coverage& GetCoverage() const{ return m_coverage; }

    /**
     * <p>How much instance usage this group of reservations covered.</p>
     */
    inline bool CoverageHasBeenSet() const { return m_coverageHasBeenSet; }

    /**
     * <p>How much instance usage this group of reservations covered.</p>
     */
    inline void SetCoverage(const Coverage& value) { m_coverageHasBeenSet = true; m_coverage = value; }

    /**
     * <p>How much instance usage this group of reservations covered.</p>
     */
    inline void SetCoverage(Coverage&& value) { m_coverageHasBeenSet = true; m_coverage = std::move(value); }

    /**
     * <p>How much instance usage this group of reservations covered.</p>
     */
    inline ReservationCoverageGroup& WithCoverage(const Coverage& value) { SetCoverage(value); return *this;}

    /**
     * <p>How much instance usage this group of reservations covered.</p>
     */
    inline ReservationCoverageGroup& WithCoverage(Coverage&& value) { SetCoverage(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;

    Coverage m_coverage;
    bool m_coverageHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws

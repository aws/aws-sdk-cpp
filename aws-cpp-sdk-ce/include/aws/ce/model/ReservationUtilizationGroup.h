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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ce/model/ReservationAggregates.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ReservationUtilizationGroup">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API ReservationUtilizationGroup
  {
  public:
    ReservationUtilizationGroup();
    ReservationUtilizationGroup(Aws::Utils::Json::JsonView jsonValue);
    ReservationUtilizationGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key for a specific reservation attribute.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key for a specific reservation attribute.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key for a specific reservation attribute.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key for a specific reservation attribute.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key for a specific reservation attribute.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key for a specific reservation attribute.</p>
     */
    inline ReservationUtilizationGroup& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key for a specific reservation attribute.</p>
     */
    inline ReservationUtilizationGroup& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key for a specific reservation attribute.</p>
     */
    inline ReservationUtilizationGroup& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value of a specific reservation attribute.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of a specific reservation attribute.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of a specific reservation attribute.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of a specific reservation attribute.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of a specific reservation attribute.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of a specific reservation attribute.</p>
     */
    inline ReservationUtilizationGroup& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of a specific reservation attribute.</p>
     */
    inline ReservationUtilizationGroup& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of a specific reservation attribute.</p>
     */
    inline ReservationUtilizationGroup& WithValue(const char* value) { SetValue(value); return *this;}


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
    inline ReservationUtilizationGroup& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline ReservationUtilizationGroup& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline ReservationUtilizationGroup& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline ReservationUtilizationGroup& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline ReservationUtilizationGroup& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline ReservationUtilizationGroup& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline ReservationUtilizationGroup& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline ReservationUtilizationGroup& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline ReservationUtilizationGroup& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>How much you used this group of reservations.</p>
     */
    inline const ReservationAggregates& GetUtilization() const{ return m_utilization; }

    /**
     * <p>How much you used this group of reservations.</p>
     */
    inline bool UtilizationHasBeenSet() const { return m_utilizationHasBeenSet; }

    /**
     * <p>How much you used this group of reservations.</p>
     */
    inline void SetUtilization(const ReservationAggregates& value) { m_utilizationHasBeenSet = true; m_utilization = value; }

    /**
     * <p>How much you used this group of reservations.</p>
     */
    inline void SetUtilization(ReservationAggregates&& value) { m_utilizationHasBeenSet = true; m_utilization = std::move(value); }

    /**
     * <p>How much you used this group of reservations.</p>
     */
    inline ReservationUtilizationGroup& WithUtilization(const ReservationAggregates& value) { SetUtilization(value); return *this;}

    /**
     * <p>How much you used this group of reservations.</p>
     */
    inline ReservationUtilizationGroup& WithUtilization(ReservationAggregates&& value) { SetUtilization(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;

    ReservationAggregates m_utilization;
    bool m_utilizationHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws

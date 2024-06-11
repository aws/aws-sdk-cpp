/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ReservationUtilizationGroup
  {
  public:
    AWS_COSTEXPLORER_API ReservationUtilizationGroup();
    AWS_COSTEXPLORER_API ReservationUtilizationGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ReservationUtilizationGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key for a specific reservation attribute.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline ReservationUtilizationGroup& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline ReservationUtilizationGroup& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline ReservationUtilizationGroup& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of a specific reservation attribute.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ReservationUtilizationGroup& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ReservationUtilizationGroup& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ReservationUtilizationGroup& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes for this group of reservations.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline ReservationUtilizationGroup& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline ReservationUtilizationGroup& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline ReservationUtilizationGroup& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline ReservationUtilizationGroup& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline ReservationUtilizationGroup& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline ReservationUtilizationGroup& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline ReservationUtilizationGroup& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline ReservationUtilizationGroup& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline ReservationUtilizationGroup& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>How much you used this group of reservations.</p>
     */
    inline const ReservationAggregates& GetUtilization() const{ return m_utilization; }
    inline bool UtilizationHasBeenSet() const { return m_utilizationHasBeenSet; }
    inline void SetUtilization(const ReservationAggregates& value) { m_utilizationHasBeenSet = true; m_utilization = value; }
    inline void SetUtilization(ReservationAggregates&& value) { m_utilizationHasBeenSet = true; m_utilization = std::move(value); }
    inline ReservationUtilizationGroup& WithUtilization(const ReservationAggregates& value) { SetUtilization(value); return *this;}
    inline ReservationUtilizationGroup& WithUtilization(ReservationAggregates&& value) { SetUtilization(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    ReservationAggregates m_utilization;
    bool m_utilizationHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws

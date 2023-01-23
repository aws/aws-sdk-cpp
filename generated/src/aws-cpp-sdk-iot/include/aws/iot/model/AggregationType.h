/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/AggregationTypeName.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The type of aggregation queries.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AggregationType">AWS
   * API Reference</a></p>
   */
  class AggregationType
  {
  public:
    AWS_IOT_API AggregationType();
    AWS_IOT_API AggregationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AggregationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the aggregation type.</p>
     */
    inline const AggregationTypeName& GetName() const{ return m_name; }

    /**
     * <p>The name of the aggregation type.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the aggregation type.</p>
     */
    inline void SetName(const AggregationTypeName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the aggregation type.</p>
     */
    inline void SetName(AggregationTypeName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the aggregation type.</p>
     */
    inline AggregationType& WithName(const AggregationTypeName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the aggregation type.</p>
     */
    inline AggregationType& WithName(AggregationTypeName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>A list of the values of aggregation types.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>A list of the values of aggregation types.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>A list of the values of aggregation types.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>A list of the values of aggregation types.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>A list of the values of aggregation types.</p>
     */
    inline AggregationType& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>A list of the values of aggregation types.</p>
     */
    inline AggregationType& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>A list of the values of aggregation types.</p>
     */
    inline AggregationType& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>A list of the values of aggregation types.</p>
     */
    inline AggregationType& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the values of aggregation types.</p>
     */
    inline AggregationType& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    AggregationTypeName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

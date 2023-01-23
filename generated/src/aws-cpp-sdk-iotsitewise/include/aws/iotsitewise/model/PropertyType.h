/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/Attribute.h>
#include <aws/iotsitewise/model/Measurement.h>
#include <aws/iotsitewise/model/Transform.h>
#include <aws/iotsitewise/model/Metric.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains a property type, which can be one of <code>attribute</code>,
   * <code>measurement</code>, <code>metric</code>, or
   * <code>transform</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PropertyType">AWS
   * API Reference</a></p>
   */
  class PropertyType
  {
  public:
    AWS_IOTSITEWISE_API PropertyType();
    AWS_IOTSITEWISE_API PropertyType(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API PropertyType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies an asset attribute property. An attribute generally contains static
     * information, such as the serial number of an <a
     * href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">IIoT</a>
     * wind turbine.</p>
     */
    inline const Attribute& GetAttribute() const{ return m_attribute; }

    /**
     * <p>Specifies an asset attribute property. An attribute generally contains static
     * information, such as the serial number of an <a
     * href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">IIoT</a>
     * wind turbine.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>Specifies an asset attribute property. An attribute generally contains static
     * information, such as the serial number of an <a
     * href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">IIoT</a>
     * wind turbine.</p>
     */
    inline void SetAttribute(const Attribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>Specifies an asset attribute property. An attribute generally contains static
     * information, such as the serial number of an <a
     * href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">IIoT</a>
     * wind turbine.</p>
     */
    inline void SetAttribute(Attribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>Specifies an asset attribute property. An attribute generally contains static
     * information, such as the serial number of an <a
     * href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">IIoT</a>
     * wind turbine.</p>
     */
    inline PropertyType& WithAttribute(const Attribute& value) { SetAttribute(value); return *this;}

    /**
     * <p>Specifies an asset attribute property. An attribute generally contains static
     * information, such as the serial number of an <a
     * href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">IIoT</a>
     * wind turbine.</p>
     */
    inline PropertyType& WithAttribute(Attribute&& value) { SetAttribute(std::move(value)); return *this;}


    /**
     * <p>Specifies an asset measurement property. A measurement represents a device's
     * raw sensor data stream, such as timestamped temperature values or timestamped
     * power values.</p>
     */
    inline const Measurement& GetMeasurement() const{ return m_measurement; }

    /**
     * <p>Specifies an asset measurement property. A measurement represents a device's
     * raw sensor data stream, such as timestamped temperature values or timestamped
     * power values.</p>
     */
    inline bool MeasurementHasBeenSet() const { return m_measurementHasBeenSet; }

    /**
     * <p>Specifies an asset measurement property. A measurement represents a device's
     * raw sensor data stream, such as timestamped temperature values or timestamped
     * power values.</p>
     */
    inline void SetMeasurement(const Measurement& value) { m_measurementHasBeenSet = true; m_measurement = value; }

    /**
     * <p>Specifies an asset measurement property. A measurement represents a device's
     * raw sensor data stream, such as timestamped temperature values or timestamped
     * power values.</p>
     */
    inline void SetMeasurement(Measurement&& value) { m_measurementHasBeenSet = true; m_measurement = std::move(value); }

    /**
     * <p>Specifies an asset measurement property. A measurement represents a device's
     * raw sensor data stream, such as timestamped temperature values or timestamped
     * power values.</p>
     */
    inline PropertyType& WithMeasurement(const Measurement& value) { SetMeasurement(value); return *this;}

    /**
     * <p>Specifies an asset measurement property. A measurement represents a device's
     * raw sensor data stream, such as timestamped temperature values or timestamped
     * power values.</p>
     */
    inline PropertyType& WithMeasurement(Measurement&& value) { SetMeasurement(std::move(value)); return *this;}


    /**
     * <p>Specifies an asset transform property. A transform contains a mathematical
     * expression that maps a property's data points from one form to another, such as
     * a unit conversion from Celsius to Fahrenheit.</p>
     */
    inline const Transform& GetTransform() const{ return m_transform; }

    /**
     * <p>Specifies an asset transform property. A transform contains a mathematical
     * expression that maps a property's data points from one form to another, such as
     * a unit conversion from Celsius to Fahrenheit.</p>
     */
    inline bool TransformHasBeenSet() const { return m_transformHasBeenSet; }

    /**
     * <p>Specifies an asset transform property. A transform contains a mathematical
     * expression that maps a property's data points from one form to another, such as
     * a unit conversion from Celsius to Fahrenheit.</p>
     */
    inline void SetTransform(const Transform& value) { m_transformHasBeenSet = true; m_transform = value; }

    /**
     * <p>Specifies an asset transform property. A transform contains a mathematical
     * expression that maps a property's data points from one form to another, such as
     * a unit conversion from Celsius to Fahrenheit.</p>
     */
    inline void SetTransform(Transform&& value) { m_transformHasBeenSet = true; m_transform = std::move(value); }

    /**
     * <p>Specifies an asset transform property. A transform contains a mathematical
     * expression that maps a property's data points from one form to another, such as
     * a unit conversion from Celsius to Fahrenheit.</p>
     */
    inline PropertyType& WithTransform(const Transform& value) { SetTransform(value); return *this;}

    /**
     * <p>Specifies an asset transform property. A transform contains a mathematical
     * expression that maps a property's data points from one form to another, such as
     * a unit conversion from Celsius to Fahrenheit.</p>
     */
    inline PropertyType& WithTransform(Transform&& value) { SetTransform(std::move(value)); return *this;}


    /**
     * <p>Specifies an asset metric property. A metric contains a mathematical
     * expression that uses aggregate functions to process all input data points over a
     * time interval and output a single data point, such as to calculate the average
     * hourly temperature.</p>
     */
    inline const Metric& GetMetric() const{ return m_metric; }

    /**
     * <p>Specifies an asset metric property. A metric contains a mathematical
     * expression that uses aggregate functions to process all input data points over a
     * time interval and output a single data point, such as to calculate the average
     * hourly temperature.</p>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>Specifies an asset metric property. A metric contains a mathematical
     * expression that uses aggregate functions to process all input data points over a
     * time interval and output a single data point, such as to calculate the average
     * hourly temperature.</p>
     */
    inline void SetMetric(const Metric& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>Specifies an asset metric property. A metric contains a mathematical
     * expression that uses aggregate functions to process all input data points over a
     * time interval and output a single data point, such as to calculate the average
     * hourly temperature.</p>
     */
    inline void SetMetric(Metric&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>Specifies an asset metric property. A metric contains a mathematical
     * expression that uses aggregate functions to process all input data points over a
     * time interval and output a single data point, such as to calculate the average
     * hourly temperature.</p>
     */
    inline PropertyType& WithMetric(const Metric& value) { SetMetric(value); return *this;}

    /**
     * <p>Specifies an asset metric property. A metric contains a mathematical
     * expression that uses aggregate functions to process all input data points over a
     * time interval and output a single data point, such as to calculate the average
     * hourly temperature.</p>
     */
    inline PropertyType& WithMetric(Metric&& value) { SetMetric(std::move(value)); return *this;}

  private:

    Attribute m_attribute;
    bool m_attributeHasBeenSet = false;

    Measurement m_measurement;
    bool m_measurementHasBeenSet = false;

    Transform m_transform;
    bool m_transformHasBeenSet = false;

    Metric m_metric;
    bool m_metricHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws

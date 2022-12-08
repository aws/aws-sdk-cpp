/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LocationService
{
namespace Model
{
  class DescribeRouteCalculatorResult
  {
  public:
    AWS_LOCATIONSERVICE_API DescribeRouteCalculatorResult();
    AWS_LOCATIONSERVICE_API DescribeRouteCalculatorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API DescribeRouteCalculatorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) for the Route calculator resource. Use the ARN
     * when you specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:route-calculator/ExampleCalculator</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetCalculatorArn() const{ return m_calculatorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Route calculator resource. Use the ARN
     * when you specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:route-calculator/ExampleCalculator</code>
     * </p> </li> </ul>
     */
    inline void SetCalculatorArn(const Aws::String& value) { m_calculatorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Route calculator resource. Use the ARN
     * when you specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:route-calculator/ExampleCalculator</code>
     * </p> </li> </ul>
     */
    inline void SetCalculatorArn(Aws::String&& value) { m_calculatorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Route calculator resource. Use the ARN
     * when you specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:route-calculator/ExampleCalculator</code>
     * </p> </li> </ul>
     */
    inline void SetCalculatorArn(const char* value) { m_calculatorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Route calculator resource. Use the ARN
     * when you specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:route-calculator/ExampleCalculator</code>
     * </p> </li> </ul>
     */
    inline DescribeRouteCalculatorResult& WithCalculatorArn(const Aws::String& value) { SetCalculatorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Route calculator resource. Use the ARN
     * when you specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:route-calculator/ExampleCalculator</code>
     * </p> </li> </ul>
     */
    inline DescribeRouteCalculatorResult& WithCalculatorArn(Aws::String&& value) { SetCalculatorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Route calculator resource. Use the ARN
     * when you specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:route-calculator/ExampleCalculator</code>
     * </p> </li> </ul>
     */
    inline DescribeRouteCalculatorResult& WithCalculatorArn(const char* value) { SetCalculatorArn(value); return *this;}


    /**
     * <p>The name of the route calculator resource being described.</p>
     */
    inline const Aws::String& GetCalculatorName() const{ return m_calculatorName; }

    /**
     * <p>The name of the route calculator resource being described.</p>
     */
    inline void SetCalculatorName(const Aws::String& value) { m_calculatorName = value; }

    /**
     * <p>The name of the route calculator resource being described.</p>
     */
    inline void SetCalculatorName(Aws::String&& value) { m_calculatorName = std::move(value); }

    /**
     * <p>The name of the route calculator resource being described.</p>
     */
    inline void SetCalculatorName(const char* value) { m_calculatorName.assign(value); }

    /**
     * <p>The name of the route calculator resource being described.</p>
     */
    inline DescribeRouteCalculatorResult& WithCalculatorName(const Aws::String& value) { SetCalculatorName(value); return *this;}

    /**
     * <p>The name of the route calculator resource being described.</p>
     */
    inline DescribeRouteCalculatorResult& WithCalculatorName(Aws::String&& value) { SetCalculatorName(std::move(value)); return *this;}

    /**
     * <p>The name of the route calculator resource being described.</p>
     */
    inline DescribeRouteCalculatorResult& WithCalculatorName(const char* value) { SetCalculatorName(value); return *this;}


    /**
     * <p>The timestamp when the route calculator resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p> <ul> <li> <p>For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The timestamp when the route calculator resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p> <ul> <li> <p>For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The timestamp when the route calculator resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p> <ul> <li> <p>For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The timestamp when the route calculator resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p> <ul> <li> <p>For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline DescribeRouteCalculatorResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The timestamp when the route calculator resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p> <ul> <li> <p>For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline DescribeRouteCalculatorResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The data provider of traffic and road network data. Indicates one of the
     * available providers:</p> <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p>
     * <code>Here</code> </p> </li> </ul> <p>For more information about data providers,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline const Aws::String& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The data provider of traffic and road network data. Indicates one of the
     * available providers:</p> <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p>
     * <code>Here</code> </p> </li> </ul> <p>For more information about data providers,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline void SetDataSource(const Aws::String& value) { m_dataSource = value; }

    /**
     * <p>The data provider of traffic and road network data. Indicates one of the
     * available providers:</p> <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p>
     * <code>Here</code> </p> </li> </ul> <p>For more information about data providers,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline void SetDataSource(Aws::String&& value) { m_dataSource = std::move(value); }

    /**
     * <p>The data provider of traffic and road network data. Indicates one of the
     * available providers:</p> <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p>
     * <code>Here</code> </p> </li> </ul> <p>For more information about data providers,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline void SetDataSource(const char* value) { m_dataSource.assign(value); }

    /**
     * <p>The data provider of traffic and road network data. Indicates one of the
     * available providers:</p> <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p>
     * <code>Here</code> </p> </li> </ul> <p>For more information about data providers,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline DescribeRouteCalculatorResult& WithDataSource(const Aws::String& value) { SetDataSource(value); return *this;}

    /**
     * <p>The data provider of traffic and road network data. Indicates one of the
     * available providers:</p> <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p>
     * <code>Here</code> </p> </li> </ul> <p>For more information about data providers,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline DescribeRouteCalculatorResult& WithDataSource(Aws::String&& value) { SetDataSource(std::move(value)); return *this;}

    /**
     * <p>The data provider of traffic and road network data. Indicates one of the
     * available providers:</p> <ul> <li> <p> <code>Esri</code> </p> </li> <li> <p>
     * <code>Here</code> </p> </li> </ul> <p>For more information about data providers,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline DescribeRouteCalculatorResult& WithDataSource(const char* value) { SetDataSource(value); return *this;}


    /**
     * <p>The optional description of the route calculator resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The optional description of the route calculator resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The optional description of the route calculator resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The optional description of the route calculator resource.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The optional description of the route calculator resource.</p>
     */
    inline DescribeRouteCalculatorResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The optional description of the route calculator resource.</p>
     */
    inline DescribeRouteCalculatorResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The optional description of the route calculator resource.</p>
     */
    inline DescribeRouteCalculatorResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Tags associated with route calculator resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags associated with route calculator resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Tags associated with route calculator resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags associated with route calculator resource.</p>
     */
    inline DescribeRouteCalculatorResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with route calculator resource.</p>
     */
    inline DescribeRouteCalculatorResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags associated with route calculator resource.</p>
     */
    inline DescribeRouteCalculatorResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags associated with route calculator resource.</p>
     */
    inline DescribeRouteCalculatorResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with route calculator resource.</p>
     */
    inline DescribeRouteCalculatorResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with route calculator resource.</p>
     */
    inline DescribeRouteCalculatorResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags associated with route calculator resource.</p>
     */
    inline DescribeRouteCalculatorResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with route calculator resource.</p>
     */
    inline DescribeRouteCalculatorResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with route calculator resource.</p>
     */
    inline DescribeRouteCalculatorResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The timestamp when the route calculator resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p> <ul> <li> <p>For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The timestamp when the route calculator resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p> <ul> <li> <p>For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>The timestamp when the route calculator resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p> <ul> <li> <p>For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>The timestamp when the route calculator resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p> <ul> <li> <p>For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline DescribeRouteCalculatorResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The timestamp when the route calculator resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p> <ul> <li> <p>For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline DescribeRouteCalculatorResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_calculatorArn;

    Aws::String m_calculatorName;

    Aws::Utils::DateTime m_createTime;

    Aws::String m_dataSource;

    Aws::String m_description;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Utils::DateTime m_updateTime;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws

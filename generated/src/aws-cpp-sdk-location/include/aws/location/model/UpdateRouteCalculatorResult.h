/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class UpdateRouteCalculatorResult
  {
  public:
    AWS_LOCATIONSERVICE_API UpdateRouteCalculatorResult();
    AWS_LOCATIONSERVICE_API UpdateRouteCalculatorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API UpdateRouteCalculatorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the updated route calculator resource. Used
     * to specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:route- calculator/ExampleCalculator</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetCalculatorArn() const{ return m_calculatorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated route calculator resource. Used
     * to specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:route- calculator/ExampleCalculator</code>
     * </p> </li> </ul>
     */
    inline void SetCalculatorArn(const Aws::String& value) { m_calculatorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated route calculator resource. Used
     * to specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:route- calculator/ExampleCalculator</code>
     * </p> </li> </ul>
     */
    inline void SetCalculatorArn(Aws::String&& value) { m_calculatorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated route calculator resource. Used
     * to specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:route- calculator/ExampleCalculator</code>
     * </p> </li> </ul>
     */
    inline void SetCalculatorArn(const char* value) { m_calculatorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated route calculator resource. Used
     * to specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:route- calculator/ExampleCalculator</code>
     * </p> </li> </ul>
     */
    inline UpdateRouteCalculatorResult& WithCalculatorArn(const Aws::String& value) { SetCalculatorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated route calculator resource. Used
     * to specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:route- calculator/ExampleCalculator</code>
     * </p> </li> </ul>
     */
    inline UpdateRouteCalculatorResult& WithCalculatorArn(Aws::String&& value) { SetCalculatorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated route calculator resource. Used
     * to specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:route- calculator/ExampleCalculator</code>
     * </p> </li> </ul>
     */
    inline UpdateRouteCalculatorResult& WithCalculatorArn(const char* value) { SetCalculatorArn(value); return *this;}


    /**
     * <p>The name of the updated route calculator resource.</p>
     */
    inline const Aws::String& GetCalculatorName() const{ return m_calculatorName; }

    /**
     * <p>The name of the updated route calculator resource.</p>
     */
    inline void SetCalculatorName(const Aws::String& value) { m_calculatorName = value; }

    /**
     * <p>The name of the updated route calculator resource.</p>
     */
    inline void SetCalculatorName(Aws::String&& value) { m_calculatorName = std::move(value); }

    /**
     * <p>The name of the updated route calculator resource.</p>
     */
    inline void SetCalculatorName(const char* value) { m_calculatorName.assign(value); }

    /**
     * <p>The name of the updated route calculator resource.</p>
     */
    inline UpdateRouteCalculatorResult& WithCalculatorName(const Aws::String& value) { SetCalculatorName(value); return *this;}

    /**
     * <p>The name of the updated route calculator resource.</p>
     */
    inline UpdateRouteCalculatorResult& WithCalculatorName(Aws::String&& value) { SetCalculatorName(std::move(value)); return *this;}

    /**
     * <p>The name of the updated route calculator resource.</p>
     */
    inline UpdateRouteCalculatorResult& WithCalculatorName(const char* value) { SetCalculatorName(value); return *this;}


    /**
     * <p>The timestamp for when the route calculator was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The timestamp for when the route calculator was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>The timestamp for when the route calculator was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>The timestamp for when the route calculator was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline UpdateRouteCalculatorResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The timestamp for when the route calculator was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline UpdateRouteCalculatorResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_calculatorArn;

    Aws::String m_calculatorName;

    Aws::Utils::DateTime m_updateTime;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws

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
  class CreateRouteCalculatorResult
  {
  public:
    AWS_LOCATIONSERVICE_API CreateRouteCalculatorResult() = default;
    AWS_LOCATIONSERVICE_API CreateRouteCalculatorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API CreateRouteCalculatorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the route calculator resource. </p> <ul> <li> <p>For example,
     * <code>ExampleRouteCalculator</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetCalculatorName() const { return m_calculatorName; }
    template<typename CalculatorNameT = Aws::String>
    void SetCalculatorName(CalculatorNameT&& value) { m_calculatorNameHasBeenSet = true; m_calculatorName = std::forward<CalculatorNameT>(value); }
    template<typename CalculatorNameT = Aws::String>
    CreateRouteCalculatorResult& WithCalculatorName(CalculatorNameT&& value) { SetCalculatorName(std::forward<CalculatorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the route calculator resource. Use the ARN
     * when you specify a resource across all Amazon Web Services.</p> <ul> <li>
     * <p>Format example:
     * <code>arn:aws:geo:region:account-id:route-calculator/ExampleCalculator</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetCalculatorArn() const { return m_calculatorArn; }
    template<typename CalculatorArnT = Aws::String>
    void SetCalculatorArn(CalculatorArnT&& value) { m_calculatorArnHasBeenSet = true; m_calculatorArn = std::forward<CalculatorArnT>(value); }
    template<typename CalculatorArnT = Aws::String>
    CreateRouteCalculatorResult& WithCalculatorArn(CalculatorArnT&& value) { SetCalculatorArn(std::forward<CalculatorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the route calculator resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p> <ul> <li> <p>For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    CreateRouteCalculatorResult& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateRouteCalculatorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_calculatorName;
    bool m_calculatorNameHasBeenSet = false;

    Aws::String m_calculatorArn;
    bool m_calculatorArnHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws

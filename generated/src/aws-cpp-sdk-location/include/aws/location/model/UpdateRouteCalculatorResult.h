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
    AWS_LOCATIONSERVICE_API UpdateRouteCalculatorResult() = default;
    AWS_LOCATIONSERVICE_API UpdateRouteCalculatorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API UpdateRouteCalculatorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the updated route calculator resource.</p>
     */
    inline const Aws::String& GetCalculatorName() const { return m_calculatorName; }
    template<typename CalculatorNameT = Aws::String>
    void SetCalculatorName(CalculatorNameT&& value) { m_calculatorNameHasBeenSet = true; m_calculatorName = std::forward<CalculatorNameT>(value); }
    template<typename CalculatorNameT = Aws::String>
    UpdateRouteCalculatorResult& WithCalculatorName(CalculatorNameT&& value) { SetCalculatorName(std::forward<CalculatorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the updated route calculator resource. Used
     * to specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:route- calculator/ExampleCalculator</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetCalculatorArn() const { return m_calculatorArn; }
    template<typename CalculatorArnT = Aws::String>
    void SetCalculatorArn(CalculatorArnT&& value) { m_calculatorArnHasBeenSet = true; m_calculatorArn = std::forward<CalculatorArnT>(value); }
    template<typename CalculatorArnT = Aws::String>
    UpdateRouteCalculatorResult& WithCalculatorArn(CalculatorArnT&& value) { SetCalculatorArn(std::forward<CalculatorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the route calculator was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    UpdateRouteCalculatorResult& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateRouteCalculatorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_calculatorName;
    bool m_calculatorNameHasBeenSet = false;

    Aws::String m_calculatorArn;
    bool m_calculatorArnHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws

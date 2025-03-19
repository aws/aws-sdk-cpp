/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/FlywheelProperties.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Comprehend
{
namespace Model
{
  class DescribeFlywheelResult
  {
  public:
    AWS_COMPREHEND_API DescribeFlywheelResult() = default;
    AWS_COMPREHEND_API DescribeFlywheelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeFlywheelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The flywheel properties.</p>
     */
    inline const FlywheelProperties& GetFlywheelProperties() const { return m_flywheelProperties; }
    template<typename FlywheelPropertiesT = FlywheelProperties>
    void SetFlywheelProperties(FlywheelPropertiesT&& value) { m_flywheelPropertiesHasBeenSet = true; m_flywheelProperties = std::forward<FlywheelPropertiesT>(value); }
    template<typename FlywheelPropertiesT = FlywheelProperties>
    DescribeFlywheelResult& WithFlywheelProperties(FlywheelPropertiesT&& value) { SetFlywheelProperties(std::forward<FlywheelPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFlywheelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FlywheelProperties m_flywheelProperties;
    bool m_flywheelPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

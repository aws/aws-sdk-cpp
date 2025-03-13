/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/FlywheelIterationProperties.h>
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
  class DescribeFlywheelIterationResult
  {
  public:
    AWS_COMPREHEND_API DescribeFlywheelIterationResult() = default;
    AWS_COMPREHEND_API DescribeFlywheelIterationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeFlywheelIterationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration properties of a flywheel iteration.</p>
     */
    inline const FlywheelIterationProperties& GetFlywheelIterationProperties() const { return m_flywheelIterationProperties; }
    template<typename FlywheelIterationPropertiesT = FlywheelIterationProperties>
    void SetFlywheelIterationProperties(FlywheelIterationPropertiesT&& value) { m_flywheelIterationPropertiesHasBeenSet = true; m_flywheelIterationProperties = std::forward<FlywheelIterationPropertiesT>(value); }
    template<typename FlywheelIterationPropertiesT = FlywheelIterationProperties>
    DescribeFlywheelIterationResult& WithFlywheelIterationProperties(FlywheelIterationPropertiesT&& value) { SetFlywheelIterationProperties(std::forward<FlywheelIterationPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFlywheelIterationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FlywheelIterationProperties m_flywheelIterationProperties;
    bool m_flywheelIterationPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

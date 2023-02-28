/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/FlywheelIterationProperties.h>
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
    AWS_COMPREHEND_API DescribeFlywheelIterationResult();
    AWS_COMPREHEND_API DescribeFlywheelIterationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeFlywheelIterationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The configuration properties of a flywheel iteration.</p>
     */
    inline const FlywheelIterationProperties& GetFlywheelIterationProperties() const{ return m_flywheelIterationProperties; }

    /**
     * <p>The configuration properties of a flywheel iteration.</p>
     */
    inline void SetFlywheelIterationProperties(const FlywheelIterationProperties& value) { m_flywheelIterationProperties = value; }

    /**
     * <p>The configuration properties of a flywheel iteration.</p>
     */
    inline void SetFlywheelIterationProperties(FlywheelIterationProperties&& value) { m_flywheelIterationProperties = std::move(value); }

    /**
     * <p>The configuration properties of a flywheel iteration.</p>
     */
    inline DescribeFlywheelIterationResult& WithFlywheelIterationProperties(const FlywheelIterationProperties& value) { SetFlywheelIterationProperties(value); return *this;}

    /**
     * <p>The configuration properties of a flywheel iteration.</p>
     */
    inline DescribeFlywheelIterationResult& WithFlywheelIterationProperties(FlywheelIterationProperties&& value) { SetFlywheelIterationProperties(std::move(value)); return *this;}

  private:

    FlywheelIterationProperties m_flywheelIterationProperties;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/FlywheelProperties.h>
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
  class UpdateFlywheelResult
  {
  public:
    AWS_COMPREHEND_API UpdateFlywheelResult();
    AWS_COMPREHEND_API UpdateFlywheelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API UpdateFlywheelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The flywheel properties.</p>
     */
    inline const FlywheelProperties& GetFlywheelProperties() const{ return m_flywheelProperties; }

    /**
     * <p>The flywheel properties.</p>
     */
    inline void SetFlywheelProperties(const FlywheelProperties& value) { m_flywheelProperties = value; }

    /**
     * <p>The flywheel properties.</p>
     */
    inline void SetFlywheelProperties(FlywheelProperties&& value) { m_flywheelProperties = std::move(value); }

    /**
     * <p>The flywheel properties.</p>
     */
    inline UpdateFlywheelResult& WithFlywheelProperties(const FlywheelProperties& value) { SetFlywheelProperties(value); return *this;}

    /**
     * <p>The flywheel properties.</p>
     */
    inline UpdateFlywheelResult& WithFlywheelProperties(FlywheelProperties&& value) { SetFlywheelProperties(std::move(value)); return *this;}

  private:

    FlywheelProperties m_flywheelProperties;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

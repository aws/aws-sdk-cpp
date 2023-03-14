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
    AWS_COMPREHEND_API DescribeFlywheelResult();
    AWS_COMPREHEND_API DescribeFlywheelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeFlywheelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribeFlywheelResult& WithFlywheelProperties(const FlywheelProperties& value) { SetFlywheelProperties(value); return *this;}

    /**
     * <p>The flywheel properties.</p>
     */
    inline DescribeFlywheelResult& WithFlywheelProperties(FlywheelProperties&& value) { SetFlywheelProperties(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeFlywheelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeFlywheelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeFlywheelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    FlywheelProperties m_flywheelProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

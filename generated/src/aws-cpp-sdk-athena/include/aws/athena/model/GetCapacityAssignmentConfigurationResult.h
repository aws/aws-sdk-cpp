/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/CapacityAssignmentConfiguration.h>
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
namespace Athena
{
namespace Model
{
  class GetCapacityAssignmentConfigurationResult
  {
  public:
    AWS_ATHENA_API GetCapacityAssignmentConfigurationResult();
    AWS_ATHENA_API GetCapacityAssignmentConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetCapacityAssignmentConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested capacity assignment configuration for the specified capacity
     * reservation.</p>
     */
    inline const CapacityAssignmentConfiguration& GetCapacityAssignmentConfiguration() const{ return m_capacityAssignmentConfiguration; }

    /**
     * <p>The requested capacity assignment configuration for the specified capacity
     * reservation.</p>
     */
    inline void SetCapacityAssignmentConfiguration(const CapacityAssignmentConfiguration& value) { m_capacityAssignmentConfiguration = value; }

    /**
     * <p>The requested capacity assignment configuration for the specified capacity
     * reservation.</p>
     */
    inline void SetCapacityAssignmentConfiguration(CapacityAssignmentConfiguration&& value) { m_capacityAssignmentConfiguration = std::move(value); }

    /**
     * <p>The requested capacity assignment configuration for the specified capacity
     * reservation.</p>
     */
    inline GetCapacityAssignmentConfigurationResult& WithCapacityAssignmentConfiguration(const CapacityAssignmentConfiguration& value) { SetCapacityAssignmentConfiguration(value); return *this;}

    /**
     * <p>The requested capacity assignment configuration for the specified capacity
     * reservation.</p>
     */
    inline GetCapacityAssignmentConfigurationResult& WithCapacityAssignmentConfiguration(CapacityAssignmentConfiguration&& value) { SetCapacityAssignmentConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCapacityAssignmentConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCapacityAssignmentConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCapacityAssignmentConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CapacityAssignmentConfiguration m_capacityAssignmentConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws

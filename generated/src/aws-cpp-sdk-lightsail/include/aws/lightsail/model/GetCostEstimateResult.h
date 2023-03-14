/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ResourceBudgetEstimate.h>
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
namespace Lightsail
{
namespace Model
{
  class GetCostEstimateResult
  {
  public:
    AWS_LIGHTSAIL_API GetCostEstimateResult();
    AWS_LIGHTSAIL_API GetCostEstimateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetCostEstimateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the estimate's forecasted cost or usage.</p>
     */
    inline const Aws::Vector<ResourceBudgetEstimate>& GetResourcesBudgetEstimate() const{ return m_resourcesBudgetEstimate; }

    /**
     * <p>Returns the estimate's forecasted cost or usage.</p>
     */
    inline void SetResourcesBudgetEstimate(const Aws::Vector<ResourceBudgetEstimate>& value) { m_resourcesBudgetEstimate = value; }

    /**
     * <p>Returns the estimate's forecasted cost or usage.</p>
     */
    inline void SetResourcesBudgetEstimate(Aws::Vector<ResourceBudgetEstimate>&& value) { m_resourcesBudgetEstimate = std::move(value); }

    /**
     * <p>Returns the estimate's forecasted cost or usage.</p>
     */
    inline GetCostEstimateResult& WithResourcesBudgetEstimate(const Aws::Vector<ResourceBudgetEstimate>& value) { SetResourcesBudgetEstimate(value); return *this;}

    /**
     * <p>Returns the estimate's forecasted cost or usage.</p>
     */
    inline GetCostEstimateResult& WithResourcesBudgetEstimate(Aws::Vector<ResourceBudgetEstimate>&& value) { SetResourcesBudgetEstimate(std::move(value)); return *this;}

    /**
     * <p>Returns the estimate's forecasted cost or usage.</p>
     */
    inline GetCostEstimateResult& AddResourcesBudgetEstimate(const ResourceBudgetEstimate& value) { m_resourcesBudgetEstimate.push_back(value); return *this; }

    /**
     * <p>Returns the estimate's forecasted cost or usage.</p>
     */
    inline GetCostEstimateResult& AddResourcesBudgetEstimate(ResourceBudgetEstimate&& value) { m_resourcesBudgetEstimate.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCostEstimateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCostEstimateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCostEstimateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ResourceBudgetEstimate> m_resourcesBudgetEstimate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws

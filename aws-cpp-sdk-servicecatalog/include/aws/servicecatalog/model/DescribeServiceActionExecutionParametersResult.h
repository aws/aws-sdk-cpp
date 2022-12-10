/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/ExecutionParameter.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class DescribeServiceActionExecutionParametersResult
  {
  public:
    AWS_SERVICECATALOG_API DescribeServiceActionExecutionParametersResult();
    AWS_SERVICECATALOG_API DescribeServiceActionExecutionParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribeServiceActionExecutionParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The parameters of the self-service action.</p>
     */
    inline const Aws::Vector<ExecutionParameter>& GetServiceActionParameters() const{ return m_serviceActionParameters; }

    /**
     * <p>The parameters of the self-service action.</p>
     */
    inline void SetServiceActionParameters(const Aws::Vector<ExecutionParameter>& value) { m_serviceActionParameters = value; }

    /**
     * <p>The parameters of the self-service action.</p>
     */
    inline void SetServiceActionParameters(Aws::Vector<ExecutionParameter>&& value) { m_serviceActionParameters = std::move(value); }

    /**
     * <p>The parameters of the self-service action.</p>
     */
    inline DescribeServiceActionExecutionParametersResult& WithServiceActionParameters(const Aws::Vector<ExecutionParameter>& value) { SetServiceActionParameters(value); return *this;}

    /**
     * <p>The parameters of the self-service action.</p>
     */
    inline DescribeServiceActionExecutionParametersResult& WithServiceActionParameters(Aws::Vector<ExecutionParameter>&& value) { SetServiceActionParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters of the self-service action.</p>
     */
    inline DescribeServiceActionExecutionParametersResult& AddServiceActionParameters(const ExecutionParameter& value) { m_serviceActionParameters.push_back(value); return *this; }

    /**
     * <p>The parameters of the self-service action.</p>
     */
    inline DescribeServiceActionExecutionParametersResult& AddServiceActionParameters(ExecutionParameter&& value) { m_serviceActionParameters.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ExecutionParameter> m_serviceActionParameters;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws

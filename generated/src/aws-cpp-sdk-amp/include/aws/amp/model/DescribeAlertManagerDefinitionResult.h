/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/AlertManagerDefinitionDescription.h>
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
namespace PrometheusService
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>DescribeAlertManagerDefinition</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeAlertManagerDefinitionResponse">AWS
   * API Reference</a></p>
   */
  class DescribeAlertManagerDefinitionResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API DescribeAlertManagerDefinitionResult();
    AWS_PROMETHEUSSERVICE_API DescribeAlertManagerDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API DescribeAlertManagerDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The alert manager definition.</p>
     */
    inline const AlertManagerDefinitionDescription& GetAlertManagerDefinition() const{ return m_alertManagerDefinition; }

    /**
     * <p>The alert manager definition.</p>
     */
    inline void SetAlertManagerDefinition(const AlertManagerDefinitionDescription& value) { m_alertManagerDefinition = value; }

    /**
     * <p>The alert manager definition.</p>
     */
    inline void SetAlertManagerDefinition(AlertManagerDefinitionDescription&& value) { m_alertManagerDefinition = std::move(value); }

    /**
     * <p>The alert manager definition.</p>
     */
    inline DescribeAlertManagerDefinitionResult& WithAlertManagerDefinition(const AlertManagerDefinitionDescription& value) { SetAlertManagerDefinition(value); return *this;}

    /**
     * <p>The alert manager definition.</p>
     */
    inline DescribeAlertManagerDefinitionResult& WithAlertManagerDefinition(AlertManagerDefinitionDescription&& value) { SetAlertManagerDefinition(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAlertManagerDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAlertManagerDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAlertManagerDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AlertManagerDefinitionDescription m_alertManagerDefinition;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/AlertManagerDefinitionDescription.h>
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
   * <p>Represents the output of a DescribeAlertManagerDefinition
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
     * <p>The properties of the selected workspace's alert manager definition.</p>
     */
    inline const AlertManagerDefinitionDescription& GetAlertManagerDefinition() const{ return m_alertManagerDefinition; }

    /**
     * <p>The properties of the selected workspace's alert manager definition.</p>
     */
    inline void SetAlertManagerDefinition(const AlertManagerDefinitionDescription& value) { m_alertManagerDefinition = value; }

    /**
     * <p>The properties of the selected workspace's alert manager definition.</p>
     */
    inline void SetAlertManagerDefinition(AlertManagerDefinitionDescription&& value) { m_alertManagerDefinition = std::move(value); }

    /**
     * <p>The properties of the selected workspace's alert manager definition.</p>
     */
    inline DescribeAlertManagerDefinitionResult& WithAlertManagerDefinition(const AlertManagerDefinitionDescription& value) { SetAlertManagerDefinition(value); return *this;}

    /**
     * <p>The properties of the selected workspace's alert manager definition.</p>
     */
    inline DescribeAlertManagerDefinitionResult& WithAlertManagerDefinition(AlertManagerDefinitionDescription&& value) { SetAlertManagerDefinition(std::move(value)); return *this;}

  private:

    AlertManagerDefinitionDescription m_alertManagerDefinition;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-managed-integrations/model/RetryConfigCriteria.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Over-the-air (OTA) task retry config.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/OtaTaskExecutionRetryConfig">AWS
   * API Reference</a></p>
   */
  class OtaTaskExecutionRetryConfig
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskExecutionRetryConfig();
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskExecutionRetryConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskExecutionRetryConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of retry config criteria.</p>
     */
    inline const Aws::Vector<RetryConfigCriteria>& GetRetryConfigCriteria() const{ return m_retryConfigCriteria; }
    inline bool RetryConfigCriteriaHasBeenSet() const { return m_retryConfigCriteriaHasBeenSet; }
    inline void SetRetryConfigCriteria(const Aws::Vector<RetryConfigCriteria>& value) { m_retryConfigCriteriaHasBeenSet = true; m_retryConfigCriteria = value; }
    inline void SetRetryConfigCriteria(Aws::Vector<RetryConfigCriteria>&& value) { m_retryConfigCriteriaHasBeenSet = true; m_retryConfigCriteria = std::move(value); }
    inline OtaTaskExecutionRetryConfig& WithRetryConfigCriteria(const Aws::Vector<RetryConfigCriteria>& value) { SetRetryConfigCriteria(value); return *this;}
    inline OtaTaskExecutionRetryConfig& WithRetryConfigCriteria(Aws::Vector<RetryConfigCriteria>&& value) { SetRetryConfigCriteria(std::move(value)); return *this;}
    inline OtaTaskExecutionRetryConfig& AddRetryConfigCriteria(const RetryConfigCriteria& value) { m_retryConfigCriteriaHasBeenSet = true; m_retryConfigCriteria.push_back(value); return *this; }
    inline OtaTaskExecutionRetryConfig& AddRetryConfigCriteria(RetryConfigCriteria&& value) { m_retryConfigCriteriaHasBeenSet = true; m_retryConfigCriteria.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RetryConfigCriteria> m_retryConfigCriteria;
    bool m_retryConfigCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/RetryCriteriaFailureType.h>
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
   * <p>Structure representing one retry config criteria.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/RetryConfigCriteria">AWS
   * API Reference</a></p>
   */
  class RetryConfigCriteria
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API RetryConfigCriteria() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API RetryConfigCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API RetryConfigCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Over-the-air (OTA) retry criteria failure type.</p>
     */
    inline RetryCriteriaFailureType GetFailureType() const { return m_failureType; }
    inline bool FailureTypeHasBeenSet() const { return m_failureTypeHasBeenSet; }
    inline void SetFailureType(RetryCriteriaFailureType value) { m_failureTypeHasBeenSet = true; m_failureType = value; }
    inline RetryConfigCriteria& WithFailureType(RetryCriteriaFailureType value) { SetFailureType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of retries allowed for a failure type for the over-the-air (OTA)
     * task.</p>
     */
    inline int GetMinNumberOfRetries() const { return m_minNumberOfRetries; }
    inline bool MinNumberOfRetriesHasBeenSet() const { return m_minNumberOfRetriesHasBeenSet; }
    inline void SetMinNumberOfRetries(int value) { m_minNumberOfRetriesHasBeenSet = true; m_minNumberOfRetries = value; }
    inline RetryConfigCriteria& WithMinNumberOfRetries(int value) { SetMinNumberOfRetries(value); return *this;}
    ///@}
  private:

    RetryCriteriaFailureType m_failureType{RetryCriteriaFailureType::NOT_SET};
    bool m_failureTypeHasBeenSet = false;

    int m_minNumberOfRetries{0};
    bool m_minNumberOfRetriesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws

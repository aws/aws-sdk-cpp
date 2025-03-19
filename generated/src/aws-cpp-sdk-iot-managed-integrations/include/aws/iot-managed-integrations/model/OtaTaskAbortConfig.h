/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-managed-integrations/model/AbortConfigCriteria.h>
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
   * <p>Over-the-air (OTA) task abort config.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/OtaTaskAbortConfig">AWS
   * API Reference</a></p>
   */
  class OtaTaskAbortConfig
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskAbortConfig() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskAbortConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskAbortConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of criteria for the abort config.</p>
     */
    inline const Aws::Vector<AbortConfigCriteria>& GetAbortConfigCriteriaList() const { return m_abortConfigCriteriaList; }
    inline bool AbortConfigCriteriaListHasBeenSet() const { return m_abortConfigCriteriaListHasBeenSet; }
    template<typename AbortConfigCriteriaListT = Aws::Vector<AbortConfigCriteria>>
    void SetAbortConfigCriteriaList(AbortConfigCriteriaListT&& value) { m_abortConfigCriteriaListHasBeenSet = true; m_abortConfigCriteriaList = std::forward<AbortConfigCriteriaListT>(value); }
    template<typename AbortConfigCriteriaListT = Aws::Vector<AbortConfigCriteria>>
    OtaTaskAbortConfig& WithAbortConfigCriteriaList(AbortConfigCriteriaListT&& value) { SetAbortConfigCriteriaList(std::forward<AbortConfigCriteriaListT>(value)); return *this;}
    template<typename AbortConfigCriteriaListT = AbortConfigCriteria>
    OtaTaskAbortConfig& AddAbortConfigCriteriaList(AbortConfigCriteriaListT&& value) { m_abortConfigCriteriaListHasBeenSet = true; m_abortConfigCriteriaList.emplace_back(std::forward<AbortConfigCriteriaListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AbortConfigCriteria> m_abortConfigCriteriaList;
    bool m_abortConfigCriteriaListHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws

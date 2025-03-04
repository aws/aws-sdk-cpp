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
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskAbortConfig();
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskAbortConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskAbortConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of criteria for the abort config.</p>
     */
    inline const Aws::Vector<AbortConfigCriteria>& GetAbortConfigCriteriaList() const{ return m_abortConfigCriteriaList; }
    inline bool AbortConfigCriteriaListHasBeenSet() const { return m_abortConfigCriteriaListHasBeenSet; }
    inline void SetAbortConfigCriteriaList(const Aws::Vector<AbortConfigCriteria>& value) { m_abortConfigCriteriaListHasBeenSet = true; m_abortConfigCriteriaList = value; }
    inline void SetAbortConfigCriteriaList(Aws::Vector<AbortConfigCriteria>&& value) { m_abortConfigCriteriaListHasBeenSet = true; m_abortConfigCriteriaList = std::move(value); }
    inline OtaTaskAbortConfig& WithAbortConfigCriteriaList(const Aws::Vector<AbortConfigCriteria>& value) { SetAbortConfigCriteriaList(value); return *this;}
    inline OtaTaskAbortConfig& WithAbortConfigCriteriaList(Aws::Vector<AbortConfigCriteria>&& value) { SetAbortConfigCriteriaList(std::move(value)); return *this;}
    inline OtaTaskAbortConfig& AddAbortConfigCriteriaList(const AbortConfigCriteria& value) { m_abortConfigCriteriaListHasBeenSet = true; m_abortConfigCriteriaList.push_back(value); return *this; }
    inline OtaTaskAbortConfig& AddAbortConfigCriteriaList(AbortConfigCriteria&& value) { m_abortConfigCriteriaListHasBeenSet = true; m_abortConfigCriteriaList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AbortConfigCriteria> m_abortConfigCriteriaList;
    bool m_abortConfigCriteriaListHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws

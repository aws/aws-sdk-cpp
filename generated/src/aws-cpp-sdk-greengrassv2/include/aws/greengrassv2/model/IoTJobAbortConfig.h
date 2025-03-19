/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrassv2/model/IoTJobAbortCriteria.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains a list of criteria that define when and how to cancel a
   * configuration deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/IoTJobAbortConfig">AWS
   * API Reference</a></p>
   */
  class IoTJobAbortConfig
  {
  public:
    AWS_GREENGRASSV2_API IoTJobAbortConfig() = default;
    AWS_GREENGRASSV2_API IoTJobAbortConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API IoTJobAbortConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of criteria that define when and how to cancel the configuration
     * deployment.</p>
     */
    inline const Aws::Vector<IoTJobAbortCriteria>& GetCriteriaList() const { return m_criteriaList; }
    inline bool CriteriaListHasBeenSet() const { return m_criteriaListHasBeenSet; }
    template<typename CriteriaListT = Aws::Vector<IoTJobAbortCriteria>>
    void SetCriteriaList(CriteriaListT&& value) { m_criteriaListHasBeenSet = true; m_criteriaList = std::forward<CriteriaListT>(value); }
    template<typename CriteriaListT = Aws::Vector<IoTJobAbortCriteria>>
    IoTJobAbortConfig& WithCriteriaList(CriteriaListT&& value) { SetCriteriaList(std::forward<CriteriaListT>(value)); return *this;}
    template<typename CriteriaListT = IoTJobAbortCriteria>
    IoTJobAbortConfig& AddCriteriaList(CriteriaListT&& value) { m_criteriaListHasBeenSet = true; m_criteriaList.emplace_back(std::forward<CriteriaListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<IoTJobAbortCriteria> m_criteriaList;
    bool m_criteriaListHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/RetryCriteria.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The configuration that determines how many retries are allowed for each
   * failure type for a job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/JobExecutionsRetryConfig">AWS
   * API Reference</a></p>
   */
  class JobExecutionsRetryConfig
  {
  public:
    AWS_IOT_API JobExecutionsRetryConfig() = default;
    AWS_IOT_API JobExecutionsRetryConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API JobExecutionsRetryConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of criteria that determines how many retries are allowed for each
     * failure type for a job.</p>
     */
    inline const Aws::Vector<RetryCriteria>& GetCriteriaList() const { return m_criteriaList; }
    inline bool CriteriaListHasBeenSet() const { return m_criteriaListHasBeenSet; }
    template<typename CriteriaListT = Aws::Vector<RetryCriteria>>
    void SetCriteriaList(CriteriaListT&& value) { m_criteriaListHasBeenSet = true; m_criteriaList = std::forward<CriteriaListT>(value); }
    template<typename CriteriaListT = Aws::Vector<RetryCriteria>>
    JobExecutionsRetryConfig& WithCriteriaList(CriteriaListT&& value) { SetCriteriaList(std::forward<CriteriaListT>(value)); return *this;}
    template<typename CriteriaListT = RetryCriteria>
    JobExecutionsRetryConfig& AddCriteriaList(CriteriaListT&& value) { m_criteriaListHasBeenSet = true; m_criteriaList.emplace_back(std::forward<CriteriaListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RetryCriteria> m_criteriaList;
    bool m_criteriaListHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

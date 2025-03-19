/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/AwsJobAbortCriteria.h>
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
   * <p>The criteria that determine when and how a job abort takes
   * place.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AwsJobAbortConfig">AWS
   * API Reference</a></p>
   */
  class AwsJobAbortConfig
  {
  public:
    AWS_IOT_API AwsJobAbortConfig() = default;
    AWS_IOT_API AwsJobAbortConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AwsJobAbortConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of criteria that determine when and how to abort the job.</p>
     */
    inline const Aws::Vector<AwsJobAbortCriteria>& GetAbortCriteriaList() const { return m_abortCriteriaList; }
    inline bool AbortCriteriaListHasBeenSet() const { return m_abortCriteriaListHasBeenSet; }
    template<typename AbortCriteriaListT = Aws::Vector<AwsJobAbortCriteria>>
    void SetAbortCriteriaList(AbortCriteriaListT&& value) { m_abortCriteriaListHasBeenSet = true; m_abortCriteriaList = std::forward<AbortCriteriaListT>(value); }
    template<typename AbortCriteriaListT = Aws::Vector<AwsJobAbortCriteria>>
    AwsJobAbortConfig& WithAbortCriteriaList(AbortCriteriaListT&& value) { SetAbortCriteriaList(std::forward<AbortCriteriaListT>(value)); return *this;}
    template<typename AbortCriteriaListT = AwsJobAbortCriteria>
    AwsJobAbortConfig& AddAbortCriteriaList(AbortCriteriaListT&& value) { m_abortCriteriaListHasBeenSet = true; m_abortCriteriaList.emplace_back(std::forward<AbortCriteriaListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AwsJobAbortCriteria> m_abortCriteriaList;
    bool m_abortCriteriaListHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

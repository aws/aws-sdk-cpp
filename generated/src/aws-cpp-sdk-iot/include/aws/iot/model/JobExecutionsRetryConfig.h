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
    AWS_IOT_API JobExecutionsRetryConfig();
    AWS_IOT_API JobExecutionsRetryConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API JobExecutionsRetryConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of criteria that determines how many retries are allowed for each
     * failure type for a job.</p>
     */
    inline const Aws::Vector<RetryCriteria>& GetCriteriaList() const{ return m_criteriaList; }

    /**
     * <p>The list of criteria that determines how many retries are allowed for each
     * failure type for a job.</p>
     */
    inline bool CriteriaListHasBeenSet() const { return m_criteriaListHasBeenSet; }

    /**
     * <p>The list of criteria that determines how many retries are allowed for each
     * failure type for a job.</p>
     */
    inline void SetCriteriaList(const Aws::Vector<RetryCriteria>& value) { m_criteriaListHasBeenSet = true; m_criteriaList = value; }

    /**
     * <p>The list of criteria that determines how many retries are allowed for each
     * failure type for a job.</p>
     */
    inline void SetCriteriaList(Aws::Vector<RetryCriteria>&& value) { m_criteriaListHasBeenSet = true; m_criteriaList = std::move(value); }

    /**
     * <p>The list of criteria that determines how many retries are allowed for each
     * failure type for a job.</p>
     */
    inline JobExecutionsRetryConfig& WithCriteriaList(const Aws::Vector<RetryCriteria>& value) { SetCriteriaList(value); return *this;}

    /**
     * <p>The list of criteria that determines how many retries are allowed for each
     * failure type for a job.</p>
     */
    inline JobExecutionsRetryConfig& WithCriteriaList(Aws::Vector<RetryCriteria>&& value) { SetCriteriaList(std::move(value)); return *this;}

    /**
     * <p>The list of criteria that determines how many retries are allowed for each
     * failure type for a job.</p>
     */
    inline JobExecutionsRetryConfig& AddCriteriaList(const RetryCriteria& value) { m_criteriaListHasBeenSet = true; m_criteriaList.push_back(value); return *this; }

    /**
     * <p>The list of criteria that determines how many retries are allowed for each
     * failure type for a job.</p>
     */
    inline JobExecutionsRetryConfig& AddCriteriaList(RetryCriteria&& value) { m_criteriaListHasBeenSet = true; m_criteriaList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RetryCriteria> m_criteriaList;
    bool m_criteriaListHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

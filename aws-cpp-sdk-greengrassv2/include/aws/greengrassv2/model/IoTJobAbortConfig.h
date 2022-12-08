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
    AWS_GREENGRASSV2_API IoTJobAbortConfig();
    AWS_GREENGRASSV2_API IoTJobAbortConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API IoTJobAbortConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of criteria that define when and how to cancel the configuration
     * deployment.</p>
     */
    inline const Aws::Vector<IoTJobAbortCriteria>& GetCriteriaList() const{ return m_criteriaList; }

    /**
     * <p>The list of criteria that define when and how to cancel the configuration
     * deployment.</p>
     */
    inline bool CriteriaListHasBeenSet() const { return m_criteriaListHasBeenSet; }

    /**
     * <p>The list of criteria that define when and how to cancel the configuration
     * deployment.</p>
     */
    inline void SetCriteriaList(const Aws::Vector<IoTJobAbortCriteria>& value) { m_criteriaListHasBeenSet = true; m_criteriaList = value; }

    /**
     * <p>The list of criteria that define when and how to cancel the configuration
     * deployment.</p>
     */
    inline void SetCriteriaList(Aws::Vector<IoTJobAbortCriteria>&& value) { m_criteriaListHasBeenSet = true; m_criteriaList = std::move(value); }

    /**
     * <p>The list of criteria that define when and how to cancel the configuration
     * deployment.</p>
     */
    inline IoTJobAbortConfig& WithCriteriaList(const Aws::Vector<IoTJobAbortCriteria>& value) { SetCriteriaList(value); return *this;}

    /**
     * <p>The list of criteria that define when and how to cancel the configuration
     * deployment.</p>
     */
    inline IoTJobAbortConfig& WithCriteriaList(Aws::Vector<IoTJobAbortCriteria>&& value) { SetCriteriaList(std::move(value)); return *this;}

    /**
     * <p>The list of criteria that define when and how to cancel the configuration
     * deployment.</p>
     */
    inline IoTJobAbortConfig& AddCriteriaList(const IoTJobAbortCriteria& value) { m_criteriaListHasBeenSet = true; m_criteriaList.push_back(value); return *this; }

    /**
     * <p>The list of criteria that define when and how to cancel the configuration
     * deployment.</p>
     */
    inline IoTJobAbortConfig& AddCriteriaList(IoTJobAbortCriteria&& value) { m_criteriaListHasBeenSet = true; m_criteriaList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<IoTJobAbortCriteria> m_criteriaList;
    bool m_criteriaListHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws

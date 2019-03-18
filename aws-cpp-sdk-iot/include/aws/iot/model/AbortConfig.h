/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/AbortCriteria.h>
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
   * <p>Details of abort criteria to abort the job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AbortConfig">AWS API
   * Reference</a></p>
   */
  class AWS_IOT_API AbortConfig
  {
  public:
    AbortConfig();
    AbortConfig(Aws::Utils::Json::JsonView jsonValue);
    AbortConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of abort criteria to define rules to abort the job.</p>
     */
    inline const Aws::Vector<AbortCriteria>& GetCriteriaList() const{ return m_criteriaList; }

    /**
     * <p>The list of abort criteria to define rules to abort the job.</p>
     */
    inline bool CriteriaListHasBeenSet() const { return m_criteriaListHasBeenSet; }

    /**
     * <p>The list of abort criteria to define rules to abort the job.</p>
     */
    inline void SetCriteriaList(const Aws::Vector<AbortCriteria>& value) { m_criteriaListHasBeenSet = true; m_criteriaList = value; }

    /**
     * <p>The list of abort criteria to define rules to abort the job.</p>
     */
    inline void SetCriteriaList(Aws::Vector<AbortCriteria>&& value) { m_criteriaListHasBeenSet = true; m_criteriaList = std::move(value); }

    /**
     * <p>The list of abort criteria to define rules to abort the job.</p>
     */
    inline AbortConfig& WithCriteriaList(const Aws::Vector<AbortCriteria>& value) { SetCriteriaList(value); return *this;}

    /**
     * <p>The list of abort criteria to define rules to abort the job.</p>
     */
    inline AbortConfig& WithCriteriaList(Aws::Vector<AbortCriteria>&& value) { SetCriteriaList(std::move(value)); return *this;}

    /**
     * <p>The list of abort criteria to define rules to abort the job.</p>
     */
    inline AbortConfig& AddCriteriaList(const AbortCriteria& value) { m_criteriaListHasBeenSet = true; m_criteriaList.push_back(value); return *this; }

    /**
     * <p>The list of abort criteria to define rules to abort the job.</p>
     */
    inline AbortConfig& AddCriteriaList(AbortCriteria&& value) { m_criteriaListHasBeenSet = true; m_criteriaList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AbortCriteria> m_criteriaList;
    bool m_criteriaListHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

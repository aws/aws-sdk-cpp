/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>Defines the valid range of work unit IDs for querying the execution
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/WorkUnitRange">AWS
   * API Reference</a></p>
   */
  class WorkUnitRange
  {
  public:
    AWS_LAKEFORMATION_API WorkUnitRange() = default;
    AWS_LAKEFORMATION_API WorkUnitRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API WorkUnitRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the maximum work unit ID in the range. The maximum value is
     * inclusive.</p>
     */
    inline long long GetWorkUnitIdMax() const { return m_workUnitIdMax; }
    inline bool WorkUnitIdMaxHasBeenSet() const { return m_workUnitIdMaxHasBeenSet; }
    inline void SetWorkUnitIdMax(long long value) { m_workUnitIdMaxHasBeenSet = true; m_workUnitIdMax = value; }
    inline WorkUnitRange& WithWorkUnitIdMax(long long value) { SetWorkUnitIdMax(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the minimum work unit ID in the range.</p>
     */
    inline long long GetWorkUnitIdMin() const { return m_workUnitIdMin; }
    inline bool WorkUnitIdMinHasBeenSet() const { return m_workUnitIdMinHasBeenSet; }
    inline void SetWorkUnitIdMin(long long value) { m_workUnitIdMinHasBeenSet = true; m_workUnitIdMin = value; }
    inline WorkUnitRange& WithWorkUnitIdMin(long long value) { SetWorkUnitIdMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A work token used to query the execution service.</p>
     */
    inline const Aws::String& GetWorkUnitToken() const { return m_workUnitToken; }
    inline bool WorkUnitTokenHasBeenSet() const { return m_workUnitTokenHasBeenSet; }
    template<typename WorkUnitTokenT = Aws::String>
    void SetWorkUnitToken(WorkUnitTokenT&& value) { m_workUnitTokenHasBeenSet = true; m_workUnitToken = std::forward<WorkUnitTokenT>(value); }
    template<typename WorkUnitTokenT = Aws::String>
    WorkUnitRange& WithWorkUnitToken(WorkUnitTokenT&& value) { SetWorkUnitToken(std::forward<WorkUnitTokenT>(value)); return *this;}
    ///@}
  private:

    long long m_workUnitIdMax{0};
    bool m_workUnitIdMaxHasBeenSet = false;

    long long m_workUnitIdMin{0};
    bool m_workUnitIdMinHasBeenSet = false;

    Aws::String m_workUnitToken;
    bool m_workUnitTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>Resource launch actions filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/LaunchActionsRequestFilters">AWS
   * API Reference</a></p>
   */
  class LaunchActionsRequestFilters
  {
  public:
    AWS_DRS_API LaunchActionsRequestFilters() = default;
    AWS_DRS_API LaunchActionsRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API LaunchActionsRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Launch actions Ids.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActionIds() const { return m_actionIds; }
    inline bool ActionIdsHasBeenSet() const { return m_actionIdsHasBeenSet; }
    template<typename ActionIdsT = Aws::Vector<Aws::String>>
    void SetActionIds(ActionIdsT&& value) { m_actionIdsHasBeenSet = true; m_actionIds = std::forward<ActionIdsT>(value); }
    template<typename ActionIdsT = Aws::Vector<Aws::String>>
    LaunchActionsRequestFilters& WithActionIds(ActionIdsT&& value) { SetActionIds(std::forward<ActionIdsT>(value)); return *this;}
    template<typename ActionIdsT = Aws::String>
    LaunchActionsRequestFilters& AddActionIds(ActionIdsT&& value) { m_actionIdsHasBeenSet = true; m_actionIds.emplace_back(std::forward<ActionIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_actionIds;
    bool m_actionIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws

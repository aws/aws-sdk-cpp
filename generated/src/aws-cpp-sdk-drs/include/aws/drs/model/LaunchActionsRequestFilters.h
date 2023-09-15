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
    AWS_DRS_API LaunchActionsRequestFilters();
    AWS_DRS_API LaunchActionsRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API LaunchActionsRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Launch actions Ids.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActionIds() const{ return m_actionIds; }

    /**
     * <p>Launch actions Ids.</p>
     */
    inline bool ActionIdsHasBeenSet() const { return m_actionIdsHasBeenSet; }

    /**
     * <p>Launch actions Ids.</p>
     */
    inline void SetActionIds(const Aws::Vector<Aws::String>& value) { m_actionIdsHasBeenSet = true; m_actionIds = value; }

    /**
     * <p>Launch actions Ids.</p>
     */
    inline void SetActionIds(Aws::Vector<Aws::String>&& value) { m_actionIdsHasBeenSet = true; m_actionIds = std::move(value); }

    /**
     * <p>Launch actions Ids.</p>
     */
    inline LaunchActionsRequestFilters& WithActionIds(const Aws::Vector<Aws::String>& value) { SetActionIds(value); return *this;}

    /**
     * <p>Launch actions Ids.</p>
     */
    inline LaunchActionsRequestFilters& WithActionIds(Aws::Vector<Aws::String>&& value) { SetActionIds(std::move(value)); return *this;}

    /**
     * <p>Launch actions Ids.</p>
     */
    inline LaunchActionsRequestFilters& AddActionIds(const Aws::String& value) { m_actionIdsHasBeenSet = true; m_actionIds.push_back(value); return *this; }

    /**
     * <p>Launch actions Ids.</p>
     */
    inline LaunchActionsRequestFilters& AddActionIds(Aws::String&& value) { m_actionIdsHasBeenSet = true; m_actionIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Launch actions Ids.</p>
     */
    inline LaunchActionsRequestFilters& AddActionIds(const char* value) { m_actionIdsHasBeenSet = true; m_actionIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_actionIds;
    bool m_actionIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws

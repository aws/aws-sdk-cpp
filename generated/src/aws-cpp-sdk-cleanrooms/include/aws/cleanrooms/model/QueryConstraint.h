/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/QueryConstraintRequireOverlap.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Provides any necessary query constraint information.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/QueryConstraint">AWS
   * API Reference</a></p>
   */
  class QueryConstraint
  {
  public:
    AWS_CLEANROOMS_API QueryConstraint() = default;
    AWS_CLEANROOMS_API QueryConstraint(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API QueryConstraint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of column names that specifies which columns are required in the
     * JOIN statement.</p>
     */
    inline const QueryConstraintRequireOverlap& GetRequireOverlap() const { return m_requireOverlap; }
    inline bool RequireOverlapHasBeenSet() const { return m_requireOverlapHasBeenSet; }
    template<typename RequireOverlapT = QueryConstraintRequireOverlap>
    void SetRequireOverlap(RequireOverlapT&& value) { m_requireOverlapHasBeenSet = true; m_requireOverlap = std::forward<RequireOverlapT>(value); }
    template<typename RequireOverlapT = QueryConstraintRequireOverlap>
    QueryConstraint& WithRequireOverlap(RequireOverlapT&& value) { SetRequireOverlap(std::forward<RequireOverlapT>(value)); return *this;}
    ///@}
  private:

    QueryConstraintRequireOverlap m_requireOverlap;
    bool m_requireOverlapHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

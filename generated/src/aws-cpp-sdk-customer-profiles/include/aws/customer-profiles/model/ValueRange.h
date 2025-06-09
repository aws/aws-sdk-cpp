/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>A structure letting customers specify a relative time window over which over
   * which data is included in the Calculated Attribute. Use positive numbers to
   * indicate that the endpoint is in the past, and negative numbers to indicate it
   * is in the future. ValueRange overrides Value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ValueRange">AWS
   * API Reference</a></p>
   */
  class ValueRange
  {
  public:
    AWS_CUSTOMERPROFILES_API ValueRange() = default;
    AWS_CUSTOMERPROFILES_API ValueRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ValueRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time of when to include objects. Use positive numbers to indicate
     * that the starting point is in the past, and negative numbers to indicate it is
     * in the future.</p>
     */
    inline int GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    inline void SetStart(int value) { m_startHasBeenSet = true; m_start = value; }
    inline ValueRange& WithStart(int value) { SetStart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of when to include objects. Use positive numbers to indicate
     * that the starting point is in the past, and negative numbers to indicate it is
     * in the future.</p>
     */
    inline int GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    inline void SetEnd(int value) { m_endHasBeenSet = true; m_end = value; }
    inline ValueRange& WithEnd(int value) { SetEnd(value); return *this;}
    ///@}
  private:

    int m_start{0};
    bool m_startHasBeenSet = false;

    int m_end{0};
    bool m_endHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws

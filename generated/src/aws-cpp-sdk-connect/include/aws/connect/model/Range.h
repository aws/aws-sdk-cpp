/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>

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
namespace Connect
{
namespace Model
{

  /**
   * <p>An Object to define the minimum and maximum proficiency levels.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Range">AWS API
   * Reference</a></p>
   */
  class Range
  {
  public:
    AWS_CONNECT_API Range() = default;
    AWS_CONNECT_API Range(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Range& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum proficiency level of the range.</p>
     */
    inline double GetMinProficiencyLevel() const { return m_minProficiencyLevel; }
    inline bool MinProficiencyLevelHasBeenSet() const { return m_minProficiencyLevelHasBeenSet; }
    inline void SetMinProficiencyLevel(double value) { m_minProficiencyLevelHasBeenSet = true; m_minProficiencyLevel = value; }
    inline Range& WithMinProficiencyLevel(double value) { SetMinProficiencyLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum proficiency level of the range.</p>
     */
    inline double GetMaxProficiencyLevel() const { return m_maxProficiencyLevel; }
    inline bool MaxProficiencyLevelHasBeenSet() const { return m_maxProficiencyLevelHasBeenSet; }
    inline void SetMaxProficiencyLevel(double value) { m_maxProficiencyLevelHasBeenSet = true; m_maxProficiencyLevel = value; }
    inline Range& WithMaxProficiencyLevel(double value) { SetMaxProficiencyLevel(value); return *this;}
    ///@}
  private:

    double m_minProficiencyLevel{0.0};
    bool m_minProficiencyLevelHasBeenSet = false;

    double m_maxProficiencyLevel{0.0};
    bool m_maxProficiencyLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

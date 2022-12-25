/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>

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
namespace EMR
{
namespace Model
{

  /**
   * <p>A list of port ranges that are permitted to allow inbound traffic from all
   * public IP addresses. To specify a single port, use the same value for
   * <code>MinRange</code> and <code>MaxRange</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/PortRange">AWS
   * API Reference</a></p>
   */
  class PortRange
  {
  public:
    AWS_EMR_API PortRange();
    AWS_EMR_API PortRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API PortRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The smallest port number in a specified range of port numbers.</p>
     */
    inline int GetMinRange() const{ return m_minRange; }

    /**
     * <p>The smallest port number in a specified range of port numbers.</p>
     */
    inline bool MinRangeHasBeenSet() const { return m_minRangeHasBeenSet; }

    /**
     * <p>The smallest port number in a specified range of port numbers.</p>
     */
    inline void SetMinRange(int value) { m_minRangeHasBeenSet = true; m_minRange = value; }

    /**
     * <p>The smallest port number in a specified range of port numbers.</p>
     */
    inline PortRange& WithMinRange(int value) { SetMinRange(value); return *this;}


    /**
     * <p>The smallest port number in a specified range of port numbers.</p>
     */
    inline int GetMaxRange() const{ return m_maxRange; }

    /**
     * <p>The smallest port number in a specified range of port numbers.</p>
     */
    inline bool MaxRangeHasBeenSet() const { return m_maxRangeHasBeenSet; }

    /**
     * <p>The smallest port number in a specified range of port numbers.</p>
     */
    inline void SetMaxRange(int value) { m_maxRangeHasBeenSet = true; m_maxRange = value; }

    /**
     * <p>The smallest port number in a specified range of port numbers.</p>
     */
    inline PortRange& WithMaxRange(int value) { SetMaxRange(value); return *this;}

  private:

    int m_minRange;
    bool m_minRangeHasBeenSet = false;

    int m_maxRange;
    bool m_maxRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws

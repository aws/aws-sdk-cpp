/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>

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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>An object that describes the details of a port range filter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/PortRangeFilter">AWS
   * API Reference</a></p>
   */
  class PortRangeFilter
  {
  public:
    AWS_INSPECTOR2_API PortRangeFilter();
    AWS_INSPECTOR2_API PortRangeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API PortRangeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The port number the port range begins at.</p>
     */
    inline int GetBeginInclusive() const{ return m_beginInclusive; }

    /**
     * <p>The port number the port range begins at.</p>
     */
    inline bool BeginInclusiveHasBeenSet() const { return m_beginInclusiveHasBeenSet; }

    /**
     * <p>The port number the port range begins at.</p>
     */
    inline void SetBeginInclusive(int value) { m_beginInclusiveHasBeenSet = true; m_beginInclusive = value; }

    /**
     * <p>The port number the port range begins at.</p>
     */
    inline PortRangeFilter& WithBeginInclusive(int value) { SetBeginInclusive(value); return *this;}


    /**
     * <p>The port number the port range ends at.</p>
     */
    inline int GetEndInclusive() const{ return m_endInclusive; }

    /**
     * <p>The port number the port range ends at.</p>
     */
    inline bool EndInclusiveHasBeenSet() const { return m_endInclusiveHasBeenSet; }

    /**
     * <p>The port number the port range ends at.</p>
     */
    inline void SetEndInclusive(int value) { m_endInclusiveHasBeenSet = true; m_endInclusive = value; }

    /**
     * <p>The port number the port range ends at.</p>
     */
    inline PortRangeFilter& WithEndInclusive(int value) { SetEndInclusive(value); return *this;}

  private:

    int m_beginInclusive;
    bool m_beginInclusiveHasBeenSet = false;

    int m_endInclusive;
    bool m_endInclusiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws

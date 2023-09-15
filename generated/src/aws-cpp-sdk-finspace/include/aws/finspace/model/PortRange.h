/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>

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
namespace finspace
{
namespace Model
{

  /**
   * <p> The range of ports the rule applies to. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/PortRange">AWS
   * API Reference</a></p>
   */
  class PortRange
  {
  public:
    AWS_FINSPACE_API PortRange();
    AWS_FINSPACE_API PortRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API PortRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The first port in the range. </p>
     */
    inline int GetFrom() const{ return m_from; }

    /**
     * <p> The first port in the range. </p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p> The first port in the range. </p>
     */
    inline void SetFrom(int value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p> The first port in the range. </p>
     */
    inline PortRange& WithFrom(int value) { SetFrom(value); return *this;}


    /**
     * <p> The last port in the range. </p>
     */
    inline int GetTo() const{ return m_to; }

    /**
     * <p> The last port in the range. </p>
     */
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }

    /**
     * <p> The last port in the range. </p>
     */
    inline void SetTo(int value) { m_toHasBeenSet = true; m_to = value; }

    /**
     * <p> The last port in the range. </p>
     */
    inline PortRange& WithTo(int value) { SetTo(value); return *this;}

  private:

    int m_from;
    bool m_fromHasBeenSet = false;

    int m_to;
    bool m_toHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws

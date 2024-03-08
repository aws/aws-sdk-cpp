/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
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
namespace ControlTower
{
namespace Model
{

  /**
   * <p>An Amazon Web Services Region in which Amazon Web Services Control Tower
   * expects to find the control deployed. </p> <p>The expected Regions are based on
   * the Regions that are governed by the landing zone. In certain cases, a control
   * is not actually enabled in the Region as expected, such as during drift, or <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/region-how.html#mixed-governance">mixed
   * governance</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/Region">AWS
   * API Reference</a></p>
   */
  class Region
  {
  public:
    AWS_CONTROLTOWER_API Region();
    AWS_CONTROLTOWER_API Region(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Region& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services Region name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The Amazon Web Services Region name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The Amazon Web Services Region name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The Amazon Web Services Region name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The Amazon Web Services Region name.</p>
     */
    inline Region& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The Amazon Web Services Region name.</p>
     */
    inline Region& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region name.</p>
     */
    inline Region& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws

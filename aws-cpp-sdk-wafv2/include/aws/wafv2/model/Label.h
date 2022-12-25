/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>A single label container. This is used as an element of a label array in
   * multiple contexts, for example, in <code>RuleLabels</code> inside a <a>Rule</a>
   * and in <code>Labels</code> inside a <a>SampledHTTPRequest</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/Label">AWS API
   * Reference</a></p>
   */
  class Label
  {
  public:
    AWS_WAFV2_API Label();
    AWS_WAFV2_API Label(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Label& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The label string. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The label string. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The label string. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The label string. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The label string. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The label string. </p>
     */
    inline Label& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The label string. </p>
     */
    inline Label& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The label string. </p>
     */
    inline Label& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws

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
   * <p>List of labels used by one or more of the rules of a <a>RuleGroup</a>. This
   * summary object is used for the following rule group lists: </p> <ul> <li> <p>
   * <code>AvailableLabels</code> - Labels that rules add to matching requests. These
   * labels are defined in the <code>RuleLabels</code> for a <a>Rule</a>. </p> </li>
   * <li> <p> <code>ConsumedLabels</code> - Labels that rules match against. These
   * labels are defined in a <code>LabelMatchStatement</code> specification, in the
   * <a>Statement</a> definition of a rule. </p> </li> </ul><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/LabelSummary">AWS
   * API Reference</a></p>
   */
  class LabelSummary
  {
  public:
    AWS_WAFV2_API LabelSummary();
    AWS_WAFV2_API LabelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API LabelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An individual label specification.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>An individual label specification.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>An individual label specification.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>An individual label specification.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>An individual label specification.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>An individual label specification.</p>
     */
    inline LabelSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>An individual label specification.</p>
     */
    inline LabelSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>An individual label specification.</p>
     */
    inline LabelSummary& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws

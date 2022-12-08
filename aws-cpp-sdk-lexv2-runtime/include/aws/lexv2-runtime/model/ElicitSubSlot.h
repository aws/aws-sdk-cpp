/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
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
namespace LexRuntimeV2
{
namespace Model
{

  /**
   * <p>The specific constituent sub slot of the composite slot to elicit in dialog
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/ElicitSubSlot">AWS
   * API Reference</a></p>
   */
  class ElicitSubSlot
  {
  public:
    AWS_LEXRUNTIMEV2_API ElicitSubSlot();
    AWS_LEXRUNTIMEV2_API ElicitSubSlot(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API ElicitSubSlot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline ElicitSubSlot& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline ElicitSubSlot& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline ElicitSubSlot& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The field is not supported.</p>
     */
    AWS_LEXRUNTIMEV2_API const ElicitSubSlot& GetSubSlotToElicit() const;

    /**
     * <p>The field is not supported.</p>
     */
    AWS_LEXRUNTIMEV2_API bool SubSlotToElicitHasBeenSet() const;

    /**
     * <p>The field is not supported.</p>
     */
    AWS_LEXRUNTIMEV2_API void SetSubSlotToElicit(const ElicitSubSlot& value);

    /**
     * <p>The field is not supported.</p>
     */
    AWS_LEXRUNTIMEV2_API void SetSubSlotToElicit(ElicitSubSlot&& value);

    /**
     * <p>The field is not supported.</p>
     */
    AWS_LEXRUNTIMEV2_API ElicitSubSlot& WithSubSlotToElicit(const ElicitSubSlot& value);

    /**
     * <p>The field is not supported.</p>
     */
    AWS_LEXRUNTIMEV2_API ElicitSubSlot& WithSubSlotToElicit(ElicitSubSlot&& value);

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    std::shared_ptr<ElicitSubSlot> m_subSlotToElicit;
    bool m_subSlotToElicitHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Provides information about a slot used in a built-in intent.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/BuiltinIntentSlot">AWS
   * API Reference</a></p>
   */
  class BuiltinIntentSlot
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API BuiltinIntentSlot();
    AWS_LEXMODELBUILDINGSERVICE_API BuiltinIntentSlot(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API BuiltinIntentSlot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of the slots defined for the intent.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A list of the slots defined for the intent.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A list of the slots defined for the intent.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A list of the slots defined for the intent.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A list of the slots defined for the intent.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A list of the slots defined for the intent.</p>
     */
    inline BuiltinIntentSlot& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A list of the slots defined for the intent.</p>
     */
    inline BuiltinIntentSlot& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A list of the slots defined for the intent.</p>
     */
    inline BuiltinIntentSlot& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws

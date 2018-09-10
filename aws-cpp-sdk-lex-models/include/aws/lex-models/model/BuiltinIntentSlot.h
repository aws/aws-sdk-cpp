﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_LEXMODELBUILDINGSERVICE_API BuiltinIntentSlot
  {
  public:
    BuiltinIntentSlot();
    BuiltinIntentSlot(Aws::Utils::Json::JsonView jsonValue);
    BuiltinIntentSlot& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of the slots defined for the intent.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

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
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws

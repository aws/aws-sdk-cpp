/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputClass.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace InputClassMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int SINGLE_PIPELINE_HASH = HashingUtils::HashString("SINGLE_PIPELINE");


        InputClass GetInputClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return InputClass::STANDARD;
          }
          else if (hashCode == SINGLE_PIPELINE_HASH)
          {
            return InputClass::SINGLE_PIPELINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputClass>(hashCode);
          }

          return InputClass::NOT_SET;
        }

        Aws::String GetNameForInputClass(InputClass enumValue)
        {
          switch(enumValue)
          {
          case InputClass::STANDARD:
            return "STANDARD";
          case InputClass::SINGLE_PIPELINE:
            return "SINGLE_PIPELINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputClassMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

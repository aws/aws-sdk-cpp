/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ComponentFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace ComponentFormatMapper
      {

        static const int SHELL_HASH = HashingUtils::HashString("SHELL");


        ComponentFormat GetComponentFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHELL_HASH)
          {
            return ComponentFormat::SHELL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComponentFormat>(hashCode);
          }

          return ComponentFormat::NOT_SET;
        }

        Aws::String GetNameForComponentFormat(ComponentFormat enumValue)
        {
          switch(enumValue)
          {
          case ComponentFormat::SHELL:
            return "SHELL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComponentFormatMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws

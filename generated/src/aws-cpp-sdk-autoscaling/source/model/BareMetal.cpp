/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/BareMetal.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScaling
  {
    namespace Model
    {
      namespace BareMetalMapper
      {

        static const int included_HASH = HashingUtils::HashString("included");
        static const int excluded_HASH = HashingUtils::HashString("excluded");
        static const int required_HASH = HashingUtils::HashString("required");


        BareMetal GetBareMetalForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == included_HASH)
          {
            return BareMetal::included;
          }
          else if (hashCode == excluded_HASH)
          {
            return BareMetal::excluded;
          }
          else if (hashCode == required_HASH)
          {
            return BareMetal::required;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BareMetal>(hashCode);
          }

          return BareMetal::NOT_SET;
        }

        Aws::String GetNameForBareMetal(BareMetal enumValue)
        {
          switch(enumValue)
          {
          case BareMetal::NOT_SET:
            return {};
          case BareMetal::included:
            return "included";
          case BareMetal::excluded:
            return "excluded";
          case BareMetal::required:
            return "required";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BareMetalMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws

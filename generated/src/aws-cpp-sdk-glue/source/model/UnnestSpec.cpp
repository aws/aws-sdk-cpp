/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UnnestSpec.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace UnnestSpecMapper
      {

        static const int TOPLEVEL_HASH = HashingUtils::HashString("TOPLEVEL");
        static const int FULL_HASH = HashingUtils::HashString("FULL");
        static const int NOUNNEST_HASH = HashingUtils::HashString("NOUNNEST");


        UnnestSpec GetUnnestSpecForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TOPLEVEL_HASH)
          {
            return UnnestSpec::TOPLEVEL;
          }
          else if (hashCode == FULL_HASH)
          {
            return UnnestSpec::FULL;
          }
          else if (hashCode == NOUNNEST_HASH)
          {
            return UnnestSpec::NOUNNEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UnnestSpec>(hashCode);
          }

          return UnnestSpec::NOT_SET;
        }

        Aws::String GetNameForUnnestSpec(UnnestSpec enumValue)
        {
          switch(enumValue)
          {
          case UnnestSpec::NOT_SET:
            return {};
          case UnnestSpec::TOPLEVEL:
            return "TOPLEVEL";
          case UnnestSpec::FULL:
            return "FULL";
          case UnnestSpec::NOUNNEST:
            return "NOUNNEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UnnestSpecMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Compatibility.h>
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
      namespace CompatibilityMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int BACKWARD_HASH = HashingUtils::HashString("BACKWARD");
        static const int BACKWARD_ALL_HASH = HashingUtils::HashString("BACKWARD_ALL");
        static const int FORWARD_HASH = HashingUtils::HashString("FORWARD");
        static const int FORWARD_ALL_HASH = HashingUtils::HashString("FORWARD_ALL");
        static const int FULL_HASH = HashingUtils::HashString("FULL");
        static const int FULL_ALL_HASH = HashingUtils::HashString("FULL_ALL");


        Compatibility GetCompatibilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return Compatibility::NONE;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return Compatibility::DISABLED;
          }
          else if (hashCode == BACKWARD_HASH)
          {
            return Compatibility::BACKWARD;
          }
          else if (hashCode == BACKWARD_ALL_HASH)
          {
            return Compatibility::BACKWARD_ALL;
          }
          else if (hashCode == FORWARD_HASH)
          {
            return Compatibility::FORWARD;
          }
          else if (hashCode == FORWARD_ALL_HASH)
          {
            return Compatibility::FORWARD_ALL;
          }
          else if (hashCode == FULL_HASH)
          {
            return Compatibility::FULL;
          }
          else if (hashCode == FULL_ALL_HASH)
          {
            return Compatibility::FULL_ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Compatibility>(hashCode);
          }

          return Compatibility::NOT_SET;
        }

        Aws::String GetNameForCompatibility(Compatibility enumValue)
        {
          switch(enumValue)
          {
          case Compatibility::NONE:
            return "NONE";
          case Compatibility::DISABLED:
            return "DISABLED";
          case Compatibility::BACKWARD:
            return "BACKWARD";
          case Compatibility::BACKWARD_ALL:
            return "BACKWARD_ALL";
          case Compatibility::FORWARD:
            return "FORWARD";
          case Compatibility::FORWARD_ALL:
            return "FORWARD_ALL";
          case Compatibility::FULL:
            return "FULL";
          case Compatibility::FULL_ALL:
            return "FULL_ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CompatibilityMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws

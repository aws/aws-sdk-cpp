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

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t BACKWARD_HASH = ConstExprHashingUtils::HashString("BACKWARD");
        static constexpr uint32_t BACKWARD_ALL_HASH = ConstExprHashingUtils::HashString("BACKWARD_ALL");
        static constexpr uint32_t FORWARD_HASH = ConstExprHashingUtils::HashString("FORWARD");
        static constexpr uint32_t FORWARD_ALL_HASH = ConstExprHashingUtils::HashString("FORWARD_ALL");
        static constexpr uint32_t FULL_HASH = ConstExprHashingUtils::HashString("FULL");
        static constexpr uint32_t FULL_ALL_HASH = ConstExprHashingUtils::HashString("FULL_ALL");


        Compatibility GetCompatibilityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case Compatibility::NOT_SET:
            return {};
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

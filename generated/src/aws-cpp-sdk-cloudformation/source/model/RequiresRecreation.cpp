/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/RequiresRecreation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace RequiresRecreationMapper
      {

        static constexpr uint32_t Never_HASH = ConstExprHashingUtils::HashString("Never");
        static constexpr uint32_t Conditionally_HASH = ConstExprHashingUtils::HashString("Conditionally");
        static constexpr uint32_t Always_HASH = ConstExprHashingUtils::HashString("Always");


        RequiresRecreation GetRequiresRecreationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Never_HASH)
          {
            return RequiresRecreation::Never;
          }
          else if (hashCode == Conditionally_HASH)
          {
            return RequiresRecreation::Conditionally;
          }
          else if (hashCode == Always_HASH)
          {
            return RequiresRecreation::Always;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RequiresRecreation>(hashCode);
          }

          return RequiresRecreation::NOT_SET;
        }

        Aws::String GetNameForRequiresRecreation(RequiresRecreation enumValue)
        {
          switch(enumValue)
          {
          case RequiresRecreation::NOT_SET:
            return {};
          case RequiresRecreation::Never:
            return "Never";
          case RequiresRecreation::Conditionally:
            return "Conditionally";
          case RequiresRecreation::Always:
            return "Always";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RequiresRecreationMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws

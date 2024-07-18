/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TargetListType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace TargetListTypeMapper
      {

        static const int PROFICIENCIES_HASH = HashingUtils::HashString("PROFICIENCIES");


        TargetListType GetTargetListTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROFICIENCIES_HASH)
          {
            return TargetListType::PROFICIENCIES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetListType>(hashCode);
          }

          return TargetListType::NOT_SET;
        }

        Aws::String GetNameForTargetListType(TargetListType enumValue)
        {
          switch(enumValue)
          {
          case TargetListType::NOT_SET:
            return {};
          case TargetListType::PROFICIENCIES:
            return "PROFICIENCIES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetListTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws

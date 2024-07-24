/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/IdNamespaceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace IdNamespaceTypeMapper
      {

        static const int SOURCE_HASH = HashingUtils::HashString("SOURCE");
        static const int TARGET_HASH = HashingUtils::HashString("TARGET");


        IdNamespaceType GetIdNamespaceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOURCE_HASH)
          {
            return IdNamespaceType::SOURCE;
          }
          else if (hashCode == TARGET_HASH)
          {
            return IdNamespaceType::TARGET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdNamespaceType>(hashCode);
          }

          return IdNamespaceType::NOT_SET;
        }

        Aws::String GetNameForIdNamespaceType(IdNamespaceType enumValue)
        {
          switch(enumValue)
          {
          case IdNamespaceType::NOT_SET:
            return {};
          case IdNamespaceType::SOURCE:
            return "SOURCE";
          case IdNamespaceType::TARGET:
            return "TARGET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdNamespaceTypeMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws

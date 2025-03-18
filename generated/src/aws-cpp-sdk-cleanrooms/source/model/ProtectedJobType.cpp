/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedJobType.h>
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
      namespace ProtectedJobTypeMapper
      {

        static const int PYSPARK_HASH = HashingUtils::HashString("PYSPARK");


        ProtectedJobType GetProtectedJobTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PYSPARK_HASH)
          {
            return ProtectedJobType::PYSPARK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProtectedJobType>(hashCode);
          }

          return ProtectedJobType::NOT_SET;
        }

        Aws::String GetNameForProtectedJobType(ProtectedJobType enumValue)
        {
          switch(enumValue)
          {
          case ProtectedJobType::NOT_SET:
            return {};
          case ProtectedJobType::PYSPARK:
            return "PYSPARK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtectedJobTypeMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws

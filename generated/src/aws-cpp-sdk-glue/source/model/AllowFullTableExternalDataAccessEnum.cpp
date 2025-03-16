/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/AllowFullTableExternalDataAccessEnum.h>
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
      namespace AllowFullTableExternalDataAccessEnumMapper
      {

        static const int True_HASH = HashingUtils::HashString("True");
        static const int False_HASH = HashingUtils::HashString("False");


        AllowFullTableExternalDataAccessEnum GetAllowFullTableExternalDataAccessEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == True_HASH)
          {
            return AllowFullTableExternalDataAccessEnum::True;
          }
          else if (hashCode == False_HASH)
          {
            return AllowFullTableExternalDataAccessEnum::False;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AllowFullTableExternalDataAccessEnum>(hashCode);
          }

          return AllowFullTableExternalDataAccessEnum::NOT_SET;
        }

        Aws::String GetNameForAllowFullTableExternalDataAccessEnum(AllowFullTableExternalDataAccessEnum enumValue)
        {
          switch(enumValue)
          {
          case AllowFullTableExternalDataAccessEnum::NOT_SET:
            return {};
          case AllowFullTableExternalDataAccessEnum::True:
            return "True";
          case AllowFullTableExternalDataAccessEnum::False:
            return "False";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AllowFullTableExternalDataAccessEnumMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws

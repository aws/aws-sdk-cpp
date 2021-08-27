/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Edition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace EditionMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int ENTERPRISE_HASH = HashingUtils::HashString("ENTERPRISE");


        Edition GetEditionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return Edition::STANDARD;
          }
          else if (hashCode == ENTERPRISE_HASH)
          {
            return Edition::ENTERPRISE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Edition>(hashCode);
          }

          return Edition::NOT_SET;
        }

        Aws::String GetNameForEdition(Edition enumValue)
        {
          switch(enumValue)
          {
          case Edition::STANDARD:
            return "STANDARD";
          case Edition::ENTERPRISE:
            return "ENTERPRISE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EditionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

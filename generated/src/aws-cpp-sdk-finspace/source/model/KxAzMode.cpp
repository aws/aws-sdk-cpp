/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxAzMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace finspace
  {
    namespace Model
    {
      namespace KxAzModeMapper
      {

        static const int SINGLE_HASH = HashingUtils::HashString("SINGLE");
        static const int MULTI_HASH = HashingUtils::HashString("MULTI");


        KxAzMode GetKxAzModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_HASH)
          {
            return KxAzMode::SINGLE;
          }
          else if (hashCode == MULTI_HASH)
          {
            return KxAzMode::MULTI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KxAzMode>(hashCode);
          }

          return KxAzMode::NOT_SET;
        }

        Aws::String GetNameForKxAzMode(KxAzMode enumValue)
        {
          switch(enumValue)
          {
          case KxAzMode::NOT_SET:
            return {};
          case KxAzMode::SINGLE:
            return "SINGLE";
          case KxAzMode::MULTI:
            return "MULTI";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KxAzModeMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws

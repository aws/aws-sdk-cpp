/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/IncludeDetail.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EventBridge
  {
    namespace Model
    {
      namespace IncludeDetailMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int FULL_HASH = HashingUtils::HashString("FULL");


        IncludeDetail GetIncludeDetailForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return IncludeDetail::NONE;
          }
          else if (hashCode == FULL_HASH)
          {
            return IncludeDetail::FULL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IncludeDetail>(hashCode);
          }

          return IncludeDetail::NOT_SET;
        }

        Aws::String GetNameForIncludeDetail(IncludeDetail enumValue)
        {
          switch(enumValue)
          {
          case IncludeDetail::NOT_SET:
            return {};
          case IncludeDetail::NONE:
            return "NONE";
          case IncludeDetail::FULL:
            return "FULL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IncludeDetailMapper
    } // namespace Model
  } // namespace EventBridge
} // namespace Aws

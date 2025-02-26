/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/ListResponseScope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTFleetWise
  {
    namespace Model
    {
      namespace ListResponseScopeMapper
      {

        static const int METADATA_ONLY_HASH = HashingUtils::HashString("METADATA_ONLY");


        ListResponseScope GetListResponseScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == METADATA_ONLY_HASH)
          {
            return ListResponseScope::METADATA_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListResponseScope>(hashCode);
          }

          return ListResponseScope::NOT_SET;
        }

        Aws::String GetNameForListResponseScope(ListResponseScope enumValue)
        {
          switch(enumValue)
          {
          case ListResponseScope::NOT_SET:
            return {};
          case ListResponseScope::METADATA_ONLY:
            return "METADATA_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListResponseScopeMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/InitiateAs.h>
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
      namespace InitiateAsMapper
      {

        static const int CONNECTED_TO_USER_HASH = HashingUtils::HashString("CONNECTED_TO_USER");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        InitiateAs GetInitiateAsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONNECTED_TO_USER_HASH)
          {
            return InitiateAs::CONNECTED_TO_USER;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return InitiateAs::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InitiateAs>(hashCode);
          }

          return InitiateAs::NOT_SET;
        }

        Aws::String GetNameForInitiateAs(InitiateAs enumValue)
        {
          switch(enumValue)
          {
          case InitiateAs::NOT_SET:
            return {};
          case InitiateAs::CONNECTED_TO_USER:
            return "CONNECTED_TO_USER";
          case InitiateAs::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InitiateAsMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws

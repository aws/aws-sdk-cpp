/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/LastRunErrorStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace LastRunErrorStatusCodeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        LastRunErrorStatusCode GetLastRunErrorStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return LastRunErrorStatusCode::NONE;
          }
          else if (hashCode == ERROR__HASH)
          {
            return LastRunErrorStatusCode::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LastRunErrorStatusCode>(hashCode);
          }

          return LastRunErrorStatusCode::NOT_SET;
        }

        Aws::String GetNameForLastRunErrorStatusCode(LastRunErrorStatusCode enumValue)
        {
          switch(enumValue)
          {
          case LastRunErrorStatusCode::NONE:
            return "NONE";
          case LastRunErrorStatusCode::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LastRunErrorStatusCodeMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws

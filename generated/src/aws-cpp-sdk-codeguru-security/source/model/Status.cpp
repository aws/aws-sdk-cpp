/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/Status.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruSecurity
  {
    namespace Model
    {
      namespace StatusMapper
      {

        static const int Closed_HASH = HashingUtils::HashString("Closed");
        static const int Open_HASH = HashingUtils::HashString("Open");
        static const int All_HASH = HashingUtils::HashString("All");


        Status GetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Closed_HASH)
          {
            return Status::Closed;
          }
          else if (hashCode == Open_HASH)
          {
            return Status::Open;
          }
          else if (hashCode == All_HASH)
          {
            return Status::All;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Status>(hashCode);
          }

          return Status::NOT_SET;
        }

        Aws::String GetNameForStatus(Status enumValue)
        {
          switch(enumValue)
          {
          case Status::NOT_SET:
            return {};
          case Status::Closed:
            return "Closed";
          case Status::Open:
            return "Open";
          case Status::All:
            return "All";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusMapper
    } // namespace Model
  } // namespace CodeGuruSecurity
} // namespace Aws

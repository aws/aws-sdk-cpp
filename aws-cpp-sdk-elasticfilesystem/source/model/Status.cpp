/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/Status.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EFS
  {
    namespace Model
    {
      namespace StatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");


        Status GetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return Status::ENABLED;
          }
          else if (hashCode == ENABLING_HASH)
          {
            return Status::ENABLING;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return Status::DISABLED;
          }
          else if (hashCode == DISABLING_HASH)
          {
            return Status::DISABLING;
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
          case Status::ENABLED:
            return "ENABLED";
          case Status::ENABLING:
            return "ENABLING";
          case Status::DISABLED:
            return "DISABLED";
          case Status::DISABLING:
            return "DISABLING";
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
  } // namespace EFS
} // namespace Aws

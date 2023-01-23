/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/DomainStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectCases
  {
    namespace Model
    {
      namespace DomainStatusMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int CreationInProgress_HASH = HashingUtils::HashString("CreationInProgress");
        static const int CreationFailed_HASH = HashingUtils::HashString("CreationFailed");


        DomainStatus GetDomainStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return DomainStatus::Active;
          }
          else if (hashCode == CreationInProgress_HASH)
          {
            return DomainStatus::CreationInProgress;
          }
          else if (hashCode == CreationFailed_HASH)
          {
            return DomainStatus::CreationFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainStatus>(hashCode);
          }

          return DomainStatus::NOT_SET;
        }

        Aws::String GetNameForDomainStatus(DomainStatus enumValue)
        {
          switch(enumValue)
          {
          case DomainStatus::Active:
            return "Active";
          case DomainStatus::CreationInProgress:
            return "CreationInProgress";
          case DomainStatus::CreationFailed:
            return "CreationFailed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainStatusMapper
    } // namespace Model
  } // namespace ConnectCases
} // namespace Aws

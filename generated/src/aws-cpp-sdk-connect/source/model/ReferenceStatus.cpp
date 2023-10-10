/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ReferenceStatus.h>
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
      namespace ReferenceStatusMapper
      {

        static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");


        ReferenceStatus GetReferenceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPROVED_HASH)
          {
            return ReferenceStatus::APPROVED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return ReferenceStatus::REJECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReferenceStatus>(hashCode);
          }

          return ReferenceStatus::NOT_SET;
        }

        Aws::String GetNameForReferenceStatus(ReferenceStatus enumValue)
        {
          switch(enumValue)
          {
          case ReferenceStatus::NOT_SET:
            return {};
          case ReferenceStatus::APPROVED:
            return "APPROVED";
          case ReferenceStatus::REJECTED:
            return "REJECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReferenceStatusMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws

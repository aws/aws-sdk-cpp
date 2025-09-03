/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ChangeSpecificationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace ChangeSpecificationTypeMapper
      {

        static const int MEMBER_HASH = HashingUtils::HashString("MEMBER");


        ChangeSpecificationType GetChangeSpecificationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MEMBER_HASH)
          {
            return ChangeSpecificationType::MEMBER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeSpecificationType>(hashCode);
          }

          return ChangeSpecificationType::NOT_SET;
        }

        Aws::String GetNameForChangeSpecificationType(ChangeSpecificationType enumValue)
        {
          switch(enumValue)
          {
          case ChangeSpecificationType::NOT_SET:
            return {};
          case ChangeSpecificationType::MEMBER:
            return "MEMBER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChangeSpecificationTypeMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws

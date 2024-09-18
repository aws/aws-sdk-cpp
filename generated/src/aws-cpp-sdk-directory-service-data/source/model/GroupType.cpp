/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/model/GroupType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryServiceData
  {
    namespace Model
    {
      namespace GroupTypeMapper
      {

        static const int Distribution_HASH = HashingUtils::HashString("Distribution");
        static const int Security_HASH = HashingUtils::HashString("Security");


        GroupType GetGroupTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Distribution_HASH)
          {
            return GroupType::Distribution;
          }
          else if (hashCode == Security_HASH)
          {
            return GroupType::Security;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupType>(hashCode);
          }

          return GroupType::NOT_SET;
        }

        Aws::String GetNameForGroupType(GroupType enumValue)
        {
          switch(enumValue)
          {
          case GroupType::NOT_SET:
            return {};
          case GroupType::Distribution:
            return "Distribution";
          case GroupType::Security:
            return "Security";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupTypeMapper
    } // namespace Model
  } // namespace DirectoryServiceData
} // namespace Aws

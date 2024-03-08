/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GroupSearchType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace GroupSearchTypeMapper
      {

        static const int SSO_GROUP_HASH = HashingUtils::HashString("SSO_GROUP");
        static const int DATAZONE_SSO_GROUP_HASH = HashingUtils::HashString("DATAZONE_SSO_GROUP");


        GroupSearchType GetGroupSearchTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SSO_GROUP_HASH)
          {
            return GroupSearchType::SSO_GROUP;
          }
          else if (hashCode == DATAZONE_SSO_GROUP_HASH)
          {
            return GroupSearchType::DATAZONE_SSO_GROUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupSearchType>(hashCode);
          }

          return GroupSearchType::NOT_SET;
        }

        Aws::String GetNameForGroupSearchType(GroupSearchType enumValue)
        {
          switch(enumValue)
          {
          case GroupSearchType::NOT_SET:
            return {};
          case GroupSearchType::SSO_GROUP:
            return "SSO_GROUP";
          case GroupSearchType::DATAZONE_SSO_GROUP:
            return "DATAZONE_SSO_GROUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupSearchTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws

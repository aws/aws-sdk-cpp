/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UserProfileSortKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace UserProfileSortKeyMapper
      {

        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int LastModifiedTime_HASH = HashingUtils::HashString("LastModifiedTime");


        UserProfileSortKey GetUserProfileSortKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreationTime_HASH)
          {
            return UserProfileSortKey::CreationTime;
          }
          else if (hashCode == LastModifiedTime_HASH)
          {
            return UserProfileSortKey::LastModifiedTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserProfileSortKey>(hashCode);
          }

          return UserProfileSortKey::NOT_SET;
        }

        Aws::String GetNameForUserProfileSortKey(UserProfileSortKey enumValue)
        {
          switch(enumValue)
          {
          case UserProfileSortKey::CreationTime:
            return "CreationTime";
          case UserProfileSortKey::LastModifiedTime:
            return "LastModifiedTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserProfileSortKeyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

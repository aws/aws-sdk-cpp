/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/CloudFormationActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppTest
  {
    namespace Model
    {
      namespace CloudFormationActionTypeMapper
      {

        static const int Create_HASH = HashingUtils::HashString("Create");
        static const int Delete_HASH = HashingUtils::HashString("Delete");


        CloudFormationActionType GetCloudFormationActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Create_HASH)
          {
            return CloudFormationActionType::Create;
          }
          else if (hashCode == Delete_HASH)
          {
            return CloudFormationActionType::Delete;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CloudFormationActionType>(hashCode);
          }

          return CloudFormationActionType::NOT_SET;
        }

        Aws::String GetNameForCloudFormationActionType(CloudFormationActionType enumValue)
        {
          switch(enumValue)
          {
          case CloudFormationActionType::NOT_SET:
            return {};
          case CloudFormationActionType::Create:
            return "Create";
          case CloudFormationActionType::Delete:
            return "Delete";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CloudFormationActionTypeMapper
    } // namespace Model
  } // namespace AppTest
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/AttributeChangeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace AttributeChangeTypeMapper
      {

        static const int Add_HASH = HashingUtils::HashString("Add");
        static const int Remove_HASH = HashingUtils::HashString("Remove");
        static const int Modify_HASH = HashingUtils::HashString("Modify");


        AttributeChangeType GetAttributeChangeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Add_HASH)
          {
            return AttributeChangeType::Add;
          }
          else if (hashCode == Remove_HASH)
          {
            return AttributeChangeType::Remove;
          }
          else if (hashCode == Modify_HASH)
          {
            return AttributeChangeType::Modify;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttributeChangeType>(hashCode);
          }

          return AttributeChangeType::NOT_SET;
        }

        Aws::String GetNameForAttributeChangeType(AttributeChangeType enumValue)
        {
          switch(enumValue)
          {
          case AttributeChangeType::NOT_SET:
            return {};
          case AttributeChangeType::Add:
            return "Add";
          case AttributeChangeType::Remove:
            return "Remove";
          case AttributeChangeType::Modify:
            return "Modify";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttributeChangeTypeMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws

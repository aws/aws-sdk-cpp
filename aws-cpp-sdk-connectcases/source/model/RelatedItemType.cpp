/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/RelatedItemType.h>
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
      namespace RelatedItemTypeMapper
      {

        static const int Contact_HASH = HashingUtils::HashString("Contact");
        static const int Comment_HASH = HashingUtils::HashString("Comment");


        RelatedItemType GetRelatedItemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Contact_HASH)
          {
            return RelatedItemType::Contact;
          }
          else if (hashCode == Comment_HASH)
          {
            return RelatedItemType::Comment;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RelatedItemType>(hashCode);
          }

          return RelatedItemType::NOT_SET;
        }

        Aws::String GetNameForRelatedItemType(RelatedItemType enumValue)
        {
          switch(enumValue)
          {
          case RelatedItemType::Contact:
            return "Contact";
          case RelatedItemType::Comment:
            return "Comment";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RelatedItemTypeMapper
    } // namespace Model
  } // namespace ConnectCases
} // namespace Aws

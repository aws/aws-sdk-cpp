/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/Category.h>
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
      namespace CategoryMapper
      {

        static const int REGISTERED_HASH = HashingUtils::HashString("REGISTERED");
        static const int ACTIVATED_HASH = HashingUtils::HashString("ACTIVATED");
        static const int THIRD_PARTY_HASH = HashingUtils::HashString("THIRD_PARTY");
        static const int AWS_TYPES_HASH = HashingUtils::HashString("AWS_TYPES");


        Category GetCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGISTERED_HASH)
          {
            return Category::REGISTERED;
          }
          else if (hashCode == ACTIVATED_HASH)
          {
            return Category::ACTIVATED;
          }
          else if (hashCode == THIRD_PARTY_HASH)
          {
            return Category::THIRD_PARTY;
          }
          else if (hashCode == AWS_TYPES_HASH)
          {
            return Category::AWS_TYPES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Category>(hashCode);
          }

          return Category::NOT_SET;
        }

        Aws::String GetNameForCategory(Category enumValue)
        {
          switch(enumValue)
          {
          case Category::NOT_SET:
            return {};
          case Category::REGISTERED:
            return "REGISTERED";
          case Category::ACTIVATED:
            return "ACTIVATED";
          case Category::THIRD_PARTY:
            return "THIRD_PARTY";
          case Category::AWS_TYPES:
            return "AWS_TYPES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CategoryMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws

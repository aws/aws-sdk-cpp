﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/TagFilterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace TagFilterTypeMapper
      {

        static const int KEY_ONLY_HASH = HashingUtils::HashString("KEY_ONLY");
        static const int VALUE_ONLY_HASH = HashingUtils::HashString("VALUE_ONLY");
        static const int KEY_AND_VALUE_HASH = HashingUtils::HashString("KEY_AND_VALUE");


        TagFilterType GetTagFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KEY_ONLY_HASH)
          {
            return TagFilterType::KEY_ONLY;
          }
          else if (hashCode == VALUE_ONLY_HASH)
          {
            return TagFilterType::VALUE_ONLY;
          }
          else if (hashCode == KEY_AND_VALUE_HASH)
          {
            return TagFilterType::KEY_AND_VALUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TagFilterType>(hashCode);
          }

          return TagFilterType::NOT_SET;
        }

        Aws::String GetNameForTagFilterType(TagFilterType enumValue)
        {
          switch(enumValue)
          {
          case TagFilterType::NOT_SET:
            return {};
          case TagFilterType::KEY_ONLY:
            return "KEY_ONLY";
          case TagFilterType::VALUE_ONLY:
            return "VALUE_ONLY";
          case TagFilterType::KEY_AND_VALUE:
            return "KEY_AND_VALUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TagFilterTypeMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws

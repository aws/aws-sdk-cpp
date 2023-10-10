/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/SetStatOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace SetStatOptionMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int ENABLE_NO_OP_HASH = HashingUtils::HashString("ENABLE_NO_OP");


        SetStatOption GetSetStatOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return SetStatOption::DEFAULT;
          }
          else if (hashCode == ENABLE_NO_OP_HASH)
          {
            return SetStatOption::ENABLE_NO_OP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SetStatOption>(hashCode);
          }

          return SetStatOption::NOT_SET;
        }

        Aws::String GetNameForSetStatOption(SetStatOption enumValue)
        {
          switch(enumValue)
          {
          case SetStatOption::NOT_SET:
            return {};
          case SetStatOption::DEFAULT:
            return "DEFAULT";
          case SetStatOption::ENABLE_NO_OP:
            return "ENABLE_NO_OP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SetStatOptionMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws

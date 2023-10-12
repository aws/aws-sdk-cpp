/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/PutMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace APIGateway
  {
    namespace Model
    {
      namespace PutModeMapper
      {

        static constexpr uint32_t merge_HASH = ConstExprHashingUtils::HashString("merge");
        static constexpr uint32_t overwrite_HASH = ConstExprHashingUtils::HashString("overwrite");


        PutMode GetPutModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == merge_HASH)
          {
            return PutMode::merge;
          }
          else if (hashCode == overwrite_HASH)
          {
            return PutMode::overwrite;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PutMode>(hashCode);
          }

          return PutMode::NOT_SET;
        }

        Aws::String GetNameForPutMode(PutMode enumValue)
        {
          switch(enumValue)
          {
          case PutMode::NOT_SET:
            return {};
          case PutMode::merge:
            return "merge";
          case PutMode::overwrite:
            return "overwrite";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PutModeMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws

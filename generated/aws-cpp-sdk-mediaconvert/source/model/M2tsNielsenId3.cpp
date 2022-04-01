/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/M2tsNielsenId3.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace M2tsNielsenId3Mapper
      {

        static const int INSERT_HASH = HashingUtils::HashString("INSERT");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        M2tsNielsenId3 GetM2tsNielsenId3ForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSERT_HASH)
          {
            return M2tsNielsenId3::INSERT;
          }
          else if (hashCode == NONE_HASH)
          {
            return M2tsNielsenId3::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsNielsenId3>(hashCode);
          }

          return M2tsNielsenId3::NOT_SET;
        }

        Aws::String GetNameForM2tsNielsenId3(M2tsNielsenId3 enumValue)
        {
          switch(enumValue)
          {
          case M2tsNielsenId3::INSERT:
            return "INSERT";
          case M2tsNielsenId3::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsNielsenId3Mapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

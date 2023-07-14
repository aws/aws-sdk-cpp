/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/ChangeTypeEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCommit
  {
    namespace Model
    {
      namespace ChangeTypeEnumMapper
      {

        static const int A_HASH = HashingUtils::HashString("A");
        static const int M_HASH = HashingUtils::HashString("M");
        static const int D_HASH = HashingUtils::HashString("D");


        ChangeTypeEnum GetChangeTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == A_HASH)
          {
            return ChangeTypeEnum::A;
          }
          else if (hashCode == M_HASH)
          {
            return ChangeTypeEnum::M;
          }
          else if (hashCode == D_HASH)
          {
            return ChangeTypeEnum::D;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeTypeEnum>(hashCode);
          }

          return ChangeTypeEnum::NOT_SET;
        }

        Aws::String GetNameForChangeTypeEnum(ChangeTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case ChangeTypeEnum::A:
            return "A";
          case ChangeTypeEnum::M:
            return "M";
          case ChangeTypeEnum::D:
            return "D";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChangeTypeEnumMapper
    } // namespace Model
  } // namespace CodeCommit
} // namespace Aws

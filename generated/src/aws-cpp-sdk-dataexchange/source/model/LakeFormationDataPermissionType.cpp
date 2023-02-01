/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/LakeFormationDataPermissionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataExchange
  {
    namespace Model
    {
      namespace LakeFormationDataPermissionTypeMapper
      {

        static const int LFTagPolicy_HASH = HashingUtils::HashString("LFTagPolicy");


        LakeFormationDataPermissionType GetLakeFormationDataPermissionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LFTagPolicy_HASH)
          {
            return LakeFormationDataPermissionType::LFTagPolicy;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LakeFormationDataPermissionType>(hashCode);
          }

          return LakeFormationDataPermissionType::NOT_SET;
        }

        Aws::String GetNameForLakeFormationDataPermissionType(LakeFormationDataPermissionType enumValue)
        {
          switch(enumValue)
          {
          case LakeFormationDataPermissionType::LFTagPolicy:
            return "LFTagPolicy";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LakeFormationDataPermissionTypeMapper
    } // namespace Model
  } // namespace DataExchange
} // namespace Aws

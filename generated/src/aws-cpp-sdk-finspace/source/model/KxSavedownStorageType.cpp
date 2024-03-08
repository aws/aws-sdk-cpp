/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxSavedownStorageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace finspace
  {
    namespace Model
    {
      namespace KxSavedownStorageTypeMapper
      {

        static const int SDS01_HASH = HashingUtils::HashString("SDS01");


        KxSavedownStorageType GetKxSavedownStorageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SDS01_HASH)
          {
            return KxSavedownStorageType::SDS01;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KxSavedownStorageType>(hashCode);
          }

          return KxSavedownStorageType::NOT_SET;
        }

        Aws::String GetNameForKxSavedownStorageType(KxSavedownStorageType enumValue)
        {
          switch(enumValue)
          {
          case KxSavedownStorageType::NOT_SET:
            return {};
          case KxSavedownStorageType::SDS01:
            return "SDS01";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KxSavedownStorageTypeMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws

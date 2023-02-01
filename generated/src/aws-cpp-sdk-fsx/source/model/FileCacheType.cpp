/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/FileCacheType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace FileCacheTypeMapper
      {

        static const int LUSTRE_HASH = HashingUtils::HashString("LUSTRE");


        FileCacheType GetFileCacheTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LUSTRE_HASH)
          {
            return FileCacheType::LUSTRE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileCacheType>(hashCode);
          }

          return FileCacheType::NOT_SET;
        }

        Aws::String GetNameForFileCacheType(FileCacheType enumValue)
        {
          switch(enumValue)
          {
          case FileCacheType::LUSTRE:
            return "LUSTRE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileCacheTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws

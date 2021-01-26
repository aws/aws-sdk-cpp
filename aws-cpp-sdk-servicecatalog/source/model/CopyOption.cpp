/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/CopyOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace CopyOptionMapper
      {

        static const int CopyTags_HASH = HashingUtils::HashString("CopyTags");


        CopyOption GetCopyOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CopyTags_HASH)
          {
            return CopyOption::CopyTags;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CopyOption>(hashCode);
          }

          return CopyOption::NOT_SET;
        }

        Aws::String GetNameForCopyOption(CopyOption enumValue)
        {
          switch(enumValue)
          {
          case CopyOption::CopyTags:
            return "CopyTags";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CopyOptionMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws

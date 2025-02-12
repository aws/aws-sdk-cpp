/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/CrlType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACMPCA
  {
    namespace Model
    {
      namespace CrlTypeMapper
      {

        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int PARTITIONED_HASH = HashingUtils::HashString("PARTITIONED");


        CrlType GetCrlTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETE_HASH)
          {
            return CrlType::COMPLETE;
          }
          else if (hashCode == PARTITIONED_HASH)
          {
            return CrlType::PARTITIONED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CrlType>(hashCode);
          }

          return CrlType::NOT_SET;
        }

        Aws::String GetNameForCrlType(CrlType enumValue)
        {
          switch(enumValue)
          {
          case CrlType::NOT_SET:
            return {};
          case CrlType::COMPLETE:
            return "COMPLETE";
          case CrlType::PARTITIONED:
            return "PARTITIONED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CrlTypeMapper
    } // namespace Model
  } // namespace ACMPCA
} // namespace Aws

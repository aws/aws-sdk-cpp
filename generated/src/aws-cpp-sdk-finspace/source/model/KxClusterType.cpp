/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxClusterType.h>
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
      namespace KxClusterTypeMapper
      {

        static constexpr uint32_t HDB_HASH = ConstExprHashingUtils::HashString("HDB");
        static constexpr uint32_t RDB_HASH = ConstExprHashingUtils::HashString("RDB");
        static constexpr uint32_t GATEWAY_HASH = ConstExprHashingUtils::HashString("GATEWAY");


        KxClusterType GetKxClusterTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HDB_HASH)
          {
            return KxClusterType::HDB;
          }
          else if (hashCode == RDB_HASH)
          {
            return KxClusterType::RDB;
          }
          else if (hashCode == GATEWAY_HASH)
          {
            return KxClusterType::GATEWAY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KxClusterType>(hashCode);
          }

          return KxClusterType::NOT_SET;
        }

        Aws::String GetNameForKxClusterType(KxClusterType enumValue)
        {
          switch(enumValue)
          {
          case KxClusterType::NOT_SET:
            return {};
          case KxClusterType::HDB:
            return "HDB";
          case KxClusterType::RDB:
            return "RDB";
          case KxClusterType::GATEWAY:
            return "GATEWAY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KxClusterTypeMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws

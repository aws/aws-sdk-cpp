/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/PersistentAppUIType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace PersistentAppUITypeMapper
      {

        static const int SHS_HASH = HashingUtils::HashString("SHS");
        static const int TEZ_HASH = HashingUtils::HashString("TEZ");
        static const int YTS_HASH = HashingUtils::HashString("YTS");


        PersistentAppUIType GetPersistentAppUITypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHS_HASH)
          {
            return PersistentAppUIType::SHS;
          }
          else if (hashCode == TEZ_HASH)
          {
            return PersistentAppUIType::TEZ;
          }
          else if (hashCode == YTS_HASH)
          {
            return PersistentAppUIType::YTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PersistentAppUIType>(hashCode);
          }

          return PersistentAppUIType::NOT_SET;
        }

        Aws::String GetNameForPersistentAppUIType(PersistentAppUIType enumValue)
        {
          switch(enumValue)
          {
          case PersistentAppUIType::NOT_SET:
            return {};
          case PersistentAppUIType::SHS:
            return "SHS";
          case PersistentAppUIType::TEZ:
            return "TEZ";
          case PersistentAppUIType::YTS:
            return "YTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PersistentAppUITypeMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws

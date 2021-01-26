/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/ConsistencyLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudDirectory
  {
    namespace Model
    {
      namespace ConsistencyLevelMapper
      {

        static const int SERIALIZABLE_HASH = HashingUtils::HashString("SERIALIZABLE");
        static const int EVENTUAL_HASH = HashingUtils::HashString("EVENTUAL");


        ConsistencyLevel GetConsistencyLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERIALIZABLE_HASH)
          {
            return ConsistencyLevel::SERIALIZABLE;
          }
          else if (hashCode == EVENTUAL_HASH)
          {
            return ConsistencyLevel::EVENTUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConsistencyLevel>(hashCode);
          }

          return ConsistencyLevel::NOT_SET;
        }

        Aws::String GetNameForConsistencyLevel(ConsistencyLevel enumValue)
        {
          switch(enumValue)
          {
          case ConsistencyLevel::SERIALIZABLE:
            return "SERIALIZABLE";
          case ConsistencyLevel::EVENTUAL:
            return "EVENTUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConsistencyLevelMapper
    } // namespace Model
  } // namespace CloudDirectory
} // namespace Aws

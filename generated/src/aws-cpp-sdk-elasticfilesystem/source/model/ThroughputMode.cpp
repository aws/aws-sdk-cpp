/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/ThroughputMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EFS
  {
    namespace Model
    {
      namespace ThroughputModeMapper
      {

        static const int bursting_HASH = HashingUtils::HashString("bursting");
        static const int provisioned_HASH = HashingUtils::HashString("provisioned");
        static const int elastic_HASH = HashingUtils::HashString("elastic");


        ThroughputMode GetThroughputModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == bursting_HASH)
          {
            return ThroughputMode::bursting;
          }
          else if (hashCode == provisioned_HASH)
          {
            return ThroughputMode::provisioned;
          }
          else if (hashCode == elastic_HASH)
          {
            return ThroughputMode::elastic;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThroughputMode>(hashCode);
          }

          return ThroughputMode::NOT_SET;
        }

        Aws::String GetNameForThroughputMode(ThroughputMode enumValue)
        {
          switch(enumValue)
          {
          case ThroughputMode::bursting:
            return "bursting";
          case ThroughputMode::provisioned:
            return "provisioned";
          case ThroughputMode::elastic:
            return "elastic";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThroughputModeMapper
    } // namespace Model
  } // namespace EFS
} // namespace Aws

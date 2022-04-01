/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/StreamHealth.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IVS
  {
    namespace Model
    {
      namespace StreamHealthMapper
      {

        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");
        static const int STARVING_HASH = HashingUtils::HashString("STARVING");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        StreamHealth GetStreamHealthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEALTHY_HASH)
          {
            return StreamHealth::HEALTHY;
          }
          else if (hashCode == STARVING_HASH)
          {
            return StreamHealth::STARVING;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return StreamHealth::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamHealth>(hashCode);
          }

          return StreamHealth::NOT_SET;
        }

        Aws::String GetNameForStreamHealth(StreamHealth enumValue)
        {
          switch(enumValue)
          {
          case StreamHealth::HEALTHY:
            return "HEALTHY";
          case StreamHealth::STARVING:
            return "STARVING";
          case StreamHealth::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamHealthMapper
    } // namespace Model
  } // namespace IVS
} // namespace Aws

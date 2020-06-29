/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/Destination.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace DestinationMapper
      {

        static const int CLOUDWATCH_LOGS_HASH = HashingUtils::HashString("CLOUDWATCH_LOGS");
        static const int S3_HASH = HashingUtils::HashString("S3");


        Destination GetDestinationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLOUDWATCH_LOGS_HASH)
          {
            return Destination::CLOUDWATCH_LOGS;
          }
          else if (hashCode == S3_HASH)
          {
            return Destination::S3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Destination>(hashCode);
          }

          return Destination::NOT_SET;
        }

        Aws::String GetNameForDestination(Destination enumValue)
        {
          switch(enumValue)
          {
          case Destination::CLOUDWATCH_LOGS:
            return "CLOUDWATCH_LOGS";
          case Destination::S3:
            return "S3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DestinationMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws

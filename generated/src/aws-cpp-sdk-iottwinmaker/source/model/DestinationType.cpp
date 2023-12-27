/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/DestinationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTTwinMaker
  {
    namespace Model
    {
      namespace DestinationTypeMapper
      {

        static const int s3_HASH = HashingUtils::HashString("s3");
        static const int iotsitewise_HASH = HashingUtils::HashString("iotsitewise");
        static const int iottwinmaker_HASH = HashingUtils::HashString("iottwinmaker");


        DestinationType GetDestinationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == s3_HASH)
          {
            return DestinationType::s3;
          }
          else if (hashCode == iotsitewise_HASH)
          {
            return DestinationType::iotsitewise;
          }
          else if (hashCode == iottwinmaker_HASH)
          {
            return DestinationType::iottwinmaker;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DestinationType>(hashCode);
          }

          return DestinationType::NOT_SET;
        }

        Aws::String GetNameForDestinationType(DestinationType enumValue)
        {
          switch(enumValue)
          {
          case DestinationType::NOT_SET:
            return {};
          case DestinationType::s3:
            return "s3";
          case DestinationType::iotsitewise:
            return "iotsitewise";
          case DestinationType::iottwinmaker:
            return "iottwinmaker";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DestinationTypeMapper
    } // namespace Model
  } // namespace IoTTwinMaker
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/Compression.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTFleetWise
  {
    namespace Model
    {
      namespace CompressionMapper
      {

        static const int OFF_HASH = HashingUtils::HashString("OFF");
        static const int SNAPPY_HASH = HashingUtils::HashString("SNAPPY");


        Compression GetCompressionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return Compression::OFF;
          }
          else if (hashCode == SNAPPY_HASH)
          {
            return Compression::SNAPPY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Compression>(hashCode);
          }

          return Compression::NOT_SET;
        }

        Aws::String GetNameForCompression(Compression enumValue)
        {
          switch(enumValue)
          {
          case Compression::OFF:
            return "OFF";
          case Compression::SNAPPY:
            return "SNAPPY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CompressionMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws

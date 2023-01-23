/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/OrcFormatVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace OrcFormatVersionMapper
      {

        static const int V0_11_HASH = HashingUtils::HashString("V0_11");
        static const int V0_12_HASH = HashingUtils::HashString("V0_12");


        OrcFormatVersion GetOrcFormatVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == V0_11_HASH)
          {
            return OrcFormatVersion::V0_11;
          }
          else if (hashCode == V0_12_HASH)
          {
            return OrcFormatVersion::V0_12;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrcFormatVersion>(hashCode);
          }

          return OrcFormatVersion::NOT_SET;
        }

        Aws::String GetNameForOrcFormatVersion(OrcFormatVersion enumValue)
        {
          switch(enumValue)
          {
          case OrcFormatVersion::V0_11:
            return "V0_11";
          case OrcFormatVersion::V0_12:
            return "V0_12";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrcFormatVersionMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws

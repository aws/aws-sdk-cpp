/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DomainVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace DomainVersionMapper
      {

        static const int V1_HASH = HashingUtils::HashString("V1");
        static const int V2_HASH = HashingUtils::HashString("V2");


        DomainVersion GetDomainVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == V1_HASH)
          {
            return DomainVersion::V1;
          }
          else if (hashCode == V2_HASH)
          {
            return DomainVersion::V2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainVersion>(hashCode);
          }

          return DomainVersion::NOT_SET;
        }

        Aws::String GetNameForDomainVersion(DomainVersion enumValue)
        {
          switch(enumValue)
          {
          case DomainVersion::NOT_SET:
            return {};
          case DomainVersion::V1:
            return "V1";
          case DomainVersion::V2:
            return "V2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainVersionMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/MappingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace B2BI
  {
    namespace Model
    {
      namespace MappingTypeMapper
      {

        static const int JSONATA_HASH = HashingUtils::HashString("JSONATA");
        static const int XSLT_HASH = HashingUtils::HashString("XSLT");


        MappingType GetMappingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSONATA_HASH)
          {
            return MappingType::JSONATA;
          }
          else if (hashCode == XSLT_HASH)
          {
            return MappingType::XSLT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MappingType>(hashCode);
          }

          return MappingType::NOT_SET;
        }

        Aws::String GetNameForMappingType(MappingType enumValue)
        {
          switch(enumValue)
          {
          case MappingType::NOT_SET:
            return {};
          case MappingType::JSONATA:
            return "JSONATA";
          case MappingType::XSLT:
            return "XSLT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MappingTypeMapper
    } // namespace Model
  } // namespace B2BI
} // namespace Aws

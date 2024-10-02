/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/ConversionSourceFormat.h>
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
      namespace ConversionSourceFormatMapper
      {

        static const int JSON_HASH = HashingUtils::HashString("JSON");
        static const int XML_HASH = HashingUtils::HashString("XML");


        ConversionSourceFormat GetConversionSourceFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSON_HASH)
          {
            return ConversionSourceFormat::JSON;
          }
          else if (hashCode == XML_HASH)
          {
            return ConversionSourceFormat::XML;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConversionSourceFormat>(hashCode);
          }

          return ConversionSourceFormat::NOT_SET;
        }

        Aws::String GetNameForConversionSourceFormat(ConversionSourceFormat enumValue)
        {
          switch(enumValue)
          {
          case ConversionSourceFormat::NOT_SET:
            return {};
          case ConversionSourceFormat::JSON:
            return "JSON";
          case ConversionSourceFormat::XML:
            return "XML";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConversionSourceFormatMapper
    } // namespace Model
  } // namespace B2BI
} // namespace Aws

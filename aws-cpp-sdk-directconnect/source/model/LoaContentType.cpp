/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/LoaContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectConnect
  {
    namespace Model
    {
      namespace LoaContentTypeMapper
      {

        static const int application_pdf_HASH = HashingUtils::HashString("application/pdf");


        LoaContentType GetLoaContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == application_pdf_HASH)
          {
            return LoaContentType::application_pdf;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoaContentType>(hashCode);
          }

          return LoaContentType::NOT_SET;
        }

        Aws::String GetNameForLoaContentType(LoaContentType enumValue)
        {
          switch(enumValue)
          {
          case LoaContentType::application_pdf:
            return "application/pdf";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoaContentTypeMapper
    } // namespace Model
  } // namespace DirectConnect
} // namespace Aws

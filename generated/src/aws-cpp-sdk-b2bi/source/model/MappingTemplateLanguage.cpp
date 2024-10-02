/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/MappingTemplateLanguage.h>
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
      namespace MappingTemplateLanguageMapper
      {

        static const int XSLT_HASH = HashingUtils::HashString("XSLT");
        static const int JSONATA_HASH = HashingUtils::HashString("JSONATA");


        MappingTemplateLanguage GetMappingTemplateLanguageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == XSLT_HASH)
          {
            return MappingTemplateLanguage::XSLT;
          }
          else if (hashCode == JSONATA_HASH)
          {
            return MappingTemplateLanguage::JSONATA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MappingTemplateLanguage>(hashCode);
          }

          return MappingTemplateLanguage::NOT_SET;
        }

        Aws::String GetNameForMappingTemplateLanguage(MappingTemplateLanguage enumValue)
        {
          switch(enumValue)
          {
          case MappingTemplateLanguage::NOT_SET:
            return {};
          case MappingTemplateLanguage::XSLT:
            return "XSLT";
          case MappingTemplateLanguage::JSONATA:
            return "JSONATA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MappingTemplateLanguageMapper
    } // namespace Model
  } // namespace B2BI
} // namespace Aws

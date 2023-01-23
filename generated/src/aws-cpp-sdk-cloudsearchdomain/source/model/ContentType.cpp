/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearchdomain/model/ContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudSearchDomain
  {
    namespace Model
    {
      namespace ContentTypeMapper
      {

        static const int application_json_HASH = HashingUtils::HashString("application/json");
        static const int application_xml_HASH = HashingUtils::HashString("application/xml");


        ContentType GetContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == application_json_HASH)
          {
            return ContentType::application_json;
          }
          else if (hashCode == application_xml_HASH)
          {
            return ContentType::application_xml;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentType>(hashCode);
          }

          return ContentType::NOT_SET;
        }

        Aws::String GetNameForContentType(ContentType enumValue)
        {
          switch(enumValue)
          {
          case ContentType::application_json:
            return "application/json";
          case ContentType::application_xml:
            return "application/xml";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContentTypeMapper
    } // namespace Model
  } // namespace CloudSearchDomain
} // namespace Aws

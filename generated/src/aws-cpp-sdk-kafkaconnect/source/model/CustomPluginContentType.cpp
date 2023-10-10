/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/CustomPluginContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KafkaConnect
  {
    namespace Model
    {
      namespace CustomPluginContentTypeMapper
      {

        static const int JAR_HASH = HashingUtils::HashString("JAR");
        static const int ZIP_HASH = HashingUtils::HashString("ZIP");


        CustomPluginContentType GetCustomPluginContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JAR_HASH)
          {
            return CustomPluginContentType::JAR;
          }
          else if (hashCode == ZIP_HASH)
          {
            return CustomPluginContentType::ZIP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomPluginContentType>(hashCode);
          }

          return CustomPluginContentType::NOT_SET;
        }

        Aws::String GetNameForCustomPluginContentType(CustomPluginContentType enumValue)
        {
          switch(enumValue)
          {
          case CustomPluginContentType::NOT_SET:
            return {};
          case CustomPluginContentType::JAR:
            return "JAR";
          case CustomPluginContentType::ZIP:
            return "ZIP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomPluginContentTypeMapper
    } // namespace Model
  } // namespace KafkaConnect
} // namespace Aws

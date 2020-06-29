/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/OutputFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SMS
  {
    namespace Model
    {
      namespace OutputFormatMapper
      {

        static const int JSON_HASH = HashingUtils::HashString("JSON");
        static const int YAML_HASH = HashingUtils::HashString("YAML");


        OutputFormat GetOutputFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSON_HASH)
          {
            return OutputFormat::JSON;
          }
          else if (hashCode == YAML_HASH)
          {
            return OutputFormat::YAML;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OutputFormat>(hashCode);
          }

          return OutputFormat::NOT_SET;
        }

        Aws::String GetNameForOutputFormat(OutputFormat enumValue)
        {
          switch(enumValue)
          {
          case OutputFormat::JSON:
            return "JSON";
          case OutputFormat::YAML:
            return "YAML";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OutputFormatMapper
    } // namespace Model
  } // namespace SMS
} // namespace Aws

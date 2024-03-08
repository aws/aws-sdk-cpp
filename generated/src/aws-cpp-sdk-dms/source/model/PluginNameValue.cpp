/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/PluginNameValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace PluginNameValueMapper
      {

        static const int no_preference_HASH = HashingUtils::HashString("no-preference");
        static const int test_decoding_HASH = HashingUtils::HashString("test-decoding");
        static const int pglogical_HASH = HashingUtils::HashString("pglogical");


        PluginNameValue GetPluginNameValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == no_preference_HASH)
          {
            return PluginNameValue::no_preference;
          }
          else if (hashCode == test_decoding_HASH)
          {
            return PluginNameValue::test_decoding;
          }
          else if (hashCode == pglogical_HASH)
          {
            return PluginNameValue::pglogical;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PluginNameValue>(hashCode);
          }

          return PluginNameValue::NOT_SET;
        }

        Aws::String GetNameForPluginNameValue(PluginNameValue enumValue)
        {
          switch(enumValue)
          {
          case PluginNameValue::NOT_SET:
            return {};
          case PluginNameValue::no_preference:
            return "no-preference";
          case PluginNameValue::test_decoding:
            return "test-decoding";
          case PluginNameValue::pglogical:
            return "pglogical";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PluginNameValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws

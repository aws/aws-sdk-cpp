/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/RuntimeName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace RuntimeNameMapper
      {

        static const int APPSYNC_JS_HASH = HashingUtils::HashString("APPSYNC_JS");


        RuntimeName GetRuntimeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPSYNC_JS_HASH)
          {
            return RuntimeName::APPSYNC_JS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuntimeName>(hashCode);
          }

          return RuntimeName::NOT_SET;
        }

        Aws::String GetNameForRuntimeName(RuntimeName enumValue)
        {
          switch(enumValue)
          {
          case RuntimeName::APPSYNC_JS:
            return "APPSYNC_JS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuntimeNameMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws

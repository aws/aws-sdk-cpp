/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/JSTarget.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AmplifyUIBuilder
  {
    namespace Model
    {
      namespace JSTargetMapper
      {

        static const int es2015_HASH = HashingUtils::HashString("es2015");
        static const int es2020_HASH = HashingUtils::HashString("es2020");


        JSTarget GetJSTargetForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == es2015_HASH)
          {
            return JSTarget::es2015;
          }
          else if (hashCode == es2020_HASH)
          {
            return JSTarget::es2020;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JSTarget>(hashCode);
          }

          return JSTarget::NOT_SET;
        }

        Aws::String GetNameForJSTarget(JSTarget enumValue)
        {
          switch(enumValue)
          {
          case JSTarget::NOT_SET:
            return {};
          case JSTarget::es2015:
            return "es2015";
          case JSTarget::es2020:
            return "es2020";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JSTargetMapper
    } // namespace Model
  } // namespace AmplifyUIBuilder
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AppBlockBuilderStateChangeReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace AppBlockBuilderStateChangeReasonCodeMapper
      {

        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");


        AppBlockBuilderStateChangeReasonCode GetAppBlockBuilderStateChangeReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_ERROR_HASH)
          {
            return AppBlockBuilderStateChangeReasonCode::INTERNAL_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppBlockBuilderStateChangeReasonCode>(hashCode);
          }

          return AppBlockBuilderStateChangeReasonCode::NOT_SET;
        }

        Aws::String GetNameForAppBlockBuilderStateChangeReasonCode(AppBlockBuilderStateChangeReasonCode enumValue)
        {
          switch(enumValue)
          {
          case AppBlockBuilderStateChangeReasonCode::NOT_SET:
            return {};
          case AppBlockBuilderStateChangeReasonCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppBlockBuilderStateChangeReasonCodeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws

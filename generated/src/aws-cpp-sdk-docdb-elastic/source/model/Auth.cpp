/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/model/Auth.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DocDBElastic
  {
    namespace Model
    {
      namespace AuthMapper
      {

        static const int PLAIN_TEXT_HASH = HashingUtils::HashString("PLAIN_TEXT");
        static const int SECRET_ARN_HASH = HashingUtils::HashString("SECRET_ARN");


        Auth GetAuthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PLAIN_TEXT_HASH)
          {
            return Auth::PLAIN_TEXT;
          }
          else if (hashCode == SECRET_ARN_HASH)
          {
            return Auth::SECRET_ARN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Auth>(hashCode);
          }

          return Auth::NOT_SET;
        }

        Aws::String GetNameForAuth(Auth enumValue)
        {
          switch(enumValue)
          {
          case Auth::PLAIN_TEXT:
            return "PLAIN_TEXT";
          case Auth::SECRET_ARN:
            return "SECRET_ARN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthMapper
    } // namespace Model
  } // namespace DocDBElastic
} // namespace Aws

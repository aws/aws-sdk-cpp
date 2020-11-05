/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/SourceAccessType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lambda
  {
    namespace Model
    {
      namespace SourceAccessTypeMapper
      {

        static const int BASIC_AUTH_HASH = HashingUtils::HashString("BASIC_AUTH");


        SourceAccessType GetSourceAccessTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASIC_AUTH_HASH)
          {
            return SourceAccessType::BASIC_AUTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceAccessType>(hashCode);
          }

          return SourceAccessType::NOT_SET;
        }

        Aws::String GetNameForSourceAccessType(SourceAccessType enumValue)
        {
          switch(enumValue)
          {
          case SourceAccessType::BASIC_AUTH:
            return "BASIC_AUTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceAccessTypeMapper
    } // namespace Model
  } // namespace Lambda
} // namespace Aws

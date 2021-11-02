/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ReferenceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace ReferenceTypeMapper
      {

        static const int URL_HASH = HashingUtils::HashString("URL");


        ReferenceType GetReferenceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == URL_HASH)
          {
            return ReferenceType::URL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReferenceType>(hashCode);
          }

          return ReferenceType::NOT_SET;
        }

        Aws::String GetNameForReferenceType(ReferenceType enumValue)
        {
          switch(enumValue)
          {
          case ReferenceType::URL:
            return "URL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReferenceTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws

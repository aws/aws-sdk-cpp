/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/Attribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace AttributeMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        Attribute GetAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return Attribute::DEFAULT;
          }
          else if (hashCode == ALL_HASH)
          {
            return Attribute::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Attribute>(hashCode);
          }

          return Attribute::NOT_SET;
        }

        Aws::String GetNameForAttribute(Attribute enumValue)
        {
          switch(enumValue)
          {
          case Attribute::DEFAULT:
            return "DEFAULT";
          case Attribute::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttributeMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws

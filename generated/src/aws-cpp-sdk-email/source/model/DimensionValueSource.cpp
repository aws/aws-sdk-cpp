/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/DimensionValueSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SES
  {
    namespace Model
    {
      namespace DimensionValueSourceMapper
      {

        static constexpr uint32_t messageTag_HASH = ConstExprHashingUtils::HashString("messageTag");
        static constexpr uint32_t emailHeader_HASH = ConstExprHashingUtils::HashString("emailHeader");
        static constexpr uint32_t linkTag_HASH = ConstExprHashingUtils::HashString("linkTag");


        DimensionValueSource GetDimensionValueSourceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == messageTag_HASH)
          {
            return DimensionValueSource::messageTag;
          }
          else if (hashCode == emailHeader_HASH)
          {
            return DimensionValueSource::emailHeader;
          }
          else if (hashCode == linkTag_HASH)
          {
            return DimensionValueSource::linkTag;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DimensionValueSource>(hashCode);
          }

          return DimensionValueSource::NOT_SET;
        }

        Aws::String GetNameForDimensionValueSource(DimensionValueSource enumValue)
        {
          switch(enumValue)
          {
          case DimensionValueSource::NOT_SET:
            return {};
          case DimensionValueSource::messageTag:
            return "messageTag";
          case DimensionValueSource::emailHeader:
            return "emailHeader";
          case DimensionValueSource::linkTag:
            return "linkTag";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DimensionValueSourceMapper
    } // namespace Model
  } // namespace SES
} // namespace Aws

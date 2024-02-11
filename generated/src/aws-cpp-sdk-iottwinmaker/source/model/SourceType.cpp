/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/SourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTTwinMaker
  {
    namespace Model
    {
      namespace SourceTypeMapper
      {

        static const int s3_HASH = HashingUtils::HashString("s3");
        static const int iotsitewise_HASH = HashingUtils::HashString("iotsitewise");
        static const int iottwinmaker_HASH = HashingUtils::HashString("iottwinmaker");


        SourceType GetSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == s3_HASH)
          {
            return SourceType::s3;
          }
          else if (hashCode == iotsitewise_HASH)
          {
            return SourceType::iotsitewise;
          }
          else if (hashCode == iottwinmaker_HASH)
          {
            return SourceType::iottwinmaker;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceType>(hashCode);
          }

          return SourceType::NOT_SET;
        }

        Aws::String GetNameForSourceType(SourceType enumValue)
        {
          switch(enumValue)
          {
          case SourceType::NOT_SET:
            return {};
          case SourceType::s3:
            return "s3";
          case SourceType::iotsitewise:
            return "iotsitewise";
          case SourceType::iottwinmaker:
            return "iottwinmaker";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceTypeMapper
    } // namespace Model
  } // namespace IoTTwinMaker
} // namespace Aws

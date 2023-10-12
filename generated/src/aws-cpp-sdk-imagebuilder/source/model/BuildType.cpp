/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/BuildType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace BuildTypeMapper
      {

        static constexpr uint32_t USER_INITIATED_HASH = ConstExprHashingUtils::HashString("USER_INITIATED");
        static constexpr uint32_t SCHEDULED_HASH = ConstExprHashingUtils::HashString("SCHEDULED");
        static constexpr uint32_t IMPORT_HASH = ConstExprHashingUtils::HashString("IMPORT");


        BuildType GetBuildTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_INITIATED_HASH)
          {
            return BuildType::USER_INITIATED;
          }
          else if (hashCode == SCHEDULED_HASH)
          {
            return BuildType::SCHEDULED;
          }
          else if (hashCode == IMPORT_HASH)
          {
            return BuildType::IMPORT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BuildType>(hashCode);
          }

          return BuildType::NOT_SET;
        }

        Aws::String GetNameForBuildType(BuildType enumValue)
        {
          switch(enumValue)
          {
          case BuildType::NOT_SET:
            return {};
          case BuildType::USER_INITIATED:
            return "USER_INITIATED";
          case BuildType::SCHEDULED:
            return "SCHEDULED";
          case BuildType::IMPORT:
            return "IMPORT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BuildTypeMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws

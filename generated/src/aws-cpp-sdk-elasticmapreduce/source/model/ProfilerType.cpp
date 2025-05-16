/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ProfilerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace ProfilerTypeMapper
      {

        static const int SHS_HASH = HashingUtils::HashString("SHS");
        static const int TEZUI_HASH = HashingUtils::HashString("TEZUI");
        static const int YTS_HASH = HashingUtils::HashString("YTS");


        ProfilerType GetProfilerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHS_HASH)
          {
            return ProfilerType::SHS;
          }
          else if (hashCode == TEZUI_HASH)
          {
            return ProfilerType::TEZUI;
          }
          else if (hashCode == YTS_HASH)
          {
            return ProfilerType::YTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProfilerType>(hashCode);
          }

          return ProfilerType::NOT_SET;
        }

        Aws::String GetNameForProfilerType(ProfilerType enumValue)
        {
          switch(enumValue)
          {
          case ProfilerType::NOT_SET:
            return {};
          case ProfilerType::SHS:
            return "SHS";
          case ProfilerType::TEZUI:
            return "TEZUI";
          case ProfilerType::YTS:
            return "YTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProfilerTypeMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws

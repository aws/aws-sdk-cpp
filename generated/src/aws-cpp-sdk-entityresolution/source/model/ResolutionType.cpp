﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/ResolutionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EntityResolution
  {
    namespace Model
    {
      namespace ResolutionTypeMapper
      {

        static const int RULE_MATCHING_HASH = HashingUtils::HashString("RULE_MATCHING");
        static const int ML_MATCHING_HASH = HashingUtils::HashString("ML_MATCHING");


        ResolutionType GetResolutionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RULE_MATCHING_HASH)
          {
            return ResolutionType::RULE_MATCHING;
          }
          else if (hashCode == ML_MATCHING_HASH)
          {
            return ResolutionType::ML_MATCHING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolutionType>(hashCode);
          }

          return ResolutionType::NOT_SET;
        }

        Aws::String GetNameForResolutionType(ResolutionType enumValue)
        {
          switch(enumValue)
          {
          case ResolutionType::RULE_MATCHING:
            return "RULE_MATCHING";
          case ResolutionType::ML_MATCHING:
            return "ML_MATCHING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResolutionTypeMapper
    } // namespace Model
  } // namespace EntityResolution
} // namespace Aws

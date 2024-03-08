/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/FunctionStage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFront
  {
    namespace Model
    {
      namespace FunctionStageMapper
      {

        static const int DEVELOPMENT_HASH = HashingUtils::HashString("DEVELOPMENT");
        static const int LIVE_HASH = HashingUtils::HashString("LIVE");


        FunctionStage GetFunctionStageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEVELOPMENT_HASH)
          {
            return FunctionStage::DEVELOPMENT;
          }
          else if (hashCode == LIVE_HASH)
          {
            return FunctionStage::LIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FunctionStage>(hashCode);
          }

          return FunctionStage::NOT_SET;
        }

        Aws::String GetNameForFunctionStage(FunctionStage enumValue)
        {
          switch(enumValue)
          {
          case FunctionStage::NOT_SET:
            return {};
          case FunctionStage::DEVELOPMENT:
            return "DEVELOPMENT";
          case FunctionStage::LIVE:
            return "LIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FunctionStageMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws

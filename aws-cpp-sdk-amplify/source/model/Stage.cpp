/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/amplify/model/Stage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Amplify
  {
    namespace Model
    {
      namespace StageMapper
      {

        static const int PRODUCTION_HASH = HashingUtils::HashString("PRODUCTION");
        static const int BETA_HASH = HashingUtils::HashString("BETA");
        static const int DEVELOPMENT_HASH = HashingUtils::HashString("DEVELOPMENT");
        static const int EXPERIMENTAL_HASH = HashingUtils::HashString("EXPERIMENTAL");


        Stage GetStageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRODUCTION_HASH)
          {
            return Stage::PRODUCTION;
          }
          else if (hashCode == BETA_HASH)
          {
            return Stage::BETA;
          }
          else if (hashCode == DEVELOPMENT_HASH)
          {
            return Stage::DEVELOPMENT;
          }
          else if (hashCode == EXPERIMENTAL_HASH)
          {
            return Stage::EXPERIMENTAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Stage>(hashCode);
          }

          return Stage::NOT_SET;
        }

        Aws::String GetNameForStage(Stage enumValue)
        {
          switch(enumValue)
          {
          case Stage::PRODUCTION:
            return "PRODUCTION";
          case Stage::BETA:
            return "BETA";
          case Stage::DEVELOPMENT:
            return "DEVELOPMENT";
          case Stage::EXPERIMENTAL:
            return "EXPERIMENTAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StageMapper
    } // namespace Model
  } // namespace Amplify
} // namespace Aws

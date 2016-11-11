/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudformation/model/TemplateStage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace TemplateStageMapper
      {

        static const int Original_HASH = HashingUtils::HashString("Original");
        static const int Processed_HASH = HashingUtils::HashString("Processed");


        TemplateStage GetTemplateStageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Original_HASH)
          {
            return TemplateStage::Original;
          }
          else if (hashCode == Processed_HASH)
          {
            return TemplateStage::Processed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TemplateStage>(hashCode);
          }

          return TemplateStage::NOT_SET;
        }

        Aws::String GetNameForTemplateStage(TemplateStage enumValue)
        {
          switch(enumValue)
          {
          case TemplateStage::Original:
            return "Original";
          case TemplateStage::Processed:
            return "Processed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace TemplateStageMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws

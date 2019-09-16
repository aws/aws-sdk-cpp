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

#include <aws/mediaconvert/model/EmbeddedTerminateCaptions.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace EmbeddedTerminateCaptionsMapper
      {

        static const int END_OF_INPUT_HASH = HashingUtils::HashString("END_OF_INPUT");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        EmbeddedTerminateCaptions GetEmbeddedTerminateCaptionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == END_OF_INPUT_HASH)
          {
            return EmbeddedTerminateCaptions::END_OF_INPUT;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return EmbeddedTerminateCaptions::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EmbeddedTerminateCaptions>(hashCode);
          }

          return EmbeddedTerminateCaptions::NOT_SET;
        }

        Aws::String GetNameForEmbeddedTerminateCaptions(EmbeddedTerminateCaptions enumValue)
        {
          switch(enumValue)
          {
          case EmbeddedTerminateCaptions::END_OF_INPUT:
            return "END_OF_INPUT";
          case EmbeddedTerminateCaptions::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EmbeddedTerminateCaptionsMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

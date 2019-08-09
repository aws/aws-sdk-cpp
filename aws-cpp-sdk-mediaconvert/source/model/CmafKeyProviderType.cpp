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

#include <aws/mediaconvert/model/CmafKeyProviderType.h>
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
      namespace CmafKeyProviderTypeMapper
      {

        static const int SPEKE_HASH = HashingUtils::HashString("SPEKE");
        static const int STATIC_KEY_HASH = HashingUtils::HashString("STATIC_KEY");


        CmafKeyProviderType GetCmafKeyProviderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SPEKE_HASH)
          {
            return CmafKeyProviderType::SPEKE;
          }
          else if (hashCode == STATIC_KEY_HASH)
          {
            return CmafKeyProviderType::STATIC_KEY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafKeyProviderType>(hashCode);
          }

          return CmafKeyProviderType::NOT_SET;
        }

        Aws::String GetNameForCmafKeyProviderType(CmafKeyProviderType enumValue)
        {
          switch(enumValue)
          {
          case CmafKeyProviderType::SPEKE:
            return "SPEKE";
          case CmafKeyProviderType::STATIC_KEY:
            return "STATIC_KEY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmafKeyProviderTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

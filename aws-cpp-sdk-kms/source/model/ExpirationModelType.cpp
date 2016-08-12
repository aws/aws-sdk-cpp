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
#include <aws/kms/model/ExpirationModelType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KMS
  {
    namespace Model
    {
      namespace ExpirationModelTypeMapper
      {

        static const int KEY_MATERIAL_EXPIRES_HASH = HashingUtils::HashString("KEY_MATERIAL_EXPIRES");
        static const int KEY_MATERIAL_DOES_NOT_EXPIRE_HASH = HashingUtils::HashString("KEY_MATERIAL_DOES_NOT_EXPIRE");


        ExpirationModelType GetExpirationModelTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KEY_MATERIAL_EXPIRES_HASH)
          {
            return ExpirationModelType::KEY_MATERIAL_EXPIRES;
          }
          else if (hashCode == KEY_MATERIAL_DOES_NOT_EXPIRE_HASH)
          {
            return ExpirationModelType::KEY_MATERIAL_DOES_NOT_EXPIRE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExpirationModelType>(hashCode);
          }

          return ExpirationModelType::NOT_SET;
        }

        Aws::String GetNameForExpirationModelType(ExpirationModelType enumValue)
        {
          switch(enumValue)
          {
          case ExpirationModelType::KEY_MATERIAL_EXPIRES:
            return "KEY_MATERIAL_EXPIRES";
          case ExpirationModelType::KEY_MATERIAL_DOES_NOT_EXPIRE:
            return "KEY_MATERIAL_DOES_NOT_EXPIRE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ExpirationModelTypeMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws

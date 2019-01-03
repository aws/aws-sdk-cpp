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

#include <aws/ec2/model/LaunchTemplateErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace LaunchTemplateErrorCodeMapper
      {

        static const int launchTemplateIdDoesNotExist_HASH = HashingUtils::HashString("launchTemplateIdDoesNotExist");
        static const int launchTemplateIdMalformed_HASH = HashingUtils::HashString("launchTemplateIdMalformed");
        static const int launchTemplateNameDoesNotExist_HASH = HashingUtils::HashString("launchTemplateNameDoesNotExist");
        static const int launchTemplateNameMalformed_HASH = HashingUtils::HashString("launchTemplateNameMalformed");
        static const int launchTemplateVersionDoesNotExist_HASH = HashingUtils::HashString("launchTemplateVersionDoesNotExist");
        static const int unexpectedError_HASH = HashingUtils::HashString("unexpectedError");


        LaunchTemplateErrorCode GetLaunchTemplateErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == launchTemplateIdDoesNotExist_HASH)
          {
            return LaunchTemplateErrorCode::launchTemplateIdDoesNotExist;
          }
          else if (hashCode == launchTemplateIdMalformed_HASH)
          {
            return LaunchTemplateErrorCode::launchTemplateIdMalformed;
          }
          else if (hashCode == launchTemplateNameDoesNotExist_HASH)
          {
            return LaunchTemplateErrorCode::launchTemplateNameDoesNotExist;
          }
          else if (hashCode == launchTemplateNameMalformed_HASH)
          {
            return LaunchTemplateErrorCode::launchTemplateNameMalformed;
          }
          else if (hashCode == launchTemplateVersionDoesNotExist_HASH)
          {
            return LaunchTemplateErrorCode::launchTemplateVersionDoesNotExist;
          }
          else if (hashCode == unexpectedError_HASH)
          {
            return LaunchTemplateErrorCode::unexpectedError;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchTemplateErrorCode>(hashCode);
          }

          return LaunchTemplateErrorCode::NOT_SET;
        }

        Aws::String GetNameForLaunchTemplateErrorCode(LaunchTemplateErrorCode enumValue)
        {
          switch(enumValue)
          {
          case LaunchTemplateErrorCode::launchTemplateIdDoesNotExist:
            return "launchTemplateIdDoesNotExist";
          case LaunchTemplateErrorCode::launchTemplateIdMalformed:
            return "launchTemplateIdMalformed";
          case LaunchTemplateErrorCode::launchTemplateNameDoesNotExist:
            return "launchTemplateNameDoesNotExist";
          case LaunchTemplateErrorCode::launchTemplateNameMalformed:
            return "launchTemplateNameMalformed";
          case LaunchTemplateErrorCode::launchTemplateVersionDoesNotExist:
            return "launchTemplateVersionDoesNotExist";
          case LaunchTemplateErrorCode::unexpectedError:
            return "unexpectedError";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LaunchTemplateErrorCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws

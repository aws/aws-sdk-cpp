/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t launchTemplateIdDoesNotExist_HASH = ConstExprHashingUtils::HashString("launchTemplateIdDoesNotExist");
        static constexpr uint32_t launchTemplateIdMalformed_HASH = ConstExprHashingUtils::HashString("launchTemplateIdMalformed");
        static constexpr uint32_t launchTemplateNameDoesNotExist_HASH = ConstExprHashingUtils::HashString("launchTemplateNameDoesNotExist");
        static constexpr uint32_t launchTemplateNameMalformed_HASH = ConstExprHashingUtils::HashString("launchTemplateNameMalformed");
        static constexpr uint32_t launchTemplateVersionDoesNotExist_HASH = ConstExprHashingUtils::HashString("launchTemplateVersionDoesNotExist");
        static constexpr uint32_t unexpectedError_HASH = ConstExprHashingUtils::HashString("unexpectedError");


        LaunchTemplateErrorCode GetLaunchTemplateErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case LaunchTemplateErrorCode::NOT_SET:
            return {};
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

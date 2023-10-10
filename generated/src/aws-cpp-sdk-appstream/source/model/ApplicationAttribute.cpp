/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ApplicationAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace ApplicationAttributeMapper
      {

        static const int LAUNCH_PARAMETERS_HASH = HashingUtils::HashString("LAUNCH_PARAMETERS");
        static const int WORKING_DIRECTORY_HASH = HashingUtils::HashString("WORKING_DIRECTORY");


        ApplicationAttribute GetApplicationAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LAUNCH_PARAMETERS_HASH)
          {
            return ApplicationAttribute::LAUNCH_PARAMETERS;
          }
          else if (hashCode == WORKING_DIRECTORY_HASH)
          {
            return ApplicationAttribute::WORKING_DIRECTORY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationAttribute>(hashCode);
          }

          return ApplicationAttribute::NOT_SET;
        }

        Aws::String GetNameForApplicationAttribute(ApplicationAttribute enumValue)
        {
          switch(enumValue)
          {
          case ApplicationAttribute::NOT_SET:
            return {};
          case ApplicationAttribute::LAUNCH_PARAMETERS:
            return "LAUNCH_PARAMETERS";
          case ApplicationAttribute::WORKING_DIRECTORY:
            return "WORKING_DIRECTORY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationAttributeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws

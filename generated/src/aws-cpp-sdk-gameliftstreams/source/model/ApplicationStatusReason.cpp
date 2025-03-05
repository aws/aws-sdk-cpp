/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/ApplicationStatusReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLiftStreams
  {
    namespace Model
    {
      namespace ApplicationStatusReasonMapper
      {

        static const int internalError_HASH = HashingUtils::HashString("internalError");
        static const int accessDenied_HASH = HashingUtils::HashString("accessDenied");


        ApplicationStatusReason GetApplicationStatusReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == internalError_HASH)
          {
            return ApplicationStatusReason::internalError;
          }
          else if (hashCode == accessDenied_HASH)
          {
            return ApplicationStatusReason::accessDenied;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationStatusReason>(hashCode);
          }

          return ApplicationStatusReason::NOT_SET;
        }

        Aws::String GetNameForApplicationStatusReason(ApplicationStatusReason enumValue)
        {
          switch(enumValue)
          {
          case ApplicationStatusReason::NOT_SET:
            return {};
          case ApplicationStatusReason::internalError:
            return "internalError";
          case ApplicationStatusReason::accessDenied:
            return "accessDenied";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationStatusReasonMapper
    } // namespace Model
  } // namespace GameLiftStreams
} // namespace Aws

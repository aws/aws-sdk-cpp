/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/Service.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AmplifyBackend
  {
    namespace Model
    {
      namespace ServiceMapper
      {

        static const int COGNITO_HASH = HashingUtils::HashString("COGNITO");


        Service GetServiceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COGNITO_HASH)
          {
            return Service::COGNITO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Service>(hashCode);
          }

          return Service::NOT_SET;
        }

        Aws::String GetNameForService(Service enumValue)
        {
          switch(enumValue)
          {
          case Service::NOT_SET:
            return {};
          case Service::COGNITO:
            return "COGNITO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceMapper
    } // namespace Model
  } // namespace AmplifyBackend
} // namespace Aws

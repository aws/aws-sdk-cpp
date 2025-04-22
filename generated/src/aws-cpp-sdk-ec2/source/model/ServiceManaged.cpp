/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ServiceManaged.h>
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
      namespace ServiceManagedMapper
      {

        static const int alb_HASH = HashingUtils::HashString("alb");
        static const int nlb_HASH = HashingUtils::HashString("nlb");
        static const int rnat_HASH = HashingUtils::HashString("rnat");


        ServiceManaged GetServiceManagedForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == alb_HASH)
          {
            return ServiceManaged::alb;
          }
          else if (hashCode == nlb_HASH)
          {
            return ServiceManaged::nlb;
          }
          else if (hashCode == rnat_HASH)
          {
            return ServiceManaged::rnat;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceManaged>(hashCode);
          }

          return ServiceManaged::NOT_SET;
        }

        Aws::String GetNameForServiceManaged(ServiceManaged enumValue)
        {
          switch(enumValue)
          {
          case ServiceManaged::NOT_SET:
            return {};
          case ServiceManaged::alb:
            return "alb";
          case ServiceManaged::nlb:
            return "nlb";
          case ServiceManaged::rnat:
            return "rnat";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceManagedMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws

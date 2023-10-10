/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/Owner.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace OwnerMapper
      {

        static const int CUSTOM_LAMBDA_HASH = HashingUtils::HashString("CUSTOM_LAMBDA");
        static const int AWS_HASH = HashingUtils::HashString("AWS");
        static const int CUSTOM_POLICY_HASH = HashingUtils::HashString("CUSTOM_POLICY");


        Owner GetOwnerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOM_LAMBDA_HASH)
          {
            return Owner::CUSTOM_LAMBDA;
          }
          else if (hashCode == AWS_HASH)
          {
            return Owner::AWS;
          }
          else if (hashCode == CUSTOM_POLICY_HASH)
          {
            return Owner::CUSTOM_POLICY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Owner>(hashCode);
          }

          return Owner::NOT_SET;
        }

        Aws::String GetNameForOwner(Owner enumValue)
        {
          switch(enumValue)
          {
          case Owner::NOT_SET:
            return {};
          case Owner::CUSTOM_LAMBDA:
            return "CUSTOM_LAMBDA";
          case Owner::AWS:
            return "AWS";
          case Owner::CUSTOM_POLICY:
            return "CUSTOM_POLICY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OwnerMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws

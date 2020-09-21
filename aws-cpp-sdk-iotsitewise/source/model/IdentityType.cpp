/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/IdentityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace IdentityTypeMapper
      {

        static const int USER_HASH = HashingUtils::HashString("USER");
        static const int GROUP_HASH = HashingUtils::HashString("GROUP");
        static const int IAM_HASH = HashingUtils::HashString("IAM");


        IdentityType GetIdentityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return IdentityType::USER;
          }
          else if (hashCode == GROUP_HASH)
          {
            return IdentityType::GROUP;
          }
          else if (hashCode == IAM_HASH)
          {
            return IdentityType::IAM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdentityType>(hashCode);
          }

          return IdentityType::NOT_SET;
        }

        Aws::String GetNameForIdentityType(IdentityType enumValue)
        {
          switch(enumValue)
          {
          case IdentityType::USER:
            return "USER";
          case IdentityType::GROUP:
            return "GROUP";
          case IdentityType::IAM:
            return "IAM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdentityTypeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws

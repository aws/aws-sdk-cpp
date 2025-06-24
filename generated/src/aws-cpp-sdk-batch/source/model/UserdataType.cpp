/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/UserdataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace UserdataTypeMapper
      {

        static const int EKS_BOOTSTRAP_SH_HASH = HashingUtils::HashString("EKS_BOOTSTRAP_SH");
        static const int EKS_NODEADM_HASH = HashingUtils::HashString("EKS_NODEADM");


        UserdataType GetUserdataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EKS_BOOTSTRAP_SH_HASH)
          {
            return UserdataType::EKS_BOOTSTRAP_SH;
          }
          else if (hashCode == EKS_NODEADM_HASH)
          {
            return UserdataType::EKS_NODEADM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserdataType>(hashCode);
          }

          return UserdataType::NOT_SET;
        }

        Aws::String GetNameForUserdataType(UserdataType enumValue)
        {
          switch(enumValue)
          {
          case UserdataType::NOT_SET:
            return {};
          case UserdataType::EKS_BOOTSTRAP_SH:
            return "EKS_BOOTSTRAP_SH";
          case UserdataType::EKS_NODEADM:
            return "EKS_NODEADM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserdataTypeMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws

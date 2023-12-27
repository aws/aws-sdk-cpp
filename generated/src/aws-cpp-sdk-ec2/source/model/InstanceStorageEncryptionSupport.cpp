/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceStorageEncryptionSupport.h>
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
      namespace InstanceStorageEncryptionSupportMapper
      {

        static const int unsupported_HASH = HashingUtils::HashString("unsupported");
        static const int required_HASH = HashingUtils::HashString("required");


        InstanceStorageEncryptionSupport GetInstanceStorageEncryptionSupportForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == unsupported_HASH)
          {
            return InstanceStorageEncryptionSupport::unsupported;
          }
          else if (hashCode == required_HASH)
          {
            return InstanceStorageEncryptionSupport::required;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceStorageEncryptionSupport>(hashCode);
          }

          return InstanceStorageEncryptionSupport::NOT_SET;
        }

        Aws::String GetNameForInstanceStorageEncryptionSupport(InstanceStorageEncryptionSupport enumValue)
        {
          switch(enumValue)
          {
          case InstanceStorageEncryptionSupport::NOT_SET:
            return {};
          case InstanceStorageEncryptionSupport::unsupported:
            return "unsupported";
          case InstanceStorageEncryptionSupport::required:
            return "required";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceStorageEncryptionSupportMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws

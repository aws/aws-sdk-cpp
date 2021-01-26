/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EbsEncryptionSupport.h>
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
      namespace EbsEncryptionSupportMapper
      {

        static const int unsupported_HASH = HashingUtils::HashString("unsupported");
        static const int supported_HASH = HashingUtils::HashString("supported");


        EbsEncryptionSupport GetEbsEncryptionSupportForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == unsupported_HASH)
          {
            return EbsEncryptionSupport::unsupported;
          }
          else if (hashCode == supported_HASH)
          {
            return EbsEncryptionSupport::supported;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EbsEncryptionSupport>(hashCode);
          }

          return EbsEncryptionSupport::NOT_SET;
        }

        Aws::String GetNameForEbsEncryptionSupport(EbsEncryptionSupport enumValue)
        {
          switch(enumValue)
          {
          case EbsEncryptionSupport::unsupported:
            return "unsupported";
          case EbsEncryptionSupport::supported:
            return "supported";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EbsEncryptionSupportMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws

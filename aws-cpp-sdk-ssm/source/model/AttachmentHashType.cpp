/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AttachmentHashType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace AttachmentHashTypeMapper
      {

        static const int Sha256_HASH = HashingUtils::HashString("Sha256");


        AttachmentHashType GetAttachmentHashTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Sha256_HASH)
          {
            return AttachmentHashType::Sha256;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttachmentHashType>(hashCode);
          }

          return AttachmentHashType::NOT_SET;
        }

        Aws::String GetNameForAttachmentHashType(AttachmentHashType enumValue)
        {
          switch(enumValue)
          {
          case AttachmentHashType::Sha256:
            return "Sha256";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttachmentHashTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/DkimSigningAttributesOrigin.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace DkimSigningAttributesOriginMapper
      {

        static const int AWS_SES_HASH = HashingUtils::HashString("AWS_SES");
        static const int EXTERNAL_HASH = HashingUtils::HashString("EXTERNAL");


        DkimSigningAttributesOrigin GetDkimSigningAttributesOriginForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_SES_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES;
          }
          else if (hashCode == EXTERNAL_HASH)
          {
            return DkimSigningAttributesOrigin::EXTERNAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DkimSigningAttributesOrigin>(hashCode);
          }

          return DkimSigningAttributesOrigin::NOT_SET;
        }

        Aws::String GetNameForDkimSigningAttributesOrigin(DkimSigningAttributesOrigin enumValue)
        {
          switch(enumValue)
          {
          case DkimSigningAttributesOrigin::AWS_SES:
            return "AWS_SES";
          case DkimSigningAttributesOrigin::EXTERNAL:
            return "EXTERNAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DkimSigningAttributesOriginMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws

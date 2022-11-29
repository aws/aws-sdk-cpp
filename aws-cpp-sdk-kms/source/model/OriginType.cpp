/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/OriginType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KMS
  {
    namespace Model
    {
      namespace OriginTypeMapper
      {

        static const int AWS_KMS_HASH = HashingUtils::HashString("AWS_KMS");
        static const int EXTERNAL_HASH = HashingUtils::HashString("EXTERNAL");
        static const int AWS_CLOUDHSM_HASH = HashingUtils::HashString("AWS_CLOUDHSM");
        static const int EXTERNAL_KEY_STORE_HASH = HashingUtils::HashString("EXTERNAL_KEY_STORE");


        OriginType GetOriginTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_KMS_HASH)
          {
            return OriginType::AWS_KMS;
          }
          else if (hashCode == EXTERNAL_HASH)
          {
            return OriginType::EXTERNAL;
          }
          else if (hashCode == AWS_CLOUDHSM_HASH)
          {
            return OriginType::AWS_CLOUDHSM;
          }
          else if (hashCode == EXTERNAL_KEY_STORE_HASH)
          {
            return OriginType::EXTERNAL_KEY_STORE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OriginType>(hashCode);
          }

          return OriginType::NOT_SET;
        }

        Aws::String GetNameForOriginType(OriginType enumValue)
        {
          switch(enumValue)
          {
          case OriginType::AWS_KMS:
            return "AWS_KMS";
          case OriginType::EXTERNAL:
            return "EXTERNAL";
          case OriginType::AWS_CLOUDHSM:
            return "AWS_CLOUDHSM";
          case OriginType::EXTERNAL_KEY_STORE:
            return "EXTERNAL_KEY_STORE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OriginTypeMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/SupplementalDataStorageLocationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace SupplementalDataStorageLocationTypeMapper
      {

        static const int S3_HASH = HashingUtils::HashString("S3");


        SupplementalDataStorageLocationType GetSupplementalDataStorageLocationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_HASH)
          {
            return SupplementalDataStorageLocationType::S3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SupplementalDataStorageLocationType>(hashCode);
          }

          return SupplementalDataStorageLocationType::NOT_SET;
        }

        Aws::String GetNameForSupplementalDataStorageLocationType(SupplementalDataStorageLocationType enumValue)
        {
          switch(enumValue)
          {
          case SupplementalDataStorageLocationType::NOT_SET:
            return {};
          case SupplementalDataStorageLocationType::S3:
            return "S3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SupplementalDataStorageLocationTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws

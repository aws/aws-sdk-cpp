/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/AgreementType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Artifact
  {
    namespace Model
    {
      namespace AgreementTypeMapper
      {

        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int MODIFIED_HASH = HashingUtils::HashString("MODIFIED");


        AgreementType GetAgreementTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOM_HASH)
          {
            return AgreementType::CUSTOM;
          }
          else if (hashCode == DEFAULT_HASH)
          {
            return AgreementType::DEFAULT;
          }
          else if (hashCode == MODIFIED_HASH)
          {
            return AgreementType::MODIFIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AgreementType>(hashCode);
          }

          return AgreementType::NOT_SET;
        }

        Aws::String GetNameForAgreementType(AgreementType enumValue)
        {
          switch(enumValue)
          {
          case AgreementType::NOT_SET:
            return {};
          case AgreementType::CUSTOM:
            return "CUSTOM";
          case AgreementType::DEFAULT:
            return "DEFAULT";
          case AgreementType::MODIFIED:
            return "MODIFIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AgreementTypeMapper
    } // namespace Model
  } // namespace Artifact
} // namespace Aws

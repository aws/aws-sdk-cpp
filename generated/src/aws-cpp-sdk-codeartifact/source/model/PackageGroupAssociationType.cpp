/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PackageGroupAssociationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeArtifact
  {
    namespace Model
    {
      namespace PackageGroupAssociationTypeMapper
      {

        static const int STRONG_HASH = HashingUtils::HashString("STRONG");
        static const int WEAK_HASH = HashingUtils::HashString("WEAK");


        PackageGroupAssociationType GetPackageGroupAssociationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRONG_HASH)
          {
            return PackageGroupAssociationType::STRONG;
          }
          else if (hashCode == WEAK_HASH)
          {
            return PackageGroupAssociationType::WEAK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageGroupAssociationType>(hashCode);
          }

          return PackageGroupAssociationType::NOT_SET;
        }

        Aws::String GetNameForPackageGroupAssociationType(PackageGroupAssociationType enumValue)
        {
          switch(enumValue)
          {
          case PackageGroupAssociationType::NOT_SET:
            return {};
          case PackageGroupAssociationType::STRONG:
            return "STRONG";
          case PackageGroupAssociationType::WEAK:
            return "WEAK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PackageGroupAssociationTypeMapper
    } // namespace Model
  } // namespace CodeArtifact
} // namespace Aws

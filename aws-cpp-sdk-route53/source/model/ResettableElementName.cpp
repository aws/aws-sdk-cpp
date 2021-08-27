/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ResettableElementName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53
  {
    namespace Model
    {
      namespace ResettableElementNameMapper
      {

        static const int FullyQualifiedDomainName_HASH = HashingUtils::HashString("FullyQualifiedDomainName");
        static const int Regions_HASH = HashingUtils::HashString("Regions");
        static const int ResourcePath_HASH = HashingUtils::HashString("ResourcePath");
        static const int ChildHealthChecks_HASH = HashingUtils::HashString("ChildHealthChecks");


        ResettableElementName GetResettableElementNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FullyQualifiedDomainName_HASH)
          {
            return ResettableElementName::FullyQualifiedDomainName;
          }
          else if (hashCode == Regions_HASH)
          {
            return ResettableElementName::Regions;
          }
          else if (hashCode == ResourcePath_HASH)
          {
            return ResettableElementName::ResourcePath;
          }
          else if (hashCode == ChildHealthChecks_HASH)
          {
            return ResettableElementName::ChildHealthChecks;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResettableElementName>(hashCode);
          }

          return ResettableElementName::NOT_SET;
        }

        Aws::String GetNameForResettableElementName(ResettableElementName enumValue)
        {
          switch(enumValue)
          {
          case ResettableElementName::FullyQualifiedDomainName:
            return "FullyQualifiedDomainName";
          case ResettableElementName::Regions:
            return "Regions";
          case ResettableElementName::ResourcePath:
            return "ResourcePath";
          case ResettableElementName::ChildHealthChecks:
            return "ChildHealthChecks";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResettableElementNameMapper
    } // namespace Model
  } // namespace Route53
} // namespace Aws

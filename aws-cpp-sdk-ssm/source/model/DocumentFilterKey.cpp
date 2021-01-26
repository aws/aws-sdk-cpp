/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentFilterKey.h>
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
      namespace DocumentFilterKeyMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int Owner_HASH = HashingUtils::HashString("Owner");
        static const int PlatformTypes_HASH = HashingUtils::HashString("PlatformTypes");
        static const int DocumentType_HASH = HashingUtils::HashString("DocumentType");


        DocumentFilterKey GetDocumentFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return DocumentFilterKey::Name;
          }
          else if (hashCode == Owner_HASH)
          {
            return DocumentFilterKey::Owner;
          }
          else if (hashCode == PlatformTypes_HASH)
          {
            return DocumentFilterKey::PlatformTypes;
          }
          else if (hashCode == DocumentType_HASH)
          {
            return DocumentFilterKey::DocumentType;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentFilterKey>(hashCode);
          }

          return DocumentFilterKey::NOT_SET;
        }

        Aws::String GetNameForDocumentFilterKey(DocumentFilterKey enumValue)
        {
          switch(enumValue)
          {
          case DocumentFilterKey::Name:
            return "Name";
          case DocumentFilterKey::Owner:
            return "Owner";
          case DocumentFilterKey::PlatformTypes:
            return "PlatformTypes";
          case DocumentFilterKey::DocumentType:
            return "DocumentType";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws

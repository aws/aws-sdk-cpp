/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/AlfrescoEntity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace AlfrescoEntityMapper
      {

        static const int wiki_HASH = HashingUtils::HashString("wiki");
        static const int blog_HASH = HashingUtils::HashString("blog");
        static const int documentLibrary_HASH = HashingUtils::HashString("documentLibrary");


        AlfrescoEntity GetAlfrescoEntityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == wiki_HASH)
          {
            return AlfrescoEntity::wiki;
          }
          else if (hashCode == blog_HASH)
          {
            return AlfrescoEntity::blog;
          }
          else if (hashCode == documentLibrary_HASH)
          {
            return AlfrescoEntity::documentLibrary;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AlfrescoEntity>(hashCode);
          }

          return AlfrescoEntity::NOT_SET;
        }

        Aws::String GetNameForAlfrescoEntity(AlfrescoEntity enumValue)
        {
          switch(enumValue)
          {
          case AlfrescoEntity::NOT_SET:
            return {};
          case AlfrescoEntity::wiki:
            return "wiki";
          case AlfrescoEntity::blog:
            return "blog";
          case AlfrescoEntity::documentLibrary:
            return "documentLibrary";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AlfrescoEntityMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/ObjectTypeEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCommit
  {
    namespace Model
    {
      namespace ObjectTypeEnumMapper
      {

        static const int FILE_HASH = HashingUtils::HashString("FILE");
        static const int DIRECTORY_HASH = HashingUtils::HashString("DIRECTORY");
        static const int GIT_LINK_HASH = HashingUtils::HashString("GIT_LINK");
        static const int SYMBOLIC_LINK_HASH = HashingUtils::HashString("SYMBOLIC_LINK");


        ObjectTypeEnum GetObjectTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FILE_HASH)
          {
            return ObjectTypeEnum::FILE;
          }
          else if (hashCode == DIRECTORY_HASH)
          {
            return ObjectTypeEnum::DIRECTORY;
          }
          else if (hashCode == GIT_LINK_HASH)
          {
            return ObjectTypeEnum::GIT_LINK;
          }
          else if (hashCode == SYMBOLIC_LINK_HASH)
          {
            return ObjectTypeEnum::SYMBOLIC_LINK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObjectTypeEnum>(hashCode);
          }

          return ObjectTypeEnum::NOT_SET;
        }

        Aws::String GetNameForObjectTypeEnum(ObjectTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case ObjectTypeEnum::FILE:
            return "FILE";
          case ObjectTypeEnum::DIRECTORY:
            return "DIRECTORY";
          case ObjectTypeEnum::GIT_LINK:
            return "GIT_LINK";
          case ObjectTypeEnum::SYMBOLIC_LINK:
            return "SYMBOLIC_LINK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObjectTypeEnumMapper
    } // namespace Model
  } // namespace CodeCommit
} // namespace Aws

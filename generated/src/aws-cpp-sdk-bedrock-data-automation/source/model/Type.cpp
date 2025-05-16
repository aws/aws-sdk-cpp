/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/Type.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockDataAutomation
  {
    namespace Model
    {
      namespace TypeMapper
      {

        static const int DOCUMENT_HASH = HashingUtils::HashString("DOCUMENT");
        static const int IMAGE_HASH = HashingUtils::HashString("IMAGE");
        static const int AUDIO_HASH = HashingUtils::HashString("AUDIO");
        static const int VIDEO_HASH = HashingUtils::HashString("VIDEO");


        Type GetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOCUMENT_HASH)
          {
            return Type::DOCUMENT;
          }
          else if (hashCode == IMAGE_HASH)
          {
            return Type::IMAGE;
          }
          else if (hashCode == AUDIO_HASH)
          {
            return Type::AUDIO;
          }
          else if (hashCode == VIDEO_HASH)
          {
            return Type::VIDEO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Type>(hashCode);
          }

          return Type::NOT_SET;
        }

        Aws::String GetNameForType(Type enumValue)
        {
          switch(enumValue)
          {
          case Type::NOT_SET:
            return {};
          case Type::DOCUMENT:
            return "DOCUMENT";
          case Type::IMAGE:
            return "IMAGE";
          case Type::AUDIO:
            return "AUDIO";
          case Type::VIDEO:
            return "VIDEO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TypeMapper
    } // namespace Model
  } // namespace BedrockDataAutomation
} // namespace Aws

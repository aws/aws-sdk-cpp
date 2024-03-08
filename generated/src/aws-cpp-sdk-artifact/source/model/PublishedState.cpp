/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/PublishedState.h>
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
      namespace PublishedStateMapper
      {

        static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");
        static const int UNPUBLISHED_HASH = HashingUtils::HashString("UNPUBLISHED");


        PublishedState GetPublishedStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLISHED_HASH)
          {
            return PublishedState::PUBLISHED;
          }
          else if (hashCode == UNPUBLISHED_HASH)
          {
            return PublishedState::UNPUBLISHED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PublishedState>(hashCode);
          }

          return PublishedState::NOT_SET;
        }

        Aws::String GetNameForPublishedState(PublishedState enumValue)
        {
          switch(enumValue)
          {
          case PublishedState::NOT_SET:
            return {};
          case PublishedState::PUBLISHED:
            return "PUBLISHED";
          case PublishedState::UNPUBLISHED:
            return "UNPUBLISHED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PublishedStateMapper
    } // namespace Model
  } // namespace Artifact
} // namespace Aws

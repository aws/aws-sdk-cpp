/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CopyTagsFromSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace CopyTagsFromSourceMapper
      {

        static const int volume_HASH = HashingUtils::HashString("volume");


        CopyTagsFromSource GetCopyTagsFromSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == volume_HASH)
          {
            return CopyTagsFromSource::volume;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CopyTagsFromSource>(hashCode);
          }

          return CopyTagsFromSource::NOT_SET;
        }

        Aws::String GetNameForCopyTagsFromSource(CopyTagsFromSource enumValue)
        {
          switch(enumValue)
          {
          case CopyTagsFromSource::volume:
            return "volume";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CopyTagsFromSourceMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/SegmentReferenceResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchEvidently
  {
    namespace Model
    {
      namespace SegmentReferenceResourceTypeMapper
      {

        static const int EXPERIMENT_HASH = HashingUtils::HashString("EXPERIMENT");
        static const int LAUNCH_HASH = HashingUtils::HashString("LAUNCH");


        SegmentReferenceResourceType GetSegmentReferenceResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXPERIMENT_HASH)
          {
            return SegmentReferenceResourceType::EXPERIMENT;
          }
          else if (hashCode == LAUNCH_HASH)
          {
            return SegmentReferenceResourceType::LAUNCH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SegmentReferenceResourceType>(hashCode);
          }

          return SegmentReferenceResourceType::NOT_SET;
        }

        Aws::String GetNameForSegmentReferenceResourceType(SegmentReferenceResourceType enumValue)
        {
          switch(enumValue)
          {
          case SegmentReferenceResourceType::NOT_SET:
            return {};
          case SegmentReferenceResourceType::EXPERIMENT:
            return "EXPERIMENT";
          case SegmentReferenceResourceType::LAUNCH:
            return "LAUNCH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SegmentReferenceResourceTypeMapper
    } // namespace Model
  } // namespace CloudWatchEvidently
} // namespace Aws

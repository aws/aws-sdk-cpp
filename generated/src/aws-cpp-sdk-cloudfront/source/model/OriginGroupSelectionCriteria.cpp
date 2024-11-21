/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginGroupSelectionCriteria.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFront
  {
    namespace Model
    {
      namespace OriginGroupSelectionCriteriaMapper
      {

        static const int default__HASH = HashingUtils::HashString("default");
        static const int media_quality_based_HASH = HashingUtils::HashString("media-quality-based");


        OriginGroupSelectionCriteria GetOriginGroupSelectionCriteriaForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == default__HASH)
          {
            return OriginGroupSelectionCriteria::default_;
          }
          else if (hashCode == media_quality_based_HASH)
          {
            return OriginGroupSelectionCriteria::media_quality_based;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OriginGroupSelectionCriteria>(hashCode);
          }

          return OriginGroupSelectionCriteria::NOT_SET;
        }

        Aws::String GetNameForOriginGroupSelectionCriteria(OriginGroupSelectionCriteria enumValue)
        {
          switch(enumValue)
          {
          case OriginGroupSelectionCriteria::NOT_SET:
            return {};
          case OriginGroupSelectionCriteria::default_:
            return "default";
          case OriginGroupSelectionCriteria::media_quality_based:
            return "media-quality-based";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OriginGroupSelectionCriteriaMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws

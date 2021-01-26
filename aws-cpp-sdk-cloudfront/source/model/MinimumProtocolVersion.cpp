/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/MinimumProtocolVersion.h>
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
      namespace MinimumProtocolVersionMapper
      {

        static const int SSLv3_HASH = HashingUtils::HashString("SSLv3");
        static const int TLSv1_HASH = HashingUtils::HashString("TLSv1");
        static const int TLSv1_2016_HASH = HashingUtils::HashString("TLSv1_2016");
        static const int TLSv1_1_2016_HASH = HashingUtils::HashString("TLSv1.1_2016");
        static const int TLSv1_2_2018_HASH = HashingUtils::HashString("TLSv1.2_2018");
        static const int TLSv1_2_2019_HASH = HashingUtils::HashString("TLSv1.2_2019");


        MinimumProtocolVersion GetMinimumProtocolVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SSLv3_HASH)
          {
            return MinimumProtocolVersion::SSLv3;
          }
          else if (hashCode == TLSv1_HASH)
          {
            return MinimumProtocolVersion::TLSv1;
          }
          else if (hashCode == TLSv1_2016_HASH)
          {
            return MinimumProtocolVersion::TLSv1_2016;
          }
          else if (hashCode == TLSv1_1_2016_HASH)
          {
            return MinimumProtocolVersion::TLSv1_1_2016;
          }
          else if (hashCode == TLSv1_2_2018_HASH)
          {
            return MinimumProtocolVersion::TLSv1_2_2018;
          }
          else if (hashCode == TLSv1_2_2019_HASH)
          {
            return MinimumProtocolVersion::TLSv1_2_2019;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MinimumProtocolVersion>(hashCode);
          }

          return MinimumProtocolVersion::NOT_SET;
        }

        Aws::String GetNameForMinimumProtocolVersion(MinimumProtocolVersion enumValue)
        {
          switch(enumValue)
          {
          case MinimumProtocolVersion::SSLv3:
            return "SSLv3";
          case MinimumProtocolVersion::TLSv1:
            return "TLSv1";
          case MinimumProtocolVersion::TLSv1_2016:
            return "TLSv1_2016";
          case MinimumProtocolVersion::TLSv1_1_2016:
            return "TLSv1.1_2016";
          case MinimumProtocolVersion::TLSv1_2_2018:
            return "TLSv1.2_2018";
          case MinimumProtocolVersion::TLSv1_2_2019:
            return "TLSv1.2_2019";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MinimumProtocolVersionMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws

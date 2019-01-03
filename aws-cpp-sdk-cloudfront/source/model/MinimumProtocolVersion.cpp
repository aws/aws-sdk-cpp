/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

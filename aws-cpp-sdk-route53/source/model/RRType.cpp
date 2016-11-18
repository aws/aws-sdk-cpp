/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/route53/model/RRType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53
  {
    namespace Model
    {
      namespace RRTypeMapper
      {

        static const int SOA_HASH = HashingUtils::HashString("SOA");
        static const int A_HASH = HashingUtils::HashString("A");
        static const int TXT_HASH = HashingUtils::HashString("TXT");
        static const int NS_HASH = HashingUtils::HashString("NS");
        static const int CNAME_HASH = HashingUtils::HashString("CNAME");
        static const int MX_HASH = HashingUtils::HashString("MX");
        static const int NAPTR_HASH = HashingUtils::HashString("NAPTR");
        static const int PTR_HASH = HashingUtils::HashString("PTR");
        static const int SRV_HASH = HashingUtils::HashString("SRV");
        static const int SPF_HASH = HashingUtils::HashString("SPF");
        static const int AAAA_HASH = HashingUtils::HashString("AAAA");


        RRType GetRRTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOA_HASH)
          {
            return RRType::SOA;
          }
          else if (hashCode == A_HASH)
          {
            return RRType::A;
          }
          else if (hashCode == TXT_HASH)
          {
            return RRType::TXT;
          }
          else if (hashCode == NS_HASH)
          {
            return RRType::NS;
          }
          else if (hashCode == CNAME_HASH)
          {
            return RRType::CNAME;
          }
          else if (hashCode == MX_HASH)
          {
            return RRType::MX;
          }
          else if (hashCode == NAPTR_HASH)
          {
            return RRType::NAPTR;
          }
          else if (hashCode == PTR_HASH)
          {
            return RRType::PTR;
          }
          else if (hashCode == SRV_HASH)
          {
            return RRType::SRV;
          }
          else if (hashCode == SPF_HASH)
          {
            return RRType::SPF;
          }
          else if (hashCode == AAAA_HASH)
          {
            return RRType::AAAA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RRType>(hashCode);
          }

          return RRType::NOT_SET;
        }

        Aws::String GetNameForRRType(RRType enumValue)
        {
          switch(enumValue)
          {
          case RRType::SOA:
            return "SOA";
          case RRType::A:
            return "A";
          case RRType::TXT:
            return "TXT";
          case RRType::NS:
            return "NS";
          case RRType::CNAME:
            return "CNAME";
          case RRType::MX:
            return "MX";
          case RRType::NAPTR:
            return "NAPTR";
          case RRType::PTR:
            return "PTR";
          case RRType::SRV:
            return "SRV";
          case RRType::SPF:
            return "SPF";
          case RRType::AAAA:
            return "AAAA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RRTypeMapper
    } // namespace Model
  } // namespace Route53
} // namespace Aws

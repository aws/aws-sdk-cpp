﻿/*
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

#include <aws/servicediscovery/model/RecordType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceDiscovery
  {
    namespace Model
    {
      namespace RecordTypeMapper
      {

        static const int SRV_HASH = HashingUtils::HashString("SRV");
        static const int A_HASH = HashingUtils::HashString("A");
        static const int AAAA_HASH = HashingUtils::HashString("AAAA");
        static const int CNAME_HASH = HashingUtils::HashString("CNAME");


        RecordType GetRecordTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SRV_HASH)
          {
            return RecordType::SRV;
          }
          else if (hashCode == A_HASH)
          {
            return RecordType::A;
          }
          else if (hashCode == AAAA_HASH)
          {
            return RecordType::AAAA;
          }
          else if (hashCode == CNAME_HASH)
          {
            return RecordType::CNAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecordType>(hashCode);
          }

          return RecordType::NOT_SET;
        }

        Aws::String GetNameForRecordType(RecordType enumValue)
        {
          switch(enumValue)
          {
          case RecordType::SRV:
            return "SRV";
          case RecordType::A:
            return "A";
          case RecordType::AAAA:
            return "AAAA";
          case RecordType::CNAME:
            return "CNAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RecordTypeMapper
    } // namespace Model
  } // namespace ServiceDiscovery
} // namespace Aws

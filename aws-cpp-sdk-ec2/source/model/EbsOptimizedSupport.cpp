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

#include <aws/ec2/model/EbsOptimizedSupport.h>
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
      namespace EbsOptimizedSupportMapper
      {

        static const int unsupported_HASH = HashingUtils::HashString("unsupported");
        static const int supported_HASH = HashingUtils::HashString("supported");
        static const int default__HASH = HashingUtils::HashString("default");


        EbsOptimizedSupport GetEbsOptimizedSupportForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == unsupported_HASH)
          {
            return EbsOptimizedSupport::unsupported;
          }
          else if (hashCode == supported_HASH)
          {
            return EbsOptimizedSupport::supported;
          }
          else if (hashCode == default__HASH)
          {
            return EbsOptimizedSupport::default_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EbsOptimizedSupport>(hashCode);
          }

          return EbsOptimizedSupport::NOT_SET;
        }

        Aws::String GetNameForEbsOptimizedSupport(EbsOptimizedSupport enumValue)
        {
          switch(enumValue)
          {
          case EbsOptimizedSupport::unsupported:
            return "unsupported";
          case EbsOptimizedSupport::supported:
            return "supported";
          case EbsOptimizedSupport::default_:
            return "default";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EbsOptimizedSupportMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws

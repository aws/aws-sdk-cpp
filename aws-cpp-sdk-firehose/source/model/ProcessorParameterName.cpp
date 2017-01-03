﻿/*
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
#include <aws/firehose/model/ProcessorParameterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace ProcessorParameterNameMapper
      {

        static const int LambdaArn_HASH = HashingUtils::HashString("LambdaArn");
        static const int NumberOfRetries_HASH = HashingUtils::HashString("NumberOfRetries");


        ProcessorParameterName GetProcessorParameterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LambdaArn_HASH)
          {
            return ProcessorParameterName::LambdaArn;
          }
          else if (hashCode == NumberOfRetries_HASH)
          {
            return ProcessorParameterName::NumberOfRetries;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProcessorParameterName>(hashCode);
          }

          return ProcessorParameterName::NOT_SET;
        }

        Aws::String GetNameForProcessorParameterName(ProcessorParameterName enumValue)
        {
          switch(enumValue)
          {
          case ProcessorParameterName::LambdaArn:
            return "LambdaArn";
          case ProcessorParameterName::NumberOfRetries:
            return "NumberOfRetries";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ProcessorParameterNameMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws

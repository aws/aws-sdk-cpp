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
#include <aws/lambda/model/Runtime.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lambda
  {
    namespace Model
    {
      namespace RuntimeMapper
      {

        static const int nodejs_HASH = HashingUtils::HashString("nodejs");
        static const int nodejs4_3_HASH = HashingUtils::HashString("nodejs4.3");
        static const int nodejs6_10_HASH = HashingUtils::HashString("nodejs6.10");
        static const int java8_HASH = HashingUtils::HashString("java8");
        static const int python2_7_HASH = HashingUtils::HashString("python2.7");
        static const int dotnetcore1_0_HASH = HashingUtils::HashString("dotnetcore1.0");
        static const int nodejs4_3_edge_HASH = HashingUtils::HashString("nodejs4.3-edge");


        Runtime GetRuntimeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == nodejs_HASH)
          {
            return Runtime::nodejs;
          }
          else if (hashCode == nodejs4_3_HASH)
          {
            return Runtime::nodejs4_3;
          }
          else if (hashCode == nodejs6_10_HASH)
          {
            return Runtime::nodejs6_10;
          }
          else if (hashCode == java8_HASH)
          {
            return Runtime::java8;
          }
          else if (hashCode == python2_7_HASH)
          {
            return Runtime::python2_7;
          }
          else if (hashCode == dotnetcore1_0_HASH)
          {
            return Runtime::dotnetcore1_0;
          }
          else if (hashCode == nodejs4_3_edge_HASH)
          {
            return Runtime::nodejs4_3_edge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Runtime>(hashCode);
          }

          return Runtime::NOT_SET;
        }

        Aws::String GetNameForRuntime(Runtime enumValue)
        {
          switch(enumValue)
          {
          case Runtime::nodejs:
            return "nodejs";
          case Runtime::nodejs4_3:
            return "nodejs4.3";
          case Runtime::nodejs6_10:
            return "nodejs6.10";
          case Runtime::java8:
            return "java8";
          case Runtime::python2_7:
            return "python2.7";
          case Runtime::dotnetcore1_0:
            return "dotnetcore1.0";
          case Runtime::nodejs4_3_edge:
            return "nodejs4.3-edge";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RuntimeMapper
    } // namespace Model
  } // namespace Lambda
} // namespace Aws

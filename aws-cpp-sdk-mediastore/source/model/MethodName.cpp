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

#include <aws/mediastore/model/MethodName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaStore
  {
    namespace Model
    {
      namespace MethodNameMapper
      {

        static const int PUT_HASH = HashingUtils::HashString("PUT");
        static const int GET__HASH = HashingUtils::HashString("GET");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");
        static const int HEAD_HASH = HashingUtils::HashString("HEAD");


        MethodName GetMethodNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUT_HASH)
          {
            return MethodName::PUT;
          }
          else if (hashCode == GET__HASH)
          {
            return MethodName::GET_;
          }
          else if (hashCode == DELETE__HASH)
          {
            return MethodName::DELETE_;
          }
          else if (hashCode == HEAD_HASH)
          {
            return MethodName::HEAD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MethodName>(hashCode);
          }

          return MethodName::NOT_SET;
        }

        Aws::String GetNameForMethodName(MethodName enumValue)
        {
          switch(enumValue)
          {
          case MethodName::PUT:
            return "PUT";
          case MethodName::GET_:
            return "GET";
          case MethodName::DELETE_:
            return "DELETE";
          case MethodName::HEAD:
            return "HEAD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace MethodNameMapper
    } // namespace Model
  } // namespace MediaStore
} // namespace Aws

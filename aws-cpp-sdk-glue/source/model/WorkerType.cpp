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

#include <aws/glue/model/WorkerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace WorkerTypeMapper
      {

        static const int Standard_HASH = HashingUtils::HashString("Standard");
        static const int G_1X_HASH = HashingUtils::HashString("G.1X");
        static const int G_2X_HASH = HashingUtils::HashString("G.2X");


        WorkerType GetWorkerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Standard_HASH)
          {
            return WorkerType::Standard;
          }
          else if (hashCode == G_1X_HASH)
          {
            return WorkerType::G_1X;
          }
          else if (hashCode == G_2X_HASH)
          {
            return WorkerType::G_2X;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkerType>(hashCode);
          }

          return WorkerType::NOT_SET;
        }

        Aws::String GetNameForWorkerType(WorkerType enumValue)
        {
          switch(enumValue)
          {
          case WorkerType::Standard:
            return "Standard";
          case WorkerType::G_1X:
            return "G.1X";
          case WorkerType::G_2X:
            return "G.2X";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkerTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws

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

#include <aws/medialive/model/M2tsBufferModel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace M2tsBufferModelMapper
      {

        static const int MULTIPLEX_HASH = HashingUtils::HashString("MULTIPLEX");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        M2tsBufferModel GetM2tsBufferModelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MULTIPLEX_HASH)
          {
            return M2tsBufferModel::MULTIPLEX;
          }
          else if (hashCode == NONE_HASH)
          {
            return M2tsBufferModel::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsBufferModel>(hashCode);
          }

          return M2tsBufferModel::NOT_SET;
        }

        Aws::String GetNameForM2tsBufferModel(M2tsBufferModel enumValue)
        {
          switch(enumValue)
          {
          case M2tsBufferModel::MULTIPLEX:
            return "MULTIPLEX";
          case M2tsBufferModel::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsBufferModelMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

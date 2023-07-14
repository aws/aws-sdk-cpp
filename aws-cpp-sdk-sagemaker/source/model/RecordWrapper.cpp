/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RecordWrapper.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace RecordWrapperMapper
      {

        static const int None_HASH = HashingUtils::HashString("None");
        static const int RecordIO_HASH = HashingUtils::HashString("RecordIO");


        RecordWrapper GetRecordWrapperForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_HASH)
          {
            return RecordWrapper::None;
          }
          else if (hashCode == RecordIO_HASH)
          {
            return RecordWrapper::RecordIO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecordWrapper>(hashCode);
          }

          return RecordWrapper::NOT_SET;
        }

        Aws::String GetNameForRecordWrapper(RecordWrapper enumValue)
        {
          switch(enumValue)
          {
          case RecordWrapper::None:
            return "None";
          case RecordWrapper::RecordIO:
            return "RecordIO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecordWrapperMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

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
#include <aws/mturk-requester/model/Comparator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MTurk
  {
    namespace Model
    {
      namespace ComparatorMapper
      {

        static const int LessThan_HASH = HashingUtils::HashString("LessThan");
        static const int LessThanOrEqualTo_HASH = HashingUtils::HashString("LessThanOrEqualTo");
        static const int GreaterThan_HASH = HashingUtils::HashString("GreaterThan");
        static const int GreaterThanOrEqualTo_HASH = HashingUtils::HashString("GreaterThanOrEqualTo");
        static const int EqualTo_HASH = HashingUtils::HashString("EqualTo");
        static const int NotEqualTo_HASH = HashingUtils::HashString("NotEqualTo");
        static const int Exists_HASH = HashingUtils::HashString("Exists");
        static const int DoesNotExist_HASH = HashingUtils::HashString("DoesNotExist");
        static const int In_HASH = HashingUtils::HashString("In");
        static const int NotIn_HASH = HashingUtils::HashString("NotIn");


        Comparator GetComparatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LessThan_HASH)
          {
            return Comparator::LessThan;
          }
          else if (hashCode == LessThanOrEqualTo_HASH)
          {
            return Comparator::LessThanOrEqualTo;
          }
          else if (hashCode == GreaterThan_HASH)
          {
            return Comparator::GreaterThan;
          }
          else if (hashCode == GreaterThanOrEqualTo_HASH)
          {
            return Comparator::GreaterThanOrEqualTo;
          }
          else if (hashCode == EqualTo_HASH)
          {
            return Comparator::EqualTo;
          }
          else if (hashCode == NotEqualTo_HASH)
          {
            return Comparator::NotEqualTo;
          }
          else if (hashCode == Exists_HASH)
          {
            return Comparator::Exists;
          }
          else if (hashCode == DoesNotExist_HASH)
          {
            return Comparator::DoesNotExist;
          }
          else if (hashCode == In_HASH)
          {
            return Comparator::In;
          }
          else if (hashCode == NotIn_HASH)
          {
            return Comparator::NotIn;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Comparator>(hashCode);
          }

          return Comparator::NOT_SET;
        }

        Aws::String GetNameForComparator(Comparator enumValue)
        {
          switch(enumValue)
          {
          case Comparator::LessThan:
            return "LessThan";
          case Comparator::LessThanOrEqualTo:
            return "LessThanOrEqualTo";
          case Comparator::GreaterThan:
            return "GreaterThan";
          case Comparator::GreaterThanOrEqualTo:
            return "GreaterThanOrEqualTo";
          case Comparator::EqualTo:
            return "EqualTo";
          case Comparator::NotEqualTo:
            return "NotEqualTo";
          case Comparator::Exists:
            return "Exists";
          case Comparator::DoesNotExist:
            return "DoesNotExist";
          case Comparator::In:
            return "In";
          case Comparator::NotIn:
            return "NotIn";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ComparatorMapper
    } // namespace Model
  } // namespace MTurk
} // namespace Aws

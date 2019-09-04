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

#pragma once
#include <aws/states/SFN_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SFN
{
namespace Model
{

  /**
   * <p>Details about a Map state that was started.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/MapStateStartedEventDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SFN_API MapStateStartedEventDetails
  {
  public:
    MapStateStartedEventDetails();
    MapStateStartedEventDetails(Aws::Utils::Json::JsonView jsonValue);
    MapStateStartedEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The size of the array for Map state iterations.</p>
     */
    inline int GetLength() const{ return m_length; }

    /**
     * <p>The size of the array for Map state iterations.</p>
     */
    inline bool LengthHasBeenSet() const { return m_lengthHasBeenSet; }

    /**
     * <p>The size of the array for Map state iterations.</p>
     */
    inline void SetLength(int value) { m_lengthHasBeenSet = true; m_length = value; }

    /**
     * <p>The size of the array for Map state iterations.</p>
     */
    inline MapStateStartedEventDetails& WithLength(int value) { SetLength(value); return *this;}

  private:

    int m_length;
    bool m_lengthHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws

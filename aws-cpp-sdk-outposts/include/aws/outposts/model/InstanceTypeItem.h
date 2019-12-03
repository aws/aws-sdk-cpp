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
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
namespace Outposts
{
namespace Model
{

  /**
   * <p>Information about an instance type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/InstanceTypeItem">AWS
   * API Reference</a></p>
   */
  class AWS_OUTPOSTS_API InstanceTypeItem
  {
  public:
    InstanceTypeItem();
    InstanceTypeItem(Aws::Utils::Json::JsonView jsonValue);
    InstanceTypeItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    
    inline InstanceTypeItem& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    
    inline InstanceTypeItem& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    
    inline InstanceTypeItem& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}

  private:

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws

/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/codedeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/EC2TagFilterType.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace codedeploy
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_CODEDEPLOY_API EC2TagFilter
  {
  public:
    EC2TagFilter();
    EC2TagFilter(const Aws::Utils::Json::JsonValue& jsonValue);
    EC2TagFilter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetKey() const{ return m_key; }
    
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    
    inline EC2TagFilter&  WithKey(const Aws::String& value) { SetKey(value); return *this;}

    
    inline EC2TagFilter& WithKey(const char* value) { SetKey(value); return *this;}

    
    inline const Aws::String& GetValue() const{ return m_value; }
    
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    
    inline EC2TagFilter&  WithValue(const Aws::String& value) { SetValue(value); return *this;}

    
    inline EC2TagFilter& WithValue(const char* value) { SetValue(value); return *this;}

    
    inline const EC2TagFilterType& GetType() const{ return m_type; }
    
    inline void SetType(const EC2TagFilterType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline EC2TagFilter&  WithType(const EC2TagFilterType& value) { SetType(value); return *this;}

  private:
    Aws::String m_key;
    bool m_keyHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
    EC2TagFilterType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws

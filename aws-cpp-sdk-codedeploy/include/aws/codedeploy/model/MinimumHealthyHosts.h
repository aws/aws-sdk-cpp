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
#include <aws/codedeploy/model/MinimumHealthyHostsType.h>

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
  class AWS_CODEDEPLOY_API MinimumHealthyHosts
  {
  public:
    MinimumHealthyHosts();
    MinimumHealthyHosts(const Aws::Utils::Json::JsonValue& jsonValue);
    MinimumHealthyHosts& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline long GetValue() const{ return m_value; }
    
    inline void SetValue(long value) { m_valueHasBeenSet = true; m_value = value; }

    
    inline MinimumHealthyHosts&  WithValue(long value) { SetValue(value); return *this;}

    
    inline const MinimumHealthyHostsType& GetType() const{ return m_type; }
    
    inline void SetType(const MinimumHealthyHostsType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline MinimumHealthyHosts&  WithType(const MinimumHealthyHostsType& value) { SetType(value); return *this;}

  private:
    long m_value;
    bool m_valueHasBeenSet;
    MinimumHealthyHostsType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws

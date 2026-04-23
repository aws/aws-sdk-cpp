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
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{

  class AWS_ELASTICLOADBALANCINGV2_API QueryStringKeyValuePair
  {
  public:
    QueryStringKeyValuePair();
    QueryStringKeyValuePair(const Aws::Utils::Xml::XmlNode& xmlNode);
    QueryStringKeyValuePair& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const Aws::String& GetKey() const{ return m_key; }

    
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    
    inline QueryStringKeyValuePair& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    
    inline QueryStringKeyValuePair& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    
    inline QueryStringKeyValuePair& WithKey(const char* value) { SetKey(value); return *this;}


    
    inline const Aws::String& GetValue() const{ return m_value; }

    
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    
    inline QueryStringKeyValuePair& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    
    inline QueryStringKeyValuePair& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    
    inline QueryStringKeyValuePair& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws

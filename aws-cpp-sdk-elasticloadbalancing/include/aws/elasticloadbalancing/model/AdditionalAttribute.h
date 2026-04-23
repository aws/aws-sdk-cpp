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
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
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
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>This data type is reserved.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/AdditionalAttribute">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCING_API AdditionalAttribute
  {
  public:
    AdditionalAttribute();
    AdditionalAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AdditionalAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>This parameter is reserved.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>This parameter is reserved.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>This parameter is reserved.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>This parameter is reserved.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>This parameter is reserved.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>This parameter is reserved.</p>
     */
    inline AdditionalAttribute& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>This parameter is reserved.</p>
     */
    inline AdditionalAttribute& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>This parameter is reserved.</p>
     */
    inline AdditionalAttribute& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>This parameter is reserved.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>This parameter is reserved.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>This parameter is reserved.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>This parameter is reserved.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>This parameter is reserved.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>This parameter is reserved.</p>
     */
    inline AdditionalAttribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>This parameter is reserved.</p>
     */
    inline AdditionalAttribute& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>This parameter is reserved.</p>
     */
    inline AdditionalAttribute& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws

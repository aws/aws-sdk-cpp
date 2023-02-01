/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
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
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>Context information that enables CloudFormation to uniquely identify a
   * resource. CloudFormation uses context key-value pairs in cases where a
   * resource's logical and physical IDs aren't enough to uniquely identify that
   * resource. Each context key-value pair specifies a resource that contains the
   * targeted resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/PhysicalResourceIdContextKeyValuePair">AWS
   * API Reference</a></p>
   */
  class PhysicalResourceIdContextKeyValuePair
  {
  public:
    AWS_CLOUDFORMATION_API PhysicalResourceIdContextKeyValuePair();
    AWS_CLOUDFORMATION_API PhysicalResourceIdContextKeyValuePair(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API PhysicalResourceIdContextKeyValuePair& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The resource context key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The resource context key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The resource context key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The resource context key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The resource context key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The resource context key.</p>
     */
    inline PhysicalResourceIdContextKeyValuePair& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The resource context key.</p>
     */
    inline PhysicalResourceIdContextKeyValuePair& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The resource context key.</p>
     */
    inline PhysicalResourceIdContextKeyValuePair& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The resource context value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The resource context value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The resource context value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The resource context value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The resource context value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The resource context value.</p>
     */
    inline PhysicalResourceIdContextKeyValuePair& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The resource context value.</p>
     */
    inline PhysicalResourceIdContextKeyValuePair& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The resource context value.</p>
     */
    inline PhysicalResourceIdContextKeyValuePair& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws

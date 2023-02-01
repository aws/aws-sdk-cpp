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
   * <p>The Tag type enables you to specify a key-value pair that can be used to
   * store information about an CloudFormation stack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/Tag">AWS
   * API Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_CLOUDFORMATION_API Tag();
    AWS_CLOUDFORMATION_API Tag(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API Tag& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p> <i>Required</i>. A string used to identify this tag. You can specify a
     * maximum of 128 characters for a tag key. Tags owned by Amazon Web Services
     * (Amazon Web Services) have the reserved prefix: <code>aws:</code>.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p> <i>Required</i>. A string used to identify this tag. You can specify a
     * maximum of 128 characters for a tag key. Tags owned by Amazon Web Services
     * (Amazon Web Services) have the reserved prefix: <code>aws:</code>.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p> <i>Required</i>. A string used to identify this tag. You can specify a
     * maximum of 128 characters for a tag key. Tags owned by Amazon Web Services
     * (Amazon Web Services) have the reserved prefix: <code>aws:</code>.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p> <i>Required</i>. A string used to identify this tag. You can specify a
     * maximum of 128 characters for a tag key. Tags owned by Amazon Web Services
     * (Amazon Web Services) have the reserved prefix: <code>aws:</code>.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p> <i>Required</i>. A string used to identify this tag. You can specify a
     * maximum of 128 characters for a tag key. Tags owned by Amazon Web Services
     * (Amazon Web Services) have the reserved prefix: <code>aws:</code>.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p> <i>Required</i>. A string used to identify this tag. You can specify a
     * maximum of 128 characters for a tag key. Tags owned by Amazon Web Services
     * (Amazon Web Services) have the reserved prefix: <code>aws:</code>.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p> <i>Required</i>. A string used to identify this tag. You can specify a
     * maximum of 128 characters for a tag key. Tags owned by Amazon Web Services
     * (Amazon Web Services) have the reserved prefix: <code>aws:</code>.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p> <i>Required</i>. A string used to identify this tag. You can specify a
     * maximum of 128 characters for a tag key. Tags owned by Amazon Web Services
     * (Amazon Web Services) have the reserved prefix: <code>aws:</code>.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p> <i>Required</i>. A string containing the value for this tag. You can specify
     * a maximum of 256 characters for a tag value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p> <i>Required</i>. A string containing the value for this tag. You can specify
     * a maximum of 256 characters for a tag value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p> <i>Required</i>. A string containing the value for this tag. You can specify
     * a maximum of 256 characters for a tag value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p> <i>Required</i>. A string containing the value for this tag. You can specify
     * a maximum of 256 characters for a tag value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p> <i>Required</i>. A string containing the value for this tag. You can specify
     * a maximum of 256 characters for a tag value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p> <i>Required</i>. A string containing the value for this tag. You can specify
     * a maximum of 256 characters for a tag value.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p> <i>Required</i>. A string containing the value for this tag. You can specify
     * a maximum of 256 characters for a tag value.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p> <i>Required</i>. A string containing the value for this tag. You can specify
     * a maximum of 256 characters for a tag value.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws

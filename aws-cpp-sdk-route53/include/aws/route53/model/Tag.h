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
#include <aws/route53/Route53_EXPORTS.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about a tag that you want to add or
   * edit for the specified health check or hosted zone.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/Tag">AWS API
   * Reference</a></p>
   */
  class AWS_ROUTE53_API Tag
  {
  public:
    Tag();
    Tag(const Aws::Utils::Xml::XmlNode& xmlNode);
    Tag& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The value of <code>Key</code> depends on the operation that you want to
     * perform:</p> <ul> <li> <p> <b>Add a tag to a health check or hosted zone</b>:
     * <code>Key</code> is the name that you want to give the new tag.</p> </li> <li>
     * <p> <b>Edit a tag</b>: <code>Key</code> is the name of the tag that you want to
     * change the <code>Value</code> for.</p> </li> <li> <p> <b> Delete a key</b>:
     * <code>Key</code> is the name of the tag you want to remove.</p> </li> <li> <p>
     * <b>Give a name to a health check</b>: Edit the default <code>Name</code> tag. In
     * the Amazon Route 53 console, the list of your health checks includes a
     * <b>Name</b> column that lets you see the name that you've given to each health
     * check.</p> </li> </ul>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The value of <code>Key</code> depends on the operation that you want to
     * perform:</p> <ul> <li> <p> <b>Add a tag to a health check or hosted zone</b>:
     * <code>Key</code> is the name that you want to give the new tag.</p> </li> <li>
     * <p> <b>Edit a tag</b>: <code>Key</code> is the name of the tag that you want to
     * change the <code>Value</code> for.</p> </li> <li> <p> <b> Delete a key</b>:
     * <code>Key</code> is the name of the tag you want to remove.</p> </li> <li> <p>
     * <b>Give a name to a health check</b>: Edit the default <code>Name</code> tag. In
     * the Amazon Route 53 console, the list of your health checks includes a
     * <b>Name</b> column that lets you see the name that you've given to each health
     * check.</p> </li> </ul>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The value of <code>Key</code> depends on the operation that you want to
     * perform:</p> <ul> <li> <p> <b>Add a tag to a health check or hosted zone</b>:
     * <code>Key</code> is the name that you want to give the new tag.</p> </li> <li>
     * <p> <b>Edit a tag</b>: <code>Key</code> is the name of the tag that you want to
     * change the <code>Value</code> for.</p> </li> <li> <p> <b> Delete a key</b>:
     * <code>Key</code> is the name of the tag you want to remove.</p> </li> <li> <p>
     * <b>Give a name to a health check</b>: Edit the default <code>Name</code> tag. In
     * the Amazon Route 53 console, the list of your health checks includes a
     * <b>Name</b> column that lets you see the name that you've given to each health
     * check.</p> </li> </ul>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The value of <code>Key</code> depends on the operation that you want to
     * perform:</p> <ul> <li> <p> <b>Add a tag to a health check or hosted zone</b>:
     * <code>Key</code> is the name that you want to give the new tag.</p> </li> <li>
     * <p> <b>Edit a tag</b>: <code>Key</code> is the name of the tag that you want to
     * change the <code>Value</code> for.</p> </li> <li> <p> <b> Delete a key</b>:
     * <code>Key</code> is the name of the tag you want to remove.</p> </li> <li> <p>
     * <b>Give a name to a health check</b>: Edit the default <code>Name</code> tag. In
     * the Amazon Route 53 console, the list of your health checks includes a
     * <b>Name</b> column that lets you see the name that you've given to each health
     * check.</p> </li> </ul>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The value of <code>Key</code> depends on the operation that you want to
     * perform:</p> <ul> <li> <p> <b>Add a tag to a health check or hosted zone</b>:
     * <code>Key</code> is the name that you want to give the new tag.</p> </li> <li>
     * <p> <b>Edit a tag</b>: <code>Key</code> is the name of the tag that you want to
     * change the <code>Value</code> for.</p> </li> <li> <p> <b> Delete a key</b>:
     * <code>Key</code> is the name of the tag you want to remove.</p> </li> <li> <p>
     * <b>Give a name to a health check</b>: Edit the default <code>Name</code> tag. In
     * the Amazon Route 53 console, the list of your health checks includes a
     * <b>Name</b> column that lets you see the name that you've given to each health
     * check.</p> </li> </ul>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The value of <code>Key</code> depends on the operation that you want to
     * perform:</p> <ul> <li> <p> <b>Add a tag to a health check or hosted zone</b>:
     * <code>Key</code> is the name that you want to give the new tag.</p> </li> <li>
     * <p> <b>Edit a tag</b>: <code>Key</code> is the name of the tag that you want to
     * change the <code>Value</code> for.</p> </li> <li> <p> <b> Delete a key</b>:
     * <code>Key</code> is the name of the tag you want to remove.</p> </li> <li> <p>
     * <b>Give a name to a health check</b>: Edit the default <code>Name</code> tag. In
     * the Amazon Route 53 console, the list of your health checks includes a
     * <b>Name</b> column that lets you see the name that you've given to each health
     * check.</p> </li> </ul>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The value of <code>Key</code> depends on the operation that you want to
     * perform:</p> <ul> <li> <p> <b>Add a tag to a health check or hosted zone</b>:
     * <code>Key</code> is the name that you want to give the new tag.</p> </li> <li>
     * <p> <b>Edit a tag</b>: <code>Key</code> is the name of the tag that you want to
     * change the <code>Value</code> for.</p> </li> <li> <p> <b> Delete a key</b>:
     * <code>Key</code> is the name of the tag you want to remove.</p> </li> <li> <p>
     * <b>Give a name to a health check</b>: Edit the default <code>Name</code> tag. In
     * the Amazon Route 53 console, the list of your health checks includes a
     * <b>Name</b> column that lets you see the name that you've given to each health
     * check.</p> </li> </ul>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The value of <code>Key</code> depends on the operation that you want to
     * perform:</p> <ul> <li> <p> <b>Add a tag to a health check or hosted zone</b>:
     * <code>Key</code> is the name that you want to give the new tag.</p> </li> <li>
     * <p> <b>Edit a tag</b>: <code>Key</code> is the name of the tag that you want to
     * change the <code>Value</code> for.</p> </li> <li> <p> <b> Delete a key</b>:
     * <code>Key</code> is the name of the tag you want to remove.</p> </li> <li> <p>
     * <b>Give a name to a health check</b>: Edit the default <code>Name</code> tag. In
     * the Amazon Route 53 console, the list of your health checks includes a
     * <b>Name</b> column that lets you see the name that you've given to each health
     * check.</p> </li> </ul>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value of <code>Value</code> depends on the operation that you want to
     * perform:</p> <ul> <li> <p> <b>Add a tag to a health check or hosted zone</b>:
     * <code>Value</code> is the value that you want to give the new tag.</p> </li>
     * <li> <p> <b>Edit a tag</b>: <code>Value</code> is the new value that you want to
     * assign the tag.</p> </li> </ul>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of <code>Value</code> depends on the operation that you want to
     * perform:</p> <ul> <li> <p> <b>Add a tag to a health check or hosted zone</b>:
     * <code>Value</code> is the value that you want to give the new tag.</p> </li>
     * <li> <p> <b>Edit a tag</b>: <code>Value</code> is the new value that you want to
     * assign the tag.</p> </li> </ul>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of <code>Value</code> depends on the operation that you want to
     * perform:</p> <ul> <li> <p> <b>Add a tag to a health check or hosted zone</b>:
     * <code>Value</code> is the value that you want to give the new tag.</p> </li>
     * <li> <p> <b>Edit a tag</b>: <code>Value</code> is the new value that you want to
     * assign the tag.</p> </li> </ul>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of <code>Value</code> depends on the operation that you want to
     * perform:</p> <ul> <li> <p> <b>Add a tag to a health check or hosted zone</b>:
     * <code>Value</code> is the value that you want to give the new tag.</p> </li>
     * <li> <p> <b>Edit a tag</b>: <code>Value</code> is the new value that you want to
     * assign the tag.</p> </li> </ul>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of <code>Value</code> depends on the operation that you want to
     * perform:</p> <ul> <li> <p> <b>Add a tag to a health check or hosted zone</b>:
     * <code>Value</code> is the value that you want to give the new tag.</p> </li>
     * <li> <p> <b>Edit a tag</b>: <code>Value</code> is the new value that you want to
     * assign the tag.</p> </li> </ul>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of <code>Value</code> depends on the operation that you want to
     * perform:</p> <ul> <li> <p> <b>Add a tag to a health check or hosted zone</b>:
     * <code>Value</code> is the value that you want to give the new tag.</p> </li>
     * <li> <p> <b>Edit a tag</b>: <code>Value</code> is the new value that you want to
     * assign the tag.</p> </li> </ul>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of <code>Value</code> depends on the operation that you want to
     * perform:</p> <ul> <li> <p> <b>Add a tag to a health check or hosted zone</b>:
     * <code>Value</code> is the value that you want to give the new tag.</p> </li>
     * <li> <p> <b>Edit a tag</b>: <code>Value</code> is the new value that you want to
     * assign the tag.</p> </li> </ul>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of <code>Value</code> depends on the operation that you want to
     * perform:</p> <ul> <li> <p> <b>Add a tag to a health check or hosted zone</b>:
     * <code>Value</code> is the value that you want to give the new tag.</p> </li>
     * <li> <p> <b>Edit a tag</b>: <code>Value</code> is the new value that you want to
     * assign the tag.</p> </li> </ul>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws

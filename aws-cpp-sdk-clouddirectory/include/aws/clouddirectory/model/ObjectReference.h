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
#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Reference that identifies an object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2016-05-10/ObjectReference">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API ObjectReference
  {
  public:
    ObjectReference();
    ObjectReference(const Aws::Utils::Json::JsonValue& jsonValue);
    ObjectReference& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Allows you to specify an object. You can identify an object in one of the
     * following ways:</p> <ul> <li> <p> <i>$ObjectIdentifier</i> - Identifies the
     * object by <code>ObjectIdentifier</code> </p> </li> <li> <p> <i>/some/path</i> -
     * Identifies the object based on path</p> </li> <li> <p>
     * <i>#SomeBatchReference</i> - Identifies the object in a batch call</p> </li>
     * </ul>
     */
    inline const Aws::String& GetSelector() const{ return m_selector; }

    /**
     * <p>Allows you to specify an object. You can identify an object in one of the
     * following ways:</p> <ul> <li> <p> <i>$ObjectIdentifier</i> - Identifies the
     * object by <code>ObjectIdentifier</code> </p> </li> <li> <p> <i>/some/path</i> -
     * Identifies the object based on path</p> </li> <li> <p>
     * <i>#SomeBatchReference</i> - Identifies the object in a batch call</p> </li>
     * </ul>
     */
    inline void SetSelector(const Aws::String& value) { m_selectorHasBeenSet = true; m_selector = value; }

    /**
     * <p>Allows you to specify an object. You can identify an object in one of the
     * following ways:</p> <ul> <li> <p> <i>$ObjectIdentifier</i> - Identifies the
     * object by <code>ObjectIdentifier</code> </p> </li> <li> <p> <i>/some/path</i> -
     * Identifies the object based on path</p> </li> <li> <p>
     * <i>#SomeBatchReference</i> - Identifies the object in a batch call</p> </li>
     * </ul>
     */
    inline void SetSelector(Aws::String&& value) { m_selectorHasBeenSet = true; m_selector = value; }

    /**
     * <p>Allows you to specify an object. You can identify an object in one of the
     * following ways:</p> <ul> <li> <p> <i>$ObjectIdentifier</i> - Identifies the
     * object by <code>ObjectIdentifier</code> </p> </li> <li> <p> <i>/some/path</i> -
     * Identifies the object based on path</p> </li> <li> <p>
     * <i>#SomeBatchReference</i> - Identifies the object in a batch call</p> </li>
     * </ul>
     */
    inline void SetSelector(const char* value) { m_selectorHasBeenSet = true; m_selector.assign(value); }

    /**
     * <p>Allows you to specify an object. You can identify an object in one of the
     * following ways:</p> <ul> <li> <p> <i>$ObjectIdentifier</i> - Identifies the
     * object by <code>ObjectIdentifier</code> </p> </li> <li> <p> <i>/some/path</i> -
     * Identifies the object based on path</p> </li> <li> <p>
     * <i>#SomeBatchReference</i> - Identifies the object in a batch call</p> </li>
     * </ul>
     */
    inline ObjectReference& WithSelector(const Aws::String& value) { SetSelector(value); return *this;}

    /**
     * <p>Allows you to specify an object. You can identify an object in one of the
     * following ways:</p> <ul> <li> <p> <i>$ObjectIdentifier</i> - Identifies the
     * object by <code>ObjectIdentifier</code> </p> </li> <li> <p> <i>/some/path</i> -
     * Identifies the object based on path</p> </li> <li> <p>
     * <i>#SomeBatchReference</i> - Identifies the object in a batch call</p> </li>
     * </ul>
     */
    inline ObjectReference& WithSelector(Aws::String&& value) { SetSelector(value); return *this;}

    /**
     * <p>Allows you to specify an object. You can identify an object in one of the
     * following ways:</p> <ul> <li> <p> <i>$ObjectIdentifier</i> - Identifies the
     * object by <code>ObjectIdentifier</code> </p> </li> <li> <p> <i>/some/path</i> -
     * Identifies the object based on path</p> </li> <li> <p>
     * <i>#SomeBatchReference</i> - Identifies the object in a batch call</p> </li>
     * </ul>
     */
    inline ObjectReference& WithSelector(const char* value) { SetSelector(value); return *this;}

  private:
    Aws::String m_selector;
    bool m_selectorHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws

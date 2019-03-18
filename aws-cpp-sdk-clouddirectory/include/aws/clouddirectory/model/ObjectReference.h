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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>The reference that identifies an object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ObjectReference">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API ObjectReference
  {
  public:
    ObjectReference();
    ObjectReference(Aws::Utils::Json::JsonView jsonValue);
    ObjectReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A path selector supports easy selection of an object by the parent/child
     * links leading to it from the directory root. Use the link names from each
     * parent/child link to construct the path. Path selectors start with a slash (/)
     * and link names are separated by slashes. For more information about paths, see
     * <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_access_objects.html">Access
     * Objects</a>. You can identify an object in one of the following ways:</p> <ul>
     * <li> <p> <i>$ObjectIdentifier</i> - An object identifier is an opaque string
     * provided by Amazon Cloud Directory. When creating objects, the system will
     * provide you with the identifier of the created object. An object’s identifier is
     * immutable and no two objects will ever share the same object identifier</p>
     * </li> <li> <p> <i>/some/path</i> - Identifies the object based on path</p> </li>
     * <li> <p> <i>#SomeBatchReference</i> - Identifies the object in a batch call</p>
     * </li> </ul>
     */
    inline const Aws::String& GetSelector() const{ return m_selector; }

    /**
     * <p>A path selector supports easy selection of an object by the parent/child
     * links leading to it from the directory root. Use the link names from each
     * parent/child link to construct the path. Path selectors start with a slash (/)
     * and link names are separated by slashes. For more information about paths, see
     * <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_access_objects.html">Access
     * Objects</a>. You can identify an object in one of the following ways:</p> <ul>
     * <li> <p> <i>$ObjectIdentifier</i> - An object identifier is an opaque string
     * provided by Amazon Cloud Directory. When creating objects, the system will
     * provide you with the identifier of the created object. An object’s identifier is
     * immutable and no two objects will ever share the same object identifier</p>
     * </li> <li> <p> <i>/some/path</i> - Identifies the object based on path</p> </li>
     * <li> <p> <i>#SomeBatchReference</i> - Identifies the object in a batch call</p>
     * </li> </ul>
     */
    inline bool SelectorHasBeenSet() const { return m_selectorHasBeenSet; }

    /**
     * <p>A path selector supports easy selection of an object by the parent/child
     * links leading to it from the directory root. Use the link names from each
     * parent/child link to construct the path. Path selectors start with a slash (/)
     * and link names are separated by slashes. For more information about paths, see
     * <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_access_objects.html">Access
     * Objects</a>. You can identify an object in one of the following ways:</p> <ul>
     * <li> <p> <i>$ObjectIdentifier</i> - An object identifier is an opaque string
     * provided by Amazon Cloud Directory. When creating objects, the system will
     * provide you with the identifier of the created object. An object’s identifier is
     * immutable and no two objects will ever share the same object identifier</p>
     * </li> <li> <p> <i>/some/path</i> - Identifies the object based on path</p> </li>
     * <li> <p> <i>#SomeBatchReference</i> - Identifies the object in a batch call</p>
     * </li> </ul>
     */
    inline void SetSelector(const Aws::String& value) { m_selectorHasBeenSet = true; m_selector = value; }

    /**
     * <p>A path selector supports easy selection of an object by the parent/child
     * links leading to it from the directory root. Use the link names from each
     * parent/child link to construct the path. Path selectors start with a slash (/)
     * and link names are separated by slashes. For more information about paths, see
     * <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_access_objects.html">Access
     * Objects</a>. You can identify an object in one of the following ways:</p> <ul>
     * <li> <p> <i>$ObjectIdentifier</i> - An object identifier is an opaque string
     * provided by Amazon Cloud Directory. When creating objects, the system will
     * provide you with the identifier of the created object. An object’s identifier is
     * immutable and no two objects will ever share the same object identifier</p>
     * </li> <li> <p> <i>/some/path</i> - Identifies the object based on path</p> </li>
     * <li> <p> <i>#SomeBatchReference</i> - Identifies the object in a batch call</p>
     * </li> </ul>
     */
    inline void SetSelector(Aws::String&& value) { m_selectorHasBeenSet = true; m_selector = std::move(value); }

    /**
     * <p>A path selector supports easy selection of an object by the parent/child
     * links leading to it from the directory root. Use the link names from each
     * parent/child link to construct the path. Path selectors start with a slash (/)
     * and link names are separated by slashes. For more information about paths, see
     * <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_access_objects.html">Access
     * Objects</a>. You can identify an object in one of the following ways:</p> <ul>
     * <li> <p> <i>$ObjectIdentifier</i> - An object identifier is an opaque string
     * provided by Amazon Cloud Directory. When creating objects, the system will
     * provide you with the identifier of the created object. An object’s identifier is
     * immutable and no two objects will ever share the same object identifier</p>
     * </li> <li> <p> <i>/some/path</i> - Identifies the object based on path</p> </li>
     * <li> <p> <i>#SomeBatchReference</i> - Identifies the object in a batch call</p>
     * </li> </ul>
     */
    inline void SetSelector(const char* value) { m_selectorHasBeenSet = true; m_selector.assign(value); }

    /**
     * <p>A path selector supports easy selection of an object by the parent/child
     * links leading to it from the directory root. Use the link names from each
     * parent/child link to construct the path. Path selectors start with a slash (/)
     * and link names are separated by slashes. For more information about paths, see
     * <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_access_objects.html">Access
     * Objects</a>. You can identify an object in one of the following ways:</p> <ul>
     * <li> <p> <i>$ObjectIdentifier</i> - An object identifier is an opaque string
     * provided by Amazon Cloud Directory. When creating objects, the system will
     * provide you with the identifier of the created object. An object’s identifier is
     * immutable and no two objects will ever share the same object identifier</p>
     * </li> <li> <p> <i>/some/path</i> - Identifies the object based on path</p> </li>
     * <li> <p> <i>#SomeBatchReference</i> - Identifies the object in a batch call</p>
     * </li> </ul>
     */
    inline ObjectReference& WithSelector(const Aws::String& value) { SetSelector(value); return *this;}

    /**
     * <p>A path selector supports easy selection of an object by the parent/child
     * links leading to it from the directory root. Use the link names from each
     * parent/child link to construct the path. Path selectors start with a slash (/)
     * and link names are separated by slashes. For more information about paths, see
     * <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_access_objects.html">Access
     * Objects</a>. You can identify an object in one of the following ways:</p> <ul>
     * <li> <p> <i>$ObjectIdentifier</i> - An object identifier is an opaque string
     * provided by Amazon Cloud Directory. When creating objects, the system will
     * provide you with the identifier of the created object. An object’s identifier is
     * immutable and no two objects will ever share the same object identifier</p>
     * </li> <li> <p> <i>/some/path</i> - Identifies the object based on path</p> </li>
     * <li> <p> <i>#SomeBatchReference</i> - Identifies the object in a batch call</p>
     * </li> </ul>
     */
    inline ObjectReference& WithSelector(Aws::String&& value) { SetSelector(std::move(value)); return *this;}

    /**
     * <p>A path selector supports easy selection of an object by the parent/child
     * links leading to it from the directory root. Use the link names from each
     * parent/child link to construct the path. Path selectors start with a slash (/)
     * and link names are separated by slashes. For more information about paths, see
     * <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_access_objects.html">Access
     * Objects</a>. You can identify an object in one of the following ways:</p> <ul>
     * <li> <p> <i>$ObjectIdentifier</i> - An object identifier is an opaque string
     * provided by Amazon Cloud Directory. When creating objects, the system will
     * provide you with the identifier of the created object. An object’s identifier is
     * immutable and no two objects will ever share the same object identifier</p>
     * </li> <li> <p> <i>/some/path</i> - Identifies the object based on path</p> </li>
     * <li> <p> <i>#SomeBatchReference</i> - Identifies the object in a batch call</p>
     * </li> </ul>
     */
    inline ObjectReference& WithSelector(const char* value) { SetSelector(value); return *this;}

  private:

    Aws::String m_selector;
    bool m_selectorHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws

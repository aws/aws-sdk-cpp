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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Returns the path to the <code>ObjectIdentifiers</code> that is associated
   * with the directory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/PathToObjectIdentifiers">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API PathToObjectIdentifiers
  {
  public:
    PathToObjectIdentifiers();
    PathToObjectIdentifiers(Aws::Utils::Json::JsonView jsonValue);
    PathToObjectIdentifiers& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path that is used to identify the object starting from directory
     * root.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path that is used to identify the object starting from directory
     * root.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path that is used to identify the object starting from directory
     * root.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path that is used to identify the object starting from directory
     * root.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path that is used to identify the object starting from directory
     * root.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path that is used to identify the object starting from directory
     * root.</p>
     */
    inline PathToObjectIdentifiers& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path that is used to identify the object starting from directory
     * root.</p>
     */
    inline PathToObjectIdentifiers& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path that is used to identify the object starting from directory
     * root.</p>
     */
    inline PathToObjectIdentifiers& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>Lists <code>ObjectIdentifiers</code> starting from directory root to the
     * object in the request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetObjectIdentifiers() const{ return m_objectIdentifiers; }

    /**
     * <p>Lists <code>ObjectIdentifiers</code> starting from directory root to the
     * object in the request.</p>
     */
    inline bool ObjectIdentifiersHasBeenSet() const { return m_objectIdentifiersHasBeenSet; }

    /**
     * <p>Lists <code>ObjectIdentifiers</code> starting from directory root to the
     * object in the request.</p>
     */
    inline void SetObjectIdentifiers(const Aws::Vector<Aws::String>& value) { m_objectIdentifiersHasBeenSet = true; m_objectIdentifiers = value; }

    /**
     * <p>Lists <code>ObjectIdentifiers</code> starting from directory root to the
     * object in the request.</p>
     */
    inline void SetObjectIdentifiers(Aws::Vector<Aws::String>&& value) { m_objectIdentifiersHasBeenSet = true; m_objectIdentifiers = std::move(value); }

    /**
     * <p>Lists <code>ObjectIdentifiers</code> starting from directory root to the
     * object in the request.</p>
     */
    inline PathToObjectIdentifiers& WithObjectIdentifiers(const Aws::Vector<Aws::String>& value) { SetObjectIdentifiers(value); return *this;}

    /**
     * <p>Lists <code>ObjectIdentifiers</code> starting from directory root to the
     * object in the request.</p>
     */
    inline PathToObjectIdentifiers& WithObjectIdentifiers(Aws::Vector<Aws::String>&& value) { SetObjectIdentifiers(std::move(value)); return *this;}

    /**
     * <p>Lists <code>ObjectIdentifiers</code> starting from directory root to the
     * object in the request.</p>
     */
    inline PathToObjectIdentifiers& AddObjectIdentifiers(const Aws::String& value) { m_objectIdentifiersHasBeenSet = true; m_objectIdentifiers.push_back(value); return *this; }

    /**
     * <p>Lists <code>ObjectIdentifiers</code> starting from directory root to the
     * object in the request.</p>
     */
    inline PathToObjectIdentifiers& AddObjectIdentifiers(Aws::String&& value) { m_objectIdentifiersHasBeenSet = true; m_objectIdentifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>Lists <code>ObjectIdentifiers</code> starting from directory root to the
     * object in the request.</p>
     */
    inline PathToObjectIdentifiers& AddObjectIdentifiers(const char* value) { m_objectIdentifiersHasBeenSet = true; m_objectIdentifiers.push_back(value); return *this; }

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet;

    Aws::Vector<Aws::String> m_objectIdentifiers;
    bool m_objectIdentifiersHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws

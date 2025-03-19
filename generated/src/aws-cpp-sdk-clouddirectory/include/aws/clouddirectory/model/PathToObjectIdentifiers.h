/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class PathToObjectIdentifiers
  {
  public:
    AWS_CLOUDDIRECTORY_API PathToObjectIdentifiers() = default;
    AWS_CLOUDDIRECTORY_API PathToObjectIdentifiers(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API PathToObjectIdentifiers& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path that is used to identify the object starting from directory
     * root.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    PathToObjectIdentifiers& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists <code>ObjectIdentifiers</code> starting from directory root to the
     * object in the request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetObjectIdentifiers() const { return m_objectIdentifiers; }
    inline bool ObjectIdentifiersHasBeenSet() const { return m_objectIdentifiersHasBeenSet; }
    template<typename ObjectIdentifiersT = Aws::Vector<Aws::String>>
    void SetObjectIdentifiers(ObjectIdentifiersT&& value) { m_objectIdentifiersHasBeenSet = true; m_objectIdentifiers = std::forward<ObjectIdentifiersT>(value); }
    template<typename ObjectIdentifiersT = Aws::Vector<Aws::String>>
    PathToObjectIdentifiers& WithObjectIdentifiers(ObjectIdentifiersT&& value) { SetObjectIdentifiers(std::forward<ObjectIdentifiersT>(value)); return *this;}
    template<typename ObjectIdentifiersT = Aws::String>
    PathToObjectIdentifiers& AddObjectIdentifiers(ObjectIdentifiersT&& value) { m_objectIdentifiersHasBeenSet = true; m_objectIdentifiers.emplace_back(std::forward<ObjectIdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::Vector<Aws::String> m_objectIdentifiers;
    bool m_objectIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws

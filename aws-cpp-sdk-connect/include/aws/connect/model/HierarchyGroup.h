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
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/HierarchyPath.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A <code>HierarchyGroup</code> object that contains information about a
   * hierarchy group in your Amazon Connect instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HierarchyGroup">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API HierarchyGroup
  {
  public:
    HierarchyGroup();
    HierarchyGroup(Aws::Utils::Json::JsonView jsonValue);
    HierarchyGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the hierarchy group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the hierarchy group.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the hierarchy group.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the hierarchy group.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the hierarchy group.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the hierarchy group.</p>
     */
    inline HierarchyGroup& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the hierarchy group.</p>
     */
    inline HierarchyGroup& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the hierarchy group.</p>
     */
    inline HierarchyGroup& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the hierarchy group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the hierarchy group.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the hierarchy group.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the hierarchy group.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the hierarchy group.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the hierarchy group.</p>
     */
    inline HierarchyGroup& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the hierarchy group.</p>
     */
    inline HierarchyGroup& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the hierarchy group.</p>
     */
    inline HierarchyGroup& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the hierarchy group in your instance.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the hierarchy group in your instance.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the hierarchy group in your instance.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the hierarchy group in your instance.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the hierarchy group in your instance.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the hierarchy group in your instance.</p>
     */
    inline HierarchyGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the hierarchy group in your instance.</p>
     */
    inline HierarchyGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the hierarchy group in your instance.</p>
     */
    inline HierarchyGroup& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier for the level in the hierarchy group.</p>
     */
    inline const Aws::String& GetLevelId() const{ return m_levelId; }

    /**
     * <p>The identifier for the level in the hierarchy group.</p>
     */
    inline bool LevelIdHasBeenSet() const { return m_levelIdHasBeenSet; }

    /**
     * <p>The identifier for the level in the hierarchy group.</p>
     */
    inline void SetLevelId(const Aws::String& value) { m_levelIdHasBeenSet = true; m_levelId = value; }

    /**
     * <p>The identifier for the level in the hierarchy group.</p>
     */
    inline void SetLevelId(Aws::String&& value) { m_levelIdHasBeenSet = true; m_levelId = std::move(value); }

    /**
     * <p>The identifier for the level in the hierarchy group.</p>
     */
    inline void SetLevelId(const char* value) { m_levelIdHasBeenSet = true; m_levelId.assign(value); }

    /**
     * <p>The identifier for the level in the hierarchy group.</p>
     */
    inline HierarchyGroup& WithLevelId(const Aws::String& value) { SetLevelId(value); return *this;}

    /**
     * <p>The identifier for the level in the hierarchy group.</p>
     */
    inline HierarchyGroup& WithLevelId(Aws::String&& value) { SetLevelId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the level in the hierarchy group.</p>
     */
    inline HierarchyGroup& WithLevelId(const char* value) { SetLevelId(value); return *this;}


    /**
     * <p>A <code>HierarchyPath</code> object that contains information about the
     * levels in the hierarchy group.</p>
     */
    inline const HierarchyPath& GetHierarchyPath() const{ return m_hierarchyPath; }

    /**
     * <p>A <code>HierarchyPath</code> object that contains information about the
     * levels in the hierarchy group.</p>
     */
    inline bool HierarchyPathHasBeenSet() const { return m_hierarchyPathHasBeenSet; }

    /**
     * <p>A <code>HierarchyPath</code> object that contains information about the
     * levels in the hierarchy group.</p>
     */
    inline void SetHierarchyPath(const HierarchyPath& value) { m_hierarchyPathHasBeenSet = true; m_hierarchyPath = value; }

    /**
     * <p>A <code>HierarchyPath</code> object that contains information about the
     * levels in the hierarchy group.</p>
     */
    inline void SetHierarchyPath(HierarchyPath&& value) { m_hierarchyPathHasBeenSet = true; m_hierarchyPath = std::move(value); }

    /**
     * <p>A <code>HierarchyPath</code> object that contains information about the
     * levels in the hierarchy group.</p>
     */
    inline HierarchyGroup& WithHierarchyPath(const HierarchyPath& value) { SetHierarchyPath(value); return *this;}

    /**
     * <p>A <code>HierarchyPath</code> object that contains information about the
     * levels in the hierarchy group.</p>
     */
    inline HierarchyGroup& WithHierarchyPath(HierarchyPath&& value) { SetHierarchyPath(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_levelId;
    bool m_levelIdHasBeenSet;

    HierarchyPath m_hierarchyPath;
    bool m_hierarchyPathHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

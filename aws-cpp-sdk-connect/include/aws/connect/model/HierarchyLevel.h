﻿/*
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
   * <p>A <code>HierarchyLevel</code> object that contains information about the
   * levels in a hierarchy group, including ARN, Id, and Name.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HierarchyLevel">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API HierarchyLevel
  {
  public:
    HierarchyLevel();
    HierarchyLevel(Aws::Utils::Json::JsonView jsonValue);
    HierarchyLevel& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the hierarchy group level.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the hierarchy group level.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the hierarchy group level.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the hierarchy group level.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the hierarchy group level.</p>
     */
    inline HierarchyLevel& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the hierarchy group level.</p>
     */
    inline HierarchyLevel& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the hierarchy group level.</p>
     */
    inline HierarchyLevel& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ARN for the hierarchy group level.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN for the hierarchy group level.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN for the hierarchy group level.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN for the hierarchy group level.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN for the hierarchy group level.</p>
     */
    inline HierarchyLevel& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN for the hierarchy group level.</p>
     */
    inline HierarchyLevel& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the hierarchy group level.</p>
     */
    inline HierarchyLevel& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the hierarchy group level.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the hierarchy group level.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the hierarchy group level.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the hierarchy group level.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the hierarchy group level.</p>
     */
    inline HierarchyLevel& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the hierarchy group level.</p>
     */
    inline HierarchyLevel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the hierarchy group level.</p>
     */
    inline HierarchyLevel& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

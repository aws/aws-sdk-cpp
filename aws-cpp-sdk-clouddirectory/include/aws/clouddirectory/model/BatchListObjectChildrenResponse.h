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
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Represents the output of a <a>ListObjectChildren</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchListObjectChildrenResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchListObjectChildrenResponse
  {
  public:
    BatchListObjectChildrenResponse();
    BatchListObjectChildrenResponse(Aws::Utils::Json::JsonView jsonValue);
    BatchListObjectChildrenResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The children structure, which is a map with the key as the
     * <code>LinkName</code> and <code>ObjectIdentifier</code> as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetChildren() const{ return m_children; }

    /**
     * <p>The children structure, which is a map with the key as the
     * <code>LinkName</code> and <code>ObjectIdentifier</code> as the value.</p>
     */
    inline bool ChildrenHasBeenSet() const { return m_childrenHasBeenSet; }

    /**
     * <p>The children structure, which is a map with the key as the
     * <code>LinkName</code> and <code>ObjectIdentifier</code> as the value.</p>
     */
    inline void SetChildren(const Aws::Map<Aws::String, Aws::String>& value) { m_childrenHasBeenSet = true; m_children = value; }

    /**
     * <p>The children structure, which is a map with the key as the
     * <code>LinkName</code> and <code>ObjectIdentifier</code> as the value.</p>
     */
    inline void SetChildren(Aws::Map<Aws::String, Aws::String>&& value) { m_childrenHasBeenSet = true; m_children = std::move(value); }

    /**
     * <p>The children structure, which is a map with the key as the
     * <code>LinkName</code> and <code>ObjectIdentifier</code> as the value.</p>
     */
    inline BatchListObjectChildrenResponse& WithChildren(const Aws::Map<Aws::String, Aws::String>& value) { SetChildren(value); return *this;}

    /**
     * <p>The children structure, which is a map with the key as the
     * <code>LinkName</code> and <code>ObjectIdentifier</code> as the value.</p>
     */
    inline BatchListObjectChildrenResponse& WithChildren(Aws::Map<Aws::String, Aws::String>&& value) { SetChildren(std::move(value)); return *this;}

    /**
     * <p>The children structure, which is a map with the key as the
     * <code>LinkName</code> and <code>ObjectIdentifier</code> as the value.</p>
     */
    inline BatchListObjectChildrenResponse& AddChildren(const Aws::String& key, const Aws::String& value) { m_childrenHasBeenSet = true; m_children.emplace(key, value); return *this; }

    /**
     * <p>The children structure, which is a map with the key as the
     * <code>LinkName</code> and <code>ObjectIdentifier</code> as the value.</p>
     */
    inline BatchListObjectChildrenResponse& AddChildren(Aws::String&& key, const Aws::String& value) { m_childrenHasBeenSet = true; m_children.emplace(std::move(key), value); return *this; }

    /**
     * <p>The children structure, which is a map with the key as the
     * <code>LinkName</code> and <code>ObjectIdentifier</code> as the value.</p>
     */
    inline BatchListObjectChildrenResponse& AddChildren(const Aws::String& key, Aws::String&& value) { m_childrenHasBeenSet = true; m_children.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The children structure, which is a map with the key as the
     * <code>LinkName</code> and <code>ObjectIdentifier</code> as the value.</p>
     */
    inline BatchListObjectChildrenResponse& AddChildren(Aws::String&& key, Aws::String&& value) { m_childrenHasBeenSet = true; m_children.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The children structure, which is a map with the key as the
     * <code>LinkName</code> and <code>ObjectIdentifier</code> as the value.</p>
     */
    inline BatchListObjectChildrenResponse& AddChildren(const char* key, Aws::String&& value) { m_childrenHasBeenSet = true; m_children.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The children structure, which is a map with the key as the
     * <code>LinkName</code> and <code>ObjectIdentifier</code> as the value.</p>
     */
    inline BatchListObjectChildrenResponse& AddChildren(Aws::String&& key, const char* value) { m_childrenHasBeenSet = true; m_children.emplace(std::move(key), value); return *this; }

    /**
     * <p>The children structure, which is a map with the key as the
     * <code>LinkName</code> and <code>ObjectIdentifier</code> as the value.</p>
     */
    inline BatchListObjectChildrenResponse& AddChildren(const char* key, const char* value) { m_childrenHasBeenSet = true; m_children.emplace(key, value); return *this; }


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListObjectChildrenResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListObjectChildrenResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListObjectChildrenResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_children;
    bool m_childrenHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws

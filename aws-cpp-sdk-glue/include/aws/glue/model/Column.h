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
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A column in a <code>Table</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Column">AWS API
   * Reference</a></p>
   */
  class AWS_GLUE_API Column
  {
  public:
    Column();
    Column(Aws::Utils::Json::JsonView jsonValue);
    Column& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the <code>Column</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the <code>Column</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the <code>Column</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the <code>Column</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the <code>Column</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the <code>Column</code>.</p>
     */
    inline Column& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the <code>Column</code>.</p>
     */
    inline Column& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>Column</code>.</p>
     */
    inline Column& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The datatype of data in the <code>Column</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The datatype of data in the <code>Column</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The datatype of data in the <code>Column</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The datatype of data in the <code>Column</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The datatype of data in the <code>Column</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The datatype of data in the <code>Column</code>.</p>
     */
    inline Column& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The datatype of data in the <code>Column</code>.</p>
     */
    inline Column& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The datatype of data in the <code>Column</code>.</p>
     */
    inline Column& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>Free-form text comment.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>Free-form text comment.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>Free-form text comment.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>Free-form text comment.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>Free-form text comment.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>Free-form text comment.</p>
     */
    inline Column& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>Free-form text comment.</p>
     */
    inline Column& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>Free-form text comment.</p>
     */
    inline Column& WithComment(const char* value) { SetComment(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_comment;
    bool m_commentHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

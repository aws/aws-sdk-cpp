/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class Column
  {
  public:
    AWS_GLUE_API Column();
    AWS_GLUE_API Column(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Column& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The data type of the <code>Column</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The data type of the <code>Column</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The data type of the <code>Column</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The data type of the <code>Column</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The data type of the <code>Column</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The data type of the <code>Column</code>.</p>
     */
    inline Column& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The data type of the <code>Column</code>.</p>
     */
    inline Column& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The data type of the <code>Column</code>.</p>
     */
    inline Column& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>A free-form text comment.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>A free-form text comment.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>A free-form text comment.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>A free-form text comment.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>A free-form text comment.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>A free-form text comment.</p>
     */
    inline Column& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>A free-form text comment.</p>
     */
    inline Column& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>A free-form text comment.</p>
     */
    inline Column& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>These key-value pairs define properties associated with the column.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>These key-value pairs define properties associated with the column.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>These key-value pairs define properties associated with the column.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>These key-value pairs define properties associated with the column.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>These key-value pairs define properties associated with the column.</p>
     */
    inline Column& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>These key-value pairs define properties associated with the column.</p>
     */
    inline Column& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>These key-value pairs define properties associated with the column.</p>
     */
    inline Column& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>These key-value pairs define properties associated with the column.</p>
     */
    inline Column& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>These key-value pairs define properties associated with the column.</p>
     */
    inline Column& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define properties associated with the column.</p>
     */
    inline Column& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define properties associated with the column.</p>
     */
    inline Column& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define properties associated with the column.</p>
     */
    inline Column& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>These key-value pairs define properties associated with the column.</p>
     */
    inline Column& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

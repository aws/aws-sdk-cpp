﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The details of job parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/JobParameter">AWS
   * API Reference</a></p>
   */
  class JobParameter
  {
  public:
    AWS_DEADLINE_API JobParameter();
    AWS_DEADLINE_API JobParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API JobParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A double precision IEEE-754 floating point number represented as a
     * string.</p>
     */
    inline const Aws::String& GetFloat() const{ return m_float; }
    inline bool FloatHasBeenSet() const { return m_floatHasBeenSet; }
    inline void SetFloat(const Aws::String& value) { m_floatHasBeenSet = true; m_float = value; }
    inline void SetFloat(Aws::String&& value) { m_floatHasBeenSet = true; m_float = std::move(value); }
    inline void SetFloat(const char* value) { m_floatHasBeenSet = true; m_float.assign(value); }
    inline JobParameter& WithFloat(const Aws::String& value) { SetFloat(value); return *this;}
    inline JobParameter& WithFloat(Aws::String&& value) { SetFloat(std::move(value)); return *this;}
    inline JobParameter& WithFloat(const char* value) { SetFloat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A signed integer represented as a string.</p>
     */
    inline const Aws::String& GetInt() const{ return m_int; }
    inline bool IntHasBeenSet() const { return m_intHasBeenSet; }
    inline void SetInt(const Aws::String& value) { m_intHasBeenSet = true; m_int = value; }
    inline void SetInt(Aws::String&& value) { m_intHasBeenSet = true; m_int = std::move(value); }
    inline void SetInt(const char* value) { m_intHasBeenSet = true; m_int.assign(value); }
    inline JobParameter& WithInt(const Aws::String& value) { SetInt(value); return *this;}
    inline JobParameter& WithInt(Aws::String&& value) { SetInt(std::move(value)); return *this;}
    inline JobParameter& WithInt(const char* value) { SetInt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A file system path represented as a string.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline JobParameter& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline JobParameter& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline JobParameter& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A UTF-8 string.</p>
     */
    inline const Aws::String& GetString() const{ return m_string; }
    inline bool StringHasBeenSet() const { return m_stringHasBeenSet; }
    inline void SetString(const Aws::String& value) { m_stringHasBeenSet = true; m_string = value; }
    inline void SetString(Aws::String&& value) { m_stringHasBeenSet = true; m_string = std::move(value); }
    inline void SetString(const char* value) { m_stringHasBeenSet = true; m_string.assign(value); }
    inline JobParameter& WithString(const Aws::String& value) { SetString(value); return *this;}
    inline JobParameter& WithString(Aws::String&& value) { SetString(std::move(value)); return *this;}
    inline JobParameter& WithString(const char* value) { SetString(value); return *this;}
    ///@}
  private:

    Aws::String m_float;
    bool m_floatHasBeenSet = false;

    Aws::String m_int;
    bool m_intHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_string;
    bool m_stringHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws

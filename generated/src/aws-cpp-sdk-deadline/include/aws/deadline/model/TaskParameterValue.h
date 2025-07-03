/**
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
   * <p>The data types for the task parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/TaskParameterValue">AWS
   * API Reference</a></p>
   */
  class TaskParameterValue
  {
  public:
    AWS_DEADLINE_API TaskParameterValue() = default;
    AWS_DEADLINE_API TaskParameterValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API TaskParameterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A signed integer represented as a string.</p>
     */
    inline const Aws::String& GetInt() const { return m_int; }
    inline bool IntHasBeenSet() const { return m_intHasBeenSet; }
    template<typename IntT = Aws::String>
    void SetInt(IntT&& value) { m_intHasBeenSet = true; m_int = std::forward<IntT>(value); }
    template<typename IntT = Aws::String>
    TaskParameterValue& WithInt(IntT&& value) { SetInt(std::forward<IntT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A double precision IEEE-754 floating point number represented as a
     * string.</p>
     */
    inline const Aws::String& GetFloat() const { return m_float; }
    inline bool FloatHasBeenSet() const { return m_floatHasBeenSet; }
    template<typename FloatT = Aws::String>
    void SetFloat(FloatT&& value) { m_floatHasBeenSet = true; m_float = std::forward<FloatT>(value); }
    template<typename FloatT = Aws::String>
    TaskParameterValue& WithFloat(FloatT&& value) { SetFloat(std::forward<FloatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A UTF-8 string.</p>
     */
    inline const Aws::String& GetString() const { return m_string; }
    inline bool StringHasBeenSet() const { return m_stringHasBeenSet; }
    template<typename StringT = Aws::String>
    void SetString(StringT&& value) { m_stringHasBeenSet = true; m_string = std::forward<StringT>(value); }
    template<typename StringT = Aws::String>
    TaskParameterValue& WithString(StringT&& value) { SetString(std::forward<StringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A file system path represented as a string.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    TaskParameterValue& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A range (for example 1-10) or selection of specific (for example 1,3,7,8,10)
     * integers represented as a string.</p>
     */
    inline const Aws::String& GetChunkInt() const { return m_chunkInt; }
    inline bool ChunkIntHasBeenSet() const { return m_chunkIntHasBeenSet; }
    template<typename ChunkIntT = Aws::String>
    void SetChunkInt(ChunkIntT&& value) { m_chunkIntHasBeenSet = true; m_chunkInt = std::forward<ChunkIntT>(value); }
    template<typename ChunkIntT = Aws::String>
    TaskParameterValue& WithChunkInt(ChunkIntT&& value) { SetChunkInt(std::forward<ChunkIntT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_int;
    bool m_intHasBeenSet = false;

    Aws::String m_float;
    bool m_floatHasBeenSet = false;

    Aws::String m_string;
    bool m_stringHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_chunkInt;
    bool m_chunkIntHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws

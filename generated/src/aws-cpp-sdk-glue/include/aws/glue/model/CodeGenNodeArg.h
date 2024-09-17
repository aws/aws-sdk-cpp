/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>An argument or property of a node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CodeGenNodeArg">AWS
   * API Reference</a></p>
   */
  class CodeGenNodeArg
  {
  public:
    AWS_GLUE_API CodeGenNodeArg();
    AWS_GLUE_API CodeGenNodeArg(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CodeGenNodeArg& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the argument or property.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CodeGenNodeArg& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CodeGenNodeArg& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CodeGenNodeArg& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the argument or property.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline CodeGenNodeArg& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline CodeGenNodeArg& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline CodeGenNodeArg& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the value is used as a parameter.</p>
     */
    inline bool GetParam() const{ return m_param; }
    inline bool ParamHasBeenSet() const { return m_paramHasBeenSet; }
    inline void SetParam(bool value) { m_paramHasBeenSet = true; m_param = value; }
    inline CodeGenNodeArg& WithParam(bool value) { SetParam(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    bool m_param;
    bool m_paramHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

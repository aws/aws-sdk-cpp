/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/StepParameterType.h>
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
   * <p>The details of a step parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/StepParameter">AWS
   * API Reference</a></p>
   */
  class StepParameter
  {
  public:
    AWS_DEADLINE_API StepParameter();
    AWS_DEADLINE_API StepParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API StepParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the parameter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StepParameter& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StepParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StepParameter& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the parameter.</p>
     */
    inline const StepParameterType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const StepParameterType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(StepParameterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline StepParameter& WithType(const StepParameterType& value) { SetType(value); return *this;}
    inline StepParameter& WithType(StepParameterType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StepParameterType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws

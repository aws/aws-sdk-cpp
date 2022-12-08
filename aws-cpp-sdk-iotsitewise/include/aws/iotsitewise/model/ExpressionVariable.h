/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/VariableValue.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains expression variable information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ExpressionVariable">AWS
   * API Reference</a></p>
   */
  class ExpressionVariable
  {
  public:
    AWS_IOTSITEWISE_API ExpressionVariable();
    AWS_IOTSITEWISE_API ExpressionVariable(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ExpressionVariable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The friendly name of the variable to be used in the expression.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of the variable to be used in the expression.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The friendly name of the variable to be used in the expression.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name of the variable to be used in the expression.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The friendly name of the variable to be used in the expression.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name of the variable to be used in the expression.</p>
     */
    inline ExpressionVariable& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the variable to be used in the expression.</p>
     */
    inline ExpressionVariable& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the variable to be used in the expression.</p>
     */
    inline ExpressionVariable& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The variable that identifies an asset property from which to use values.</p>
     */
    inline const VariableValue& GetValue() const{ return m_value; }

    /**
     * <p>The variable that identifies an asset property from which to use values.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The variable that identifies an asset property from which to use values.</p>
     */
    inline void SetValue(const VariableValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The variable that identifies an asset property from which to use values.</p>
     */
    inline void SetValue(VariableValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The variable that identifies an asset property from which to use values.</p>
     */
    inline ExpressionVariable& WithValue(const VariableValue& value) { SetValue(value); return *this;}

    /**
     * <p>The variable that identifies an asset property from which to use values.</p>
     */
    inline ExpressionVariable& WithValue(VariableValue&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    VariableValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws

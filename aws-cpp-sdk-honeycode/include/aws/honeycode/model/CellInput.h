/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
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
namespace Honeycode
{
namespace Model
{

  /**
   * <p> CellInput object contains the data needed to create or update cells in a
   * table. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/CellInput">AWS
   * API Reference</a></p>
   */
  class AWS_HONEYCODE_API CellInput
  {
  public:
    CellInput();
    CellInput(Aws::Utils::Json::JsonView jsonValue);
    CellInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Fact represents the data that is entered into a cell. This data can be free
     * text or a formula. Formulas need to start with the equals (=) sign. </p>
     */
    inline const Aws::String& GetFact() const{ return m_fact; }

    /**
     * <p> Fact represents the data that is entered into a cell. This data can be free
     * text or a formula. Formulas need to start with the equals (=) sign. </p>
     */
    inline bool FactHasBeenSet() const { return m_factHasBeenSet; }

    /**
     * <p> Fact represents the data that is entered into a cell. This data can be free
     * text or a formula. Formulas need to start with the equals (=) sign. </p>
     */
    inline void SetFact(const Aws::String& value) { m_factHasBeenSet = true; m_fact = value; }

    /**
     * <p> Fact represents the data that is entered into a cell. This data can be free
     * text or a formula. Formulas need to start with the equals (=) sign. </p>
     */
    inline void SetFact(Aws::String&& value) { m_factHasBeenSet = true; m_fact = std::move(value); }

    /**
     * <p> Fact represents the data that is entered into a cell. This data can be free
     * text or a formula. Formulas need to start with the equals (=) sign. </p>
     */
    inline void SetFact(const char* value) { m_factHasBeenSet = true; m_fact.assign(value); }

    /**
     * <p> Fact represents the data that is entered into a cell. This data can be free
     * text or a formula. Formulas need to start with the equals (=) sign. </p>
     */
    inline CellInput& WithFact(const Aws::String& value) { SetFact(value); return *this;}

    /**
     * <p> Fact represents the data that is entered into a cell. This data can be free
     * text or a formula. Formulas need to start with the equals (=) sign. </p>
     */
    inline CellInput& WithFact(Aws::String&& value) { SetFact(std::move(value)); return *this;}

    /**
     * <p> Fact represents the data that is entered into a cell. This data can be free
     * text or a formula. Formulas need to start with the equals (=) sign. </p>
     */
    inline CellInput& WithFact(const char* value) { SetFact(value); return *this;}

  private:

    Aws::String m_fact;
    bool m_factHasBeenSet;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws

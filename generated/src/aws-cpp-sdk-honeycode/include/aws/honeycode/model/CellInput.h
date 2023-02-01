/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * table. </p>  <p> CellInput object has only a facts field or a fact field,
   * but not both. A 400 bad request will be thrown if both fact and facts field are
   * present. </p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/CellInput">AWS
   * API Reference</a></p>
   */
  class CellInput
  {
  public:
    AWS_HONEYCODE_API CellInput();
    AWS_HONEYCODE_API CellInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API CellInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


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


    /**
     * <p> A list representing the values that are entered into a ROWSET cell. Facts
     * list can have either only values or rowIDs, and rowIDs should from the same
     * table. </p>
     */
    inline const Aws::Vector<Aws::String>& GetFacts() const{ return m_facts; }

    /**
     * <p> A list representing the values that are entered into a ROWSET cell. Facts
     * list can have either only values or rowIDs, and rowIDs should from the same
     * table. </p>
     */
    inline bool FactsHasBeenSet() const { return m_factsHasBeenSet; }

    /**
     * <p> A list representing the values that are entered into a ROWSET cell. Facts
     * list can have either only values or rowIDs, and rowIDs should from the same
     * table. </p>
     */
    inline void SetFacts(const Aws::Vector<Aws::String>& value) { m_factsHasBeenSet = true; m_facts = value; }

    /**
     * <p> A list representing the values that are entered into a ROWSET cell. Facts
     * list can have either only values or rowIDs, and rowIDs should from the same
     * table. </p>
     */
    inline void SetFacts(Aws::Vector<Aws::String>&& value) { m_factsHasBeenSet = true; m_facts = std::move(value); }

    /**
     * <p> A list representing the values that are entered into a ROWSET cell. Facts
     * list can have either only values or rowIDs, and rowIDs should from the same
     * table. </p>
     */
    inline CellInput& WithFacts(const Aws::Vector<Aws::String>& value) { SetFacts(value); return *this;}

    /**
     * <p> A list representing the values that are entered into a ROWSET cell. Facts
     * list can have either only values or rowIDs, and rowIDs should from the same
     * table. </p>
     */
    inline CellInput& WithFacts(Aws::Vector<Aws::String>&& value) { SetFacts(std::move(value)); return *this;}

    /**
     * <p> A list representing the values that are entered into a ROWSET cell. Facts
     * list can have either only values or rowIDs, and rowIDs should from the same
     * table. </p>
     */
    inline CellInput& AddFacts(const Aws::String& value) { m_factsHasBeenSet = true; m_facts.push_back(value); return *this; }

    /**
     * <p> A list representing the values that are entered into a ROWSET cell. Facts
     * list can have either only values or rowIDs, and rowIDs should from the same
     * table. </p>
     */
    inline CellInput& AddFacts(Aws::String&& value) { m_factsHasBeenSet = true; m_facts.push_back(std::move(value)); return *this; }

    /**
     * <p> A list representing the values that are entered into a ROWSET cell. Facts
     * list can have either only values or rowIDs, and rowIDs should from the same
     * table. </p>
     */
    inline CellInput& AddFacts(const char* value) { m_factsHasBeenSet = true; m_facts.push_back(value); return *this; }

  private:

    Aws::String m_fact;
    bool m_factHasBeenSet = false;

    Aws::Vector<Aws::String> m_facts;
    bool m_factsHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws

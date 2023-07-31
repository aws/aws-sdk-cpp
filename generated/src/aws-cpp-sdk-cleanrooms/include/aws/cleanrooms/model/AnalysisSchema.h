/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>A relation within an analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisSchema">AWS
   * API Reference</a></p>
   */
  class AnalysisSchema
  {
  public:
    AWS_CLEANROOMS_API AnalysisSchema();
    AWS_CLEANROOMS_API AnalysisSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tables referenced in the analysis schema.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReferencedTables() const{ return m_referencedTables; }

    /**
     * <p>The tables referenced in the analysis schema.</p>
     */
    inline bool ReferencedTablesHasBeenSet() const { return m_referencedTablesHasBeenSet; }

    /**
     * <p>The tables referenced in the analysis schema.</p>
     */
    inline void SetReferencedTables(const Aws::Vector<Aws::String>& value) { m_referencedTablesHasBeenSet = true; m_referencedTables = value; }

    /**
     * <p>The tables referenced in the analysis schema.</p>
     */
    inline void SetReferencedTables(Aws::Vector<Aws::String>&& value) { m_referencedTablesHasBeenSet = true; m_referencedTables = std::move(value); }

    /**
     * <p>The tables referenced in the analysis schema.</p>
     */
    inline AnalysisSchema& WithReferencedTables(const Aws::Vector<Aws::String>& value) { SetReferencedTables(value); return *this;}

    /**
     * <p>The tables referenced in the analysis schema.</p>
     */
    inline AnalysisSchema& WithReferencedTables(Aws::Vector<Aws::String>&& value) { SetReferencedTables(std::move(value)); return *this;}

    /**
     * <p>The tables referenced in the analysis schema.</p>
     */
    inline AnalysisSchema& AddReferencedTables(const Aws::String& value) { m_referencedTablesHasBeenSet = true; m_referencedTables.push_back(value); return *this; }

    /**
     * <p>The tables referenced in the analysis schema.</p>
     */
    inline AnalysisSchema& AddReferencedTables(Aws::String&& value) { m_referencedTablesHasBeenSet = true; m_referencedTables.push_back(std::move(value)); return *this; }

    /**
     * <p>The tables referenced in the analysis schema.</p>
     */
    inline AnalysisSchema& AddReferencedTables(const char* value) { m_referencedTablesHasBeenSet = true; m_referencedTables.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_referencedTables;
    bool m_referencedTablesHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

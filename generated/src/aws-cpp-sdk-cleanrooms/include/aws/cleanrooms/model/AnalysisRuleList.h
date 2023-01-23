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
   * <p>A type of analysis rule that enables row-level analysis.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisRuleList">AWS
   * API Reference</a></p>
   */
  class AnalysisRuleList
  {
  public:
    AWS_CLEANROOMS_API AnalysisRuleList();
    AWS_CLEANROOMS_API AnalysisRuleList(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisRuleList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Columns that can be used to join a configured table with the table of the
     * member who can query and another members' configured tables.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJoinColumns() const{ return m_joinColumns; }

    /**
     * <p>Columns that can be used to join a configured table with the table of the
     * member who can query and another members' configured tables.</p>
     */
    inline bool JoinColumnsHasBeenSet() const { return m_joinColumnsHasBeenSet; }

    /**
     * <p>Columns that can be used to join a configured table with the table of the
     * member who can query and another members' configured tables.</p>
     */
    inline void SetJoinColumns(const Aws::Vector<Aws::String>& value) { m_joinColumnsHasBeenSet = true; m_joinColumns = value; }

    /**
     * <p>Columns that can be used to join a configured table with the table of the
     * member who can query and another members' configured tables.</p>
     */
    inline void SetJoinColumns(Aws::Vector<Aws::String>&& value) { m_joinColumnsHasBeenSet = true; m_joinColumns = std::move(value); }

    /**
     * <p>Columns that can be used to join a configured table with the table of the
     * member who can query and another members' configured tables.</p>
     */
    inline AnalysisRuleList& WithJoinColumns(const Aws::Vector<Aws::String>& value) { SetJoinColumns(value); return *this;}

    /**
     * <p>Columns that can be used to join a configured table with the table of the
     * member who can query and another members' configured tables.</p>
     */
    inline AnalysisRuleList& WithJoinColumns(Aws::Vector<Aws::String>&& value) { SetJoinColumns(std::move(value)); return *this;}

    /**
     * <p>Columns that can be used to join a configured table with the table of the
     * member who can query and another members' configured tables.</p>
     */
    inline AnalysisRuleList& AddJoinColumns(const Aws::String& value) { m_joinColumnsHasBeenSet = true; m_joinColumns.push_back(value); return *this; }

    /**
     * <p>Columns that can be used to join a configured table with the table of the
     * member who can query and another members' configured tables.</p>
     */
    inline AnalysisRuleList& AddJoinColumns(Aws::String&& value) { m_joinColumnsHasBeenSet = true; m_joinColumns.push_back(std::move(value)); return *this; }

    /**
     * <p>Columns that can be used to join a configured table with the table of the
     * member who can query and another members' configured tables.</p>
     */
    inline AnalysisRuleList& AddJoinColumns(const char* value) { m_joinColumnsHasBeenSet = true; m_joinColumns.push_back(value); return *this; }


    /**
     * <p>Columns that can be listed in the output.</p>
     */
    inline const Aws::Vector<Aws::String>& GetListColumns() const{ return m_listColumns; }

    /**
     * <p>Columns that can be listed in the output.</p>
     */
    inline bool ListColumnsHasBeenSet() const { return m_listColumnsHasBeenSet; }

    /**
     * <p>Columns that can be listed in the output.</p>
     */
    inline void SetListColumns(const Aws::Vector<Aws::String>& value) { m_listColumnsHasBeenSet = true; m_listColumns = value; }

    /**
     * <p>Columns that can be listed in the output.</p>
     */
    inline void SetListColumns(Aws::Vector<Aws::String>&& value) { m_listColumnsHasBeenSet = true; m_listColumns = std::move(value); }

    /**
     * <p>Columns that can be listed in the output.</p>
     */
    inline AnalysisRuleList& WithListColumns(const Aws::Vector<Aws::String>& value) { SetListColumns(value); return *this;}

    /**
     * <p>Columns that can be listed in the output.</p>
     */
    inline AnalysisRuleList& WithListColumns(Aws::Vector<Aws::String>&& value) { SetListColumns(std::move(value)); return *this;}

    /**
     * <p>Columns that can be listed in the output.</p>
     */
    inline AnalysisRuleList& AddListColumns(const Aws::String& value) { m_listColumnsHasBeenSet = true; m_listColumns.push_back(value); return *this; }

    /**
     * <p>Columns that can be listed in the output.</p>
     */
    inline AnalysisRuleList& AddListColumns(Aws::String&& value) { m_listColumnsHasBeenSet = true; m_listColumns.push_back(std::move(value)); return *this; }

    /**
     * <p>Columns that can be listed in the output.</p>
     */
    inline AnalysisRuleList& AddListColumns(const char* value) { m_listColumnsHasBeenSet = true; m_listColumns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_joinColumns;
    bool m_joinColumnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_listColumns;
    bool m_listColumnsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

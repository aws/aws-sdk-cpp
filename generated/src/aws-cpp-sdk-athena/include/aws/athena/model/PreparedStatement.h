/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>A prepared SQL statement for use with Athena.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/PreparedStatement">AWS
   * API Reference</a></p>
   */
  class PreparedStatement
  {
  public:
    AWS_ATHENA_API PreparedStatement() = default;
    AWS_ATHENA_API PreparedStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API PreparedStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the prepared statement.</p>
     */
    inline const Aws::String& GetStatementName() const { return m_statementName; }
    inline bool StatementNameHasBeenSet() const { return m_statementNameHasBeenSet; }
    template<typename StatementNameT = Aws::String>
    void SetStatementName(StatementNameT&& value) { m_statementNameHasBeenSet = true; m_statementName = std::forward<StatementNameT>(value); }
    template<typename StatementNameT = Aws::String>
    PreparedStatement& WithStatementName(StatementNameT&& value) { SetStatementName(std::forward<StatementNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query string for the prepared statement.</p>
     */
    inline const Aws::String& GetQueryStatement() const { return m_queryStatement; }
    inline bool QueryStatementHasBeenSet() const { return m_queryStatementHasBeenSet; }
    template<typename QueryStatementT = Aws::String>
    void SetQueryStatement(QueryStatementT&& value) { m_queryStatementHasBeenSet = true; m_queryStatement = std::forward<QueryStatementT>(value); }
    template<typename QueryStatementT = Aws::String>
    PreparedStatement& WithQueryStatement(QueryStatementT&& value) { SetQueryStatement(std::forward<QueryStatementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workgroup to which the prepared statement belongs.</p>
     */
    inline const Aws::String& GetWorkGroupName() const { return m_workGroupName; }
    inline bool WorkGroupNameHasBeenSet() const { return m_workGroupNameHasBeenSet; }
    template<typename WorkGroupNameT = Aws::String>
    void SetWorkGroupName(WorkGroupNameT&& value) { m_workGroupNameHasBeenSet = true; m_workGroupName = std::forward<WorkGroupNameT>(value); }
    template<typename WorkGroupNameT = Aws::String>
    PreparedStatement& WithWorkGroupName(WorkGroupNameT&& value) { SetWorkGroupName(std::forward<WorkGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the prepared statement.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PreparedStatement& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified time of the prepared statement.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    PreparedStatement& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_statementName;
    bool m_statementNameHasBeenSet = false;

    Aws::String m_queryStatement;
    bool m_queryStatementHasBeenSet = false;

    Aws::String m_workGroupName;
    bool m_workGroupNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws

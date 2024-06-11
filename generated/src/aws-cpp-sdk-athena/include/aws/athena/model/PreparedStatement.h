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
    AWS_ATHENA_API PreparedStatement();
    AWS_ATHENA_API PreparedStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API PreparedStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the prepared statement.</p>
     */
    inline const Aws::String& GetStatementName() const{ return m_statementName; }
    inline bool StatementNameHasBeenSet() const { return m_statementNameHasBeenSet; }
    inline void SetStatementName(const Aws::String& value) { m_statementNameHasBeenSet = true; m_statementName = value; }
    inline void SetStatementName(Aws::String&& value) { m_statementNameHasBeenSet = true; m_statementName = std::move(value); }
    inline void SetStatementName(const char* value) { m_statementNameHasBeenSet = true; m_statementName.assign(value); }
    inline PreparedStatement& WithStatementName(const Aws::String& value) { SetStatementName(value); return *this;}
    inline PreparedStatement& WithStatementName(Aws::String&& value) { SetStatementName(std::move(value)); return *this;}
    inline PreparedStatement& WithStatementName(const char* value) { SetStatementName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query string for the prepared statement.</p>
     */
    inline const Aws::String& GetQueryStatement() const{ return m_queryStatement; }
    inline bool QueryStatementHasBeenSet() const { return m_queryStatementHasBeenSet; }
    inline void SetQueryStatement(const Aws::String& value) { m_queryStatementHasBeenSet = true; m_queryStatement = value; }
    inline void SetQueryStatement(Aws::String&& value) { m_queryStatementHasBeenSet = true; m_queryStatement = std::move(value); }
    inline void SetQueryStatement(const char* value) { m_queryStatementHasBeenSet = true; m_queryStatement.assign(value); }
    inline PreparedStatement& WithQueryStatement(const Aws::String& value) { SetQueryStatement(value); return *this;}
    inline PreparedStatement& WithQueryStatement(Aws::String&& value) { SetQueryStatement(std::move(value)); return *this;}
    inline PreparedStatement& WithQueryStatement(const char* value) { SetQueryStatement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workgroup to which the prepared statement belongs.</p>
     */
    inline const Aws::String& GetWorkGroupName() const{ return m_workGroupName; }
    inline bool WorkGroupNameHasBeenSet() const { return m_workGroupNameHasBeenSet; }
    inline void SetWorkGroupName(const Aws::String& value) { m_workGroupNameHasBeenSet = true; m_workGroupName = value; }
    inline void SetWorkGroupName(Aws::String&& value) { m_workGroupNameHasBeenSet = true; m_workGroupName = std::move(value); }
    inline void SetWorkGroupName(const char* value) { m_workGroupNameHasBeenSet = true; m_workGroupName.assign(value); }
    inline PreparedStatement& WithWorkGroupName(const Aws::String& value) { SetWorkGroupName(value); return *this;}
    inline PreparedStatement& WithWorkGroupName(Aws::String&& value) { SetWorkGroupName(std::move(value)); return *this;}
    inline PreparedStatement& WithWorkGroupName(const char* value) { SetWorkGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the prepared statement.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PreparedStatement& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PreparedStatement& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PreparedStatement& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified time of the prepared statement.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline PreparedStatement& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline PreparedStatement& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws

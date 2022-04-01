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
  class AWS_ATHENA_API PreparedStatement
  {
  public:
    PreparedStatement();
    PreparedStatement(Aws::Utils::Json::JsonView jsonValue);
    PreparedStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the prepared statement.</p>
     */
    inline const Aws::String& GetStatementName() const{ return m_statementName; }

    /**
     * <p>The name of the prepared statement.</p>
     */
    inline bool StatementNameHasBeenSet() const { return m_statementNameHasBeenSet; }

    /**
     * <p>The name of the prepared statement.</p>
     */
    inline void SetStatementName(const Aws::String& value) { m_statementNameHasBeenSet = true; m_statementName = value; }

    /**
     * <p>The name of the prepared statement.</p>
     */
    inline void SetStatementName(Aws::String&& value) { m_statementNameHasBeenSet = true; m_statementName = std::move(value); }

    /**
     * <p>The name of the prepared statement.</p>
     */
    inline void SetStatementName(const char* value) { m_statementNameHasBeenSet = true; m_statementName.assign(value); }

    /**
     * <p>The name of the prepared statement.</p>
     */
    inline PreparedStatement& WithStatementName(const Aws::String& value) { SetStatementName(value); return *this;}

    /**
     * <p>The name of the prepared statement.</p>
     */
    inline PreparedStatement& WithStatementName(Aws::String&& value) { SetStatementName(std::move(value)); return *this;}

    /**
     * <p>The name of the prepared statement.</p>
     */
    inline PreparedStatement& WithStatementName(const char* value) { SetStatementName(value); return *this;}


    /**
     * <p>The query string for the prepared statement.</p>
     */
    inline const Aws::String& GetQueryStatement() const{ return m_queryStatement; }

    /**
     * <p>The query string for the prepared statement.</p>
     */
    inline bool QueryStatementHasBeenSet() const { return m_queryStatementHasBeenSet; }

    /**
     * <p>The query string for the prepared statement.</p>
     */
    inline void SetQueryStatement(const Aws::String& value) { m_queryStatementHasBeenSet = true; m_queryStatement = value; }

    /**
     * <p>The query string for the prepared statement.</p>
     */
    inline void SetQueryStatement(Aws::String&& value) { m_queryStatementHasBeenSet = true; m_queryStatement = std::move(value); }

    /**
     * <p>The query string for the prepared statement.</p>
     */
    inline void SetQueryStatement(const char* value) { m_queryStatementHasBeenSet = true; m_queryStatement.assign(value); }

    /**
     * <p>The query string for the prepared statement.</p>
     */
    inline PreparedStatement& WithQueryStatement(const Aws::String& value) { SetQueryStatement(value); return *this;}

    /**
     * <p>The query string for the prepared statement.</p>
     */
    inline PreparedStatement& WithQueryStatement(Aws::String&& value) { SetQueryStatement(std::move(value)); return *this;}

    /**
     * <p>The query string for the prepared statement.</p>
     */
    inline PreparedStatement& WithQueryStatement(const char* value) { SetQueryStatement(value); return *this;}


    /**
     * <p>The name of the workgroup to which the prepared statement belongs.</p>
     */
    inline const Aws::String& GetWorkGroupName() const{ return m_workGroupName; }

    /**
     * <p>The name of the workgroup to which the prepared statement belongs.</p>
     */
    inline bool WorkGroupNameHasBeenSet() const { return m_workGroupNameHasBeenSet; }

    /**
     * <p>The name of the workgroup to which the prepared statement belongs.</p>
     */
    inline void SetWorkGroupName(const Aws::String& value) { m_workGroupNameHasBeenSet = true; m_workGroupName = value; }

    /**
     * <p>The name of the workgroup to which the prepared statement belongs.</p>
     */
    inline void SetWorkGroupName(Aws::String&& value) { m_workGroupNameHasBeenSet = true; m_workGroupName = std::move(value); }

    /**
     * <p>The name of the workgroup to which the prepared statement belongs.</p>
     */
    inline void SetWorkGroupName(const char* value) { m_workGroupNameHasBeenSet = true; m_workGroupName.assign(value); }

    /**
     * <p>The name of the workgroup to which the prepared statement belongs.</p>
     */
    inline PreparedStatement& WithWorkGroupName(const Aws::String& value) { SetWorkGroupName(value); return *this;}

    /**
     * <p>The name of the workgroup to which the prepared statement belongs.</p>
     */
    inline PreparedStatement& WithWorkGroupName(Aws::String&& value) { SetWorkGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the workgroup to which the prepared statement belongs.</p>
     */
    inline PreparedStatement& WithWorkGroupName(const char* value) { SetWorkGroupName(value); return *this;}


    /**
     * <p>The description of the prepared statement.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the prepared statement.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the prepared statement.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the prepared statement.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the prepared statement.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the prepared statement.</p>
     */
    inline PreparedStatement& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the prepared statement.</p>
     */
    inline PreparedStatement& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the prepared statement.</p>
     */
    inline PreparedStatement& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The last modified time of the prepared statement.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last modified time of the prepared statement.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The last modified time of the prepared statement.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The last modified time of the prepared statement.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last modified time of the prepared statement.</p>
     */
    inline PreparedStatement& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last modified time of the prepared statement.</p>
     */
    inline PreparedStatement& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_statementName;
    bool m_statementNameHasBeenSet;

    Aws::String m_queryStatement;
    bool m_queryStatementHasBeenSet;

    Aws::String m_workGroupName;
    bool m_workGroupNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws

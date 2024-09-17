/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class UpdatePreparedStatementRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API UpdatePreparedStatementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePreparedStatement"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the prepared statement.</p>
     */
    inline const Aws::String& GetStatementName() const{ return m_statementName; }
    inline bool StatementNameHasBeenSet() const { return m_statementNameHasBeenSet; }
    inline void SetStatementName(const Aws::String& value) { m_statementNameHasBeenSet = true; m_statementName = value; }
    inline void SetStatementName(Aws::String&& value) { m_statementNameHasBeenSet = true; m_statementName = std::move(value); }
    inline void SetStatementName(const char* value) { m_statementNameHasBeenSet = true; m_statementName.assign(value); }
    inline UpdatePreparedStatementRequest& WithStatementName(const Aws::String& value) { SetStatementName(value); return *this;}
    inline UpdatePreparedStatementRequest& WithStatementName(Aws::String&& value) { SetStatementName(std::move(value)); return *this;}
    inline UpdatePreparedStatementRequest& WithStatementName(const char* value) { SetStatementName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workgroup for the prepared statement.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }
    inline UpdatePreparedStatementRequest& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}
    inline UpdatePreparedStatementRequest& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}
    inline UpdatePreparedStatementRequest& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}
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
    inline UpdatePreparedStatementRequest& WithQueryStatement(const Aws::String& value) { SetQueryStatement(value); return *this;}
    inline UpdatePreparedStatementRequest& WithQueryStatement(Aws::String&& value) { SetQueryStatement(std::move(value)); return *this;}
    inline UpdatePreparedStatementRequest& WithQueryStatement(const char* value) { SetQueryStatement(value); return *this;}
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
    inline UpdatePreparedStatementRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdatePreparedStatementRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdatePreparedStatementRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_statementName;
    bool m_statementNameHasBeenSet = false;

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;

    Aws::String m_queryStatement;
    bool m_queryStatementHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws

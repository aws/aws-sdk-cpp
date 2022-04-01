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
  class AWS_ATHENA_API DeletePreparedStatementRequest : public AthenaRequest
  {
  public:
    DeletePreparedStatementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePreparedStatement"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the prepared statement to delete.</p>
     */
    inline const Aws::String& GetStatementName() const{ return m_statementName; }

    /**
     * <p>The name of the prepared statement to delete.</p>
     */
    inline bool StatementNameHasBeenSet() const { return m_statementNameHasBeenSet; }

    /**
     * <p>The name of the prepared statement to delete.</p>
     */
    inline void SetStatementName(const Aws::String& value) { m_statementNameHasBeenSet = true; m_statementName = value; }

    /**
     * <p>The name of the prepared statement to delete.</p>
     */
    inline void SetStatementName(Aws::String&& value) { m_statementNameHasBeenSet = true; m_statementName = std::move(value); }

    /**
     * <p>The name of the prepared statement to delete.</p>
     */
    inline void SetStatementName(const char* value) { m_statementNameHasBeenSet = true; m_statementName.assign(value); }

    /**
     * <p>The name of the prepared statement to delete.</p>
     */
    inline DeletePreparedStatementRequest& WithStatementName(const Aws::String& value) { SetStatementName(value); return *this;}

    /**
     * <p>The name of the prepared statement to delete.</p>
     */
    inline DeletePreparedStatementRequest& WithStatementName(Aws::String&& value) { SetStatementName(std::move(value)); return *this;}

    /**
     * <p>The name of the prepared statement to delete.</p>
     */
    inline DeletePreparedStatementRequest& WithStatementName(const char* value) { SetStatementName(value); return *this;}


    /**
     * <p>The workgroup to which the statement to be deleted belongs.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }

    /**
     * <p>The workgroup to which the statement to be deleted belongs.</p>
     */
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }

    /**
     * <p>The workgroup to which the statement to be deleted belongs.</p>
     */
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }

    /**
     * <p>The workgroup to which the statement to be deleted belongs.</p>
     */
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }

    /**
     * <p>The workgroup to which the statement to be deleted belongs.</p>
     */
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }

    /**
     * <p>The workgroup to which the statement to be deleted belongs.</p>
     */
    inline DeletePreparedStatementRequest& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}

    /**
     * <p>The workgroup to which the statement to be deleted belongs.</p>
     */
    inline DeletePreparedStatementRequest& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}

    /**
     * <p>The workgroup to which the statement to be deleted belongs.</p>
     */
    inline DeletePreparedStatementRequest& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}

  private:

    Aws::String m_statementName;
    bool m_statementNameHasBeenSet;

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws

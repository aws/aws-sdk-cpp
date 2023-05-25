/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class BatchGetPreparedStatementRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API BatchGetPreparedStatementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetPreparedStatement"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of prepared statement names to return.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPreparedStatementNames() const{ return m_preparedStatementNames; }

    /**
     * <p>A list of prepared statement names to return.</p>
     */
    inline bool PreparedStatementNamesHasBeenSet() const { return m_preparedStatementNamesHasBeenSet; }

    /**
     * <p>A list of prepared statement names to return.</p>
     */
    inline void SetPreparedStatementNames(const Aws::Vector<Aws::String>& value) { m_preparedStatementNamesHasBeenSet = true; m_preparedStatementNames = value; }

    /**
     * <p>A list of prepared statement names to return.</p>
     */
    inline void SetPreparedStatementNames(Aws::Vector<Aws::String>&& value) { m_preparedStatementNamesHasBeenSet = true; m_preparedStatementNames = std::move(value); }

    /**
     * <p>A list of prepared statement names to return.</p>
     */
    inline BatchGetPreparedStatementRequest& WithPreparedStatementNames(const Aws::Vector<Aws::String>& value) { SetPreparedStatementNames(value); return *this;}

    /**
     * <p>A list of prepared statement names to return.</p>
     */
    inline BatchGetPreparedStatementRequest& WithPreparedStatementNames(Aws::Vector<Aws::String>&& value) { SetPreparedStatementNames(std::move(value)); return *this;}

    /**
     * <p>A list of prepared statement names to return.</p>
     */
    inline BatchGetPreparedStatementRequest& AddPreparedStatementNames(const Aws::String& value) { m_preparedStatementNamesHasBeenSet = true; m_preparedStatementNames.push_back(value); return *this; }

    /**
     * <p>A list of prepared statement names to return.</p>
     */
    inline BatchGetPreparedStatementRequest& AddPreparedStatementNames(Aws::String&& value) { m_preparedStatementNamesHasBeenSet = true; m_preparedStatementNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of prepared statement names to return.</p>
     */
    inline BatchGetPreparedStatementRequest& AddPreparedStatementNames(const char* value) { m_preparedStatementNamesHasBeenSet = true; m_preparedStatementNames.push_back(value); return *this; }


    /**
     * <p>The name of the workgroup to which the prepared statements belong.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }

    /**
     * <p>The name of the workgroup to which the prepared statements belong.</p>
     */
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }

    /**
     * <p>The name of the workgroup to which the prepared statements belong.</p>
     */
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }

    /**
     * <p>The name of the workgroup to which the prepared statements belong.</p>
     */
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }

    /**
     * <p>The name of the workgroup to which the prepared statements belong.</p>
     */
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }

    /**
     * <p>The name of the workgroup to which the prepared statements belong.</p>
     */
    inline BatchGetPreparedStatementRequest& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}

    /**
     * <p>The name of the workgroup to which the prepared statements belong.</p>
     */
    inline BatchGetPreparedStatementRequest& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the workgroup to which the prepared statements belong.</p>
     */
    inline BatchGetPreparedStatementRequest& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_preparedStatementNames;
    bool m_preparedStatementNamesHasBeenSet = false;

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws

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
    AWS_ATHENA_API BatchGetPreparedStatementRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetPreparedStatement"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of prepared statement names to return.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPreparedStatementNames() const { return m_preparedStatementNames; }
    inline bool PreparedStatementNamesHasBeenSet() const { return m_preparedStatementNamesHasBeenSet; }
    template<typename PreparedStatementNamesT = Aws::Vector<Aws::String>>
    void SetPreparedStatementNames(PreparedStatementNamesT&& value) { m_preparedStatementNamesHasBeenSet = true; m_preparedStatementNames = std::forward<PreparedStatementNamesT>(value); }
    template<typename PreparedStatementNamesT = Aws::Vector<Aws::String>>
    BatchGetPreparedStatementRequest& WithPreparedStatementNames(PreparedStatementNamesT&& value) { SetPreparedStatementNames(std::forward<PreparedStatementNamesT>(value)); return *this;}
    template<typename PreparedStatementNamesT = Aws::String>
    BatchGetPreparedStatementRequest& AddPreparedStatementNames(PreparedStatementNamesT&& value) { m_preparedStatementNamesHasBeenSet = true; m_preparedStatementNames.emplace_back(std::forward<PreparedStatementNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the workgroup to which the prepared statements belong.</p>
     */
    inline const Aws::String& GetWorkGroup() const { return m_workGroup; }
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }
    template<typename WorkGroupT = Aws::String>
    void SetWorkGroup(WorkGroupT&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::forward<WorkGroupT>(value); }
    template<typename WorkGroupT = Aws::String>
    BatchGetPreparedStatementRequest& WithWorkGroup(WorkGroupT&& value) { SetWorkGroup(std::forward<WorkGroupT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_preparedStatementNames;
    bool m_preparedStatementNamesHasBeenSet = false;

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws

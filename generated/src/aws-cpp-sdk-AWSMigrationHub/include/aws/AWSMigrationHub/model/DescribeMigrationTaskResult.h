/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/AWSMigrationHub/model/MigrationTask.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MigrationHub
{
namespace Model
{
  class DescribeMigrationTaskResult
  {
  public:
    AWS_MIGRATIONHUB_API DescribeMigrationTaskResult() = default;
    AWS_MIGRATIONHUB_API DescribeMigrationTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUB_API DescribeMigrationTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Object encapsulating information about the migration task.</p>
     */
    inline const MigrationTask& GetMigrationTask() const { return m_migrationTask; }
    template<typename MigrationTaskT = MigrationTask>
    void SetMigrationTask(MigrationTaskT&& value) { m_migrationTaskHasBeenSet = true; m_migrationTask = std::forward<MigrationTaskT>(value); }
    template<typename MigrationTaskT = MigrationTask>
    DescribeMigrationTaskResult& WithMigrationTask(MigrationTaskT&& value) { SetMigrationTask(std::forward<MigrationTaskT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMigrationTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MigrationTask m_migrationTask;
    bool m_migrationTaskHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws

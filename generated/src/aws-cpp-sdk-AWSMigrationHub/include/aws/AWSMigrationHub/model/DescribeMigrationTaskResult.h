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
    AWS_MIGRATIONHUB_API DescribeMigrationTaskResult();
    AWS_MIGRATIONHUB_API DescribeMigrationTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUB_API DescribeMigrationTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Object encapsulating information about the migration task.</p>
     */
    inline const MigrationTask& GetMigrationTask() const{ return m_migrationTask; }

    /**
     * <p>Object encapsulating information about the migration task.</p>
     */
    inline void SetMigrationTask(const MigrationTask& value) { m_migrationTask = value; }

    /**
     * <p>Object encapsulating information about the migration task.</p>
     */
    inline void SetMigrationTask(MigrationTask&& value) { m_migrationTask = std::move(value); }

    /**
     * <p>Object encapsulating information about the migration task.</p>
     */
    inline DescribeMigrationTaskResult& WithMigrationTask(const MigrationTask& value) { SetMigrationTask(value); return *this;}

    /**
     * <p>Object encapsulating information about the migration task.</p>
     */
    inline DescribeMigrationTaskResult& WithMigrationTask(MigrationTask&& value) { SetMigrationTask(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeMigrationTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeMigrationTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeMigrationTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    MigrationTask m_migrationTask;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws

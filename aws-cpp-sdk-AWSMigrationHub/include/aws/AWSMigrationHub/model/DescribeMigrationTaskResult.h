/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/AWSMigrationHub/model/MigrationTask.h>
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
  class AWS_MIGRATIONHUB_API DescribeMigrationTaskResult
  {
  public:
    DescribeMigrationTaskResult();
    DescribeMigrationTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeMigrationTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    MigrationTask m_migrationTask;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws

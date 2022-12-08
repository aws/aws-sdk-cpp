/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{
  class StartImportFileTaskResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API StartImportFileTaskResult();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API StartImportFileTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API StartImportFileTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The ID for a specific import task. The ID is unique within an AWS account.
     * </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The ID for a specific import task. The ID is unique within an AWS account.
     * </p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p> The ID for a specific import task. The ID is unique within an AWS account.
     * </p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p> The ID for a specific import task. The ID is unique within an AWS account.
     * </p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p> The ID for a specific import task. The ID is unique within an AWS account.
     * </p>
     */
    inline StartImportFileTaskResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The ID for a specific import task. The ID is unique within an AWS account.
     * </p>
     */
    inline StartImportFileTaskResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The ID for a specific import task. The ID is unique within an AWS account.
     * </p>
     */
    inline StartImportFileTaskResult& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws

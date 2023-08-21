/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class RunFleetAdvisorLsaAnalysisRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API RunFleetAdvisorLsaAnalysisRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RunFleetAdvisorLsaAnalysis"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

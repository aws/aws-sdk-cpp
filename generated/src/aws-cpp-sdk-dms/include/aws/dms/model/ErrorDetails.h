/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/DefaultErrorDetails.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides error information about a project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ErrorDetails">AWS
   * API Reference</a></p>
   */
  class ErrorDetails
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ErrorDetails();
    AWS_DATABASEMIGRATIONSERVICE_API ErrorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Error information about a project.</p>
     */
    inline const DefaultErrorDetails& GetDefaultErrorDetails() const{ return m_defaultErrorDetails; }

    /**
     * <p>Error information about a project.</p>
     */
    inline bool DefaultErrorDetailsHasBeenSet() const { return m_defaultErrorDetailsHasBeenSet; }

    /**
     * <p>Error information about a project.</p>
     */
    inline void SetDefaultErrorDetails(const DefaultErrorDetails& value) { m_defaultErrorDetailsHasBeenSet = true; m_defaultErrorDetails = value; }

    /**
     * <p>Error information about a project.</p>
     */
    inline void SetDefaultErrorDetails(DefaultErrorDetails&& value) { m_defaultErrorDetailsHasBeenSet = true; m_defaultErrorDetails = std::move(value); }

    /**
     * <p>Error information about a project.</p>
     */
    inline ErrorDetails& WithDefaultErrorDetails(const DefaultErrorDetails& value) { SetDefaultErrorDetails(value); return *this;}

    /**
     * <p>Error information about a project.</p>
     */
    inline ErrorDetails& WithDefaultErrorDetails(DefaultErrorDetails&& value) { SetDefaultErrorDetails(std::move(value)); return *this;}

  private:

    DefaultErrorDetails m_defaultErrorDetails;
    bool m_defaultErrorDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

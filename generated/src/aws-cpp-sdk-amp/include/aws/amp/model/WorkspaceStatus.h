/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/WorkspaceStatusCode.h>
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
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>Represents the status of a workspace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/WorkspaceStatus">AWS
   * API Reference</a></p>
   */
  class WorkspaceStatus
  {
  public:
    AWS_PROMETHEUSSERVICE_API WorkspaceStatus();
    AWS_PROMETHEUSSERVICE_API WorkspaceStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API WorkspaceStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Status code of this workspace.</p>
     */
    inline const WorkspaceStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>Status code of this workspace.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>Status code of this workspace.</p>
     */
    inline void SetStatusCode(const WorkspaceStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>Status code of this workspace.</p>
     */
    inline void SetStatusCode(WorkspaceStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>Status code of this workspace.</p>
     */
    inline WorkspaceStatus& WithStatusCode(const WorkspaceStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>Status code of this workspace.</p>
     */
    inline WorkspaceStatus& WithStatusCode(WorkspaceStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}

  private:

    WorkspaceStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws

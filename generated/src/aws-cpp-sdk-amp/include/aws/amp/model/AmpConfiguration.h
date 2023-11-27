/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A representation of an AMP destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/AmpConfiguration">AWS
   * API Reference</a></p>
   */
  class AmpConfiguration
  {
  public:
    AWS_PROMETHEUSSERVICE_API AmpConfiguration();
    AWS_PROMETHEUSSERVICE_API AmpConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API AmpConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of an AMP workspace.</p>
     */
    inline const Aws::String& GetWorkspaceArn() const{ return m_workspaceArn; }

    /**
     * <p>The ARN of an AMP workspace.</p>
     */
    inline bool WorkspaceArnHasBeenSet() const { return m_workspaceArnHasBeenSet; }

    /**
     * <p>The ARN of an AMP workspace.</p>
     */
    inline void SetWorkspaceArn(const Aws::String& value) { m_workspaceArnHasBeenSet = true; m_workspaceArn = value; }

    /**
     * <p>The ARN of an AMP workspace.</p>
     */
    inline void SetWorkspaceArn(Aws::String&& value) { m_workspaceArnHasBeenSet = true; m_workspaceArn = std::move(value); }

    /**
     * <p>The ARN of an AMP workspace.</p>
     */
    inline void SetWorkspaceArn(const char* value) { m_workspaceArnHasBeenSet = true; m_workspaceArn.assign(value); }

    /**
     * <p>The ARN of an AMP workspace.</p>
     */
    inline AmpConfiguration& WithWorkspaceArn(const Aws::String& value) { SetWorkspaceArn(value); return *this;}

    /**
     * <p>The ARN of an AMP workspace.</p>
     */
    inline AmpConfiguration& WithWorkspaceArn(Aws::String&& value) { SetWorkspaceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an AMP workspace.</p>
     */
    inline AmpConfiguration& WithWorkspaceArn(const char* value) { SetWorkspaceArn(value); return *this;}

  private:

    Aws::String m_workspaceArn;
    bool m_workspaceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws

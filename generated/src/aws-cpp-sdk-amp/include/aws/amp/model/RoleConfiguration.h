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
   * <p>To configure roles that allows users to write to an Amazon Managed Service
   * for Prometheus workspace in a different account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/RoleConfiguration">AWS
   * API Reference</a></p>
   */
  class RoleConfiguration
  {
  public:
    AWS_PROMETHEUSSERVICE_API RoleConfiguration();
    AWS_PROMETHEUSSERVICE_API RoleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API RoleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A ARN identifying the source role configuration.</p>
     */
    inline const Aws::String& GetSourceRoleArn() const{ return m_sourceRoleArn; }
    inline bool SourceRoleArnHasBeenSet() const { return m_sourceRoleArnHasBeenSet; }
    inline void SetSourceRoleArn(const Aws::String& value) { m_sourceRoleArnHasBeenSet = true; m_sourceRoleArn = value; }
    inline void SetSourceRoleArn(Aws::String&& value) { m_sourceRoleArnHasBeenSet = true; m_sourceRoleArn = std::move(value); }
    inline void SetSourceRoleArn(const char* value) { m_sourceRoleArnHasBeenSet = true; m_sourceRoleArn.assign(value); }
    inline RoleConfiguration& WithSourceRoleArn(const Aws::String& value) { SetSourceRoleArn(value); return *this;}
    inline RoleConfiguration& WithSourceRoleArn(Aws::String&& value) { SetSourceRoleArn(std::move(value)); return *this;}
    inline RoleConfiguration& WithSourceRoleArn(const char* value) { SetSourceRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A ARN identifying the target role configuration.</p>
     */
    inline const Aws::String& GetTargetRoleArn() const{ return m_targetRoleArn; }
    inline bool TargetRoleArnHasBeenSet() const { return m_targetRoleArnHasBeenSet; }
    inline void SetTargetRoleArn(const Aws::String& value) { m_targetRoleArnHasBeenSet = true; m_targetRoleArn = value; }
    inline void SetTargetRoleArn(Aws::String&& value) { m_targetRoleArnHasBeenSet = true; m_targetRoleArn = std::move(value); }
    inline void SetTargetRoleArn(const char* value) { m_targetRoleArnHasBeenSet = true; m_targetRoleArn.assign(value); }
    inline RoleConfiguration& WithTargetRoleArn(const Aws::String& value) { SetTargetRoleArn(value); return *this;}
    inline RoleConfiguration& WithTargetRoleArn(Aws::String&& value) { SetTargetRoleArn(std::move(value)); return *this;}
    inline RoleConfiguration& WithTargetRoleArn(const char* value) { SetTargetRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceRoleArn;
    bool m_sourceRoleArnHasBeenSet = false;

    Aws::String m_targetRoleArn;
    bool m_targetRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
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
namespace ElasticsearchService
{
namespace Model
{

  class DryRunResults
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DryRunResults();
    AWS_ELASTICSEARCHSERVICE_API DryRunResults(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API DryRunResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the deployment mechanism through which the update shall be applied
     * on the domain. Possible responses are <code>Blue/Green</code> (The update will
     * require a blue/green deployment.) <code>DynamicUpdate</code> (The update can be
     * applied in-place without a Blue/Green deployment required.)
     * <code>Undetermined</code> (The domain is undergoing an update which needs to
     * complete before the deployment type can be predicted.) <code>None</code> (The
     * configuration change matches the current configuration and will not result in
     * any update.) </p>
     */
    inline const Aws::String& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p> Specifies the deployment mechanism through which the update shall be applied
     * on the domain. Possible responses are <code>Blue/Green</code> (The update will
     * require a blue/green deployment.) <code>DynamicUpdate</code> (The update can be
     * applied in-place without a Blue/Green deployment required.)
     * <code>Undetermined</code> (The domain is undergoing an update which needs to
     * complete before the deployment type can be predicted.) <code>None</code> (The
     * configuration change matches the current configuration and will not result in
     * any update.) </p>
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * <p> Specifies the deployment mechanism through which the update shall be applied
     * on the domain. Possible responses are <code>Blue/Green</code> (The update will
     * require a blue/green deployment.) <code>DynamicUpdate</code> (The update can be
     * applied in-place without a Blue/Green deployment required.)
     * <code>Undetermined</code> (The domain is undergoing an update which needs to
     * complete before the deployment type can be predicted.) <code>None</code> (The
     * configuration change matches the current configuration and will not result in
     * any update.) </p>
     */
    inline void SetDeploymentType(const Aws::String& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p> Specifies the deployment mechanism through which the update shall be applied
     * on the domain. Possible responses are <code>Blue/Green</code> (The update will
     * require a blue/green deployment.) <code>DynamicUpdate</code> (The update can be
     * applied in-place without a Blue/Green deployment required.)
     * <code>Undetermined</code> (The domain is undergoing an update which needs to
     * complete before the deployment type can be predicted.) <code>None</code> (The
     * configuration change matches the current configuration and will not result in
     * any update.) </p>
     */
    inline void SetDeploymentType(Aws::String&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * <p> Specifies the deployment mechanism through which the update shall be applied
     * on the domain. Possible responses are <code>Blue/Green</code> (The update will
     * require a blue/green deployment.) <code>DynamicUpdate</code> (The update can be
     * applied in-place without a Blue/Green deployment required.)
     * <code>Undetermined</code> (The domain is undergoing an update which needs to
     * complete before the deployment type can be predicted.) <code>None</code> (The
     * configuration change matches the current configuration and will not result in
     * any update.) </p>
     */
    inline void SetDeploymentType(const char* value) { m_deploymentTypeHasBeenSet = true; m_deploymentType.assign(value); }

    /**
     * <p> Specifies the deployment mechanism through which the update shall be applied
     * on the domain. Possible responses are <code>Blue/Green</code> (The update will
     * require a blue/green deployment.) <code>DynamicUpdate</code> (The update can be
     * applied in-place without a Blue/Green deployment required.)
     * <code>Undetermined</code> (The domain is undergoing an update which needs to
     * complete before the deployment type can be predicted.) <code>None</code> (The
     * configuration change matches the current configuration and will not result in
     * any update.) </p>
     */
    inline DryRunResults& WithDeploymentType(const Aws::String& value) { SetDeploymentType(value); return *this;}

    /**
     * <p> Specifies the deployment mechanism through which the update shall be applied
     * on the domain. Possible responses are <code>Blue/Green</code> (The update will
     * require a blue/green deployment.) <code>DynamicUpdate</code> (The update can be
     * applied in-place without a Blue/Green deployment required.)
     * <code>Undetermined</code> (The domain is undergoing an update which needs to
     * complete before the deployment type can be predicted.) <code>None</code> (The
     * configuration change matches the current configuration and will not result in
     * any update.) </p>
     */
    inline DryRunResults& WithDeploymentType(Aws::String&& value) { SetDeploymentType(std::move(value)); return *this;}

    /**
     * <p> Specifies the deployment mechanism through which the update shall be applied
     * on the domain. Possible responses are <code>Blue/Green</code> (The update will
     * require a blue/green deployment.) <code>DynamicUpdate</code> (The update can be
     * applied in-place without a Blue/Green deployment required.)
     * <code>Undetermined</code> (The domain is undergoing an update which needs to
     * complete before the deployment type can be predicted.) <code>None</code> (The
     * configuration change matches the current configuration and will not result in
     * any update.) </p>
     */
    inline DryRunResults& WithDeploymentType(const char* value) { SetDeploymentType(value); return *this;}


    /**
     * <p>Contains an optional message associated with the DryRunResults.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Contains an optional message associated with the DryRunResults.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Contains an optional message associated with the DryRunResults.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Contains an optional message associated with the DryRunResults.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Contains an optional message associated with the DryRunResults.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Contains an optional message associated with the DryRunResults.</p>
     */
    inline DryRunResults& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Contains an optional message associated with the DryRunResults.</p>
     */
    inline DryRunResults& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Contains an optional message associated with the DryRunResults.</p>
     */
    inline DryRunResults& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_deploymentType;
    bool m_deploymentTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws

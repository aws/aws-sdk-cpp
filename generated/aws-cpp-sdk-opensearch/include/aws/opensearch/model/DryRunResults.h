/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{

  class AWS_OPENSEARCHSERVICE_API DryRunResults
  {
  public:
    DryRunResults();
    DryRunResults(Aws::Utils::Json::JsonView jsonValue);
    DryRunResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the way in which Amazon OpenSearch Service applies the update.
     * Possible responses are <code>Blue/Green</code> (the update requires a blue/green
     * deployment), <code>DynamicUpdate</code> (no blue/green required),
     * <code>Undetermined</code> (the domain is undergoing an update and can't predict
     * the deployment type; try again after the update is complete), and
     * <code>None</code> (the request doesn't include any configuration changes). </p>
     */
    inline const Aws::String& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p> Specifies the way in which Amazon OpenSearch Service applies the update.
     * Possible responses are <code>Blue/Green</code> (the update requires a blue/green
     * deployment), <code>DynamicUpdate</code> (no blue/green required),
     * <code>Undetermined</code> (the domain is undergoing an update and can't predict
     * the deployment type; try again after the update is complete), and
     * <code>None</code> (the request doesn't include any configuration changes). </p>
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * <p> Specifies the way in which Amazon OpenSearch Service applies the update.
     * Possible responses are <code>Blue/Green</code> (the update requires a blue/green
     * deployment), <code>DynamicUpdate</code> (no blue/green required),
     * <code>Undetermined</code> (the domain is undergoing an update and can't predict
     * the deployment type; try again after the update is complete), and
     * <code>None</code> (the request doesn't include any configuration changes). </p>
     */
    inline void SetDeploymentType(const Aws::String& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p> Specifies the way in which Amazon OpenSearch Service applies the update.
     * Possible responses are <code>Blue/Green</code> (the update requires a blue/green
     * deployment), <code>DynamicUpdate</code> (no blue/green required),
     * <code>Undetermined</code> (the domain is undergoing an update and can't predict
     * the deployment type; try again after the update is complete), and
     * <code>None</code> (the request doesn't include any configuration changes). </p>
     */
    inline void SetDeploymentType(Aws::String&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * <p> Specifies the way in which Amazon OpenSearch Service applies the update.
     * Possible responses are <code>Blue/Green</code> (the update requires a blue/green
     * deployment), <code>DynamicUpdate</code> (no blue/green required),
     * <code>Undetermined</code> (the domain is undergoing an update and can't predict
     * the deployment type; try again after the update is complete), and
     * <code>None</code> (the request doesn't include any configuration changes). </p>
     */
    inline void SetDeploymentType(const char* value) { m_deploymentTypeHasBeenSet = true; m_deploymentType.assign(value); }

    /**
     * <p> Specifies the way in which Amazon OpenSearch Service applies the update.
     * Possible responses are <code>Blue/Green</code> (the update requires a blue/green
     * deployment), <code>DynamicUpdate</code> (no blue/green required),
     * <code>Undetermined</code> (the domain is undergoing an update and can't predict
     * the deployment type; try again after the update is complete), and
     * <code>None</code> (the request doesn't include any configuration changes). </p>
     */
    inline DryRunResults& WithDeploymentType(const Aws::String& value) { SetDeploymentType(value); return *this;}

    /**
     * <p> Specifies the way in which Amazon OpenSearch Service applies the update.
     * Possible responses are <code>Blue/Green</code> (the update requires a blue/green
     * deployment), <code>DynamicUpdate</code> (no blue/green required),
     * <code>Undetermined</code> (the domain is undergoing an update and can't predict
     * the deployment type; try again after the update is complete), and
     * <code>None</code> (the request doesn't include any configuration changes). </p>
     */
    inline DryRunResults& WithDeploymentType(Aws::String&& value) { SetDeploymentType(std::move(value)); return *this;}

    /**
     * <p> Specifies the way in which Amazon OpenSearch Service applies the update.
     * Possible responses are <code>Blue/Green</code> (the update requires a blue/green
     * deployment), <code>DynamicUpdate</code> (no blue/green required),
     * <code>Undetermined</code> (the domain is undergoing an update and can't predict
     * the deployment type; try again after the update is complete), and
     * <code>None</code> (the request doesn't include any configuration changes). </p>
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
    bool m_deploymentTypeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws

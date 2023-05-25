/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class StartBlueprintRunRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API StartBlueprintRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartBlueprintRun"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the blueprint.</p>
     */
    inline const Aws::String& GetBlueprintName() const{ return m_blueprintName; }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline bool BlueprintNameHasBeenSet() const { return m_blueprintNameHasBeenSet; }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline void SetBlueprintName(const Aws::String& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = value; }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline void SetBlueprintName(Aws::String&& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = std::move(value); }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline void SetBlueprintName(const char* value) { m_blueprintNameHasBeenSet = true; m_blueprintName.assign(value); }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline StartBlueprintRunRequest& WithBlueprintName(const Aws::String& value) { SetBlueprintName(value); return *this;}

    /**
     * <p>The name of the blueprint.</p>
     */
    inline StartBlueprintRunRequest& WithBlueprintName(Aws::String&& value) { SetBlueprintName(std::move(value)); return *this;}

    /**
     * <p>The name of the blueprint.</p>
     */
    inline StartBlueprintRunRequest& WithBlueprintName(const char* value) { SetBlueprintName(value); return *this;}


    /**
     * <p>Specifies the parameters as a <code>BlueprintParameters</code> object.</p>
     */
    inline const Aws::String& GetParameters() const{ return m_parameters; }

    /**
     * <p>Specifies the parameters as a <code>BlueprintParameters</code> object.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Specifies the parameters as a <code>BlueprintParameters</code> object.</p>
     */
    inline void SetParameters(const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Specifies the parameters as a <code>BlueprintParameters</code> object.</p>
     */
    inline void SetParameters(Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Specifies the parameters as a <code>BlueprintParameters</code> object.</p>
     */
    inline void SetParameters(const char* value) { m_parametersHasBeenSet = true; m_parameters.assign(value); }

    /**
     * <p>Specifies the parameters as a <code>BlueprintParameters</code> object.</p>
     */
    inline StartBlueprintRunRequest& WithParameters(const Aws::String& value) { SetParameters(value); return *this;}

    /**
     * <p>Specifies the parameters as a <code>BlueprintParameters</code> object.</p>
     */
    inline StartBlueprintRunRequest& WithParameters(Aws::String&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Specifies the parameters as a <code>BlueprintParameters</code> object.</p>
     */
    inline StartBlueprintRunRequest& WithParameters(const char* value) { SetParameters(value); return *this;}


    /**
     * <p>Specifies the IAM role used to create the workflow.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>Specifies the IAM role used to create the workflow.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>Specifies the IAM role used to create the workflow.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>Specifies the IAM role used to create the workflow.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>Specifies the IAM role used to create the workflow.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>Specifies the IAM role used to create the workflow.</p>
     */
    inline StartBlueprintRunRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>Specifies the IAM role used to create the workflow.</p>
     */
    inline StartBlueprintRunRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the IAM role used to create the workflow.</p>
     */
    inline StartBlueprintRunRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_blueprintName;
    bool m_blueprintNameHasBeenSet = false;

    Aws::String m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

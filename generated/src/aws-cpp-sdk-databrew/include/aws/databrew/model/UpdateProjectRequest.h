/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/GlueDataBrewRequest.h>
#include <aws/databrew/model/Sample.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

  /**
   */
  class UpdateProjectRequest : public GlueDataBrewRequest
  {
  public:
    AWS_GLUEDATABREW_API UpdateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProject"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;


    
    inline const Sample& GetSample() const{ return m_sample; }

    
    inline bool SampleHasBeenSet() const { return m_sampleHasBeenSet; }

    
    inline void SetSample(const Sample& value) { m_sampleHasBeenSet = true; m_sample = value; }

    
    inline void SetSample(Sample&& value) { m_sampleHasBeenSet = true; m_sample = std::move(value); }

    
    inline UpdateProjectRequest& WithSample(const Sample& value) { SetSample(value); return *this;}

    
    inline UpdateProjectRequest& WithSample(Sample&& value) { SetSample(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed for this
     * request.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed for this
     * request.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed for this
     * request.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed for this
     * request.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed for this
     * request.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed for this
     * request.</p>
     */
    inline UpdateProjectRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed for this
     * request.</p>
     */
    inline UpdateProjectRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed for this
     * request.</p>
     */
    inline UpdateProjectRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The name of the project to be updated.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the project to be updated.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the project to be updated.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the project to be updated.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the project to be updated.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the project to be updated.</p>
     */
    inline UpdateProjectRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the project to be updated.</p>
     */
    inline UpdateProjectRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the project to be updated.</p>
     */
    inline UpdateProjectRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Sample m_sample;
    bool m_sampleHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws

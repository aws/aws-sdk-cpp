/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/ComputePlatform.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>CreateApplication</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateApplicationInput">AWS
   * API Reference</a></p>
   */
  class CreateApplicationRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API CreateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the application. This name must be unique with the applicable IAM
     * or Amazon Web Services account.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application. This name must be unique with the applicable IAM
     * or Amazon Web Services account.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application. This name must be unique with the applicable IAM
     * or Amazon Web Services account.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application. This name must be unique with the applicable IAM
     * or Amazon Web Services account.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application. This name must be unique with the applicable IAM
     * or Amazon Web Services account.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application. This name must be unique with the applicable IAM
     * or Amazon Web Services account.</p>
     */
    inline CreateApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application. This name must be unique with the applicable IAM
     * or Amazon Web Services account.</p>
     */
    inline CreateApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application. This name must be unique with the applicable IAM
     * or Amazon Web Services account.</p>
     */
    inline CreateApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p> The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline const ComputePlatform& GetComputePlatform() const{ return m_computePlatform; }

    /**
     * <p> The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline bool ComputePlatformHasBeenSet() const { return m_computePlatformHasBeenSet; }

    /**
     * <p> The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline void SetComputePlatform(const ComputePlatform& value) { m_computePlatformHasBeenSet = true; m_computePlatform = value; }

    /**
     * <p> The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline void SetComputePlatform(ComputePlatform&& value) { m_computePlatformHasBeenSet = true; m_computePlatform = std::move(value); }

    /**
     * <p> The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline CreateApplicationRequest& WithComputePlatform(const ComputePlatform& value) { SetComputePlatform(value); return *this;}

    /**
     * <p> The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline CreateApplicationRequest& WithComputePlatform(ComputePlatform&& value) { SetComputePlatform(std::move(value)); return *this;}


    /**
     * <p> The metadata that you apply to CodeDeploy applications to help you organize
     * and categorize them. Each tag consists of a key and an optional value, both of
     * which you define. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p> The metadata that you apply to CodeDeploy applications to help you organize
     * and categorize them. Each tag consists of a key and an optional value, both of
     * which you define. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> The metadata that you apply to CodeDeploy applications to help you organize
     * and categorize them. Each tag consists of a key and an optional value, both of
     * which you define. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> The metadata that you apply to CodeDeploy applications to help you organize
     * and categorize them. Each tag consists of a key and an optional value, both of
     * which you define. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> The metadata that you apply to CodeDeploy applications to help you organize
     * and categorize them. Each tag consists of a key and an optional value, both of
     * which you define. </p>
     */
    inline CreateApplicationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p> The metadata that you apply to CodeDeploy applications to help you organize
     * and categorize them. Each tag consists of a key and an optional value, both of
     * which you define. </p>
     */
    inline CreateApplicationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The metadata that you apply to CodeDeploy applications to help you organize
     * and categorize them. Each tag consists of a key and an optional value, both of
     * which you define. </p>
     */
    inline CreateApplicationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p> The metadata that you apply to CodeDeploy applications to help you organize
     * and categorize them. Each tag consists of a key and an optional value, both of
     * which you define. </p>
     */
    inline CreateApplicationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    ComputePlatform m_computePlatform;
    bool m_computePlatformHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws

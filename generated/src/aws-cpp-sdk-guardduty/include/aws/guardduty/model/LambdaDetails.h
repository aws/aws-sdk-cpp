/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/guardduty/model/VpcConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/Tag.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about the Lambda function involved in the finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/LambdaDetails">AWS
   * API Reference</a></p>
   */
  class LambdaDetails
  {
  public:
    AWS_GUARDDUTY_API LambdaDetails();
    AWS_GUARDDUTY_API LambdaDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API LambdaDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline LambdaDetails& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline LambdaDetails& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline LambdaDetails& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    /**
     * <p>Name of the Lambda function.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>Name of the Lambda function.</p>
     */
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }

    /**
     * <p>Name of the Lambda function.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>Name of the Lambda function.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p>Name of the Lambda function.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>Name of the Lambda function.</p>
     */
    inline LambdaDetails& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>Name of the Lambda function.</p>
     */
    inline LambdaDetails& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>Name of the Lambda function.</p>
     */
    inline LambdaDetails& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>Description of the Lambda function.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the Lambda function.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description of the Lambda function.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the Lambda function.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description of the Lambda function.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description of the Lambda function.</p>
     */
    inline LambdaDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the Lambda function.</p>
     */
    inline LambdaDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the Lambda function.</p>
     */
    inline LambdaDetails& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The timestamp when the Lambda function was last modified. This field is in
     * the UTC date string format <code>(2023-03-22T19:37:20.168Z)</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }

    /**
     * <p>The timestamp when the Lambda function was last modified. This field is in
     * the UTC date string format <code>(2023-03-22T19:37:20.168Z)</code>.</p>
     */
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }

    /**
     * <p>The timestamp when the Lambda function was last modified. This field is in
     * the UTC date string format <code>(2023-03-22T19:37:20.168Z)</code>.</p>
     */
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = value; }

    /**
     * <p>The timestamp when the Lambda function was last modified. This field is in
     * the UTC date string format <code>(2023-03-22T19:37:20.168Z)</code>.</p>
     */
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::move(value); }

    /**
     * <p>The timestamp when the Lambda function was last modified. This field is in
     * the UTC date string format <code>(2023-03-22T19:37:20.168Z)</code>.</p>
     */
    inline LambdaDetails& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}

    /**
     * <p>The timestamp when the Lambda function was last modified. This field is in
     * the UTC date string format <code>(2023-03-22T19:37:20.168Z)</code>.</p>
     */
    inline LambdaDetails& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}


    /**
     * <p>The revision ID of the Lambda function version.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The revision ID of the Lambda function version.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The revision ID of the Lambda function version.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The revision ID of the Lambda function version.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The revision ID of the Lambda function version.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The revision ID of the Lambda function version.</p>
     */
    inline LambdaDetails& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The revision ID of the Lambda function version.</p>
     */
    inline LambdaDetails& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The revision ID of the Lambda function version.</p>
     */
    inline LambdaDetails& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>The version of the Lambda function.</p>
     */
    inline const Aws::String& GetFunctionVersion() const{ return m_functionVersion; }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline bool FunctionVersionHasBeenSet() const { return m_functionVersionHasBeenSet; }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline void SetFunctionVersion(const Aws::String& value) { m_functionVersionHasBeenSet = true; m_functionVersion = value; }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline void SetFunctionVersion(Aws::String&& value) { m_functionVersionHasBeenSet = true; m_functionVersion = std::move(value); }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline void SetFunctionVersion(const char* value) { m_functionVersionHasBeenSet = true; m_functionVersion.assign(value); }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline LambdaDetails& WithFunctionVersion(const Aws::String& value) { SetFunctionVersion(value); return *this;}

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline LambdaDetails& WithFunctionVersion(Aws::String&& value) { SetFunctionVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline LambdaDetails& WithFunctionVersion(const char* value) { SetFunctionVersion(value); return *this;}


    /**
     * <p>The execution role of the Lambda function.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The execution role of the Lambda function.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The execution role of the Lambda function.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The execution role of the Lambda function.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The execution role of the Lambda function.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The execution role of the Lambda function.</p>
     */
    inline LambdaDetails& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The execution role of the Lambda function.</p>
     */
    inline LambdaDetails& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The execution role of the Lambda function.</p>
     */
    inline LambdaDetails& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>Amazon Virtual Private Cloud configuration details associated with your
     * Lambda function.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>Amazon Virtual Private Cloud configuration details associated with your
     * Lambda function.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>Amazon Virtual Private Cloud configuration details associated with your
     * Lambda function.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>Amazon Virtual Private Cloud configuration details associated with your
     * Lambda function.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>Amazon Virtual Private Cloud configuration details associated with your
     * Lambda function.</p>
     */
    inline LambdaDetails& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>Amazon Virtual Private Cloud configuration details associated with your
     * Lambda function.</p>
     */
    inline LambdaDetails& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>A list of tags attached to this resource, listed in the format of
     * <code>key</code>:<code>value</code> pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags attached to this resource, listed in the format of
     * <code>key</code>:<code>value</code> pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags attached to this resource, listed in the format of
     * <code>key</code>:<code>value</code> pair.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags attached to this resource, listed in the format of
     * <code>key</code>:<code>value</code> pair.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags attached to this resource, listed in the format of
     * <code>key</code>:<code>value</code> pair.</p>
     */
    inline LambdaDetails& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags attached to this resource, listed in the format of
     * <code>key</code>:<code>value</code> pair.</p>
     */
    inline LambdaDetails& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags attached to this resource, listed in the format of
     * <code>key</code>:<code>value</code> pair.</p>
     */
    inline LambdaDetails& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags attached to this resource, listed in the format of
     * <code>key</code>:<code>value</code> pair.</p>
     */
    inline LambdaDetails& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt;
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_functionVersion;
    bool m_functionVersionHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/RequestLaunchTemplateData.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateLaunchTemplateRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateLaunchTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLaunchTemplate"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateLaunchTemplateRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline CreateLaunchTemplateRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline CreateLaunchTemplateRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline CreateLaunchTemplateRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A name for the launch template.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }

    /**
     * <p>A name for the launch template.</p>
     */
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }

    /**
     * <p>A name for the launch template.</p>
     */
    inline void SetLaunchTemplateName(const Aws::String& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = value; }

    /**
     * <p>A name for the launch template.</p>
     */
    inline void SetLaunchTemplateName(Aws::String&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::move(value); }

    /**
     * <p>A name for the launch template.</p>
     */
    inline void SetLaunchTemplateName(const char* value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName.assign(value); }

    /**
     * <p>A name for the launch template.</p>
     */
    inline CreateLaunchTemplateRequest& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}

    /**
     * <p>A name for the launch template.</p>
     */
    inline CreateLaunchTemplateRequest& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}

    /**
     * <p>A name for the launch template.</p>
     */
    inline CreateLaunchTemplateRequest& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}


    /**
     * <p>A description for the first version of the launch template.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }

    /**
     * <p>A description for the first version of the launch template.</p>
     */
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }

    /**
     * <p>A description for the first version of the launch template.</p>
     */
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }

    /**
     * <p>A description for the first version of the launch template.</p>
     */
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }

    /**
     * <p>A description for the first version of the launch template.</p>
     */
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }

    /**
     * <p>A description for the first version of the launch template.</p>
     */
    inline CreateLaunchTemplateRequest& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}

    /**
     * <p>A description for the first version of the launch template.</p>
     */
    inline CreateLaunchTemplateRequest& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the first version of the launch template.</p>
     */
    inline CreateLaunchTemplateRequest& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}


    /**
     * <p>The information for the launch template.</p>
     */
    inline const RequestLaunchTemplateData& GetLaunchTemplateData() const{ return m_launchTemplateData; }

    /**
     * <p>The information for the launch template.</p>
     */
    inline bool LaunchTemplateDataHasBeenSet() const { return m_launchTemplateDataHasBeenSet; }

    /**
     * <p>The information for the launch template.</p>
     */
    inline void SetLaunchTemplateData(const RequestLaunchTemplateData& value) { m_launchTemplateDataHasBeenSet = true; m_launchTemplateData = value; }

    /**
     * <p>The information for the launch template.</p>
     */
    inline void SetLaunchTemplateData(RequestLaunchTemplateData&& value) { m_launchTemplateDataHasBeenSet = true; m_launchTemplateData = std::move(value); }

    /**
     * <p>The information for the launch template.</p>
     */
    inline CreateLaunchTemplateRequest& WithLaunchTemplateData(const RequestLaunchTemplateData& value) { SetLaunchTemplateData(value); return *this;}

    /**
     * <p>The information for the launch template.</p>
     */
    inline CreateLaunchTemplateRequest& WithLaunchTemplateData(RequestLaunchTemplateData&& value) { SetLaunchTemplateData(std::move(value)); return *this;}


    /**
     * <p>The tags to apply to the launch template on creation. To tag the launch
     * template, the resource type must be <code>launch-template</code>.</p> 
     * <p>To specify the tags for the resources that are created when an instance is
     * launched, you must use the <code>TagSpecifications</code> parameter in the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestLaunchTemplateData.html">launch
     * template data</a> structure.</p> 
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the launch template on creation. To tag the launch
     * template, the resource type must be <code>launch-template</code>.</p> 
     * <p>To specify the tags for the resources that are created when an instance is
     * launched, you must use the <code>TagSpecifications</code> parameter in the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestLaunchTemplateData.html">launch
     * template data</a> structure.</p> 
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the launch template on creation. To tag the launch
     * template, the resource type must be <code>launch-template</code>.</p> 
     * <p>To specify the tags for the resources that are created when an instance is
     * launched, you must use the <code>TagSpecifications</code> parameter in the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestLaunchTemplateData.html">launch
     * template data</a> structure.</p> 
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the launch template on creation. To tag the launch
     * template, the resource type must be <code>launch-template</code>.</p> 
     * <p>To specify the tags for the resources that are created when an instance is
     * launched, you must use the <code>TagSpecifications</code> parameter in the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestLaunchTemplateData.html">launch
     * template data</a> structure.</p> 
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the launch template on creation. To tag the launch
     * template, the resource type must be <code>launch-template</code>.</p> 
     * <p>To specify the tags for the resources that are created when an instance is
     * launched, you must use the <code>TagSpecifications</code> parameter in the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestLaunchTemplateData.html">launch
     * template data</a> structure.</p> 
     */
    inline CreateLaunchTemplateRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the launch template on creation. To tag the launch
     * template, the resource type must be <code>launch-template</code>.</p> 
     * <p>To specify the tags for the resources that are created when an instance is
     * launched, you must use the <code>TagSpecifications</code> parameter in the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestLaunchTemplateData.html">launch
     * template data</a> structure.</p> 
     */
    inline CreateLaunchTemplateRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the launch template on creation. To tag the launch
     * template, the resource type must be <code>launch-template</code>.</p> 
     * <p>To specify the tags for the resources that are created when an instance is
     * launched, you must use the <code>TagSpecifications</code> parameter in the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestLaunchTemplateData.html">launch
     * template data</a> structure.</p> 
     */
    inline CreateLaunchTemplateRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the launch template on creation. To tag the launch
     * template, the resource type must be <code>launch-template</code>.</p> 
     * <p>To specify the tags for the resources that are created when an instance is
     * launched, you must use the <code>TagSpecifications</code> parameter in the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestLaunchTemplateData.html">launch
     * template data</a> structure.</p> 
     */
    inline CreateLaunchTemplateRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet = false;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet = false;

    RequestLaunchTemplateData m_launchTemplateData;
    bool m_launchTemplateDataHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

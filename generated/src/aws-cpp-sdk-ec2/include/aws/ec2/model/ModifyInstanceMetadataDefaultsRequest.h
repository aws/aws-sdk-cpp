/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/MetadataDefaultHttpTokensState.h>
#include <aws/ec2/model/DefaultInstanceMetadataEndpointState.h>
#include <aws/ec2/model/DefaultInstanceMetadataTagsState.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyInstanceMetadataDefaultsRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyInstanceMetadataDefaultsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyInstanceMetadataDefaults"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Indicates whether IMDSv2 is required.</p> <ul> <li> <p> <code>optional</code>
     * – IMDSv2 is optional, which means that you can use either IMDSv2 or IMDSv1.</p>
     * </li> <li> <p> <code>required</code> – IMDSv2 is required, which means that
     * IMDSv1 is disabled, and you must use IMDSv2.</p> </li> </ul>
     */
    inline const MetadataDefaultHttpTokensState& GetHttpTokens() const{ return m_httpTokens; }

    /**
     * <p>Indicates whether IMDSv2 is required.</p> <ul> <li> <p> <code>optional</code>
     * – IMDSv2 is optional, which means that you can use either IMDSv2 or IMDSv1.</p>
     * </li> <li> <p> <code>required</code> – IMDSv2 is required, which means that
     * IMDSv1 is disabled, and you must use IMDSv2.</p> </li> </ul>
     */
    inline bool HttpTokensHasBeenSet() const { return m_httpTokensHasBeenSet; }

    /**
     * <p>Indicates whether IMDSv2 is required.</p> <ul> <li> <p> <code>optional</code>
     * – IMDSv2 is optional, which means that you can use either IMDSv2 or IMDSv1.</p>
     * </li> <li> <p> <code>required</code> – IMDSv2 is required, which means that
     * IMDSv1 is disabled, and you must use IMDSv2.</p> </li> </ul>
     */
    inline void SetHttpTokens(const MetadataDefaultHttpTokensState& value) { m_httpTokensHasBeenSet = true; m_httpTokens = value; }

    /**
     * <p>Indicates whether IMDSv2 is required.</p> <ul> <li> <p> <code>optional</code>
     * – IMDSv2 is optional, which means that you can use either IMDSv2 or IMDSv1.</p>
     * </li> <li> <p> <code>required</code> – IMDSv2 is required, which means that
     * IMDSv1 is disabled, and you must use IMDSv2.</p> </li> </ul>
     */
    inline void SetHttpTokens(MetadataDefaultHttpTokensState&& value) { m_httpTokensHasBeenSet = true; m_httpTokens = std::move(value); }

    /**
     * <p>Indicates whether IMDSv2 is required.</p> <ul> <li> <p> <code>optional</code>
     * – IMDSv2 is optional, which means that you can use either IMDSv2 or IMDSv1.</p>
     * </li> <li> <p> <code>required</code> – IMDSv2 is required, which means that
     * IMDSv1 is disabled, and you must use IMDSv2.</p> </li> </ul>
     */
    inline ModifyInstanceMetadataDefaultsRequest& WithHttpTokens(const MetadataDefaultHttpTokensState& value) { SetHttpTokens(value); return *this;}

    /**
     * <p>Indicates whether IMDSv2 is required.</p> <ul> <li> <p> <code>optional</code>
     * – IMDSv2 is optional, which means that you can use either IMDSv2 or IMDSv1.</p>
     * </li> <li> <p> <code>required</code> – IMDSv2 is required, which means that
     * IMDSv1 is disabled, and you must use IMDSv2.</p> </li> </ul>
     */
    inline ModifyInstanceMetadataDefaultsRequest& WithHttpTokens(MetadataDefaultHttpTokensState&& value) { SetHttpTokens(std::move(value)); return *this;}


    /**
     * <p>The maximum number of hops that the metadata token can travel. To indicate no
     * preference, specify <code>-1</code>.</p> <p>Possible values: Integers from
     * <code>1</code> to <code>64</code>, and <code>-1</code> to indicate no
     * preference</p>
     */
    inline int GetHttpPutResponseHopLimit() const{ return m_httpPutResponseHopLimit; }

    /**
     * <p>The maximum number of hops that the metadata token can travel. To indicate no
     * preference, specify <code>-1</code>.</p> <p>Possible values: Integers from
     * <code>1</code> to <code>64</code>, and <code>-1</code> to indicate no
     * preference</p>
     */
    inline bool HttpPutResponseHopLimitHasBeenSet() const { return m_httpPutResponseHopLimitHasBeenSet; }

    /**
     * <p>The maximum number of hops that the metadata token can travel. To indicate no
     * preference, specify <code>-1</code>.</p> <p>Possible values: Integers from
     * <code>1</code> to <code>64</code>, and <code>-1</code> to indicate no
     * preference</p>
     */
    inline void SetHttpPutResponseHopLimit(int value) { m_httpPutResponseHopLimitHasBeenSet = true; m_httpPutResponseHopLimit = value; }

    /**
     * <p>The maximum number of hops that the metadata token can travel. To indicate no
     * preference, specify <code>-1</code>.</p> <p>Possible values: Integers from
     * <code>1</code> to <code>64</code>, and <code>-1</code> to indicate no
     * preference</p>
     */
    inline ModifyInstanceMetadataDefaultsRequest& WithHttpPutResponseHopLimit(int value) { SetHttpPutResponseHopLimit(value); return *this;}


    /**
     * <p>Enables or disables the IMDS endpoint on an instance. When disabled, the
     * instance metadata can't be accessed.</p>
     */
    inline const DefaultInstanceMetadataEndpointState& GetHttpEndpoint() const{ return m_httpEndpoint; }

    /**
     * <p>Enables or disables the IMDS endpoint on an instance. When disabled, the
     * instance metadata can't be accessed.</p>
     */
    inline bool HttpEndpointHasBeenSet() const { return m_httpEndpointHasBeenSet; }

    /**
     * <p>Enables or disables the IMDS endpoint on an instance. When disabled, the
     * instance metadata can't be accessed.</p>
     */
    inline void SetHttpEndpoint(const DefaultInstanceMetadataEndpointState& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = value; }

    /**
     * <p>Enables or disables the IMDS endpoint on an instance. When disabled, the
     * instance metadata can't be accessed.</p>
     */
    inline void SetHttpEndpoint(DefaultInstanceMetadataEndpointState&& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = std::move(value); }

    /**
     * <p>Enables or disables the IMDS endpoint on an instance. When disabled, the
     * instance metadata can't be accessed.</p>
     */
    inline ModifyInstanceMetadataDefaultsRequest& WithHttpEndpoint(const DefaultInstanceMetadataEndpointState& value) { SetHttpEndpoint(value); return *this;}

    /**
     * <p>Enables or disables the IMDS endpoint on an instance. When disabled, the
     * instance metadata can't be accessed.</p>
     */
    inline ModifyInstanceMetadataDefaultsRequest& WithHttpEndpoint(DefaultInstanceMetadataEndpointState&& value) { SetHttpEndpoint(std::move(value)); return *this;}


    /**
     * <p>Enables or disables access to an instance's tags from the instance metadata.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline const DefaultInstanceMetadataTagsState& GetInstanceMetadataTags() const{ return m_instanceMetadataTags; }

    /**
     * <p>Enables or disables access to an instance's tags from the instance metadata.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline bool InstanceMetadataTagsHasBeenSet() const { return m_instanceMetadataTagsHasBeenSet; }

    /**
     * <p>Enables or disables access to an instance's tags from the instance metadata.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline void SetInstanceMetadataTags(const DefaultInstanceMetadataTagsState& value) { m_instanceMetadataTagsHasBeenSet = true; m_instanceMetadataTags = value; }

    /**
     * <p>Enables or disables access to an instance's tags from the instance metadata.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline void SetInstanceMetadataTags(DefaultInstanceMetadataTagsState&& value) { m_instanceMetadataTagsHasBeenSet = true; m_instanceMetadataTags = std::move(value); }

    /**
     * <p>Enables or disables access to an instance's tags from the instance metadata.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline ModifyInstanceMetadataDefaultsRequest& WithInstanceMetadataTags(const DefaultInstanceMetadataTagsState& value) { SetInstanceMetadataTags(value); return *this;}

    /**
     * <p>Enables or disables access to an instance's tags from the instance metadata.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline ModifyInstanceMetadataDefaultsRequest& WithInstanceMetadataTags(DefaultInstanceMetadataTagsState&& value) { SetInstanceMetadataTags(std::move(value)); return *this;}


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
    inline ModifyInstanceMetadataDefaultsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    MetadataDefaultHttpTokensState m_httpTokens;
    bool m_httpTokensHasBeenSet = false;

    int m_httpPutResponseHopLimit;
    bool m_httpPutResponseHopLimitHasBeenSet = false;

    DefaultInstanceMetadataEndpointState m_httpEndpoint;
    bool m_httpEndpointHasBeenSet = false;

    DefaultInstanceMetadataTagsState m_instanceMetadataTags;
    bool m_instanceMetadataTagsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

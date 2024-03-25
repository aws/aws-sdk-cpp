/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/HttpTokensState.h>
#include <aws/ec2/model/InstanceMetadataEndpointState.h>
#include <aws/ec2/model/InstanceMetadataTagsState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>The default instance metadata service (IMDS) settings that were set at the
   * account level in the specified Amazon Web Services&#x2028; Region.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceMetadataDefaultsResponse">AWS
   * API Reference</a></p>
   */
  class InstanceMetadataDefaultsResponse
  {
  public:
    AWS_EC2_API InstanceMetadataDefaultsResponse();
    AWS_EC2_API InstanceMetadataDefaultsResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceMetadataDefaultsResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether IMDSv2 is required.</p> <ul> <li> <p> <code>optional</code>
     * – IMDSv2 is optional, which means that you can use either IMDSv2 or IMDSv1.</p>
     * </li> <li> <p> <code>required</code> – IMDSv2 is required, which means that
     * IMDSv1 is disabled, and you must use IMDSv2.</p> </li> </ul>
     */
    inline const HttpTokensState& GetHttpTokens() const{ return m_httpTokens; }

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
    inline void SetHttpTokens(const HttpTokensState& value) { m_httpTokensHasBeenSet = true; m_httpTokens = value; }

    /**
     * <p>Indicates whether IMDSv2 is required.</p> <ul> <li> <p> <code>optional</code>
     * – IMDSv2 is optional, which means that you can use either IMDSv2 or IMDSv1.</p>
     * </li> <li> <p> <code>required</code> – IMDSv2 is required, which means that
     * IMDSv1 is disabled, and you must use IMDSv2.</p> </li> </ul>
     */
    inline void SetHttpTokens(HttpTokensState&& value) { m_httpTokensHasBeenSet = true; m_httpTokens = std::move(value); }

    /**
     * <p>Indicates whether IMDSv2 is required.</p> <ul> <li> <p> <code>optional</code>
     * – IMDSv2 is optional, which means that you can use either IMDSv2 or IMDSv1.</p>
     * </li> <li> <p> <code>required</code> – IMDSv2 is required, which means that
     * IMDSv1 is disabled, and you must use IMDSv2.</p> </li> </ul>
     */
    inline InstanceMetadataDefaultsResponse& WithHttpTokens(const HttpTokensState& value) { SetHttpTokens(value); return *this;}

    /**
     * <p>Indicates whether IMDSv2 is required.</p> <ul> <li> <p> <code>optional</code>
     * – IMDSv2 is optional, which means that you can use either IMDSv2 or IMDSv1.</p>
     * </li> <li> <p> <code>required</code> – IMDSv2 is required, which means that
     * IMDSv1 is disabled, and you must use IMDSv2.</p> </li> </ul>
     */
    inline InstanceMetadataDefaultsResponse& WithHttpTokens(HttpTokensState&& value) { SetHttpTokens(std::move(value)); return *this;}


    /**
     * <p>The maximum number of hops that the metadata token can travel.</p>
     */
    inline int GetHttpPutResponseHopLimit() const{ return m_httpPutResponseHopLimit; }

    /**
     * <p>The maximum number of hops that the metadata token can travel.</p>
     */
    inline bool HttpPutResponseHopLimitHasBeenSet() const { return m_httpPutResponseHopLimitHasBeenSet; }

    /**
     * <p>The maximum number of hops that the metadata token can travel.</p>
     */
    inline void SetHttpPutResponseHopLimit(int value) { m_httpPutResponseHopLimitHasBeenSet = true; m_httpPutResponseHopLimit = value; }

    /**
     * <p>The maximum number of hops that the metadata token can travel.</p>
     */
    inline InstanceMetadataDefaultsResponse& WithHttpPutResponseHopLimit(int value) { SetHttpPutResponseHopLimit(value); return *this;}


    /**
     * <p>Indicates whether the IMDS endpoint for an instance is enabled or disabled.
     * When disabled, the instance metadata can't be accessed.</p>
     */
    inline const InstanceMetadataEndpointState& GetHttpEndpoint() const{ return m_httpEndpoint; }

    /**
     * <p>Indicates whether the IMDS endpoint for an instance is enabled or disabled.
     * When disabled, the instance metadata can't be accessed.</p>
     */
    inline bool HttpEndpointHasBeenSet() const { return m_httpEndpointHasBeenSet; }

    /**
     * <p>Indicates whether the IMDS endpoint for an instance is enabled or disabled.
     * When disabled, the instance metadata can't be accessed.</p>
     */
    inline void SetHttpEndpoint(const InstanceMetadataEndpointState& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = value; }

    /**
     * <p>Indicates whether the IMDS endpoint for an instance is enabled or disabled.
     * When disabled, the instance metadata can't be accessed.</p>
     */
    inline void SetHttpEndpoint(InstanceMetadataEndpointState&& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = std::move(value); }

    /**
     * <p>Indicates whether the IMDS endpoint for an instance is enabled or disabled.
     * When disabled, the instance metadata can't be accessed.</p>
     */
    inline InstanceMetadataDefaultsResponse& WithHttpEndpoint(const InstanceMetadataEndpointState& value) { SetHttpEndpoint(value); return *this;}

    /**
     * <p>Indicates whether the IMDS endpoint for an instance is enabled or disabled.
     * When disabled, the instance metadata can't be accessed.</p>
     */
    inline InstanceMetadataDefaultsResponse& WithHttpEndpoint(InstanceMetadataEndpointState&& value) { SetHttpEndpoint(std::move(value)); return *this;}


    /**
     * <p>Indicates whether access to instance tags from the instance metadata is
     * enabled or disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline const InstanceMetadataTagsState& GetInstanceMetadataTags() const{ return m_instanceMetadataTags; }

    /**
     * <p>Indicates whether access to instance tags from the instance metadata is
     * enabled or disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline bool InstanceMetadataTagsHasBeenSet() const { return m_instanceMetadataTagsHasBeenSet; }

    /**
     * <p>Indicates whether access to instance tags from the instance metadata is
     * enabled or disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline void SetInstanceMetadataTags(const InstanceMetadataTagsState& value) { m_instanceMetadataTagsHasBeenSet = true; m_instanceMetadataTags = value; }

    /**
     * <p>Indicates whether access to instance tags from the instance metadata is
     * enabled or disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline void SetInstanceMetadataTags(InstanceMetadataTagsState&& value) { m_instanceMetadataTagsHasBeenSet = true; m_instanceMetadataTags = std::move(value); }

    /**
     * <p>Indicates whether access to instance tags from the instance metadata is
     * enabled or disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline InstanceMetadataDefaultsResponse& WithInstanceMetadataTags(const InstanceMetadataTagsState& value) { SetInstanceMetadataTags(value); return *this;}

    /**
     * <p>Indicates whether access to instance tags from the instance metadata is
     * enabled or disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#work-with-tags-in-IMDS">Work
     * with instance tags using the instance metadata</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline InstanceMetadataDefaultsResponse& WithInstanceMetadataTags(InstanceMetadataTagsState&& value) { SetInstanceMetadataTags(std::move(value)); return *this;}

  private:

    HttpTokensState m_httpTokens;
    bool m_httpTokensHasBeenSet = false;

    int m_httpPutResponseHopLimit;
    bool m_httpPutResponseHopLimitHasBeenSet = false;

    InstanceMetadataEndpointState m_httpEndpoint;
    bool m_httpEndpointHasBeenSet = false;

    InstanceMetadataTagsState m_instanceMetadataTags;
    bool m_instanceMetadataTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

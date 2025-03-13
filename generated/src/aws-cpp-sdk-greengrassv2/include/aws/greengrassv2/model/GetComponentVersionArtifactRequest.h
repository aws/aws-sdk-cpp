/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/GreengrassV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/S3EndpointType.h>
#include <aws/greengrassv2/model/IotEndpointType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GreengrassV2
{
namespace Model
{

  /**
   */
  class GetComponentVersionArtifactRequest : public GreengrassV2Request
  {
  public:
    AWS_GREENGRASSV2_API GetComponentVersionArtifactRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetComponentVersionArtifact"; }

    AWS_GREENGRASSV2_API Aws::String SerializePayload() const override;

    AWS_GREENGRASSV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_GREENGRASSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version. Specify the ARN of a public or a Lambda component
     * version.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetComponentVersionArtifactRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the artifact.</p> <p>You can use the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/APIReference/API_GetComponent.html">GetComponent</a>
     * operation to download the component recipe, which includes the URI of the
     * artifact. The artifact name is the section of the URI after the scheme. For
     * example, in the artifact URI <code>greengrass:SomeArtifact.zip</code>, the
     * artifact name is <code>SomeArtifact.zip</code>.</p>
     */
    inline const Aws::String& GetArtifactName() const { return m_artifactName; }
    inline bool ArtifactNameHasBeenSet() const { return m_artifactNameHasBeenSet; }
    template<typename ArtifactNameT = Aws::String>
    void SetArtifactName(ArtifactNameT&& value) { m_artifactNameHasBeenSet = true; m_artifactName = std::forward<ArtifactNameT>(value); }
    template<typename ArtifactNameT = Aws::String>
    GetComponentVersionArtifactRequest& WithArtifactName(ArtifactNameT&& value) { SetArtifactName(std::forward<ArtifactNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the endpoint to use when getting Amazon S3 pre-signed URLs.</p>
     * <p>All Amazon Web Services Regions except US East (N. Virginia) use
     * <code>REGIONAL</code> in all cases. In the US East (N. Virginia) Region the
     * default is <code>GLOBAL</code>, but you can change it to <code>REGIONAL</code>
     * with this parameter.</p>
     */
    inline S3EndpointType GetS3EndpointType() const { return m_s3EndpointType; }
    inline bool S3EndpointTypeHasBeenSet() const { return m_s3EndpointTypeHasBeenSet; }
    inline void SetS3EndpointType(S3EndpointType value) { m_s3EndpointTypeHasBeenSet = true; m_s3EndpointType = value; }
    inline GetComponentVersionArtifactRequest& WithS3EndpointType(S3EndpointType value) { SetS3EndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines if the Amazon S3 URL returned is a FIPS pre-signed URL endpoint.
     * Specify <code>fips</code> if you want the returned Amazon S3 pre-signed URL to
     * point to an Amazon S3 FIPS endpoint. If you don't specify a value, the default
     * is <code>standard</code>.</p>
     */
    inline IotEndpointType GetIotEndpointType() const { return m_iotEndpointType; }
    inline bool IotEndpointTypeHasBeenSet() const { return m_iotEndpointTypeHasBeenSet; }
    inline void SetIotEndpointType(IotEndpointType value) { m_iotEndpointTypeHasBeenSet = true; m_iotEndpointType = value; }
    inline GetComponentVersionArtifactRequest& WithIotEndpointType(IotEndpointType value) { SetIotEndpointType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_artifactName;
    bool m_artifactNameHasBeenSet = false;

    S3EndpointType m_s3EndpointType{S3EndpointType::NOT_SET};
    bool m_s3EndpointTypeHasBeenSet = false;

    IotEndpointType m_iotEndpointType{IotEndpointType::NOT_SET};
    bool m_iotEndpointTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws

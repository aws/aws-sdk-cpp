/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/S3AccessPointAttachmentType.h>
#include <aws/fsx/model/CreateAndAttachS3AccessPointOpenZFSConfiguration.h>
#include <aws/fsx/model/CreateAndAttachS3AccessPointS3Configuration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   */
  class CreateAndAttachS3AccessPointRequest : public FSxRequest
  {
  public:
    AWS_FSX_API CreateAndAttachS3AccessPointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAndAttachS3AccessPoint"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateAndAttachS3AccessPointRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name you want to assign to this S3 access point.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateAndAttachS3AccessPointRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of S3 access point you want to create. Only <code>OpenZFS</code> is
     * supported.</p>
     */
    inline S3AccessPointAttachmentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(S3AccessPointAttachmentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateAndAttachS3AccessPointRequest& WithType(S3AccessPointAttachmentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration to use when creating and attaching an S3 access
     * point to an FSx for OpenZFS volume.</p>
     */
    inline const CreateAndAttachS3AccessPointOpenZFSConfiguration& GetOpenZFSConfiguration() const { return m_openZFSConfiguration; }
    inline bool OpenZFSConfigurationHasBeenSet() const { return m_openZFSConfigurationHasBeenSet; }
    template<typename OpenZFSConfigurationT = CreateAndAttachS3AccessPointOpenZFSConfiguration>
    void SetOpenZFSConfiguration(OpenZFSConfigurationT&& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = std::forward<OpenZFSConfigurationT>(value); }
    template<typename OpenZFSConfigurationT = CreateAndAttachS3AccessPointOpenZFSConfiguration>
    CreateAndAttachS3AccessPointRequest& WithOpenZFSConfiguration(OpenZFSConfigurationT&& value) { SetOpenZFSConfiguration(std::forward<OpenZFSConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the virtual private cloud (VPC) configuration if you're creating an
     * access point that is restricted to a VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/access-points-vpc.html">Creating
     * access points restricted to a virtual private cloud</a>.</p>
     */
    inline const CreateAndAttachS3AccessPointS3Configuration& GetS3AccessPoint() const { return m_s3AccessPoint; }
    inline bool S3AccessPointHasBeenSet() const { return m_s3AccessPointHasBeenSet; }
    template<typename S3AccessPointT = CreateAndAttachS3AccessPointS3Configuration>
    void SetS3AccessPoint(S3AccessPointT&& value) { m_s3AccessPointHasBeenSet = true; m_s3AccessPoint = std::forward<S3AccessPointT>(value); }
    template<typename S3AccessPointT = CreateAndAttachS3AccessPointS3Configuration>
    CreateAndAttachS3AccessPointRequest& WithS3AccessPoint(S3AccessPointT&& value) { SetS3AccessPoint(std::forward<S3AccessPointT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    S3AccessPointAttachmentType m_type{S3AccessPointAttachmentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    CreateAndAttachS3AccessPointOpenZFSConfiguration m_openZFSConfiguration;
    bool m_openZFSConfigurationHasBeenSet = false;

    CreateAndAttachS3AccessPointS3Configuration m_s3AccessPoint;
    bool m_s3AccessPointHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws

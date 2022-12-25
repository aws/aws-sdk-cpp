/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/CodeStarconnectionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-connections/model/ProviderType.h>
#include <aws/codestar-connections/model/VpcConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codestar-connections/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{

  /**
   */
  class CreateHostRequest : public CodeStarconnectionsRequest
  {
  public:
    AWS_CODESTARCONNECTIONS_API CreateHostRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHost"; }

    AWS_CODESTARCONNECTIONS_API Aws::String SerializePayload() const override;

    AWS_CODESTARCONNECTIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the host to be created. The name must be unique in the calling
     * AWS account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the host to be created. The name must be unique in the calling
     * AWS account.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the host to be created. The name must be unique in the calling
     * AWS account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the host to be created. The name must be unique in the calling
     * AWS account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the host to be created. The name must be unique in the calling
     * AWS account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the host to be created. The name must be unique in the calling
     * AWS account.</p>
     */
    inline CreateHostRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the host to be created. The name must be unique in the calling
     * AWS account.</p>
     */
    inline CreateHostRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the host to be created. The name must be unique in the calling
     * AWS account.</p>
     */
    inline CreateHostRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the installed provider to be associated with your connection. The
     * host resource represents the infrastructure where your provider type is
     * installed. The valid provider type is GitHub Enterprise Server.</p>
     */
    inline const ProviderType& GetProviderType() const{ return m_providerType; }

    /**
     * <p>The name of the installed provider to be associated with your connection. The
     * host resource represents the infrastructure where your provider type is
     * installed. The valid provider type is GitHub Enterprise Server.</p>
     */
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }

    /**
     * <p>The name of the installed provider to be associated with your connection. The
     * host resource represents the infrastructure where your provider type is
     * installed. The valid provider type is GitHub Enterprise Server.</p>
     */
    inline void SetProviderType(const ProviderType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }

    /**
     * <p>The name of the installed provider to be associated with your connection. The
     * host resource represents the infrastructure where your provider type is
     * installed. The valid provider type is GitHub Enterprise Server.</p>
     */
    inline void SetProviderType(ProviderType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }

    /**
     * <p>The name of the installed provider to be associated with your connection. The
     * host resource represents the infrastructure where your provider type is
     * installed. The valid provider type is GitHub Enterprise Server.</p>
     */
    inline CreateHostRequest& WithProviderType(const ProviderType& value) { SetProviderType(value); return *this;}

    /**
     * <p>The name of the installed provider to be associated with your connection. The
     * host resource represents the infrastructure where your provider type is
     * installed. The valid provider type is GitHub Enterprise Server.</p>
     */
    inline CreateHostRequest& WithProviderType(ProviderType&& value) { SetProviderType(std::move(value)); return *this;}


    /**
     * <p>The endpoint of the infrastructure to be represented by the host after it is
     * created.</p>
     */
    inline const Aws::String& GetProviderEndpoint() const{ return m_providerEndpoint; }

    /**
     * <p>The endpoint of the infrastructure to be represented by the host after it is
     * created.</p>
     */
    inline bool ProviderEndpointHasBeenSet() const { return m_providerEndpointHasBeenSet; }

    /**
     * <p>The endpoint of the infrastructure to be represented by the host after it is
     * created.</p>
     */
    inline void SetProviderEndpoint(const Aws::String& value) { m_providerEndpointHasBeenSet = true; m_providerEndpoint = value; }

    /**
     * <p>The endpoint of the infrastructure to be represented by the host after it is
     * created.</p>
     */
    inline void SetProviderEndpoint(Aws::String&& value) { m_providerEndpointHasBeenSet = true; m_providerEndpoint = std::move(value); }

    /**
     * <p>The endpoint of the infrastructure to be represented by the host after it is
     * created.</p>
     */
    inline void SetProviderEndpoint(const char* value) { m_providerEndpointHasBeenSet = true; m_providerEndpoint.assign(value); }

    /**
     * <p>The endpoint of the infrastructure to be represented by the host after it is
     * created.</p>
     */
    inline CreateHostRequest& WithProviderEndpoint(const Aws::String& value) { SetProviderEndpoint(value); return *this;}

    /**
     * <p>The endpoint of the infrastructure to be represented by the host after it is
     * created.</p>
     */
    inline CreateHostRequest& WithProviderEndpoint(Aws::String&& value) { SetProviderEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint of the infrastructure to be represented by the host after it is
     * created.</p>
     */
    inline CreateHostRequest& WithProviderEndpoint(const char* value) { SetProviderEndpoint(value); return *this;}


    /**
     * <p>The VPC configuration to be provisioned for the host. A VPC must be
     * configured and the infrastructure to be represented by the host must already be
     * connected to the VPC.</p>
     */
    inline const VpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    /**
     * <p>The VPC configuration to be provisioned for the host. A VPC must be
     * configured and the infrastructure to be represented by the host must already be
     * connected to the VPC.</p>
     */
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    /**
     * <p>The VPC configuration to be provisioned for the host. A VPC must be
     * configured and the infrastructure to be represented by the host must already be
     * connected to the VPC.</p>
     */
    inline void SetVpcConfiguration(const VpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    /**
     * <p>The VPC configuration to be provisioned for the host. A VPC must be
     * configured and the infrastructure to be represented by the host must already be
     * connected to the VPC.</p>
     */
    inline void SetVpcConfiguration(VpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    /**
     * <p>The VPC configuration to be provisioned for the host. A VPC must be
     * configured and the infrastructure to be represented by the host must already be
     * connected to the VPC.</p>
     */
    inline CreateHostRequest& WithVpcConfiguration(const VpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    /**
     * <p>The VPC configuration to be provisioned for the host. A VPC must be
     * configured and the infrastructure to be represented by the host must already be
     * connected to the VPC.</p>
     */
    inline CreateHostRequest& WithVpcConfiguration(VpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateHostRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateHostRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateHostRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CreateHostRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ProviderType m_providerType;
    bool m_providerTypeHasBeenSet = false;

    Aws::String m_providerEndpoint;
    bool m_providerEndpointHasBeenSet = false;

    VpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws

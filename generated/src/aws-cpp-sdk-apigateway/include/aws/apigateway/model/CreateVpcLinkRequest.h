/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Creates a VPC link, under the caller's account in a selected region, in an
   * asynchronous operation that typically takes 2-4 minutes to complete and become
   * operational. The caller must have permissions to create and update VPC Endpoint
   * services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateVpcLinkRequest">AWS
   * API Reference</a></p>
   */
  class CreateVpcLinkRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API CreateVpcLinkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcLink"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name used to label and identify the VPC link.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateVpcLinkRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateVpcLinkRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateVpcLinkRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the VPC link.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateVpcLinkRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateVpcLinkRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateVpcLinkRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the network load balancer of the VPC targeted by the VPC link. The
     * network load balancer must be owned by the same Amazon Web Services account of
     * the API owner.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetArns() const{ return m_targetArns; }
    inline bool TargetArnsHasBeenSet() const { return m_targetArnsHasBeenSet; }
    inline void SetTargetArns(const Aws::Vector<Aws::String>& value) { m_targetArnsHasBeenSet = true; m_targetArns = value; }
    inline void SetTargetArns(Aws::Vector<Aws::String>&& value) { m_targetArnsHasBeenSet = true; m_targetArns = std::move(value); }
    inline CreateVpcLinkRequest& WithTargetArns(const Aws::Vector<Aws::String>& value) { SetTargetArns(value); return *this;}
    inline CreateVpcLinkRequest& WithTargetArns(Aws::Vector<Aws::String>&& value) { SetTargetArns(std::move(value)); return *this;}
    inline CreateVpcLinkRequest& AddTargetArns(const Aws::String& value) { m_targetArnsHasBeenSet = true; m_targetArns.push_back(value); return *this; }
    inline CreateVpcLinkRequest& AddTargetArns(Aws::String&& value) { m_targetArnsHasBeenSet = true; m_targetArns.push_back(std::move(value)); return *this; }
    inline CreateVpcLinkRequest& AddTargetArns(const char* value) { m_targetArnsHasBeenSet = true; m_targetArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateVpcLinkRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateVpcLinkRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateVpcLinkRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateVpcLinkRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateVpcLinkRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateVpcLinkRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateVpcLinkRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateVpcLinkRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateVpcLinkRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetArns;
    bool m_targetArnsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws

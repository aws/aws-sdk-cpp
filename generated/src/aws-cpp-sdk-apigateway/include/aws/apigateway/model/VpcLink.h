/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/VpcLinkStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace APIGateway
{
namespace Model
{

  /**
   * <p>An API Gateway VPC link for a RestApi to access resources in an Amazon
   * Virtual Private Cloud (VPC).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/VpcLink">AWS
   * API Reference</a></p>
   */
  class VpcLink
  {
  public:
    AWS_APIGATEWAY_API VpcLink();
    AWS_APIGATEWAY_API VpcLink(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API VpcLink& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the VpcLink. It is used in an Integration to reference this
     * VpcLink.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline VpcLink& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline VpcLink& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline VpcLink& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name used to label and identify the VPC link.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline VpcLink& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline VpcLink& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline VpcLink& WithName(const char* value) { SetName(value); return *this;}
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
    inline VpcLink& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline VpcLink& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline VpcLink& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline VpcLink& WithTargetArns(const Aws::Vector<Aws::String>& value) { SetTargetArns(value); return *this;}
    inline VpcLink& WithTargetArns(Aws::Vector<Aws::String>&& value) { SetTargetArns(std::move(value)); return *this;}
    inline VpcLink& AddTargetArns(const Aws::String& value) { m_targetArnsHasBeenSet = true; m_targetArns.push_back(value); return *this; }
    inline VpcLink& AddTargetArns(Aws::String&& value) { m_targetArnsHasBeenSet = true; m_targetArns.push_back(std::move(value)); return *this; }
    inline VpcLink& AddTargetArns(const char* value) { m_targetArnsHasBeenSet = true; m_targetArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the VPC link. The valid values are <code>AVAILABLE</code>,
     * <code>PENDING</code>, <code>DELETING</code>, or <code>FAILED</code>. Deploying
     * an API will wait if the status is <code>PENDING</code> and will fail if the
     * status is <code>DELETING</code>. </p>
     */
    inline const VpcLinkStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const VpcLinkStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(VpcLinkStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline VpcLink& WithStatus(const VpcLinkStatus& value) { SetStatus(value); return *this;}
    inline VpcLink& WithStatus(VpcLinkStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description about the VPC link status.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline VpcLink& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline VpcLink& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline VpcLink& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline VpcLink& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline VpcLink& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline VpcLink& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline VpcLink& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline VpcLink& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline VpcLink& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline VpcLink& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline VpcLink& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline VpcLink& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline VpcLink& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline VpcLink& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline VpcLink& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetArns;
    bool m_targetArnsHasBeenSet = false;

    VpcLinkStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws

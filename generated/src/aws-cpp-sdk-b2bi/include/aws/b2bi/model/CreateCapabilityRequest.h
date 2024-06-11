/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/CapabilityType.h>
#include <aws/b2bi/model/CapabilityConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/b2bi/model/S3Location.h>
#include <aws/b2bi/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace B2BI
{
namespace Model
{

  /**
   */
  class CreateCapabilityRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API CreateCapabilityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCapability"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the name of the capability, used to identify it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateCapabilityRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateCapabilityRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateCapabilityRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline const CapabilityType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CapabilityType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CapabilityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateCapabilityRequest& WithType(const CapabilityType& value) { SetType(value); return *this;}
    inline CreateCapabilityRequest& WithType(CapabilityType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a structure that contains the details for a capability.</p>
     */
    inline const CapabilityConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const CapabilityConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(CapabilityConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline CreateCapabilityRequest& WithConfiguration(const CapabilityConfiguration& value) { SetConfiguration(value); return *this;}
    inline CreateCapabilityRequest& WithConfiguration(CapabilityConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies one or more locations in Amazon S3, each specifying an EDI document
     * that can be used with this capability. Each item contains the name of the bucket
     * and the key, to identify the document's location.</p>
     */
    inline const Aws::Vector<S3Location>& GetInstructionsDocuments() const{ return m_instructionsDocuments; }
    inline bool InstructionsDocumentsHasBeenSet() const { return m_instructionsDocumentsHasBeenSet; }
    inline void SetInstructionsDocuments(const Aws::Vector<S3Location>& value) { m_instructionsDocumentsHasBeenSet = true; m_instructionsDocuments = value; }
    inline void SetInstructionsDocuments(Aws::Vector<S3Location>&& value) { m_instructionsDocumentsHasBeenSet = true; m_instructionsDocuments = std::move(value); }
    inline CreateCapabilityRequest& WithInstructionsDocuments(const Aws::Vector<S3Location>& value) { SetInstructionsDocuments(value); return *this;}
    inline CreateCapabilityRequest& WithInstructionsDocuments(Aws::Vector<S3Location>&& value) { SetInstructionsDocuments(std::move(value)); return *this;}
    inline CreateCapabilityRequest& AddInstructionsDocuments(const S3Location& value) { m_instructionsDocumentsHasBeenSet = true; m_instructionsDocuments.push_back(value); return *this; }
    inline CreateCapabilityRequest& AddInstructionsDocuments(S3Location&& value) { m_instructionsDocumentsHasBeenSet = true; m_instructionsDocuments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateCapabilityRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateCapabilityRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateCapabilityRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateCapabilityRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateCapabilityRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateCapabilityRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateCapabilityRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CapabilityType m_type;
    bool m_typeHasBeenSet = false;

    CapabilityConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Vector<S3Location> m_instructionsDocuments;
    bool m_instructionsDocumentsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws

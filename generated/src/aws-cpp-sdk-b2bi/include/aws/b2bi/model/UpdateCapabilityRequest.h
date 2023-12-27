/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/CapabilityConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/b2bi/model/S3Location.h>
#include <utility>

namespace Aws
{
namespace B2BI
{
namespace Model
{

  /**
   */
  class UpdateCapabilityRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API UpdateCapabilityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCapability"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies a system-assigned unique identifier for the capability.</p>
     */
    inline const Aws::String& GetCapabilityId() const{ return m_capabilityId; }

    /**
     * <p>Specifies a system-assigned unique identifier for the capability.</p>
     */
    inline bool CapabilityIdHasBeenSet() const { return m_capabilityIdHasBeenSet; }

    /**
     * <p>Specifies a system-assigned unique identifier for the capability.</p>
     */
    inline void SetCapabilityId(const Aws::String& value) { m_capabilityIdHasBeenSet = true; m_capabilityId = value; }

    /**
     * <p>Specifies a system-assigned unique identifier for the capability.</p>
     */
    inline void SetCapabilityId(Aws::String&& value) { m_capabilityIdHasBeenSet = true; m_capabilityId = std::move(value); }

    /**
     * <p>Specifies a system-assigned unique identifier for the capability.</p>
     */
    inline void SetCapabilityId(const char* value) { m_capabilityIdHasBeenSet = true; m_capabilityId.assign(value); }

    /**
     * <p>Specifies a system-assigned unique identifier for the capability.</p>
     */
    inline UpdateCapabilityRequest& WithCapabilityId(const Aws::String& value) { SetCapabilityId(value); return *this;}

    /**
     * <p>Specifies a system-assigned unique identifier for the capability.</p>
     */
    inline UpdateCapabilityRequest& WithCapabilityId(Aws::String&& value) { SetCapabilityId(std::move(value)); return *this;}

    /**
     * <p>Specifies a system-assigned unique identifier for the capability.</p>
     */
    inline UpdateCapabilityRequest& WithCapabilityId(const char* value) { SetCapabilityId(value); return *this;}


    /**
     * <p>Specifies a new name for the capability, to replace the existing name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies a new name for the capability, to replace the existing name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specifies a new name for the capability, to replace the existing name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies a new name for the capability, to replace the existing name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies a new name for the capability, to replace the existing name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Specifies a new name for the capability, to replace the existing name.</p>
     */
    inline UpdateCapabilityRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies a new name for the capability, to replace the existing name.</p>
     */
    inline UpdateCapabilityRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Specifies a new name for the capability, to replace the existing name.</p>
     */
    inline UpdateCapabilityRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies a structure that contains the details for a capability.</p>
     */
    inline const CapabilityConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Specifies a structure that contains the details for a capability.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>Specifies a structure that contains the details for a capability.</p>
     */
    inline void SetConfiguration(const CapabilityConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>Specifies a structure that contains the details for a capability.</p>
     */
    inline void SetConfiguration(CapabilityConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>Specifies a structure that contains the details for a capability.</p>
     */
    inline UpdateCapabilityRequest& WithConfiguration(const CapabilityConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Specifies a structure that contains the details for a capability.</p>
     */
    inline UpdateCapabilityRequest& WithConfiguration(CapabilityConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies one or more locations in Amazon S3, each specifying an EDI document
     * that can be used with this capability. Each item contains the name of the bucket
     * and the key, to identify the document's location.</p>
     */
    inline const Aws::Vector<S3Location>& GetInstructionsDocuments() const{ return m_instructionsDocuments; }

    /**
     * <p>Specifies one or more locations in Amazon S3, each specifying an EDI document
     * that can be used with this capability. Each item contains the name of the bucket
     * and the key, to identify the document's location.</p>
     */
    inline bool InstructionsDocumentsHasBeenSet() const { return m_instructionsDocumentsHasBeenSet; }

    /**
     * <p>Specifies one or more locations in Amazon S3, each specifying an EDI document
     * that can be used with this capability. Each item contains the name of the bucket
     * and the key, to identify the document's location.</p>
     */
    inline void SetInstructionsDocuments(const Aws::Vector<S3Location>& value) { m_instructionsDocumentsHasBeenSet = true; m_instructionsDocuments = value; }

    /**
     * <p>Specifies one or more locations in Amazon S3, each specifying an EDI document
     * that can be used with this capability. Each item contains the name of the bucket
     * and the key, to identify the document's location.</p>
     */
    inline void SetInstructionsDocuments(Aws::Vector<S3Location>&& value) { m_instructionsDocumentsHasBeenSet = true; m_instructionsDocuments = std::move(value); }

    /**
     * <p>Specifies one or more locations in Amazon S3, each specifying an EDI document
     * that can be used with this capability. Each item contains the name of the bucket
     * and the key, to identify the document's location.</p>
     */
    inline UpdateCapabilityRequest& WithInstructionsDocuments(const Aws::Vector<S3Location>& value) { SetInstructionsDocuments(value); return *this;}

    /**
     * <p>Specifies one or more locations in Amazon S3, each specifying an EDI document
     * that can be used with this capability. Each item contains the name of the bucket
     * and the key, to identify the document's location.</p>
     */
    inline UpdateCapabilityRequest& WithInstructionsDocuments(Aws::Vector<S3Location>&& value) { SetInstructionsDocuments(std::move(value)); return *this;}

    /**
     * <p>Specifies one or more locations in Amazon S3, each specifying an EDI document
     * that can be used with this capability. Each item contains the name of the bucket
     * and the key, to identify the document's location.</p>
     */
    inline UpdateCapabilityRequest& AddInstructionsDocuments(const S3Location& value) { m_instructionsDocumentsHasBeenSet = true; m_instructionsDocuments.push_back(value); return *this; }

    /**
     * <p>Specifies one or more locations in Amazon S3, each specifying an EDI document
     * that can be used with this capability. Each item contains the name of the bucket
     * and the key, to identify the document's location.</p>
     */
    inline UpdateCapabilityRequest& AddInstructionsDocuments(S3Location&& value) { m_instructionsDocumentsHasBeenSet = true; m_instructionsDocuments.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_capabilityId;
    bool m_capabilityIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CapabilityConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Vector<S3Location> m_instructionsDocuments;
    bool m_instructionsDocumentsHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws

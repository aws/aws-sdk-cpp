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
    AWS_B2BI_API UpdateCapabilityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCapability"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies a system-assigned unique identifier for the capability.</p>
     */
    inline const Aws::String& GetCapabilityId() const { return m_capabilityId; }
    inline bool CapabilityIdHasBeenSet() const { return m_capabilityIdHasBeenSet; }
    template<typename CapabilityIdT = Aws::String>
    void SetCapabilityId(CapabilityIdT&& value) { m_capabilityIdHasBeenSet = true; m_capabilityId = std::forward<CapabilityIdT>(value); }
    template<typename CapabilityIdT = Aws::String>
    UpdateCapabilityRequest& WithCapabilityId(CapabilityIdT&& value) { SetCapabilityId(std::forward<CapabilityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a new name for the capability, to replace the existing name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateCapabilityRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a structure that contains the details for a capability.</p>
     */
    inline const CapabilityConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = CapabilityConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = CapabilityConfiguration>
    UpdateCapabilityRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies one or more locations in Amazon S3, each specifying an EDI document
     * that can be used with this capability. Each item contains the name of the bucket
     * and the key, to identify the document's location.</p>
     */
    inline const Aws::Vector<S3Location>& GetInstructionsDocuments() const { return m_instructionsDocuments; }
    inline bool InstructionsDocumentsHasBeenSet() const { return m_instructionsDocumentsHasBeenSet; }
    template<typename InstructionsDocumentsT = Aws::Vector<S3Location>>
    void SetInstructionsDocuments(InstructionsDocumentsT&& value) { m_instructionsDocumentsHasBeenSet = true; m_instructionsDocuments = std::forward<InstructionsDocumentsT>(value); }
    template<typename InstructionsDocumentsT = Aws::Vector<S3Location>>
    UpdateCapabilityRequest& WithInstructionsDocuments(InstructionsDocumentsT&& value) { SetInstructionsDocuments(std::forward<InstructionsDocumentsT>(value)); return *this;}
    template<typename InstructionsDocumentsT = S3Location>
    UpdateCapabilityRequest& AddInstructionsDocuments(InstructionsDocumentsT&& value) { m_instructionsDocumentsHasBeenSet = true; m_instructionsDocuments.emplace_back(std::forward<InstructionsDocumentsT>(value)); return *this; }
    ///@}
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

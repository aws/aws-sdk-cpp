/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/CapabilityType.h>
#include <aws/b2bi/model/CapabilityConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/b2bi/model/S3Location.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace B2BI
{
namespace Model
{
  class CreateCapabilityResult
  {
  public:
    AWS_B2BI_API CreateCapabilityResult() = default;
    AWS_B2BI_API CreateCapabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API CreateCapabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a system-assigned unique identifier for the capability.</p>
     */
    inline const Aws::String& GetCapabilityId() const { return m_capabilityId; }
    template<typename CapabilityIdT = Aws::String>
    void SetCapabilityId(CapabilityIdT&& value) { m_capabilityIdHasBeenSet = true; m_capabilityId = std::forward<CapabilityIdT>(value); }
    template<typename CapabilityIdT = Aws::String>
    CreateCapabilityResult& WithCapabilityId(CapabilityIdT&& value) { SetCapabilityId(std::forward<CapabilityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline const Aws::String& GetCapabilityArn() const { return m_capabilityArn; }
    template<typename CapabilityArnT = Aws::String>
    void SetCapabilityArn(CapabilityArnT&& value) { m_capabilityArnHasBeenSet = true; m_capabilityArn = std::forward<CapabilityArnT>(value); }
    template<typename CapabilityArnT = Aws::String>
    CreateCapabilityResult& WithCapabilityArn(CapabilityArnT&& value) { SetCapabilityArn(std::forward<CapabilityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the name of the capability used to identify it.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateCapabilityResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline CapabilityType GetType() const { return m_type; }
    inline void SetType(CapabilityType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateCapabilityResult& WithType(CapabilityType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a structure that contains the details for a capability.</p>
     */
    inline const CapabilityConfiguration& GetConfiguration() const { return m_configuration; }
    template<typename ConfigurationT = CapabilityConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = CapabilityConfiguration>
    CreateCapabilityResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns one or more locations in Amazon S3, each specifying an EDI document
     * that can be used with this capability. Each item contains the name of the bucket
     * and the key, to identify the document's location.</p>
     */
    inline const Aws::Vector<S3Location>& GetInstructionsDocuments() const { return m_instructionsDocuments; }
    template<typename InstructionsDocumentsT = Aws::Vector<S3Location>>
    void SetInstructionsDocuments(InstructionsDocumentsT&& value) { m_instructionsDocumentsHasBeenSet = true; m_instructionsDocuments = std::forward<InstructionsDocumentsT>(value); }
    template<typename InstructionsDocumentsT = Aws::Vector<S3Location>>
    CreateCapabilityResult& WithInstructionsDocuments(InstructionsDocumentsT&& value) { SetInstructionsDocuments(std::forward<InstructionsDocumentsT>(value)); return *this;}
    template<typename InstructionsDocumentsT = S3Location>
    CreateCapabilityResult& AddInstructionsDocuments(InstructionsDocumentsT&& value) { m_instructionsDocumentsHasBeenSet = true; m_instructionsDocuments.emplace_back(std::forward<InstructionsDocumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns a timestamp for creation date and time of the capability.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateCapabilityResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCapabilityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_capabilityId;
    bool m_capabilityIdHasBeenSet = false;

    Aws::String m_capabilityArn;
    bool m_capabilityArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CapabilityType m_type{CapabilityType::NOT_SET};
    bool m_typeHasBeenSet = false;

    CapabilityConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Vector<S3Location> m_instructionsDocuments;
    bool m_instructionsDocumentsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws

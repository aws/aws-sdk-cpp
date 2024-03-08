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
  class GetCapabilityResult
  {
  public:
    AWS_B2BI_API GetCapabilityResult();
    AWS_B2BI_API GetCapabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API GetCapabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a system-assigned unique identifier for the capability.</p>
     */
    inline const Aws::String& GetCapabilityId() const{ return m_capabilityId; }

    /**
     * <p>Returns a system-assigned unique identifier for the capability.</p>
     */
    inline void SetCapabilityId(const Aws::String& value) { m_capabilityId = value; }

    /**
     * <p>Returns a system-assigned unique identifier for the capability.</p>
     */
    inline void SetCapabilityId(Aws::String&& value) { m_capabilityId = std::move(value); }

    /**
     * <p>Returns a system-assigned unique identifier for the capability.</p>
     */
    inline void SetCapabilityId(const char* value) { m_capabilityId.assign(value); }

    /**
     * <p>Returns a system-assigned unique identifier for the capability.</p>
     */
    inline GetCapabilityResult& WithCapabilityId(const Aws::String& value) { SetCapabilityId(value); return *this;}

    /**
     * <p>Returns a system-assigned unique identifier for the capability.</p>
     */
    inline GetCapabilityResult& WithCapabilityId(Aws::String&& value) { SetCapabilityId(std::move(value)); return *this;}

    /**
     * <p>Returns a system-assigned unique identifier for the capability.</p>
     */
    inline GetCapabilityResult& WithCapabilityId(const char* value) { SetCapabilityId(value); return *this;}


    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline const Aws::String& GetCapabilityArn() const{ return m_capabilityArn; }

    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline void SetCapabilityArn(const Aws::String& value) { m_capabilityArn = value; }

    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline void SetCapabilityArn(Aws::String&& value) { m_capabilityArn = std::move(value); }

    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline void SetCapabilityArn(const char* value) { m_capabilityArn.assign(value); }

    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline GetCapabilityResult& WithCapabilityArn(const Aws::String& value) { SetCapabilityArn(value); return *this;}

    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline GetCapabilityResult& WithCapabilityArn(Aws::String&& value) { SetCapabilityArn(std::move(value)); return *this;}

    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline GetCapabilityResult& WithCapabilityArn(const char* value) { SetCapabilityArn(value); return *this;}


    /**
     * <p>Returns the name of the capability, used to identify it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Returns the name of the capability, used to identify it.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Returns the name of the capability, used to identify it.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>Returns the name of the capability, used to identify it.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Returns the name of the capability, used to identify it.</p>
     */
    inline GetCapabilityResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Returns the name of the capability, used to identify it.</p>
     */
    inline GetCapabilityResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Returns the name of the capability, used to identify it.</p>
     */
    inline GetCapabilityResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Returns the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline const CapabilityType& GetType() const{ return m_type; }

    /**
     * <p>Returns the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline void SetType(const CapabilityType& value) { m_type = value; }

    /**
     * <p>Returns the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline void SetType(CapabilityType&& value) { m_type = std::move(value); }

    /**
     * <p>Returns the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline GetCapabilityResult& WithType(const CapabilityType& value) { SetType(value); return *this;}

    /**
     * <p>Returns the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline GetCapabilityResult& WithType(CapabilityType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Returns a structure that contains the details for a capability.</p>
     */
    inline const CapabilityConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Returns a structure that contains the details for a capability.</p>
     */
    inline void SetConfiguration(const CapabilityConfiguration& value) { m_configuration = value; }

    /**
     * <p>Returns a structure that contains the details for a capability.</p>
     */
    inline void SetConfiguration(CapabilityConfiguration&& value) { m_configuration = std::move(value); }

    /**
     * <p>Returns a structure that contains the details for a capability.</p>
     */
    inline GetCapabilityResult& WithConfiguration(const CapabilityConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Returns a structure that contains the details for a capability.</p>
     */
    inline GetCapabilityResult& WithConfiguration(CapabilityConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>Returns one or more locations in Amazon S3, each specifying an EDI document
     * that can be used with this capability. Each item contains the name of the bucket
     * and the key, to identify the document's location.</p>
     */
    inline const Aws::Vector<S3Location>& GetInstructionsDocuments() const{ return m_instructionsDocuments; }

    /**
     * <p>Returns one or more locations in Amazon S3, each specifying an EDI document
     * that can be used with this capability. Each item contains the name of the bucket
     * and the key, to identify the document's location.</p>
     */
    inline void SetInstructionsDocuments(const Aws::Vector<S3Location>& value) { m_instructionsDocuments = value; }

    /**
     * <p>Returns one or more locations in Amazon S3, each specifying an EDI document
     * that can be used with this capability. Each item contains the name of the bucket
     * and the key, to identify the document's location.</p>
     */
    inline void SetInstructionsDocuments(Aws::Vector<S3Location>&& value) { m_instructionsDocuments = std::move(value); }

    /**
     * <p>Returns one or more locations in Amazon S3, each specifying an EDI document
     * that can be used with this capability. Each item contains the name of the bucket
     * and the key, to identify the document's location.</p>
     */
    inline GetCapabilityResult& WithInstructionsDocuments(const Aws::Vector<S3Location>& value) { SetInstructionsDocuments(value); return *this;}

    /**
     * <p>Returns one or more locations in Amazon S3, each specifying an EDI document
     * that can be used with this capability. Each item contains the name of the bucket
     * and the key, to identify the document's location.</p>
     */
    inline GetCapabilityResult& WithInstructionsDocuments(Aws::Vector<S3Location>&& value) { SetInstructionsDocuments(std::move(value)); return *this;}

    /**
     * <p>Returns one or more locations in Amazon S3, each specifying an EDI document
     * that can be used with this capability. Each item contains the name of the bucket
     * and the key, to identify the document's location.</p>
     */
    inline GetCapabilityResult& AddInstructionsDocuments(const S3Location& value) { m_instructionsDocuments.push_back(value); return *this; }

    /**
     * <p>Returns one or more locations in Amazon S3, each specifying an EDI document
     * that can be used with this capability. Each item contains the name of the bucket
     * and the key, to identify the document's location.</p>
     */
    inline GetCapabilityResult& AddInstructionsDocuments(S3Location&& value) { m_instructionsDocuments.push_back(std::move(value)); return *this; }


    /**
     * <p>Returns a timestamp for creation date and time of the capability.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Returns a timestamp for creation date and time of the capability.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>Returns a timestamp for creation date and time of the capability.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>Returns a timestamp for creation date and time of the capability.</p>
     */
    inline GetCapabilityResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Returns a timestamp for creation date and time of the capability.</p>
     */
    inline GetCapabilityResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Returns a timestamp for last time the capability was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>Returns a timestamp for last time the capability was modified.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }

    /**
     * <p>Returns a timestamp for last time the capability was modified.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }

    /**
     * <p>Returns a timestamp for last time the capability was modified.</p>
     */
    inline GetCapabilityResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>Returns a timestamp for last time the capability was modified.</p>
     */
    inline GetCapabilityResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCapabilityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCapabilityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCapabilityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_capabilityId;

    Aws::String m_capabilityArn;

    Aws::String m_name;

    CapabilityType m_type;

    CapabilityConfiguration m_configuration;

    Aws::Vector<S3Location> m_instructionsDocuments;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_modifiedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws

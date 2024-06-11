/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/ResourceDefinitionVersion.h>
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
namespace Greengrass
{
namespace Model
{
  class GetResourceDefinitionVersionResult
  {
  public:
    AWS_GREENGRASS_API GetResourceDefinitionVersionResult();
    AWS_GREENGRASS_API GetResourceDefinitionVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API GetResourceDefinitionVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Arn of the resource definition version.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetResourceDefinitionVersionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetResourceDefinitionVersionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetResourceDefinitionVersionResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The time, in milliseconds since the epoch, when the resource definition version
     * was created.
     */
    inline const Aws::String& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline void SetCreationTimestamp(const Aws::String& value) { m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::String&& value) { m_creationTimestamp = std::move(value); }
    inline void SetCreationTimestamp(const char* value) { m_creationTimestamp.assign(value); }
    inline GetResourceDefinitionVersionResult& WithCreationTimestamp(const Aws::String& value) { SetCreationTimestamp(value); return *this;}
    inline GetResourceDefinitionVersionResult& WithCreationTimestamp(Aws::String&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    inline GetResourceDefinitionVersionResult& WithCreationTimestamp(const char* value) { SetCreationTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * Information about the definition.
     */
    inline const ResourceDefinitionVersion& GetDefinition() const{ return m_definition; }
    inline void SetDefinition(const ResourceDefinitionVersion& value) { m_definition = value; }
    inline void SetDefinition(ResourceDefinitionVersion&& value) { m_definition = std::move(value); }
    inline GetResourceDefinitionVersionResult& WithDefinition(const ResourceDefinitionVersion& value) { SetDefinition(value); return *this;}
    inline GetResourceDefinitionVersionResult& WithDefinition(ResourceDefinitionVersion&& value) { SetDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the resource definition version.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetResourceDefinitionVersionResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetResourceDefinitionVersionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetResourceDefinitionVersionResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The version of the resource definition version.
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline void SetVersion(const Aws::String& value) { m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_version.assign(value); }
    inline GetResourceDefinitionVersionResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline GetResourceDefinitionVersionResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline GetResourceDefinitionVersionResult& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetResourceDefinitionVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetResourceDefinitionVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetResourceDefinitionVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_creationTimestamp;

    ResourceDefinitionVersion m_definition;

    Aws::String m_id;

    Aws::String m_version;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws

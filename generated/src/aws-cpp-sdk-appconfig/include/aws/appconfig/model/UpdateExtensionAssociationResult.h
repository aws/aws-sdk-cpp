/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace AppConfig
{
namespace Model
{
  class UpdateExtensionAssociationResult
  {
  public:
    AWS_APPCONFIG_API UpdateExtensionAssociationResult();
    AWS_APPCONFIG_API UpdateExtensionAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIG_API UpdateExtensionAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The system-generated ID for the association.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateExtensionAssociationResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateExtensionAssociationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateExtensionAssociationResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the extension defined in the association.</p>
     */
    inline const Aws::String& GetExtensionArn() const{ return m_extensionArn; }
    inline void SetExtensionArn(const Aws::String& value) { m_extensionArn = value; }
    inline void SetExtensionArn(Aws::String&& value) { m_extensionArn = std::move(value); }
    inline void SetExtensionArn(const char* value) { m_extensionArn.assign(value); }
    inline UpdateExtensionAssociationResult& WithExtensionArn(const Aws::String& value) { SetExtensionArn(value); return *this;}
    inline UpdateExtensionAssociationResult& WithExtensionArn(Aws::String&& value) { SetExtensionArn(std::move(value)); return *this;}
    inline UpdateExtensionAssociationResult& WithExtensionArn(const char* value) { SetExtensionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of applications, configuration profiles, or environments defined in
     * the association.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline UpdateExtensionAssociationResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline UpdateExtensionAssociationResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline UpdateExtensionAssociationResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated Amazon Resource Name (ARN) for the extension.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateExtensionAssociationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateExtensionAssociationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateExtensionAssociationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter names and values defined in the association.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parameters = std::move(value); }
    inline UpdateExtensionAssociationResult& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline UpdateExtensionAssociationResult& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline UpdateExtensionAssociationResult& AddParameters(const Aws::String& key, const Aws::String& value) { m_parameters.emplace(key, value); return *this; }
    inline UpdateExtensionAssociationResult& AddParameters(Aws::String&& key, const Aws::String& value) { m_parameters.emplace(std::move(key), value); return *this; }
    inline UpdateExtensionAssociationResult& AddParameters(const Aws::String& key, Aws::String&& value) { m_parameters.emplace(key, std::move(value)); return *this; }
    inline UpdateExtensionAssociationResult& AddParameters(Aws::String&& key, Aws::String&& value) { m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateExtensionAssociationResult& AddParameters(const char* key, Aws::String&& value) { m_parameters.emplace(key, std::move(value)); return *this; }
    inline UpdateExtensionAssociationResult& AddParameters(Aws::String&& key, const char* value) { m_parameters.emplace(std::move(key), value); return *this; }
    inline UpdateExtensionAssociationResult& AddParameters(const char* key, const char* value) { m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version number for the extension defined in the association.</p>
     */
    inline int GetExtensionVersionNumber() const{ return m_extensionVersionNumber; }
    inline void SetExtensionVersionNumber(int value) { m_extensionVersionNumber = value; }
    inline UpdateExtensionAssociationResult& WithExtensionVersionNumber(int value) { SetExtensionVersionNumber(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateExtensionAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateExtensionAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateExtensionAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_extensionArn;

    Aws::String m_resourceArn;

    Aws::String m_arn;

    Aws::Map<Aws::String, Aws::String> m_parameters;

    int m_extensionVersionNumber;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws

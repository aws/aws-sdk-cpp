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
  class CreateExtensionAssociationResult
  {
  public:
    AWS_APPCONFIG_API CreateExtensionAssociationResult();
    AWS_APPCONFIG_API CreateExtensionAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIG_API CreateExtensionAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The system-generated ID for the association.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The system-generated ID for the association.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The system-generated ID for the association.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The system-generated ID for the association.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The system-generated ID for the association.</p>
     */
    inline CreateExtensionAssociationResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The system-generated ID for the association.</p>
     */
    inline CreateExtensionAssociationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID for the association.</p>
     */
    inline CreateExtensionAssociationResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ARN of the extension defined in the association.</p>
     */
    inline const Aws::String& GetExtensionArn() const{ return m_extensionArn; }

    /**
     * <p>The ARN of the extension defined in the association.</p>
     */
    inline void SetExtensionArn(const Aws::String& value) { m_extensionArn = value; }

    /**
     * <p>The ARN of the extension defined in the association.</p>
     */
    inline void SetExtensionArn(Aws::String&& value) { m_extensionArn = std::move(value); }

    /**
     * <p>The ARN of the extension defined in the association.</p>
     */
    inline void SetExtensionArn(const char* value) { m_extensionArn.assign(value); }

    /**
     * <p>The ARN of the extension defined in the association.</p>
     */
    inline CreateExtensionAssociationResult& WithExtensionArn(const Aws::String& value) { SetExtensionArn(value); return *this;}

    /**
     * <p>The ARN of the extension defined in the association.</p>
     */
    inline CreateExtensionAssociationResult& WithExtensionArn(Aws::String&& value) { SetExtensionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the extension defined in the association.</p>
     */
    inline CreateExtensionAssociationResult& WithExtensionArn(const char* value) { SetExtensionArn(value); return *this;}


    /**
     * <p>The ARNs of applications, configuration profiles, or environments defined in
     * the association.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARNs of applications, configuration profiles, or environments defined in
     * the association.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The ARNs of applications, configuration profiles, or environments defined in
     * the association.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The ARNs of applications, configuration profiles, or environments defined in
     * the association.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The ARNs of applications, configuration profiles, or environments defined in
     * the association.</p>
     */
    inline CreateExtensionAssociationResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARNs of applications, configuration profiles, or environments defined in
     * the association.</p>
     */
    inline CreateExtensionAssociationResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARNs of applications, configuration profiles, or environments defined in
     * the association.</p>
     */
    inline CreateExtensionAssociationResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The system-generated Amazon Resource Name (ARN) for the extension.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The system-generated Amazon Resource Name (ARN) for the extension.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The system-generated Amazon Resource Name (ARN) for the extension.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The system-generated Amazon Resource Name (ARN) for the extension.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The system-generated Amazon Resource Name (ARN) for the extension.</p>
     */
    inline CreateExtensionAssociationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The system-generated Amazon Resource Name (ARN) for the extension.</p>
     */
    inline CreateExtensionAssociationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The system-generated Amazon Resource Name (ARN) for the extension.</p>
     */
    inline CreateExtensionAssociationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The parameter names and values defined in the association.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameter names and values defined in the association.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parameters = value; }

    /**
     * <p>The parameter names and values defined in the association.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parameters = std::move(value); }

    /**
     * <p>The parameter names and values defined in the association.</p>
     */
    inline CreateExtensionAssociationResult& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameter names and values defined in the association.</p>
     */
    inline CreateExtensionAssociationResult& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameter names and values defined in the association.</p>
     */
    inline CreateExtensionAssociationResult& AddParameters(const Aws::String& key, const Aws::String& value) { m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The parameter names and values defined in the association.</p>
     */
    inline CreateExtensionAssociationResult& AddParameters(Aws::String&& key, const Aws::String& value) { m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameter names and values defined in the association.</p>
     */
    inline CreateExtensionAssociationResult& AddParameters(const Aws::String& key, Aws::String&& value) { m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameter names and values defined in the association.</p>
     */
    inline CreateExtensionAssociationResult& AddParameters(Aws::String&& key, Aws::String&& value) { m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameter names and values defined in the association.</p>
     */
    inline CreateExtensionAssociationResult& AddParameters(const char* key, Aws::String&& value) { m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameter names and values defined in the association.</p>
     */
    inline CreateExtensionAssociationResult& AddParameters(Aws::String&& key, const char* value) { m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameter names and values defined in the association.</p>
     */
    inline CreateExtensionAssociationResult& AddParameters(const char* key, const char* value) { m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The version number for the extension defined in the association.</p>
     */
    inline int GetExtensionVersionNumber() const{ return m_extensionVersionNumber; }

    /**
     * <p>The version number for the extension defined in the association.</p>
     */
    inline void SetExtensionVersionNumber(int value) { m_extensionVersionNumber = value; }

    /**
     * <p>The version number for the extension defined in the association.</p>
     */
    inline CreateExtensionAssociationResult& WithExtensionVersionNumber(int value) { SetExtensionVersionNumber(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_extensionArn;

    Aws::String m_resourceArn;

    Aws::String m_arn;

    Aws::Map<Aws::String, Aws::String> m_parameters;

    int m_extensionVersionNumber;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws

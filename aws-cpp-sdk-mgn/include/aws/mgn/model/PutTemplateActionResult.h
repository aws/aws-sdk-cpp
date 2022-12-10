/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/model/SsmParameterStoreParameter.h>
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
namespace mgn
{
namespace Model
{
  class PutTemplateActionResult
  {
  public:
    AWS_MGN_API PutTemplateActionResult();
    AWS_MGN_API PutTemplateActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API PutTemplateActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Template post migration custom action ID.</p>
     */
    inline const Aws::String& GetActionID() const{ return m_actionID; }

    /**
     * <p>Template post migration custom action ID.</p>
     */
    inline void SetActionID(const Aws::String& value) { m_actionID = value; }

    /**
     * <p>Template post migration custom action ID.</p>
     */
    inline void SetActionID(Aws::String&& value) { m_actionID = std::move(value); }

    /**
     * <p>Template post migration custom action ID.</p>
     */
    inline void SetActionID(const char* value) { m_actionID.assign(value); }

    /**
     * <p>Template post migration custom action ID.</p>
     */
    inline PutTemplateActionResult& WithActionID(const Aws::String& value) { SetActionID(value); return *this;}

    /**
     * <p>Template post migration custom action ID.</p>
     */
    inline PutTemplateActionResult& WithActionID(Aws::String&& value) { SetActionID(std::move(value)); return *this;}

    /**
     * <p>Template post migration custom action ID.</p>
     */
    inline PutTemplateActionResult& WithActionID(const char* value) { SetActionID(value); return *this;}


    /**
     * <p>Template post migration custom action name.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>Template post migration custom action name.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionName = value; }

    /**
     * <p>Template post migration custom action name.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionName = std::move(value); }

    /**
     * <p>Template post migration custom action name.</p>
     */
    inline void SetActionName(const char* value) { m_actionName.assign(value); }

    /**
     * <p>Template post migration custom action name.</p>
     */
    inline PutTemplateActionResult& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>Template post migration custom action name.</p>
     */
    inline PutTemplateActionResult& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>Template post migration custom action name.</p>
     */
    inline PutTemplateActionResult& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p>Template post migration custom action active status.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>Template post migration custom action active status.</p>
     */
    inline void SetActive(bool value) { m_active = value; }

    /**
     * <p>Template post migration custom action active status.</p>
     */
    inline PutTemplateActionResult& WithActive(bool value) { SetActive(value); return *this;}


    /**
     * <p>Template post migration custom action document identifier.</p>
     */
    inline const Aws::String& GetDocumentIdentifier() const{ return m_documentIdentifier; }

    /**
     * <p>Template post migration custom action document identifier.</p>
     */
    inline void SetDocumentIdentifier(const Aws::String& value) { m_documentIdentifier = value; }

    /**
     * <p>Template post migration custom action document identifier.</p>
     */
    inline void SetDocumentIdentifier(Aws::String&& value) { m_documentIdentifier = std::move(value); }

    /**
     * <p>Template post migration custom action document identifier.</p>
     */
    inline void SetDocumentIdentifier(const char* value) { m_documentIdentifier.assign(value); }

    /**
     * <p>Template post migration custom action document identifier.</p>
     */
    inline PutTemplateActionResult& WithDocumentIdentifier(const Aws::String& value) { SetDocumentIdentifier(value); return *this;}

    /**
     * <p>Template post migration custom action document identifier.</p>
     */
    inline PutTemplateActionResult& WithDocumentIdentifier(Aws::String&& value) { SetDocumentIdentifier(std::move(value)); return *this;}

    /**
     * <p>Template post migration custom action document identifier.</p>
     */
    inline PutTemplateActionResult& WithDocumentIdentifier(const char* value) { SetDocumentIdentifier(value); return *this;}


    /**
     * <p>Template post migration custom action document version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>Template post migration custom action document version.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersion = value; }

    /**
     * <p>Template post migration custom action document version.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersion = std::move(value); }

    /**
     * <p>Template post migration custom action document version.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersion.assign(value); }

    /**
     * <p>Template post migration custom action document version.</p>
     */
    inline PutTemplateActionResult& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>Template post migration custom action document version.</p>
     */
    inline PutTemplateActionResult& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>Template post migration custom action document version.</p>
     */
    inline PutTemplateActionResult& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>Template post migration custom action must succeed for cutover.</p>
     */
    inline bool GetMustSucceedForCutover() const{ return m_mustSucceedForCutover; }

    /**
     * <p>Template post migration custom action must succeed for cutover.</p>
     */
    inline void SetMustSucceedForCutover(bool value) { m_mustSucceedForCutover = value; }

    /**
     * <p>Template post migration custom action must succeed for cutover.</p>
     */
    inline PutTemplateActionResult& WithMustSucceedForCutover(bool value) { SetMustSucceedForCutover(value); return *this;}


    /**
     * <p>Operating system eligible for this template post migration custom action.</p>
     */
    inline const Aws::String& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>Operating system eligible for this template post migration custom action.</p>
     */
    inline void SetOperatingSystem(const Aws::String& value) { m_operatingSystem = value; }

    /**
     * <p>Operating system eligible for this template post migration custom action.</p>
     */
    inline void SetOperatingSystem(Aws::String&& value) { m_operatingSystem = std::move(value); }

    /**
     * <p>Operating system eligible for this template post migration custom action.</p>
     */
    inline void SetOperatingSystem(const char* value) { m_operatingSystem.assign(value); }

    /**
     * <p>Operating system eligible for this template post migration custom action.</p>
     */
    inline PutTemplateActionResult& WithOperatingSystem(const Aws::String& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>Operating system eligible for this template post migration custom action.</p>
     */
    inline PutTemplateActionResult& WithOperatingSystem(Aws::String&& value) { SetOperatingSystem(std::move(value)); return *this;}

    /**
     * <p>Operating system eligible for this template post migration custom action.</p>
     */
    inline PutTemplateActionResult& WithOperatingSystem(const char* value) { SetOperatingSystem(value); return *this;}


    /**
     * <p>Template post migration custom action order.</p>
     */
    inline int GetOrder() const{ return m_order; }

    /**
     * <p>Template post migration custom action order.</p>
     */
    inline void SetOrder(int value) { m_order = value; }

    /**
     * <p>Template post migration custom action order.</p>
     */
    inline PutTemplateActionResult& WithOrder(int value) { SetOrder(value); return *this;}


    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& value) { m_parameters = value; }

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>&& value) { m_parameters = std::move(value); }

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline PutTemplateActionResult& WithParameters(const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& value) { SetParameters(value); return *this;}

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline PutTemplateActionResult& WithParameters(Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline PutTemplateActionResult& AddParameters(const Aws::String& key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parameters.emplace(key, value); return *this; }

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline PutTemplateActionResult& AddParameters(Aws::String&& key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline PutTemplateActionResult& AddParameters(const Aws::String& key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline PutTemplateActionResult& AddParameters(Aws::String&& key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline PutTemplateActionResult& AddParameters(const char* key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline PutTemplateActionResult& AddParameters(const char* key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parameters.emplace(key, value); return *this; }


    /**
     * <p>Template post migration custom action timeout in seconds.</p>
     */
    inline int GetTimeoutSeconds() const{ return m_timeoutSeconds; }

    /**
     * <p>Template post migration custom action timeout in seconds.</p>
     */
    inline void SetTimeoutSeconds(int value) { m_timeoutSeconds = value; }

    /**
     * <p>Template post migration custom action timeout in seconds.</p>
     */
    inline PutTemplateActionResult& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}

  private:

    Aws::String m_actionID;

    Aws::String m_actionName;

    bool m_active;

    Aws::String m_documentIdentifier;

    Aws::String m_documentVersion;

    bool m_mustSucceedForCutover;

    Aws::String m_operatingSystem;

    int m_order;

    Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>> m_parameters;

    int m_timeoutSeconds;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws

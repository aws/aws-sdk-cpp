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
  class PutSourceServerActionResult
  {
  public:
    AWS_MGN_API PutSourceServerActionResult();
    AWS_MGN_API PutSourceServerActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API PutSourceServerActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Source server post migration custom action ID.</p>
     */
    inline const Aws::String& GetActionID() const{ return m_actionID; }

    /**
     * <p>Source server post migration custom action ID.</p>
     */
    inline void SetActionID(const Aws::String& value) { m_actionID = value; }

    /**
     * <p>Source server post migration custom action ID.</p>
     */
    inline void SetActionID(Aws::String&& value) { m_actionID = std::move(value); }

    /**
     * <p>Source server post migration custom action ID.</p>
     */
    inline void SetActionID(const char* value) { m_actionID.assign(value); }

    /**
     * <p>Source server post migration custom action ID.</p>
     */
    inline PutSourceServerActionResult& WithActionID(const Aws::String& value) { SetActionID(value); return *this;}

    /**
     * <p>Source server post migration custom action ID.</p>
     */
    inline PutSourceServerActionResult& WithActionID(Aws::String&& value) { SetActionID(std::move(value)); return *this;}

    /**
     * <p>Source server post migration custom action ID.</p>
     */
    inline PutSourceServerActionResult& WithActionID(const char* value) { SetActionID(value); return *this;}


    /**
     * <p>Source server post migration custom action name.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>Source server post migration custom action name.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionName = value; }

    /**
     * <p>Source server post migration custom action name.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionName = std::move(value); }

    /**
     * <p>Source server post migration custom action name.</p>
     */
    inline void SetActionName(const char* value) { m_actionName.assign(value); }

    /**
     * <p>Source server post migration custom action name.</p>
     */
    inline PutSourceServerActionResult& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>Source server post migration custom action name.</p>
     */
    inline PutSourceServerActionResult& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>Source server post migration custom action name.</p>
     */
    inline PutSourceServerActionResult& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p>Source server post migration custom action active status.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>Source server post migration custom action active status.</p>
     */
    inline void SetActive(bool value) { m_active = value; }

    /**
     * <p>Source server post migration custom action active status.</p>
     */
    inline PutSourceServerActionResult& WithActive(bool value) { SetActive(value); return *this;}


    /**
     * <p>Source server post migration custom action document identifier.</p>
     */
    inline const Aws::String& GetDocumentIdentifier() const{ return m_documentIdentifier; }

    /**
     * <p>Source server post migration custom action document identifier.</p>
     */
    inline void SetDocumentIdentifier(const Aws::String& value) { m_documentIdentifier = value; }

    /**
     * <p>Source server post migration custom action document identifier.</p>
     */
    inline void SetDocumentIdentifier(Aws::String&& value) { m_documentIdentifier = std::move(value); }

    /**
     * <p>Source server post migration custom action document identifier.</p>
     */
    inline void SetDocumentIdentifier(const char* value) { m_documentIdentifier.assign(value); }

    /**
     * <p>Source server post migration custom action document identifier.</p>
     */
    inline PutSourceServerActionResult& WithDocumentIdentifier(const Aws::String& value) { SetDocumentIdentifier(value); return *this;}

    /**
     * <p>Source server post migration custom action document identifier.</p>
     */
    inline PutSourceServerActionResult& WithDocumentIdentifier(Aws::String&& value) { SetDocumentIdentifier(std::move(value)); return *this;}

    /**
     * <p>Source server post migration custom action document identifier.</p>
     */
    inline PutSourceServerActionResult& WithDocumentIdentifier(const char* value) { SetDocumentIdentifier(value); return *this;}


    /**
     * <p>Source server post migration custom action document version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>Source server post migration custom action document version.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersion = value; }

    /**
     * <p>Source server post migration custom action document version.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersion = std::move(value); }

    /**
     * <p>Source server post migration custom action document version.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersion.assign(value); }

    /**
     * <p>Source server post migration custom action document version.</p>
     */
    inline PutSourceServerActionResult& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>Source server post migration custom action document version.</p>
     */
    inline PutSourceServerActionResult& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>Source server post migration custom action document version.</p>
     */
    inline PutSourceServerActionResult& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>Source server post migration custom action must succeed for cutover.</p>
     */
    inline bool GetMustSucceedForCutover() const{ return m_mustSucceedForCutover; }

    /**
     * <p>Source server post migration custom action must succeed for cutover.</p>
     */
    inline void SetMustSucceedForCutover(bool value) { m_mustSucceedForCutover = value; }

    /**
     * <p>Source server post migration custom action must succeed for cutover.</p>
     */
    inline PutSourceServerActionResult& WithMustSucceedForCutover(bool value) { SetMustSucceedForCutover(value); return *this;}


    /**
     * <p>Source server post migration custom action order.</p>
     */
    inline int GetOrder() const{ return m_order; }

    /**
     * <p>Source server post migration custom action order.</p>
     */
    inline void SetOrder(int value) { m_order = value; }

    /**
     * <p>Source server post migration custom action order.</p>
     */
    inline PutSourceServerActionResult& WithOrder(int value) { SetOrder(value); return *this;}


    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& value) { m_parameters = value; }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>&& value) { m_parameters = std::move(value); }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline PutSourceServerActionResult& WithParameters(const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& value) { SetParameters(value); return *this;}

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline PutSourceServerActionResult& WithParameters(Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline PutSourceServerActionResult& AddParameters(const Aws::String& key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parameters.emplace(key, value); return *this; }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline PutSourceServerActionResult& AddParameters(Aws::String&& key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline PutSourceServerActionResult& AddParameters(const Aws::String& key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline PutSourceServerActionResult& AddParameters(Aws::String&& key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline PutSourceServerActionResult& AddParameters(const char* key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline PutSourceServerActionResult& AddParameters(const char* key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parameters.emplace(key, value); return *this; }


    /**
     * <p>Source server post migration custom action timeout in seconds.</p>
     */
    inline int GetTimeoutSeconds() const{ return m_timeoutSeconds; }

    /**
     * <p>Source server post migration custom action timeout in seconds.</p>
     */
    inline void SetTimeoutSeconds(int value) { m_timeoutSeconds = value; }

    /**
     * <p>Source server post migration custom action timeout in seconds.</p>
     */
    inline PutSourceServerActionResult& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}

  private:

    Aws::String m_actionID;

    Aws::String m_actionName;

    bool m_active;

    Aws::String m_documentIdentifier;

    Aws::String m_documentVersion;

    bool m_mustSucceedForCutover;

    int m_order;

    Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>> m_parameters;

    int m_timeoutSeconds;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SsmSap
{
namespace Model
{
  class UpdateApplicationSettingsResult
  {
  public:
    AWS_SSMSAP_API UpdateApplicationSettingsResult();
    AWS_SSMSAP_API UpdateApplicationSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API UpdateApplicationSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p/>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p/>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p/>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p/>
     */
    inline UpdateApplicationSettingsResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p/>
     */
    inline UpdateApplicationSettingsResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline UpdateApplicationSettingsResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<Aws::String>& GetOperationIds() const{ return m_operationIds; }

    /**
     * <p/>
     */
    inline void SetOperationIds(const Aws::Vector<Aws::String>& value) { m_operationIds = value; }

    /**
     * <p/>
     */
    inline void SetOperationIds(Aws::Vector<Aws::String>&& value) { m_operationIds = std::move(value); }

    /**
     * <p/>
     */
    inline UpdateApplicationSettingsResult& WithOperationIds(const Aws::Vector<Aws::String>& value) { SetOperationIds(value); return *this;}

    /**
     * <p/>
     */
    inline UpdateApplicationSettingsResult& WithOperationIds(Aws::Vector<Aws::String>&& value) { SetOperationIds(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline UpdateApplicationSettingsResult& AddOperationIds(const Aws::String& value) { m_operationIds.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline UpdateApplicationSettingsResult& AddOperationIds(Aws::String&& value) { m_operationIds.push_back(std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline UpdateApplicationSettingsResult& AddOperationIds(const char* value) { m_operationIds.push_back(value); return *this; }

  private:

    Aws::String m_message;

    Aws::Vector<Aws::String> m_operationIds;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws

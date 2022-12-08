/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/model/Application.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class RegisterApplicationResult
  {
  public:
    AWS_SSMSAP_API RegisterApplicationResult();
    AWS_SSMSAP_API RegisterApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API RegisterApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const Application& GetApplication() const{ return m_application; }

    /**
     * <p/>
     */
    inline void SetApplication(const Application& value) { m_application = value; }

    /**
     * <p/>
     */
    inline void SetApplication(Application&& value) { m_application = std::move(value); }

    /**
     * <p/>
     */
    inline RegisterApplicationResult& WithApplication(const Application& value) { SetApplication(value); return *this;}

    /**
     * <p/>
     */
    inline RegisterApplicationResult& WithApplication(Application&& value) { SetApplication(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p/>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationId = value; }

    /**
     * <p/>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetOperationId(const char* value) { m_operationId.assign(value); }

    /**
     * <p/>
     */
    inline RegisterApplicationResult& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p/>
     */
    inline RegisterApplicationResult& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline RegisterApplicationResult& WithOperationId(const char* value) { SetOperationId(value); return *this;}

  private:

    Application m_application;

    Aws::String m_operationId;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws

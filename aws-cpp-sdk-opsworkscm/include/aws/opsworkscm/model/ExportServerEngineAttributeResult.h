/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/model/EngineAttribute.h>
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
namespace OpsWorksCM
{
namespace Model
{
  class AWS_OPSWORKSCM_API ExportServerEngineAttributeResult
  {
  public:
    ExportServerEngineAttributeResult();
    ExportServerEngineAttributeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ExportServerEngineAttributeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested engine attribute pair with attribute name and value.</p>
     */
    inline const EngineAttribute& GetEngineAttribute() const{ return m_engineAttribute; }

    /**
     * <p>The requested engine attribute pair with attribute name and value.</p>
     */
    inline void SetEngineAttribute(const EngineAttribute& value) { m_engineAttribute = value; }

    /**
     * <p>The requested engine attribute pair with attribute name and value.</p>
     */
    inline void SetEngineAttribute(EngineAttribute&& value) { m_engineAttribute = std::move(value); }

    /**
     * <p>The requested engine attribute pair with attribute name and value.</p>
     */
    inline ExportServerEngineAttributeResult& WithEngineAttribute(const EngineAttribute& value) { SetEngineAttribute(value); return *this;}

    /**
     * <p>The requested engine attribute pair with attribute name and value.</p>
     */
    inline ExportServerEngineAttributeResult& WithEngineAttribute(EngineAttribute&& value) { SetEngineAttribute(std::move(value)); return *this;}


    /**
     * <p>The server name used in the request.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The server name used in the request.</p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverName = value; }

    /**
     * <p>The server name used in the request.</p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverName = std::move(value); }

    /**
     * <p>The server name used in the request.</p>
     */
    inline void SetServerName(const char* value) { m_serverName.assign(value); }

    /**
     * <p>The server name used in the request.</p>
     */
    inline ExportServerEngineAttributeResult& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The server name used in the request.</p>
     */
    inline ExportServerEngineAttributeResult& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The server name used in the request.</p>
     */
    inline ExportServerEngineAttributeResult& WithServerName(const char* value) { SetServerName(value); return *this;}

  private:

    EngineAttribute m_engineAttribute;

    Aws::String m_serverName;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws

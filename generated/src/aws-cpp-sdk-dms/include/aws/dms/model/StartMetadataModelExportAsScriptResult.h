/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  class StartMetadataModelExportAsScriptResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API StartMetadataModelExportAsScriptResult();
    AWS_DATABASEMIGRATIONSERVICE_API StartMetadataModelExportAsScriptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API StartMetadataModelExportAsScriptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for the export operation.</p>
     */
    inline const Aws::String& GetRequestIdentifier() const{ return m_requestIdentifier; }

    /**
     * <p>The identifier for the export operation.</p>
     */
    inline void SetRequestIdentifier(const Aws::String& value) { m_requestIdentifier = value; }

    /**
     * <p>The identifier for the export operation.</p>
     */
    inline void SetRequestIdentifier(Aws::String&& value) { m_requestIdentifier = std::move(value); }

    /**
     * <p>The identifier for the export operation.</p>
     */
    inline void SetRequestIdentifier(const char* value) { m_requestIdentifier.assign(value); }

    /**
     * <p>The identifier for the export operation.</p>
     */
    inline StartMetadataModelExportAsScriptResult& WithRequestIdentifier(const Aws::String& value) { SetRequestIdentifier(value); return *this;}

    /**
     * <p>The identifier for the export operation.</p>
     */
    inline StartMetadataModelExportAsScriptResult& WithRequestIdentifier(Aws::String&& value) { SetRequestIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the export operation.</p>
     */
    inline StartMetadataModelExportAsScriptResult& WithRequestIdentifier(const char* value) { SetRequestIdentifier(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartMetadataModelExportAsScriptResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartMetadataModelExportAsScriptResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartMetadataModelExportAsScriptResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_requestIdentifier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

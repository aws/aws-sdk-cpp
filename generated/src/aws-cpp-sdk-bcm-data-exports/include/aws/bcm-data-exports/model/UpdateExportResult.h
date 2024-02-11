/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
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
namespace BCMDataExports
{
namespace Model
{
  class UpdateExportResult
  {
  public:
    AWS_BCMDATAEXPORTS_API UpdateExportResult();
    AWS_BCMDATAEXPORTS_API UpdateExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMDATAEXPORTS_API UpdateExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline const Aws::String& GetExportArn() const{ return m_exportArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline void SetExportArn(const Aws::String& value) { m_exportArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline void SetExportArn(Aws::String&& value) { m_exportArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline void SetExportArn(const char* value) { m_exportArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline UpdateExportResult& WithExportArn(const Aws::String& value) { SetExportArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline UpdateExportResult& WithExportArn(Aws::String&& value) { SetExportArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline UpdateExportResult& WithExportArn(const char* value) { SetExportArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateExportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateExportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateExportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_exportArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws

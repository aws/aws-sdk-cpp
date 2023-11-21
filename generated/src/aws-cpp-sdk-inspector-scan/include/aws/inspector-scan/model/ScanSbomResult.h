/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector-scan/Inspectorscan_EXPORTS.h>
#include <aws/core/utils/Document.h>
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
namespace inspectorscan
{
namespace Model
{
  class ScanSbomResult
  {
  public:
    AWS_INSPECTORSCAN_API ScanSbomResult();
    AWS_INSPECTORSCAN_API ScanSbomResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTORSCAN_API ScanSbomResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The vulnerability report for the scanned SBOM.</p>
     */
    inline Aws::Utils::DocumentView GetSbom() const{ return m_sbom; }

    /**
     * <p>The vulnerability report for the scanned SBOM.</p>
     */
    inline void SetSbom(const Aws::Utils::Document& value) { m_sbom = value; }

    /**
     * <p>The vulnerability report for the scanned SBOM.</p>
     */
    inline void SetSbom(Aws::Utils::Document&& value) { m_sbom = std::move(value); }

    /**
     * <p>The vulnerability report for the scanned SBOM.</p>
     */
    inline ScanSbomResult& WithSbom(const Aws::Utils::Document& value) { SetSbom(value); return *this;}

    /**
     * <p>The vulnerability report for the scanned SBOM.</p>
     */
    inline ScanSbomResult& WithSbom(Aws::Utils::Document&& value) { SetSbom(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ScanSbomResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ScanSbomResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ScanSbomResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::Document m_sbom;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace inspectorscan
} // namespace Aws

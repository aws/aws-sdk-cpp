/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/model/ResourceId.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-security/model/ScanState.h>
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
namespace CodeGuruSecurity
{
namespace Model
{
  class CreateScanResult
  {
  public:
    AWS_CODEGURUSECURITY_API CreateScanResult();
    AWS_CODEGURUSECURITY_API CreateScanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUSECURITY_API CreateScanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for the resource object that contains resources that were
     * scanned.</p>
     */
    inline const ResourceId& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier for the resource object that contains resources that were
     * scanned.</p>
     */
    inline void SetResourceId(const ResourceId& value) { m_resourceId = value; }

    /**
     * <p>The identifier for the resource object that contains resources that were
     * scanned.</p>
     */
    inline void SetResourceId(ResourceId&& value) { m_resourceId = std::move(value); }

    /**
     * <p>The identifier for the resource object that contains resources that were
     * scanned.</p>
     */
    inline CreateScanResult& WithResourceId(const ResourceId& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier for the resource object that contains resources that were
     * scanned.</p>
     */
    inline CreateScanResult& WithResourceId(ResourceId&& value) { SetResourceId(std::move(value)); return *this;}


    /**
     * <p>UUID that identifies the individual scan run.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>UUID that identifies the individual scan run.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runId = value; }

    /**
     * <p>UUID that identifies the individual scan run.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runId = std::move(value); }

    /**
     * <p>UUID that identifies the individual scan run.</p>
     */
    inline void SetRunId(const char* value) { m_runId.assign(value); }

    /**
     * <p>UUID that identifies the individual scan run.</p>
     */
    inline CreateScanResult& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>UUID that identifies the individual scan run.</p>
     */
    inline CreateScanResult& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>UUID that identifies the individual scan run.</p>
     */
    inline CreateScanResult& WithRunId(const char* value) { SetRunId(value); return *this;}


    /**
     * <p>The name of the scan.</p>
     */
    inline const Aws::String& GetScanName() const{ return m_scanName; }

    /**
     * <p>The name of the scan.</p>
     */
    inline void SetScanName(const Aws::String& value) { m_scanName = value; }

    /**
     * <p>The name of the scan.</p>
     */
    inline void SetScanName(Aws::String&& value) { m_scanName = std::move(value); }

    /**
     * <p>The name of the scan.</p>
     */
    inline void SetScanName(const char* value) { m_scanName.assign(value); }

    /**
     * <p>The name of the scan.</p>
     */
    inline CreateScanResult& WithScanName(const Aws::String& value) { SetScanName(value); return *this;}

    /**
     * <p>The name of the scan.</p>
     */
    inline CreateScanResult& WithScanName(Aws::String&& value) { SetScanName(std::move(value)); return *this;}

    /**
     * <p>The name of the scan.</p>
     */
    inline CreateScanResult& WithScanName(const char* value) { SetScanName(value); return *this;}


    /**
     * <p>The ARN for the scan name.</p>
     */
    inline const Aws::String& GetScanNameArn() const{ return m_scanNameArn; }

    /**
     * <p>The ARN for the scan name.</p>
     */
    inline void SetScanNameArn(const Aws::String& value) { m_scanNameArn = value; }

    /**
     * <p>The ARN for the scan name.</p>
     */
    inline void SetScanNameArn(Aws::String&& value) { m_scanNameArn = std::move(value); }

    /**
     * <p>The ARN for the scan name.</p>
     */
    inline void SetScanNameArn(const char* value) { m_scanNameArn.assign(value); }

    /**
     * <p>The ARN for the scan name.</p>
     */
    inline CreateScanResult& WithScanNameArn(const Aws::String& value) { SetScanNameArn(value); return *this;}

    /**
     * <p>The ARN for the scan name.</p>
     */
    inline CreateScanResult& WithScanNameArn(Aws::String&& value) { SetScanNameArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the scan name.</p>
     */
    inline CreateScanResult& WithScanNameArn(const char* value) { SetScanNameArn(value); return *this;}


    /**
     * <p>The current state of the scan. Returns either <code>InProgress</code>,
     * <code>Successful</code>, or <code>Failed</code>.</p>
     */
    inline const ScanState& GetScanState() const{ return m_scanState; }

    /**
     * <p>The current state of the scan. Returns either <code>InProgress</code>,
     * <code>Successful</code>, or <code>Failed</code>.</p>
     */
    inline void SetScanState(const ScanState& value) { m_scanState = value; }

    /**
     * <p>The current state of the scan. Returns either <code>InProgress</code>,
     * <code>Successful</code>, or <code>Failed</code>.</p>
     */
    inline void SetScanState(ScanState&& value) { m_scanState = std::move(value); }

    /**
     * <p>The current state of the scan. Returns either <code>InProgress</code>,
     * <code>Successful</code>, or <code>Failed</code>.</p>
     */
    inline CreateScanResult& WithScanState(const ScanState& value) { SetScanState(value); return *this;}

    /**
     * <p>The current state of the scan. Returns either <code>InProgress</code>,
     * <code>Successful</code>, or <code>Failed</code>.</p>
     */
    inline CreateScanResult& WithScanState(ScanState&& value) { SetScanState(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateScanResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateScanResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateScanResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ResourceId m_resourceId;

    Aws::String m_runId;

    Aws::String m_scanName;

    Aws::String m_scanNameArn;

    ScanState m_scanState;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws

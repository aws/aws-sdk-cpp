﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{
  class AcceptPredictionsResult
  {
  public:
    AWS_DATAZONE_API AcceptPredictionsResult();
    AWS_DATAZONE_API AcceptPredictionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API AcceptPredictionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the asset.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }
    inline void SetAssetId(const Aws::String& value) { m_assetId = value; }
    inline void SetAssetId(Aws::String&& value) { m_assetId = std::move(value); }
    inline void SetAssetId(const char* value) { m_assetId.assign(value); }
    inline AcceptPredictionsResult& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}
    inline AcceptPredictionsResult& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}
    inline AcceptPredictionsResult& WithAssetId(const char* value) { SetAssetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline AcceptPredictionsResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline AcceptPredictionsResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline AcceptPredictionsResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision that is to be made to the asset.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }
    inline void SetRevision(const Aws::String& value) { m_revision = value; }
    inline void SetRevision(Aws::String&& value) { m_revision = std::move(value); }
    inline void SetRevision(const char* value) { m_revision.assign(value); }
    inline AcceptPredictionsResult& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}
    inline AcceptPredictionsResult& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}
    inline AcceptPredictionsResult& WithRevision(const char* value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AcceptPredictionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AcceptPredictionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AcceptPredictionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_assetId;

    Aws::String m_domainId;

    Aws::String m_revision;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws

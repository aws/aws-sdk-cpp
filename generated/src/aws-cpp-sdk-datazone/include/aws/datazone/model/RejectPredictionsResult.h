/**
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
  class RejectPredictionsResult
  {
  public:
    AWS_DATAZONE_API RejectPredictionsResult();
    AWS_DATAZONE_API RejectPredictionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API RejectPredictionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the asset.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }
    inline void SetAssetId(const Aws::String& value) { m_assetId = value; }
    inline void SetAssetId(Aws::String&& value) { m_assetId = std::move(value); }
    inline void SetAssetId(const char* value) { m_assetId.assign(value); }
    inline RejectPredictionsResult& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}
    inline RejectPredictionsResult& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}
    inline RejectPredictionsResult& WithAssetId(const char* value) { SetAssetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision that is to be made to the asset.</p>
     */
    inline const Aws::String& GetAssetRevision() const{ return m_assetRevision; }
    inline void SetAssetRevision(const Aws::String& value) { m_assetRevision = value; }
    inline void SetAssetRevision(Aws::String&& value) { m_assetRevision = std::move(value); }
    inline void SetAssetRevision(const char* value) { m_assetRevision.assign(value); }
    inline RejectPredictionsResult& WithAssetRevision(const Aws::String& value) { SetAssetRevision(value); return *this;}
    inline RejectPredictionsResult& WithAssetRevision(Aws::String&& value) { SetAssetRevision(std::move(value)); return *this;}
    inline RejectPredictionsResult& WithAssetRevision(const char* value) { SetAssetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline RejectPredictionsResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline RejectPredictionsResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline RejectPredictionsResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RejectPredictionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RejectPredictionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RejectPredictionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_assetId;

    Aws::String m_assetRevision;

    Aws::String m_domainId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws

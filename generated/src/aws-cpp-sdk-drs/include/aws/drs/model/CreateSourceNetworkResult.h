/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
namespace drs
{
namespace Model
{
  class CreateSourceNetworkResult
  {
  public:
    AWS_DRS_API CreateSourceNetworkResult();
    AWS_DRS_API CreateSourceNetworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API CreateSourceNetworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>ID of the created Source Network.</p>
     */
    inline const Aws::String& GetSourceNetworkID() const{ return m_sourceNetworkID; }

    /**
     * <p>ID of the created Source Network.</p>
     */
    inline void SetSourceNetworkID(const Aws::String& value) { m_sourceNetworkID = value; }

    /**
     * <p>ID of the created Source Network.</p>
     */
    inline void SetSourceNetworkID(Aws::String&& value) { m_sourceNetworkID = std::move(value); }

    /**
     * <p>ID of the created Source Network.</p>
     */
    inline void SetSourceNetworkID(const char* value) { m_sourceNetworkID.assign(value); }

    /**
     * <p>ID of the created Source Network.</p>
     */
    inline CreateSourceNetworkResult& WithSourceNetworkID(const Aws::String& value) { SetSourceNetworkID(value); return *this;}

    /**
     * <p>ID of the created Source Network.</p>
     */
    inline CreateSourceNetworkResult& WithSourceNetworkID(Aws::String&& value) { SetSourceNetworkID(std::move(value)); return *this;}

    /**
     * <p>ID of the created Source Network.</p>
     */
    inline CreateSourceNetworkResult& WithSourceNetworkID(const char* value) { SetSourceNetworkID(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSourceNetworkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSourceNetworkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSourceNetworkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_sourceNetworkID;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace drs
} // namespace Aws

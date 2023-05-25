/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/AllowDenyList.h>
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
namespace FraudDetector
{
namespace Model
{
  class GetListsMetadataResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetListsMetadataResult();
    AWS_FRAUDDETECTOR_API GetListsMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetListsMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The metadata of the specified list or all lists under the account. </p>
     */
    inline const Aws::Vector<AllowDenyList>& GetLists() const{ return m_lists; }

    /**
     * <p> The metadata of the specified list or all lists under the account. </p>
     */
    inline void SetLists(const Aws::Vector<AllowDenyList>& value) { m_lists = value; }

    /**
     * <p> The metadata of the specified list or all lists under the account. </p>
     */
    inline void SetLists(Aws::Vector<AllowDenyList>&& value) { m_lists = std::move(value); }

    /**
     * <p> The metadata of the specified list or all lists under the account. </p>
     */
    inline GetListsMetadataResult& WithLists(const Aws::Vector<AllowDenyList>& value) { SetLists(value); return *this;}

    /**
     * <p> The metadata of the specified list or all lists under the account. </p>
     */
    inline GetListsMetadataResult& WithLists(Aws::Vector<AllowDenyList>&& value) { SetLists(std::move(value)); return *this;}

    /**
     * <p> The metadata of the specified list or all lists under the account. </p>
     */
    inline GetListsMetadataResult& AddLists(const AllowDenyList& value) { m_lists.push_back(value); return *this; }

    /**
     * <p> The metadata of the specified list or all lists under the account. </p>
     */
    inline GetListsMetadataResult& AddLists(AllowDenyList&& value) { m_lists.push_back(std::move(value)); return *this; }


    /**
     * <p> The next page token. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The next page token. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The next page token. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The next page token. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The next page token. </p>
     */
    inline GetListsMetadataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The next page token. </p>
     */
    inline GetListsMetadataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The next page token. </p>
     */
    inline GetListsMetadataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetListsMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetListsMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetListsMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AllowDenyList> m_lists;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws

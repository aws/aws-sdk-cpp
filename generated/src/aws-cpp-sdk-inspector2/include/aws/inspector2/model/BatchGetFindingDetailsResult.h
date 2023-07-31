/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/FindingDetailsError.h>
#include <aws/inspector2/model/FindingDetail.h>
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
namespace Inspector2
{
namespace Model
{
  class BatchGetFindingDetailsResult
  {
  public:
    AWS_INSPECTOR2_API BatchGetFindingDetailsResult();
    AWS_INSPECTOR2_API BatchGetFindingDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API BatchGetFindingDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Error information for findings that details could not be returned for.</p>
     */
    inline const Aws::Vector<FindingDetailsError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Error information for findings that details could not be returned for.</p>
     */
    inline void SetErrors(const Aws::Vector<FindingDetailsError>& value) { m_errors = value; }

    /**
     * <p>Error information for findings that details could not be returned for.</p>
     */
    inline void SetErrors(Aws::Vector<FindingDetailsError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Error information for findings that details could not be returned for.</p>
     */
    inline BatchGetFindingDetailsResult& WithErrors(const Aws::Vector<FindingDetailsError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Error information for findings that details could not be returned for.</p>
     */
    inline BatchGetFindingDetailsResult& WithErrors(Aws::Vector<FindingDetailsError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Error information for findings that details could not be returned for.</p>
     */
    inline BatchGetFindingDetailsResult& AddErrors(const FindingDetailsError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Error information for findings that details could not be returned for.</p>
     */
    inline BatchGetFindingDetailsResult& AddErrors(FindingDetailsError&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>A finding's vulnerability details.</p>
     */
    inline const Aws::Vector<FindingDetail>& GetFindingDetails() const{ return m_findingDetails; }

    /**
     * <p>A finding's vulnerability details.</p>
     */
    inline void SetFindingDetails(const Aws::Vector<FindingDetail>& value) { m_findingDetails = value; }

    /**
     * <p>A finding's vulnerability details.</p>
     */
    inline void SetFindingDetails(Aws::Vector<FindingDetail>&& value) { m_findingDetails = std::move(value); }

    /**
     * <p>A finding's vulnerability details.</p>
     */
    inline BatchGetFindingDetailsResult& WithFindingDetails(const Aws::Vector<FindingDetail>& value) { SetFindingDetails(value); return *this;}

    /**
     * <p>A finding's vulnerability details.</p>
     */
    inline BatchGetFindingDetailsResult& WithFindingDetails(Aws::Vector<FindingDetail>&& value) { SetFindingDetails(std::move(value)); return *this;}

    /**
     * <p>A finding's vulnerability details.</p>
     */
    inline BatchGetFindingDetailsResult& AddFindingDetails(const FindingDetail& value) { m_findingDetails.push_back(value); return *this; }

    /**
     * <p>A finding's vulnerability details.</p>
     */
    inline BatchGetFindingDetailsResult& AddFindingDetails(FindingDetail&& value) { m_findingDetails.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetFindingDetailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetFindingDetailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetFindingDetailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<FindingDetailsError> m_errors;

    Aws::Vector<FindingDetail> m_findingDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace GuardDuty
{
namespace Model
{
  class ListDetectorsResult
  {
  public:
    AWS_GUARDDUTY_API ListDetectorsResult();
    AWS_GUARDDUTY_API ListDetectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API ListDetectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of detector IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDetectorIds() const{ return m_detectorIds; }

    /**
     * <p>A list of detector IDs.</p>
     */
    inline void SetDetectorIds(const Aws::Vector<Aws::String>& value) { m_detectorIds = value; }

    /**
     * <p>A list of detector IDs.</p>
     */
    inline void SetDetectorIds(Aws::Vector<Aws::String>&& value) { m_detectorIds = std::move(value); }

    /**
     * <p>A list of detector IDs.</p>
     */
    inline ListDetectorsResult& WithDetectorIds(const Aws::Vector<Aws::String>& value) { SetDetectorIds(value); return *this;}

    /**
     * <p>A list of detector IDs.</p>
     */
    inline ListDetectorsResult& WithDetectorIds(Aws::Vector<Aws::String>&& value) { SetDetectorIds(std::move(value)); return *this;}

    /**
     * <p>A list of detector IDs.</p>
     */
    inline ListDetectorsResult& AddDetectorIds(const Aws::String& value) { m_detectorIds.push_back(value); return *this; }

    /**
     * <p>A list of detector IDs.</p>
     */
    inline ListDetectorsResult& AddDetectorIds(Aws::String&& value) { m_detectorIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of detector IDs.</p>
     */
    inline ListDetectorsResult& AddDetectorIds(const char* value) { m_detectorIds.push_back(value); return *this; }


    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListDetectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListDetectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListDetectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_detectorIds;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

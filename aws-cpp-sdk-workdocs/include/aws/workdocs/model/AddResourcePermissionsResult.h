/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workdocs/model/ShareResult.h>
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
namespace WorkDocs
{
namespace Model
{
  class AddResourcePermissionsResult
  {
  public:
    AWS_WORKDOCS_API AddResourcePermissionsResult();
    AWS_WORKDOCS_API AddResourcePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API AddResourcePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The share results.</p>
     */
    inline const Aws::Vector<ShareResult>& GetShareResults() const{ return m_shareResults; }

    /**
     * <p>The share results.</p>
     */
    inline void SetShareResults(const Aws::Vector<ShareResult>& value) { m_shareResults = value; }

    /**
     * <p>The share results.</p>
     */
    inline void SetShareResults(Aws::Vector<ShareResult>&& value) { m_shareResults = std::move(value); }

    /**
     * <p>The share results.</p>
     */
    inline AddResourcePermissionsResult& WithShareResults(const Aws::Vector<ShareResult>& value) { SetShareResults(value); return *this;}

    /**
     * <p>The share results.</p>
     */
    inline AddResourcePermissionsResult& WithShareResults(Aws::Vector<ShareResult>&& value) { SetShareResults(std::move(value)); return *this;}

    /**
     * <p>The share results.</p>
     */
    inline AddResourcePermissionsResult& AddShareResults(const ShareResult& value) { m_shareResults.push_back(value); return *this; }

    /**
     * <p>The share results.</p>
     */
    inline AddResourcePermissionsResult& AddShareResults(ShareResult&& value) { m_shareResults.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ShareResult> m_shareResults;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws

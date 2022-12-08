/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie/Macie_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie/model/S3ResourceClassification.h>
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
namespace Macie
{
namespace Model
{
  class ListS3ResourcesResult
  {
  public:
    AWS_MACIE_API ListS3ResourcesResult();
    AWS_MACIE_API ListS3ResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE_API ListS3ResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>(Discontinued) A list of the associated S3 resources returned by the
     * action.</p>
     */
    inline const Aws::Vector<S3ResourceClassification>& GetS3Resources() const{ return m_s3Resources; }

    /**
     * <p>(Discontinued) A list of the associated S3 resources returned by the
     * action.</p>
     */
    inline void SetS3Resources(const Aws::Vector<S3ResourceClassification>& value) { m_s3Resources = value; }

    /**
     * <p>(Discontinued) A list of the associated S3 resources returned by the
     * action.</p>
     */
    inline void SetS3Resources(Aws::Vector<S3ResourceClassification>&& value) { m_s3Resources = std::move(value); }

    /**
     * <p>(Discontinued) A list of the associated S3 resources returned by the
     * action.</p>
     */
    inline ListS3ResourcesResult& WithS3Resources(const Aws::Vector<S3ResourceClassification>& value) { SetS3Resources(value); return *this;}

    /**
     * <p>(Discontinued) A list of the associated S3 resources returned by the
     * action.</p>
     */
    inline ListS3ResourcesResult& WithS3Resources(Aws::Vector<S3ResourceClassification>&& value) { SetS3Resources(std::move(value)); return *this;}

    /**
     * <p>(Discontinued) A list of the associated S3 resources returned by the
     * action.</p>
     */
    inline ListS3ResourcesResult& AddS3Resources(const S3ResourceClassification& value) { m_s3Resources.push_back(value); return *this; }

    /**
     * <p>(Discontinued) A list of the associated S3 resources returned by the
     * action.</p>
     */
    inline ListS3ResourcesResult& AddS3Resources(S3ResourceClassification&& value) { m_s3Resources.push_back(std::move(value)); return *this; }


    /**
     * <p>(Discontinued) When a response is generated, if there is more data to be
     * listed, this parameter is present in the response and contains the value to use
     * for the <code>nextToken</code> parameter in a subsequent pagination request. If
     * there is no more data to be listed, this parameter is set to null. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>(Discontinued) When a response is generated, if there is more data to be
     * listed, this parameter is present in the response and contains the value to use
     * for the <code>nextToken</code> parameter in a subsequent pagination request. If
     * there is no more data to be listed, this parameter is set to null. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>(Discontinued) When a response is generated, if there is more data to be
     * listed, this parameter is present in the response and contains the value to use
     * for the <code>nextToken</code> parameter in a subsequent pagination request. If
     * there is no more data to be listed, this parameter is set to null. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>(Discontinued) When a response is generated, if there is more data to be
     * listed, this parameter is present in the response and contains the value to use
     * for the <code>nextToken</code> parameter in a subsequent pagination request. If
     * there is no more data to be listed, this parameter is set to null. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>(Discontinued) When a response is generated, if there is more data to be
     * listed, this parameter is present in the response and contains the value to use
     * for the <code>nextToken</code> parameter in a subsequent pagination request. If
     * there is no more data to be listed, this parameter is set to null. </p>
     */
    inline ListS3ResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>(Discontinued) When a response is generated, if there is more data to be
     * listed, this parameter is present in the response and contains the value to use
     * for the <code>nextToken</code> parameter in a subsequent pagination request. If
     * there is no more data to be listed, this parameter is set to null. </p>
     */
    inline ListS3ResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>(Discontinued) When a response is generated, if there is more data to be
     * listed, this parameter is present in the response and contains the value to use
     * for the <code>nextToken</code> parameter in a subsequent pagination request. If
     * there is no more data to be listed, this parameter is set to null. </p>
     */
    inline ListS3ResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<S3ResourceClassification> m_s3Resources;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws

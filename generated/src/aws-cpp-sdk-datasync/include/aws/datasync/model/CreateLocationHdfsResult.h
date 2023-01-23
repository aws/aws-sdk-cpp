/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
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
namespace DataSync
{
namespace Model
{
  class CreateLocationHdfsResult
  {
  public:
    AWS_DATASYNC_API CreateLocationHdfsResult();
    AWS_DATASYNC_API CreateLocationHdfsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API CreateLocationHdfsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the source HDFS cluster location that's created. </p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The ARN of the source HDFS cluster location that's created. </p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }

    /**
     * <p>The ARN of the source HDFS cluster location that's created. </p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }

    /**
     * <p>The ARN of the source HDFS cluster location that's created. </p>
     */
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }

    /**
     * <p>The ARN of the source HDFS cluster location that's created. </p>
     */
    inline CreateLocationHdfsResult& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The ARN of the source HDFS cluster location that's created. </p>
     */
    inline CreateLocationHdfsResult& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the source HDFS cluster location that's created. </p>
     */
    inline CreateLocationHdfsResult& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}

  private:

    Aws::String m_locationArn;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws

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
  /**
   * <p>CreateLocationS3Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationS3Response">AWS
   * API Reference</a></p>
   */
  class CreateLocationS3Result
  {
  public:
    AWS_DATASYNC_API CreateLocationS3Result();
    AWS_DATASYNC_API CreateLocationS3Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API CreateLocationS3Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the source Amazon S3 bucket location that
     * is created.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source Amazon S3 bucket location that
     * is created.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source Amazon S3 bucket location that
     * is created.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source Amazon S3 bucket location that
     * is created.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source Amazon S3 bucket location that
     * is created.</p>
     */
    inline CreateLocationS3Result& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source Amazon S3 bucket location that
     * is created.</p>
     */
    inline CreateLocationS3Result& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source Amazon S3 bucket location that
     * is created.</p>
     */
    inline CreateLocationS3Result& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}

  private:

    Aws::String m_locationArn;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws

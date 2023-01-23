/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/model/AwsCredentials.h>
#include <aws/finspace-data/model/S3Location.h>
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
namespace FinSpaceData
{
namespace Model
{
  class GetExternalDataViewAccessDetailsResult
  {
  public:
    AWS_FINSPACEDATA_API GetExternalDataViewAccessDetailsResult();
    AWS_FINSPACEDATA_API GetExternalDataViewAccessDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACEDATA_API GetExternalDataViewAccessDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The credentials required to access the external Dataview from the S3
     * location.</p>
     */
    inline const AwsCredentials& GetCredentials() const{ return m_credentials; }

    /**
     * <p>The credentials required to access the external Dataview from the S3
     * location.</p>
     */
    inline void SetCredentials(const AwsCredentials& value) { m_credentials = value; }

    /**
     * <p>The credentials required to access the external Dataview from the S3
     * location.</p>
     */
    inline void SetCredentials(AwsCredentials&& value) { m_credentials = std::move(value); }

    /**
     * <p>The credentials required to access the external Dataview from the S3
     * location.</p>
     */
    inline GetExternalDataViewAccessDetailsResult& WithCredentials(const AwsCredentials& value) { SetCredentials(value); return *this;}

    /**
     * <p>The credentials required to access the external Dataview from the S3
     * location.</p>
     */
    inline GetExternalDataViewAccessDetailsResult& WithCredentials(AwsCredentials&& value) { SetCredentials(std::move(value)); return *this;}


    /**
     * <p>The location where the external Dataview is stored.</p>
     */
    inline const S3Location& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>The location where the external Dataview is stored.</p>
     */
    inline void SetS3Location(const S3Location& value) { m_s3Location = value; }

    /**
     * <p>The location where the external Dataview is stored.</p>
     */
    inline void SetS3Location(S3Location&& value) { m_s3Location = std::move(value); }

    /**
     * <p>The location where the external Dataview is stored.</p>
     */
    inline GetExternalDataViewAccessDetailsResult& WithS3Location(const S3Location& value) { SetS3Location(value); return *this;}

    /**
     * <p>The location where the external Dataview is stored.</p>
     */
    inline GetExternalDataViewAccessDetailsResult& WithS3Location(S3Location&& value) { SetS3Location(std::move(value)); return *this;}

  private:

    AwsCredentials m_credentials;

    S3Location m_s3Location;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws

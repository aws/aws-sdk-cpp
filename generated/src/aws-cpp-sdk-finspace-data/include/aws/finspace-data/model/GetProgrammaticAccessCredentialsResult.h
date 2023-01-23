/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/model/Credentials.h>
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
  /**
   * Response for GetProgrammaticAccessCredentials operation<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetProgrammaticAccessCredentialsResponse">AWS
   * API Reference</a></p>
   */
  class GetProgrammaticAccessCredentialsResult
  {
  public:
    AWS_FINSPACEDATA_API GetProgrammaticAccessCredentialsResult();
    AWS_FINSPACEDATA_API GetProgrammaticAccessCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACEDATA_API GetProgrammaticAccessCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the programmatic credentials.</p>
     */
    inline const Credentials& GetCredentials() const{ return m_credentials; }

    /**
     * <p>Returns the programmatic credentials.</p>
     */
    inline void SetCredentials(const Credentials& value) { m_credentials = value; }

    /**
     * <p>Returns the programmatic credentials.</p>
     */
    inline void SetCredentials(Credentials&& value) { m_credentials = std::move(value); }

    /**
     * <p>Returns the programmatic credentials.</p>
     */
    inline GetProgrammaticAccessCredentialsResult& WithCredentials(const Credentials& value) { SetCredentials(value); return *this;}

    /**
     * <p>Returns the programmatic credentials.</p>
     */
    inline GetProgrammaticAccessCredentialsResult& WithCredentials(Credentials&& value) { SetCredentials(std::move(value)); return *this;}


    /**
     * <p>Returns the duration in which the credentials will remain valid.</p>
     */
    inline long long GetDurationInMinutes() const{ return m_durationInMinutes; }

    /**
     * <p>Returns the duration in which the credentials will remain valid.</p>
     */
    inline void SetDurationInMinutes(long long value) { m_durationInMinutes = value; }

    /**
     * <p>Returns the duration in which the credentials will remain valid.</p>
     */
    inline GetProgrammaticAccessCredentialsResult& WithDurationInMinutes(long long value) { SetDurationInMinutes(value); return *this;}

  private:

    Credentials m_credentials;

    long long m_durationInMinutes;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
